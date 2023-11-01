// new mario
void print_curp(void);
void curp_string(Tprogra data, char curp[]);
void acronm(char acro[], char nState[]);
char let_name(char name[]);
char con_int(char name[]);
char homonimia(int yr);
char ln_vocal(char ape[]);
char ln_cons(char ape[]);
void avoid(char curp[]);
char vocals(char data[]);
void consonants(char data[]);
char cons_2(char data[]);
bool ver_month(int mnth, int yr);
bool Leap_year(int yr);
bool ver_date(int dy, int mnth, int yr);
void ver_chars(char string[]);
int ver_alfa(char string[]);
int ver_spacing(char string[]);
bool ver_string(char string[]);
bool ver_mj(char string[]);
bool ver_pre(char string[]);
void ranState(char nombre[], char codigo[]);
void sep_names(char string[], char fs_name[], char md_name[]);

void print_curp(void)
{
  Tprogra data;

  do
  {
    system("cls");
    printf("Apellido paterno: ");
    fflush(stdin);
    gets(data.name.ln_f);
  } while (ver_string(data.name.ln_f) == 0);

  do
  {
    system("cls");
    printf("Apellido materno: ");
    fflush(stdin);
    gets(data.name.ln_m);
  } while (ver_string(data.name.ln_m) == 0);

  do
  {
    system("cls");
    printf("Nombre: ");
    fflush(stdin);
    gets(data.name.name);
  } while (ver_string(data.name.name) == 0 || data.name.name[0] == '\0');

  system("cls");
  printf("Anio de nacimiento: ");
  data.date.year = verify_ranged(1893, 2023);

  do
  {
    system("cls");
    printf("Mes de nacimiento: ");
    data.date.month = verify_ranged(1, 12);
  } while (ver_month(data.date.month, data.date.year) == false);

  do
  {
    system("cls");
    printf("Dia de nacimiento: ");
    data.date.day = verify_ranged(1, 31);
  } while (ver_date(data.date.day, data.date.month, data.date.year) == false);

  do
  {
    system("cls");
    printf("Ingrese el sexo (H/M): ");
    fflush(stdin);
    gets(data.gender);
    ver_chars(data.gender);
  } while (strcmp(data.gender, "H") != 0 && strcmp(data.gender, "M") != 0);
  (strcmp(data.gender, "M")) ? strcpy(data.gender, "HOMBRE") : strcpy(data.gender, "MUJER");

  do
  {
    system("cls");
    printf("Ingresa el estado de nacimiento (o 'extranjero'): ");
    fflush(stdin);
    gets(data.state.state);
    ver_chars(data.state.state);
    acronm(data.state.acro, data.state.state);
  } while (!strcmp(data.state.acro, "X"));

  system("cls");
  curp_string(data, data.curp);
  printf("El CURP es: %s\n", data.curp);
}

char vocals(char data[])
{
  int leng = length(data);
  int i;
  for (i = 0; i < leng; i++)
  {
    if (data[i] == 65 || data[i] == 97 || data[i] == 69 || data[i] == 101 || data[i] == 73 || data[i] == 105 || data[i] == 79 || data[i] == 111 || data[i] == 85 || data[i] == 117)
    {
      printf("%c", data[i]);
    }
  }
  printf("\n");
  return 0;
}

void consonants(char data[])
{
  int leng = length(data);
  int i;
  for (i = 0; i < leng; i++)
  {
    if (data[i] != 65 && data[i] != 97 && data[i] != 69 && data[i] != 101 && data[i] != 73 && data[i] != 105 && data[i] != 79 && data[i] != 111 && data[i] != 85 && data[i] != 117)
    {
      printf("%c", data[i]);
    }
  }
  printf("\n");
}

char cons_2(char cad[])
{
  int i;
  int n = length(cad) + 1;
  i = 1;

  while (i < n)
  {
    if (cad[i] != 'A' && cad[i] != 'E' && cad[i] != 'I' && cad[i] != 'O' && cad[i] != 'U' && cad[i] != ' ')
    {
      return cad[i];
    }
    i++;
  }

  return 'X';
}

void acronm(char acro[], char nState[])
{
  Tstate states[] = {
      {"AGUASCALIENTES", "AS"},
      {"BAJA CALIFORNIA", "BC"},
      {"BAJA CALIFORNIA SUR", "BS"},
      {"CAMPECHE", "CC"},
      {"COAHUILA", "CL"},
      {"COLIMA", "CM"},
      {"CHIAPAS", "CS"},
      {"CHIHUAHUA", "CH"},
      {"DISTRITO FEDERAL", "DF"},
      {"DURANGO", "DG"},
      {"GUANAJUATO", "GT"},
      {"GUERRERO", "GR"},
      {"HIDALGO", "HG"},
      {"JALISCO", "JC"},
      {"MEXICO", "MC"},
      {"MICHOACAN", "MN"},
      {"MORELOS", "MS"},
      {"NAYARIT", "NT"},
      {"NUEVO LEON", "NL"},
      {"OAXACA", "OC"},
      {"PUEBLA", "PL"},
      {"QUERETARO", "QT"},
      {"QUINTANA ROO", "QR"},
      {"SAN LUIS POTOSI", "SP"},
      {"SINALOA", "SL"},
      {"SONORA", "SR"},
      {"TABASCO", "TC"},
      {"TAMAULIPAS", "TS"},
      {"TLAXCALA", "TL"},
      {"VERACRUZ", "VZ"},
      {"YUCATAN", "YN"},
      {"ZACATECAS", "ZS"},
      {"EXTRANJERO", "NE"},
  };

  for (int i = 0; i < 33; i++)
  {
    if (strcmp(states[i].state, nState) == 0)
    {
      strcpy(acro, states[i].acro);
      return;
    }
  }

  strcpy(acro, "X");
}

bool ver_month(int mnth, int yr)
{
  if (yr == 2023)
  {
    if (mnth > 10)
    {
      return false;
    }
  }

  return true;
}

bool Leap_year(int yr)
{
  if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
  {
    return true;
  }

  return false;
}

bool ver_date(int dy, int mnth, int yr)
{
  if (mnth == 4 || mnth == 6 || mnth == 9 || mnth == 11)
  {
    if (dy > 30)
    {
      return false;
    }
  }
  else if (mnth == 2)
  {
    if (dy > 29)
    {
      return false;
    }

    if (dy == 29 && !Leap_year(yr))
    {
      return false;
    }
  }

  return true;
}

void ver_chars(char string[])
{
  int i = 0;
  unsigned char data;

  while (string[i] != '\0')
  {
    data = (unsigned char)string[i];
    if (data >= 'a' && data <= 'z')
    {
      string[i] -= 32;
    }
    else
    {
      switch (data)
      {
      case 160:
      case 181:
      case 132:
      case 142:
        string[i] = 'A';
        break;

      case 130:
      case 144:
      case 137:
      case 211:
        string[i] = 'E';
        break;

      case 161:
      case 214:
      case 139:
      case 216:
        string[i] = 'I';
        break;

      case 162:
      case 224:
      case 148:
      case 153:
        string[i] = 'O';
        break;

      case 163:
      case 233:
      case 129:
      case 154:
        string[i] = 'U';
        break;

      case 164:
      case 165:
      case 44:
      case 45:
      case 46:
      case 47:
      case 39:
      case 239:
        string[i] = 'X';
        break;
      }
    }
    i++;
  }
}

int ver_alfa(char string[])
{
  int i = 0;

  while (string[i] != '\0')
  {
    if (string[i] != ' ')
    {
      if (string[i] < 'A' || string[i] > 'Z')
      {
        return 0;
      }
    }

    i++;
  }

  return 1;
}

char con_int(char name[])
{
  int len = length(name);
  char fst_name[len], mid_name[len];
  sep_names(name, fst_name, mid_name);

  if (ver_mj(fst_name))
  {
    sep_names(mid_name, fst_name, mid_name);

    if (ver_pre(fst_name))
    {
      sep_names(mid_name, fst_name, mid_name);

      while (ver_pre(fst_name) && mid_name[0] != '\0')
      {
        sep_names(mid_name, fst_name, mid_name);
      }
    }

    return cons_2(fst_name);
  }

  if (ver_pre(fst_name))
  {
    sep_names(mid_name, fst_name, mid_name);

    while (ver_pre(fst_name) && mid_name[0] != '\0')
    {
      sep_names(mid_name, fst_name, mid_name);
    }
  }

  return cons_2(fst_name);
}

int ver_spacing(char string[])
{
  int i = 0;

  if (string[0] == ' ')
  {
    return 0;
  }

  if (string[length(string)] == ' ')
  {
    return 0;
  }

  while (string[i] != '\0')
  {
    if (string[i] == ' ')
    {
      if (string[i + 1] == ' ')
      {
        return 0;
      }
    }
    i++;
  }

  return 1;
}

bool ver_string(char string[])
{
  ver_chars(string);

  if (ver_alfa(string) == 0)
  {
    return false;
  }

  if (ver_spacing(string) == 0)
  {
    return false;
  }

  return true;
}

char homonimia(int yr)
{
  if (yr < 2000)
  {
    return '0';
  }
  else
  {
    if (yr >= 2000 && yr <= 2009)
    {
      return 'A';
    }
    else
    {
      if (yr >= 2010 && yr <= 2019)
      {
        return 'B';
      }
      else
      {
        return 'C';
      }
    }
  }
}

void avoid(char curp[])
{
  char list[81][5] = {"BACA", "BAKA", "BUEI", "BUEY", "CACA", "CACO", "CAGA", "CAGO", "CAKA", "CAKO", "COGE", "COGI", "COJA", "COJE", "COJI", "COJO", "COLA", "CULO", "FALO", "FETO", "GETA", "GUEI", "GUEY", "JETA", "JOTO", "KACA", "KACO", "KAGA", "KAGO", "KAKA", "KAKO", "KOGE", "KOGI", "KOJA", "KOJE", "KOJI", "KOJO", "KOLA", "KULO", "LILO", "LOCA", "LOCO", "LOKA", "LOKO", "MAME", "MAMO", "MEAR", "MEAS", "MEON", "MIAR", "MION", "MOCO", "MOKO", "MULA", "MULO", "NACA", "NACO", "PEDA", "PEDO", "PENE", "PIPI", "PITO", "POPO", "PUTA", "PUTO", "QULO", "RATA", "ROBA", "ROBE", "ROBO", "RUIN", "SENO", "TETA", "VACA", "VAGA", "VAGO", "VAKA", "VUEI", "VUEY", "WUEI", "WUEY"};

  int i;
  char veri[5];
  strncpy(veri, curp, 4);

  for (i = 0; i < 81; i++)
  {
    if (strcmp(veri, list[i]) == 0)
    {
      curp[1] = 'X';
    }
  }
}

char ln_vocal(char ape[])
{
  int len = length(ape);
  char ln_ft[len], ln_mt[len];
  sep_names(ape, ln_ft, ln_mt);

  if (ver_pre(ln_ft))
  {
    sep_names(ln_mt, ln_ft, ln_mt);

    while (ver_pre(ln_ft) && ln_mt[0] != '\0')
    {
      sep_names(ln_mt, ln_ft, ln_mt);
    }
  }

  return vocals(ln_ft);
}

char ln_cons(char ape[])
{
  int len = length(ape);
  char ln_ft[len], ln_mt[len];
  sep_names(ape, ln_ft, ln_mt);

  if (ver_pre(ln_ft))
  {
    sep_names(ln_mt, ln_ft, ln_mt);

    while (ver_pre(ln_ft) && ln_mt[0] != '\0')
    {
      sep_names(ln_mt, ln_ft, ln_mt);
    }
  }

  return cons_2(ln_ft);
}

void curp_string(Tprogra data, char curp[])
{
  char dy[3], mth[3], yr[3];
  sprintf(dy, "%02d", data.date.day);
  sprintf(mth, "%02d", data.date.month);
  sprintf(yr, "%02d", data.date.year % 100);

  curp[0] = let_name(data.name.ln_f) ? let_name(data.name.ln_f) : 'X';
  curp[1] = ln_vocal(data.name.ln_f);
  curp[2] = let_name(data.name.ln_m) ? let_name(data.name.ln_m) : 'X';
  curp[3] = let_name(data.name.name);
  curp[4] = yr[0];
  curp[5] = yr[1];
  curp[6] = mth[0];
  curp[7] = mth[1];
  curp[8] = dy[0];
  curp[9] = dy[1];
  curp[10] = data.gender[0];
  curp[11] = data.state.acro[0];
  curp[12] = data.state.acro[1];
  curp[13] = ln_cons(data.name.ln_f);
  curp[14] = ln_cons(data.name.ln_m);
  curp[15] = con_int(data.name.name);
  curp[16] = homonimia(data.date.year);
  curp[17] = random_ranged(0, 9) + '0';
  curp[18] = '\0';

  avoid(curp);
}

char let_name(char name[])
{
  int len = length(name);
  char fst_name[len], mid_name[len];
  sep_names(name, fst_name, mid_name);

  if (ver_mj(fst_name) || ver_pre(fst_name))
  {
    sep_names(mid_name, fst_name, mid_name);

    while (ver_pre(fst_name) && mid_name[0] != '\0')
    {
      sep_names(mid_name, fst_name, mid_name);
    }
  }

  return fst_name[0];
}

bool ver_pre(char string[])
{
  int i;
  char data[19][4] = {"DA", "DAS", "DE", "DEL", "DER", "DI", "DIE", "DD", "Y", "EL", "LA", "LOS", "LAS", "LE", "LES", "MAC", "MC", "VAN", "VON"};

  for (i = 0; i < 19; i++)
  {
    if (strcmp(string, data[i]) == 0)
    {
      return true;
    }
  }

  return false;
}

bool ver_mj(char string[])
{
  int i;
  char data[8][6] = {"MARIA", "MAX", "MA", "MX", "M", "JOSE", "JX", "J"};

  for (i = 0; i < 8; i++)
  {
    if (strcmp(string, data[i]) == 0)
    {
      return true;
    }
  }

  return false;
}

void ranState(char nombre[], char codigo[])
{
  int num;

  Tstate estados[] = {
      {"AGUASCALIENTES", "AS"},
      {"BAJA CALIFORNIA", "BC"},
      {"BAJA CALIFORNIA SUR", "BS"},
      {"CAMPECHE", "CC"},
      {"COAHUILA", "CL"},
      {"COLIMA", "CM"},
      {"CHIAPAS", "CS"},
      {"CHIHUAHUA", "CH"},
      {"DISTRITO FEDERAL", "DF"},
      {"DURANGO", "DG"},
      {"GUANAJUATO", "GT"},
      {"GUERRERO", "GR"},
      {"HIDALGO", "HG"},
      {"JALISCO", "JC"},
      {"MEXICO", "MC"},
      {"MICHOACAN", "MN"},
      {"MORELOS", "MS"},
      {"NAYARIT", "NT"},
      {"NUEVO LEON", "NL"},
      {"OAXACA", "OC"},
      {"PUEBLA", "PL"},
      {"QUERETARO", "QT"},
      {"QUINTANA ROO", "QR"},
      {"SAN LUIS POTOSI", "SP"},
      {"SINALOA", "SL"},
      {"SONORA", "SR"},
      {"TABASCO", "TC"},
      {"TAMAULIPAS", "TS"},
      {"TLAXCALA", "TL"},
      {"VERACRUZ", "VZ"},
      {"YUCATAN", "YN"},
      {"ZACATECAS", "ZS"},
      {"EXTRANJERO", "NE"},
  };

  num = ranNum(0, 32);

  strcpy(nombre, estados[num].state);
  strcpy(codigo, estados[num].acro);
}

void sep_names(char string[], char fs_name[], char md_name[])
{
  int i = 0;
  while (string[i] != ' ' && string[i] != '\0')
  {
    fs_name[i] = string[i];
    i++;
  }
  fs_name[i] = '\0';

  if (string[i] != '\0')
  {
    i++;
    int j = 0;
    while (string[i] != '\0')
    {
      md_name[j] = string[i];
      i++;
      j++;
    }
    md_name[j] = '\0';
  }
  else
  {
    md_name[0] = '\0';
  }
}