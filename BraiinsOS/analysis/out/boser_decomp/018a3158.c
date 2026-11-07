// FUN_018a3158 @ 018a3158 size=1276 calls_out=12 calls_in=7
// strings: {recursion limit reached} | {recursion limit reached} | const 

undefined4 FUN_018a3158(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char local_28;
  char local_27;
  int local_20;
  int local_1c;
  
  if (*param_1 == 0) goto LAB_018a3510;
  uVar5 = param_1[2];
  if ((uint)param_1[1] <= uVar5) {
    if (param_1[4] != 0) {
      iVar2 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
LAB_018a31dc:
      if (iVar2 != 0) {
        return 1;
      }
    }
LAB_018a31e4:
    *(undefined1 *)(param_1 + 1) = 0;
LAB_018a31ec:
    *param_1 = 0;
    return 0;
  }
  cVar1 = *(char *)(*param_1 + uVar5);
  param_1[2] = uVar5 + 1;
  uVar6 = FUN_018a5834(cVar1);
  if ((int)uVar6 != 0) {
    iVar2 = param_1[4];
    if (iVar2 == 0) {
      return 0;
    }
    goto LAB_018a3528;
  }
  iVar2 = param_1[3];
  param_1[3] = iVar2 + 1U;
  if (500 < iVar2 + 1U) {
    if ((param_1[4] != 0) &&
       (iVar2 = FUN_012fb940(param_1[4],"{recursion limit reached}",0x19), iVar2 != 0)) {
      return 1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_018a31ec;
  }
  switch(cVar1) {
  case 'A':
  case 'S':
    if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],&DAT_0053340d,1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_018a3158(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    if (cVar1 == 'A') {
      if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"; ",2), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_018a38dc(param_1,1);
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      pcVar4 = "]";
LAB_018a35c0:
      iVar2 = FUN_012fb940(iVar2,pcVar4,1);
      break;
    }
    goto LAB_018a3668;
  case 'B':
    iVar2 = FUN_018a5a48(param_1);
    break;
  default:
    param_1[2] = uVar5;
    iVar2 = FUN_018a21dc(param_1,0);
    break;
  case 'D':
    if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],&DAT_0056d2b0,4), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_018a5be4(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_018a388c(param_1,0x4c);
    if (iVar2 == 0) {
      if (param_1[4] != 0) {
        iVar2 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
        goto LAB_018a31dc;
      }
      goto LAB_018a31e4;
    }
    if (*param_1 == 0) {
LAB_018a3510:
      iVar2 = param_1[4];
      if (iVar2 == 0) {
        return 0;
      }
      uVar6 = 0x1005258a1;
LAB_018a3528:
      uVar3 = FUN_012fb940(iVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      return uVar3;
    }
    FUN_018a40c8(&local_28,param_1);
    if (local_28 == '\x01') {
LAB_018a33a0:
      if (param_1[4] != 0) {
        pcVar4 = "{recursion limit reached}";
        if (local_27 == '\0') {
          pcVar4 = 
          "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        }
        uVar3 = 0x10;
        if (local_27 != '\0') {
          uVar3 = 0x19;
        }
        iVar2 = FUN_012fb940(param_1[4],pcVar4,uVar3);
        if (iVar2 != 0) {
          return 1;
        }
      }
      *(char *)(param_1 + 1) = local_27;
      goto LAB_018a31ec;
    }
    if (local_20 == 0 && local_1c == 0) goto LAB_018a3668;
    uVar3 = extraout_r1;
    if (param_1[4] != 0) {
      uVar6 = FUN_012fb940(param_1[4]," + ",3);
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        return 1;
      }
    }
    iVar2 = FUN_018a41f0(param_1,uVar3,local_20,local_1c);
    break;
  case 'F':
    iVar2 = FUN_018a5870(param_1);
    break;
  case 'O':
  case 'P':
    if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"*",1), iVar2 != 0)) {
      return 1;
    }
    if (cVar1 == 'P') {
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_018a3654;
      uVar3 = 6;
      pcVar4 = "const ";
    }
    else {
LAB_018a362c:
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_018a3654;
      uVar3 = 4;
      pcVar4 = &DAT_0056e658;
    }
    iVar2 = FUN_012fb940(iVar2,pcVar4,uVar3);
    if (iVar2 != 0) {
      return 1;
    }
    goto LAB_018a3654;
  case 'Q':
  case 'R':
    if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"&",1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_018a388c(param_1,0x4c);
    if (iVar2 != 0) {
      if (*param_1 == 0) goto LAB_018a3510;
      FUN_018a40c8(&local_28,param_1);
      if (local_28 == '\x01') goto LAB_018a33a0;
      if (local_20 != 0 || local_1c != 0) {
        iVar2 = FUN_018a41f0(param_1);
        if (iVar2 != 0) {
          return 1;
        }
        if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],&DAT_005319c3,1), iVar2 != 0)) {
          return 1;
        }
      }
    }
    if (cVar1 != 'R') goto LAB_018a362c;
LAB_018a3654:
    iVar2 = FUN_018a3158(param_1);
    break;
  case 'T':
    if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"(",1), iVar2 != 0)) {
      return 1;
    }
    uVar7 = FUN_018a5b44(param_1);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    if ((int)(uVar7 >> 0x20) == 1) {
      if (param_1[4] == 0) goto LAB_018a3668;
      iVar2 = FUN_012fb940(param_1[4],",",1);
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      pcVar4 = &DAT_0053341b;
      goto LAB_018a35c0;
    }
    goto LAB_018a3668;
  }
  uVar3 = 1;
  if (iVar2 == 0) {
LAB_018a3668:
    uVar3 = 0;
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
    }
  }
  return uVar3;
}

