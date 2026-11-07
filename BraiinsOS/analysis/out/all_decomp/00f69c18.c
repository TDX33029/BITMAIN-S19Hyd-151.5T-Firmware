// FUN_00f69c18 @ 00f69c18 size=444 calls_out=1 calls_in=1
// strings: 

void FUN_00f69c18(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  undefined1 in_r12;
  byte bVar2;
  
  if (param_3 < 3) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    return;
  }
  if (0x12 < (*param_2 | 0x20) - 0x61) {
switchD_00f69c70_caseD_62:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 3;
    return;
  }
  bVar2 = param_2[2] | 0x20;
  bVar1 = param_2[1] | 0x20;
  switch(*param_2 | 0x20) {
  case 0x61:
    if (bVar1 == 0x70) {
      in_r12 = 3;
      if (bVar2 != 0x72) goto switchD_00f69c70_caseD_62;
    }
    else if ((bVar1 != 0x75) || (in_r12 = 7, bVar2 != 0x67)) goto switchD_00f69c70_caseD_62;
    break;
  default:
    goto switchD_00f69c70_caseD_62;
  case 100:
    if (bVar1 == 0x65) {
      in_r12 = 0xb;
    }
    if (bVar1 != 0x65 || bVar2 != 99) goto switchD_00f69c70_caseD_62;
    break;
  case 0x66:
    if ((bVar1 != 0x65) || (in_r12 = 1, bVar2 != 0x62)) goto switchD_00f69c70_caseD_62;
    break;
  case 0x6a:
    if (bVar1 == 0x61) {
      in_r12 = 0;
    }
    else {
      if (bVar1 != 0x75) goto switchD_00f69c70_caseD_62;
      if (bVar2 == 0x6c) {
        in_r12 = 6;
        break;
      }
      in_r12 = 5;
    }
    if (bVar2 != 0x6e) goto switchD_00f69c70_caseD_62;
    break;
  case 0x6d:
    if (bVar1 != 0x61) goto switchD_00f69c70_caseD_62;
    if (bVar2 == 0x72) {
      in_r12 = 2;
    }
    else {
      if (bVar2 != 0x79) goto switchD_00f69c70_caseD_62;
      in_r12 = 4;
    }
    break;
  case 0x6e:
    if (bVar1 == 0x6f) {
      in_r12 = 10;
    }
    if (bVar1 != 0x6f || bVar2 != 0x76) goto switchD_00f69c70_caseD_62;
    break;
  case 0x6f:
    if ((bVar1 != 99) || (in_r12 = 9, bVar2 != 0x74)) goto switchD_00f69c70_caseD_62;
    break;
  case 0x73:
    if ((bVar1 != 0x65) || (in_r12 = 8, bVar2 != 0x70)) goto switchD_00f69c70_caseD_62;
  }
  if ((param_3 != 3) && ((char)param_2[3] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(param_2,param_3,3,param_3,&DAT_0188008c);
  }
  *(undefined1 *)(param_1 + 2) = in_r12;
  *param_1 = param_2 + 3;
  param_1[1] = param_3 - 3;
  return;
}

