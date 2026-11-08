// FUN_0137c00c @ 0137c00c size=344 calls_out=1 calls_in=2
// strings: 

int FUN_0137c00c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = param_1[3];
  iVar3 = 0;
  while (uVar4 = FUN_01414bbc(&local_20), piVar1 = (int *)uVar4, piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      iVar2 = 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar1[1]) {
      case '\0':
      case '\x1e':
      case '\"':
      case '0':
      case '1':
      case '@':
        break;
      case '\x01':
      case '\x18':
        iVar2 = 0xe;
        break;
      case '\x02':
      case '\x03':
      case '4':
      case '8':
      case 'O':
        iVar2 = 0xf;
        break;
      case '\x04':
      case '\x10':
      case '\x11':
      case '\x1a':
      case ')':
      case ',':
        iVar2 = 0xd;
        break;
      case '\x05':
        iVar2 = 0x20;
        break;
      case '\x06':
      case '\a':
        iVar2 = 0x1c;
        break;
      case '\b':
      case '5':
        iVar2 = 0x1b;
        break;
      case '\t':
      case '\f':
        iVar2 = 0x1d;
        break;
      case '\n':
      case '>':
      case 'M':
      case 'N':
        iVar2 = 0x16;
        break;
      case '\v':
        iVar2 = 0x1e;
        break;
      case '\r':
      case '\x1f':
      case 'J':
        iVar2 = 3;
        break;
      case '\x0e':
      case '6':
        iVar2 = 5;
        break;
      default:
        iVar2 = 7;
        break;
      case '\x12':
      case '\x1d':
      case '/':
        iVar2 = 0xc;
        break;
      case '\x13':
      case '(':
      case '=':
      case 'E':
        iVar2 = 0x11;
        break;
      case '\x14':
      case 'A':
      case 'F':
        iVar2 = 10;
        break;
      case '\x15':
      case '+':
      case '3':
        iVar2 = 0x13;
        break;
      case '\x16':
      case '\x17':
      case '\x19':
      case 'L':
      case 'P':
        iVar2 = 0x10;
        break;
      case '\x1b':
        iVar2 = 0x17;
        break;
      case '\x1c':
        iVar2 = 0x23;
        break;
      case ' ':
      case '!':
      case '%':
      case '&':
      case '-':
      case 'I':
        iVar2 = 4;
        break;
      case '$':
        iVar2 = 9;
        break;
      case '\'':
      case '*':
      case '.':
        iVar2 = 8;
        break;
      case '2':
        iVar2 = 0x12;
        break;
      case ':':
        iVar2 = 0xb;
        break;
      case ';':
        iVar2 = 0x14;
        break;
      case '<':
        iVar2 = 0x18;
        break;
      case '?':
        iVar2 = 0x15;
        break;
      case 'B':
      case 'H':
        iVar2 = 0x19;
        break;
      case 'C':
        iVar2 = 2;
      }
    }
    else {
      iVar2 = piVar1[2];
    }
    iVar3 = iVar3 + iVar2 + *(int *)((int)((ulonglong)uVar4 >> 0x20) + 8) + 0x20;
  }
  return iVar3;
}

