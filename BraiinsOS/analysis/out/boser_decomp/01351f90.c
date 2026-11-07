// FUN_01351f90 @ 01351f90 size=272 calls_out=0 calls_in=0
// strings: 

int FUN_01351f90(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return param_1[2];
  }
  iVar1 = 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[1]) {
  case '\0':
  case '\x1e':
  case '\"':
  case '0':
  case '1':
  case '@':
    goto switchD_01351fb4_caseD_0;
  case '\x01':
  case '\x18':
    return 0xe;
  case '\x02':
  case '\x03':
  case '4':
  case '8':
  case 'O':
    return 0xf;
  case '\x04':
  case '\x10':
  case '\x11':
  case '\x1a':
  case ')':
  case ',':
    return 0xd;
  case '\x05':
    return 0x20;
  case '\x06':
  case '\a':
    return 0x1c;
  case '\b':
  case '5':
    return 0x1b;
  case '\t':
  case '\f':
    return 0x1d;
  case '\n':
  case '>':
  case 'M':
  case 'N':
    return 0x16;
  case '\v':
    return 0x1e;
  case '\r':
  case '\x1f':
  case 'J':
    return 3;
  case '\x0e':
  case '6':
    return 5;
  default:
    return 7;
  case '\x12':
  case '\x1d':
  case '/':
    return 0xc;
  case '\x13':
  case '(':
  case '=':
  case 'E':
    return 0x11;
  case '\x14':
  case 'A':
  case 'F':
    return 10;
  case '\x15':
  case '+':
  case '3':
    return 0x13;
  case '\x16':
  case '\x17':
  case '\x19':
  case 'L':
  case 'P':
    iVar1 = 0x10;
switchD_01351fb4_caseD_0:
    return iVar1;
  case '\x1b':
    return 0x17;
  case '\x1c':
    return 0x23;
  case ' ':
  case '!':
  case '%':
  case '&':
  case '-':
  case 'I':
    return 4;
  case '$':
    return 9;
  case '\'':
  case '*':
  case '.':
    return 8;
  case '2':
    return 0x12;
  case ':':
    return 0xb;
  case ';':
    return 0x14;
  case '<':
    return 0x18;
  case '?':
    return 0x15;
  case 'B':
  case 'H':
    return 0x19;
  case 'C':
    return 2;
  }
}

