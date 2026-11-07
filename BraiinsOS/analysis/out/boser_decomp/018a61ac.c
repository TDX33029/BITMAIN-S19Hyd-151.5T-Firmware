// FUN_018a61ac @ 018a61ac size=1000 calls_out=7 calls_in=1
// strings: unsafe  | unsafe  | extern 'x-cp1251Max Difflook_setK |  -> J | {recursion limit reached}

undefined4 FUN_018a61ac(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  char *local_78;
  char *pcStack_74;
  char *pcStack_70;
  int local_6c;
  char *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  char *local_50;
  char *local_4c;
  char *pcStack_48;
  int local_44;
  char *pcStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  
  iVar2 = FUN_018a388c(param_1,0x55);
  iVar3 = FUN_018a388c(param_1,0x4b);
  if (iVar3 == 0) {
    if (iVar2 == 0) {
      iVar2 = param_1[4];
LAB_018a62e4:
      if (iVar2 == 0) goto LAB_018a647c;
    }
    else {
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_018a647c;
      iVar3 = FUN_012fb940(iVar2,"unsafe ",7);
      if (iVar3 != 0) {
        return 1;
      }
    }
    iVar2 = FUN_012fb940(iVar2,"fn(",3);
    if (iVar2 != 0) {
      return 1;
    }
LAB_018a647c:
    uVar5 = FUN_018a5b44(param_1);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    iVar2 = param_1[4];
    if ((iVar2 != 0) && (iVar2 = FUN_012fb940(iVar2,&DAT_0053341b,1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_018a388c(param_1,0x75);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = param_1[4];
    if ((iVar2 == 0) || (iVar2 = FUN_012fb940(iVar2," -> J",4), iVar2 == 0)) {
      uVar6 = FUN_018a3158(param_1);
      return uVar6;
    }
    return 1;
  }
  iVar3 = FUN_018a388c(param_1,0x43);
  if (iVar3 == 0) {
    if (*param_1 == 0) {
      if (param_1[4] == 0) {
        return 0;
      }
      uVar6 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
      return uVar6;
    }
    FUN_018a2a94(&local_50,param_1);
    if (local_50 == (char *)0x0) {
      if (param_1[4] != 0) {
        pcVar7 = "{recursion limit reached}";
        if ((char)local_4c == '\0') {
          pcVar7 = 
          "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        }
        uVar6 = 0x10;
        if ((char)local_4c != '\0') {
          uVar6 = 0x19;
        }
        iVar2 = FUN_012fb940(param_1[4],pcVar7,uVar6);
        if (iVar2 != 0) {
          return 1;
        }
      }
      *(char *)(param_1 + 1) = (char)local_4c;
LAB_018a6570:
      *param_1 = 0;
      return 0;
    }
    if ((local_4c == (char *)0x0) || (pcVar7 = local_50, pcVar9 = local_4c, local_44 != 0)) {
      if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10), iVar2 != 0)) {
        return 1;
      }
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_018a6570;
    }
  }
  else {
    pcVar7 = "C";
    pcVar9 = (char *)0x1;
  }
  if (iVar2 == 0) {
    iVar2 = param_1[4];
    if (iVar2 == 0) goto LAB_018a6348;
  }
  else {
    iVar2 = param_1[4];
    if (iVar2 == 0) {
LAB_018a6348:
      bVar1 = true;
      iVar2 = 0;
      goto LAB_018a6350;
    }
    iVar3 = FUN_012fb940(iVar2,"unsafe ",7);
    if (iVar3 != 0) {
      return 1;
    }
  }
  iVar3 = FUN_012fb940(iVar2,"extern \"x-cp1251Max Difflook_setK",8);
  bVar1 = false;
  if (iVar3 != 0) {
    return 1;
  }
LAB_018a6350:
  local_54 = CONCAT22(local_54._2_2_,1);
  local_60 = CONCAT31(local_60._1_3_,1);
  local_78 = (char *)0x5f;
  local_64 = 0x5f;
  local_5c = 0;
  local_6c = 0;
  pcStack_74 = pcVar7;
  pcStack_70 = pcVar9;
  local_68 = pcVar9;
  local_58 = pcVar9;
  uVar10 = FUN_014379b8(&local_78);
  if ((int)uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d222f4);
  }
  if ((bVar1) ||
     (iVar3 = FUN_012fb940(iVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20)), iVar3 == 0)) {
    local_50 = local_78;
    local_4c = pcStack_74;
    pcStack_48 = pcStack_70;
    local_44 = local_6c;
    pcStack_40 = local_68;
    local_3c = local_64;
    uStack_38 = local_60;
    uStack_34 = local_5c;
    pcStack_30 = local_58;
    uStack_2c = local_54;
    iVar3 = iVar2;
    do {
      iVar8 = iVar3;
      do {
        iVar4 = iVar8;
        uVar10 = FUN_014379b8(&local_50);
        if ((int)uVar10 == 0) {
          if ((iVar3 != 0) && (iVar3 = FUN_012fb940(iVar3,"\" ",2), iVar3 != 0)) {
            return 1;
          }
          goto LAB_018a62e4;
        }
        iVar8 = 0;
      } while (iVar4 == 0);
      iVar3 = FUN_012fb940(iVar4,"-",1);
      if (iVar3 != 0) {
        return 1;
      }
      iVar8 = param_1[4];
      iVar3 = 0;
    } while ((iVar8 == 0) ||
            (iVar4 = FUN_012fb940(iVar8,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20)), iVar3 = iVar8
            , iVar4 == 0));
  }
  return 1;
}

