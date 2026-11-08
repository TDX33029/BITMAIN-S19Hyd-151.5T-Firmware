// FUN_01022864 @ 01022864 size=504 calls_out=1 calls_in=5
// strings: 

int FUN_01022864(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x28);
  uVar6 = 0;
  uVar1 = 0;
  if (uVar7 == 0) {
    uVar6 = 2;
  }
  iVar2 = 0;
  do {
    if (uVar6 == 2) {
      uVar1 = uVar1 + 1;
      if (uVar7 <= uVar1) {
        return iVar2;
      }
      puVar4 = (uint *)(uVar1 * 0x34 + *(int *)(param_1 + 0x24));
LAB_0102290c:
      uVar6 = 2;
      puVar5 = puVar4 + 3;
      if ((*puVar4 & 1) != 0) {
        param_4 = puVar4[1];
        uVar6 = 1;
      }
      if (puVar4[8] == 0) goto LAB_01022930;
LAB_01022890:
      iVar3 = puVar4[10] + 0x20;
    }
    else {
      if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,uVar7,&DAT_018a65cc);
      }
      puVar4 = (uint *)(uVar1 * 0x34 + *(int *)(param_1 + 0x24));
      if ((uVar6 & 1) == 0) goto LAB_0102290c;
      if (*(uint *)(param_1 + 0x34) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(param_4,*(uint *)(param_1 + 0x34),&DAT_018a65dc);
      }
      uVar6 = 2;
      iVar3 = *(int *)(param_1 + 0x30) + param_4 * 0x24;
      puVar5 = (uint *)(iVar3 + 0x10);
      if (*(int *)(iVar3 + 8) != 0) {
        param_4 = *(uint *)(iVar3 + 0xc);
        uVar6 = 1;
      }
      if (puVar4[8] != 0) goto LAB_01022890;
LAB_01022930:
      iVar3 = 0x26;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)puVar4[9]) {
      case '\0':
      case '\x1e':
      case '\"':
      case '0':
      case '1':
      case '@':
        break;
      case '\x01':
      case '\x18':
        iVar3 = 0x2e;
        break;
      case '\x02':
      case '\x03':
      case '4':
      case '8':
      case 'O':
        iVar3 = 0x2f;
        break;
      case '\x04':
      case '\x10':
      case '\x11':
      case '\x1a':
      case ')':
      case ',':
        iVar3 = 0x2d;
        break;
      case '\x05':
        iVar3 = 0x40;
        break;
      case '\x06':
      case '\a':
        iVar3 = 0x3c;
        break;
      case '\b':
      case '5':
        iVar3 = 0x3b;
        break;
      case '\t':
      case '\f':
        iVar3 = 0x3d;
        break;
      case '\n':
      case '>':
      case 'M':
      case 'N':
        iVar3 = 0x36;
        break;
      case '\v':
        iVar3 = 0x3e;
        break;
      case '\r':
      case '\x1f':
      case 'J':
        iVar3 = 0x23;
        break;
      case '\x0e':
      case '6':
        iVar3 = 0x25;
        break;
      default:
        iVar3 = 0x27;
        break;
      case '\x12':
      case '\x1d':
      case '/':
        iVar3 = 0x2c;
        break;
      case '\x13':
      case '(':
      case '=':
      case 'E':
        iVar3 = 0x31;
        break;
      case '\x14':
      case 'A':
      case 'F':
        iVar3 = 0x2a;
        break;
      case '\x15':
      case '+':
      case '3':
        iVar3 = 0x33;
        break;
      case '\x16':
      case '\x17':
      case '\x19':
      case 'L':
      case 'P':
        iVar3 = 0x30;
        break;
      case '\x1b':
        iVar3 = 0x37;
        break;
      case '\x1c':
        iVar3 = 0x43;
        break;
      case ' ':
      case '!':
      case '%':
      case '&':
      case '-':
      case 'I':
        iVar3 = 0x24;
        break;
      case '$':
        iVar3 = 0x29;
        break;
      case '\'':
      case '*':
      case '.':
        iVar3 = 0x28;
        break;
      case '2':
        iVar3 = 0x32;
        break;
      case ':':
        iVar3 = 0x2b;
        break;
      case ';':
        iVar3 = 0x34;
        break;
      case '<':
        iVar3 = 0x38;
        break;
      case '?':
        iVar3 = 0x35;
        break;
      case 'B':
      case 'H':
        iVar3 = 0x39;
        break;
      case 'C':
        iVar3 = 0x22;
      }
    }
    iVar2 = iVar3 + iVar2 + puVar5[2];
  } while( true );
}

