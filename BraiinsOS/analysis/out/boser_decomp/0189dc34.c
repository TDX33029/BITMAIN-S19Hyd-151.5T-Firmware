// FUN_0189dc34 @ 0189dc34 size=1424 calls_out=12 calls_in=7
// strings: {recursion limit reached} | const  | {recursion limit reached} | {recursion limit reached}

undefined4 FUN_0189dc34(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_r1;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char local_30;
  char local_2f;
  int local_28;
  int local_24;
  
  iVar5 = *param_1;
  if (iVar5 == 0) {
    iVar5 = param_1[4];
    if (iVar5 == 0) {
      return 0;
    }
    uVar9 = 0x1005258a1;
LAB_0189dcb0:
    uVar2 = FUN_012fb940(iVar5,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    return uVar2;
  }
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  if (uVar7 <= uVar8) {
    if (param_1[4] != 0) {
      iVar5 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
LAB_0189dcdc:
      if (iVar5 != 0) {
        return 1;
      }
    }
LAB_0189dce4:
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_0189dcec;
  }
  cVar1 = *(char *)(iVar5 + uVar8);
  uVar6 = uVar8 + 1;
  param_1[2] = uVar6;
  uVar9 = FUN_018a0238(cVar1);
  if ((int)uVar9 != 0) {
    iVar5 = param_1[4];
    if (iVar5 == 0) {
      return 0;
    }
    goto LAB_0189dcb0;
  }
  iVar3 = param_1[3];
  param_1[3] = iVar3 + 1U;
  if (500 < iVar3 + 1U) {
    if ((param_1[4] != 0) &&
       (iVar5 = FUN_012fb940(param_1[4],"{recursion limit reached}",0x19), iVar5 != 0)) {
      return 1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_0189dcec;
  }
  switch(cVar1) {
  case 'A':
  case 'S':
    if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],&DAT_0053340d,1), iVar5 != 0)) {
      return 1;
    }
    iVar5 = FUN_0189dc34(param_1);
    if (iVar5 != 0) {
      return 1;
    }
    if (cVar1 == 'A') {
      if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],"; ",2), iVar5 != 0)) {
        return 1;
      }
      iVar5 = FUN_0189e514(param_1,1);
      if (iVar5 != 0) {
        return 1;
      }
    }
    iVar5 = param_1[4];
    if (iVar5 != 0) {
      pcVar4 = "]";
LAB_0189dfd8:
      iVar5 = FUN_012fb940(iVar5,pcVar4,1);
      break;
    }
    goto LAB_0189e1bc;
  case 'B':
    iVar5 = FUN_018a0450(param_1);
    break;
  default:
    param_1[2] = uVar8;
    iVar5 = FUN_0189cbfc(param_1,0);
    break;
  case 'D':
    if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],&DAT_0056d2b0,4), iVar5 != 0)) {
      return 1;
    }
    iVar5 = FUN_018a05f8(param_1);
    if (iVar5 != 0) {
      return 1;
    }
    if (((*param_1 == 0) || (uVar7 = param_1[2], (uint)param_1[1] <= uVar7)) ||
       (*(char *)(*param_1 + uVar7) != 'L')) {
      if (param_1[4] != 0) {
        iVar5 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
        goto LAB_0189dcdc;
      }
      goto LAB_0189dce4;
    }
    param_1[2] = uVar7 + 1;
    FUN_0189e3f8(&local_30,param_1);
    if (local_30 == '\0') {
      if (local_28 == 0 && local_24 == 0) goto LAB_0189e1bc;
      uVar2 = extraout_r1;
      if (param_1[4] != 0) {
        uVar9 = FUN_012fb940(param_1[4]," + ",3);
        uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 != 0) {
          return 1;
        }
      }
      iVar5 = FUN_0189ecd0(param_1,uVar2,local_28,local_24);
      break;
    }
    if (param_1[4] != 0) {
      pcVar4 = "{recursion limit reached}";
      if (local_2f == '\0') {
        pcVar4 = 
        "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
      }
      uVar2 = 0x10;
      if (local_2f != '\0') {
        uVar2 = 0x19;
      }
      iVar5 = FUN_012fb940(param_1[4],pcVar4,uVar2);
LAB_0189df4c:
      if (iVar5 != 0) {
        return 1;
      }
    }
LAB_0189df54:
    *(char *)(param_1 + 1) = local_2f;
LAB_0189dcec:
    *param_1 = 0;
    return 0;
  case 'F':
    iVar5 = FUN_018a0274(param_1);
    break;
  case 'O':
  case 'P':
    if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],"*",1), iVar5 != 0)) {
      return 1;
    }
    if (cVar1 == 'P') {
      iVar5 = param_1[4];
      if (iVar5 == 0) goto LAB_0189e1a8;
      uVar2 = 6;
      pcVar4 = "const ";
    }
    else {
LAB_0189e180:
      iVar5 = param_1[4];
      if (iVar5 == 0) goto LAB_0189e1a8;
      uVar2 = 4;
      pcVar4 = &DAT_0056e658;
    }
    iVar5 = FUN_012fb940(iVar5,pcVar4,uVar2);
    if (iVar5 != 0) {
      return 1;
    }
    goto LAB_0189e1a8;
  case 'Q':
  case 'R':
    if (param_1[4] == 0) {
LAB_0189dee0:
      if ((uVar6 < uVar7) && (*(char *)(iVar5 + uVar6) == 'L')) {
        param_1[2] = uVar6 + 1;
        FUN_0189e3f8(&local_30,param_1);
        if (local_30 != '\0') {
          if (param_1[4] != 0) {
            pcVar4 = "{recursion limit reached}";
            if (local_2f == '\0') {
              pcVar4 = 
              "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05"
              ;
            }
            uVar2 = 0x10;
            if (local_2f != '\0') {
              uVar2 = 0x19;
            }
            iVar5 = FUN_012fb940(param_1[4],pcVar4,uVar2);
            goto LAB_0189df4c;
          }
          goto LAB_0189df54;
        }
        if (local_28 != 0 || local_24 != 0) {
          iVar5 = FUN_0189ecd0(param_1);
          if (iVar5 != 0) {
            return 1;
          }
          if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],&DAT_005319c3,1), iVar5 != 0)) {
            return 1;
          }
        }
      }
    }
    else {
      iVar5 = FUN_012fb940(param_1[4],"&",1);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = *param_1;
      if (iVar5 != 0) {
        uVar7 = param_1[1];
        uVar6 = param_1[2];
        goto LAB_0189dee0;
      }
    }
    if (cVar1 != 'R') goto LAB_0189e180;
LAB_0189e1a8:
    iVar5 = FUN_0189dc34(param_1);
    break;
  case 'T':
    if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],"(",1), iVar5 != 0)) {
      return 1;
    }
    uVar10 = FUN_018a0550(param_1);
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    if ((int)(uVar10 >> 0x20) == 1) {
      if (param_1[4] == 0) goto LAB_0189e1bc;
      iVar5 = FUN_012fb940(param_1[4],",",1);
      if (iVar5 != 0) {
        return 1;
      }
    }
    iVar5 = param_1[4];
    if (iVar5 != 0) {
      pcVar4 = &DAT_0053341b;
      goto LAB_0189dfd8;
    }
    goto LAB_0189e1bc;
  case 'W':
    iVar5 = FUN_0189dc34(param_1);
    if (iVar5 != 0) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],&DAT_0056e348,4), iVar5 != 0)) {
      return 1;
    }
    iVar5 = FUN_018a07d8(param_1);
  }
  uVar2 = 1;
  if (iVar5 == 0) {
LAB_0189e1bc:
    uVar2 = 0;
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
    }
  }
  return uVar2;
}

