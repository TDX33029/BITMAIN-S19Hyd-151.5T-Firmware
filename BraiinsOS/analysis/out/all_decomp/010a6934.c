// FUN_010a6934 @ 010a6934 size=396 calls_out=0 calls_in=2
// strings: 

void FUN_010a6934(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  int local_28;
  
  iVar3 = param_2[2];
  iVar9 = param_2[1];
  if (iVar3 == 0) {
    uVar4 = 9;
  }
  else {
    uVar6 = 0;
    bVar8 = 0;
    bVar7 = false;
    bVar2 = false;
    bVar10 = 0;
    iVar1 = 0;
    do {
      uVar5 = (uint)*(byte *)(iVar9 + iVar1);
      switch(""[uVar5]) {
      case '#':
      case '/':
      case '?':
        goto switchD_010a69a8_caseD_23;
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ';':
      case '<':
      case '=':
      case '>':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '\\':
        break;
      case ':':
        if (7 < uVar6) {
LAB_010a6b48:
          uVar4 = 2;
          goto LAB_010a6b80;
        }
        uVar6 = uVar6 + 1;
        break;
      case '@':
        bVar10 = 1;
        local_28 = iVar1;
        goto LAB_010a697c;
      case '[':
        if ((bool)(bVar2 | bVar8)) goto LAB_010a6b48;
        bVar8 = 1;
        bVar2 = false;
        break;
      case ']':
        if (bVar8 != 0xff || bVar7) goto LAB_010a6b48;
        bVar7 = true;
LAB_010a697c:
        bVar2 = false;
        uVar6 = 0;
        break;
      default:
        if ((""[uVar5] == '\0') && (bVar2 = true, uVar5 != 0x25)) {
          uVar4 = 0;
          goto LAB_010a6b80;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar3 != iVar1);
    iVar1 = iVar3;
switchD_010a69a8_caseD_23:
    uVar4 = 2;
    if ((!(bool)(bVar7 ^ bVar8)) && (uVar6 < 2)) {
      if (iVar1 == 0) {
        if (bVar2) goto LAB_010a6b80;
      }
      else if ((bool)(bVar10 & local_28 - iVar1 == -1 | bVar2)) goto LAB_010a6b80;
      uVar4 = 0;
      if (iVar1 == iVar3) {
        iVar9 = param_2[1];
        iVar1 = param_2[2];
        iVar3 = param_2[3];
        *param_1 = *param_2;
        param_1[1] = iVar9;
        param_1[2] = iVar1;
        param_1[3] = iVar3;
        return;
      }
    }
  }
LAB_010a6b80:
  iVar1 = *param_2;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x010a6ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x10))(param_2 + 3,iVar9,iVar3);
  return;
}

