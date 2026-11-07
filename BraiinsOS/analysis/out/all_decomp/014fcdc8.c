// FUN_014fcdc8 @ 014fcdc8 size=1424 calls_out=12 calls_in=7
// strings: {recursion limit reached} | const  | {recursion limit reached} | {recursion limit reached}

undefined4 FUN_014fcdc8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  char local_30;
  char local_2f;
  int local_28;
  int local_24;
  
  iVar6 = *param_1;
  if (iVar6 == 0) {
    iVar6 = param_1[4];
    if (iVar6 == 0) {
      return 0;
    }
    uVar10 = 0x10040ac4a;
LAB_014fce44:
    uVar2 = FUN_00faace8(iVar6,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    return uVar2;
  }
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  if (uVar8 <= uVar9) {
    if (param_1[4] != 0) {
      iVar6 = FUN_00faace8(param_1[4],&DAT_00564580,0x10);
LAB_014fce70:
      if (iVar6 != 0) {
        return 1;
      }
    }
LAB_014fce78:
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_014fce80;
  }
  cVar1 = *(char *)(iVar6 + uVar9);
  uVar7 = uVar9 + 1;
  param_1[2] = uVar7;
  uVar10 = FUN_014ff38c(cVar1);
  if ((int)uVar10 != 0) {
    iVar6 = param_1[4];
    if (iVar6 == 0) {
      return 0;
    }
    goto LAB_014fce44;
  }
  iVar3 = param_1[3];
  param_1[3] = iVar3 + 1U;
  if (500 < iVar3 + 1U) {
    if ((param_1[4] != 0) &&
       (iVar6 = FUN_00faace8(param_1[4],"{recursion limit reached}",0x19), iVar6 != 0)) {
      return 1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_014fce80;
  }
  switch(cVar1) {
  case 'A':
  case 'S':
    if ((param_1[4] != 0) && (iVar6 = FUN_00faace8(param_1[4],&DAT_00418df9,1), iVar6 != 0)) {
      return 1;
    }
    iVar6 = FUN_014fcdc8(param_1);
    if (iVar6 != 0) {
      return 1;
    }
    if (cVar1 == 'A') {
      if ((param_1[4] != 0) && (iVar6 = FUN_00faace8(param_1[4],"; ",2), iVar6 != 0)) {
        return 1;
      }
      iVar6 = FUN_014fd6a8(param_1,1);
      if (iVar6 != 0) {
        return 1;
      }
    }
    iVar6 = param_1[4];
    if (iVar6 != 0) {
      puVar4 = &DAT_00418ec5;
LAB_014fd16c:
      iVar6 = FUN_00faace8(iVar6,puVar4,1);
      break;
    }
    goto LAB_014fd350;
  case 'B':
    iVar6 = FUN_014ff5a4(param_1);
    break;
  default:
    param_1[2] = uVar9;
    iVar6 = FUN_014fbd90(param_1,0);
    break;
  case 'D':
    if ((param_1[4] != 0) && (iVar6 = FUN_00faace8(param_1[4],&DAT_0056753c,4), iVar6 != 0)) {
      return 1;
    }
    iVar6 = FUN_014ff74c(param_1);
    if (iVar6 != 0) {
      return 1;
    }
    if (((*param_1 == 0) || (uVar8 = param_1[2], (uint)param_1[1] <= uVar8)) ||
       (*(char *)(*param_1 + uVar8) != 'L')) {
      if (param_1[4] != 0) {
        iVar6 = FUN_00faace8(param_1[4],&DAT_00564580,0x10);
        goto LAB_014fce70;
      }
      goto LAB_014fce78;
    }
    param_1[2] = uVar8 + 1;
    FUN_014fd58c(&local_30,param_1);
    if (local_30 == '\0') {
      if (local_28 == 0 && local_24 == 0) goto LAB_014fd350;
      uVar2 = extraout_r1;
      if (param_1[4] != 0) {
        uVar10 = FUN_00faace8(param_1[4]," + ",3);
        uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if ((int)uVar10 != 0) {
          return 1;
        }
      }
      iVar6 = FUN_014fde64(param_1,uVar2,local_28,local_24);
      break;
    }
    if (param_1[4] != 0) {
      pcVar5 = "{recursion limit reached}";
      if (local_2f == '\0') {
        pcVar5 = &DAT_00564580;
      }
      uVar2 = 0x10;
      if (local_2f != '\0') {
        uVar2 = 0x19;
      }
      iVar6 = FUN_00faace8(param_1[4],pcVar5,uVar2);
LAB_014fd0e0:
      if (iVar6 != 0) {
        return 1;
      }
    }
LAB_014fd0e8:
    *(char *)(param_1 + 1) = local_2f;
LAB_014fce80:
    *param_1 = 0;
    return 0;
  case 'F':
    iVar6 = FUN_014ff3c8(param_1);
    break;
  case 'O':
  case 'P':
    if ((param_1[4] != 0) && (iVar6 = FUN_00faace8(param_1[4],"*",1), iVar6 != 0)) {
      return 1;
    }
    if (cVar1 == 'P') {
      iVar6 = param_1[4];
      if (iVar6 == 0) goto LAB_014fd33c;
      uVar2 = 6;
      pcVar5 = "const ";
    }
    else {
LAB_014fd314:
      iVar6 = param_1[4];
      if (iVar6 == 0) goto LAB_014fd33c;
      uVar2 = 4;
      pcVar5 = &DAT_005686cc;
    }
    iVar6 = FUN_00faace8(iVar6,pcVar5,uVar2);
    if (iVar6 != 0) {
      return 1;
    }
    goto LAB_014fd33c;
  case 'Q':
  case 'R':
    if (param_1[4] == 0) {
LAB_014fd074:
      if ((uVar7 < uVar8) && (*(char *)(iVar6 + uVar7) == 'L')) {
        param_1[2] = uVar7 + 1;
        FUN_014fd58c(&local_30,param_1);
        if (local_30 != '\0') {
          if (param_1[4] != 0) {
            pcVar5 = "{recursion limit reached}";
            if (local_2f == '\0') {
              pcVar5 = &DAT_00564580;
            }
            uVar2 = 0x10;
            if (local_2f != '\0') {
              uVar2 = 0x19;
            }
            iVar6 = FUN_00faace8(param_1[4],pcVar5,uVar2);
            goto LAB_014fd0e0;
          }
          goto LAB_014fd0e8;
        }
        if (local_28 != 0 || local_24 != 0) {
          iVar6 = FUN_014fde64(param_1);
          if (iVar6 != 0) {
            return 1;
          }
          if ((param_1[4] != 0) && (iVar6 = FUN_00faace8(param_1[4],&DAT_0041545b,1), iVar6 != 0)) {
            return 1;
          }
        }
      }
    }
    else {
      iVar6 = FUN_00faace8(param_1[4],"&",1);
      if (iVar6 != 0) {
        return 1;
      }
      iVar6 = *param_1;
      if (iVar6 != 0) {
        uVar8 = param_1[1];
        uVar7 = param_1[2];
        goto LAB_014fd074;
      }
    }
    if (cVar1 != 'R') goto LAB_014fd314;
LAB_014fd33c:
    iVar6 = FUN_014fcdc8(param_1);
    break;
  case 'T':
    if ((param_1[4] != 0) && (iVar6 = FUN_00faace8(param_1[4],"(",1), iVar6 != 0)) {
      return 1;
    }
    uVar11 = FUN_014ff6a4(param_1);
    if ((uVar11 & 1) != 0) {
      return 1;
    }
    if ((int)(uVar11 >> 0x20) == 1) {
      if (param_1[4] == 0) goto LAB_014fd350;
      iVar6 = FUN_00faace8(param_1[4],&DAT_004144ea,1);
      if (iVar6 != 0) {
        return 1;
      }
    }
    iVar6 = param_1[4];
    if (iVar6 != 0) {
      puVar4 = &DAT_00418e07;
      goto LAB_014fd16c;
    }
    goto LAB_014fd350;
  case 'W':
    iVar6 = FUN_014fcdc8(param_1);
    if (iVar6 != 0) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar6 = FUN_00faace8(param_1[4],&DAT_00568404,4), iVar6 != 0)) {
      return 1;
    }
    iVar6 = FUN_014ff92c(param_1);
  }
  uVar2 = 1;
  if (iVar6 == 0) {
LAB_014fd350:
    uVar2 = 0;
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
    }
  }
  return uVar2;
}

