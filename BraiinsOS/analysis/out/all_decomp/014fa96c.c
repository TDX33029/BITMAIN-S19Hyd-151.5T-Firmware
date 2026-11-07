// FUN_014fa96c @ 014fa96c size=1100 calls_out=5 calls_in=1
// strings: unsafe  |  -> J | {recursion limit reached}

undefined4 FUN_014fa96c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *unaff_r7;
  bool bVar9;
  undefined8 uVar10;
  char *local_70;
  char *pcStack_6c;
  char *pcStack_68;
  int local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char *local_50;
  undefined4 local_4c;
  char *local_48;
  char *local_44;
  char *pcStack_40;
  int local_3c;
  char *pcStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  
  iVar1 = *param_1;
  if (iVar1 == 0) goto LAB_014faa34;
  uVar7 = param_1[1];
  bVar9 = false;
  uVar5 = param_1[2];
  if ((uVar5 < uVar7) && (bVar9 = *(char *)(iVar1 + uVar5) == 'U', bVar9)) {
    uVar5 = uVar5 + 1;
    param_1[2] = uVar5;
  }
  if ((uVar5 < uVar7) && (*(char *)(iVar1 + uVar5) == 'K')) {
    uVar8 = uVar5 + 1;
    param_1[2] = uVar8;
    if ((uVar8 < uVar7) && (*(char *)(iVar1 + uVar8) == 'C')) {
      param_1[2] = uVar5 + 2;
      pcVar6 = "C";
      unaff_r7 = (char *)0x1;
    }
    else {
      FUN_014f67cc(&local_48,param_1);
      if (local_48 == (char *)0x0) {
        iVar1 = param_1[4];
        if ((char)local_44 == '\0') {
          if (iVar1 == 0) goto LAB_014fad98;
          uVar3 = 0x10;
          pcVar6 = &DAT_00564580;
        }
        else {
          if (iVar1 == 0) goto LAB_014fad98;
          uVar3 = 0x19;
          pcVar6 = "{recursion limit reached}";
        }
        iVar1 = FUN_00faace8(iVar1,pcVar6,uVar3);
        if (iVar1 != 0) {
          return 1;
        }
LAB_014fad98:
        *(char *)(param_1 + 1) = (char)local_44;
        *param_1 = 0;
        return 0;
      }
      if ((local_44 == (char *)0x0) || (pcVar6 = local_48, unaff_r7 = local_44, local_3c != 0)) {
        if ((param_1[4] == 0) || (iVar1 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar1 == 0))
        {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 0;
          return 0;
        }
        return 1;
      }
    }
    if (bVar9) goto LAB_014faa00;
  }
  else {
    if (!bVar9) goto LAB_014faa34;
    pcVar6 = (char *)0x0;
LAB_014faa00:
    if ((param_1[4] != 0) && (iVar1 = FUN_00faace8(param_1[4],"unsafe ",7), iVar1 != 0)) {
      return 1;
    }
    if (pcVar6 == (char *)0x0) goto LAB_014faa34;
  }
  iVar1 = param_1[4];
  if ((iVar1 != 0) && (iVar4 = FUN_00faace8(iVar1,&DAT_00569d40,8), iVar4 != 0)) {
    return 1;
  }
  local_4c = CONCAT22(local_4c._2_2_,1);
  local_58 = CONCAT31(local_58._1_3_,1);
  local_5c = 0x5f;
  local_70 = (char *)0x5f;
  local_54 = 0;
  local_64 = 0;
  pcStack_6c = pcVar6;
  pcStack_68 = unaff_r7;
  local_60 = unaff_r7;
  local_50 = unaff_r7;
  uVar10 = FUN_014f1360(&local_70);
  if ((int)uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a7108);
  }
  if ((iVar1 == 0) ||
     (iVar4 = FUN_00faace8(iVar1,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20)), iVar4 == 0)) {
    local_48 = local_70;
    local_44 = pcStack_6c;
    pcStack_40 = pcStack_68;
    local_3c = local_64;
    pcStack_38 = local_60;
    local_34 = local_5c;
    uStack_30 = local_58;
    uStack_2c = local_54;
    pcStack_28 = local_50;
    uStack_24 = local_4c;
    while( true ) {
      uVar10 = FUN_014f1360(&local_48);
      if ((int)uVar10 == 0) break;
      if (iVar1 != 0) {
        iVar4 = FUN_00faace8(iVar1,&DAT_00410f51,1);
        if (iVar4 != 0) {
          return 1;
        }
        iVar4 = FUN_00faace8(iVar1,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
        if (iVar4 != 0) {
          return 1;
        }
      }
    }
    if ((iVar1 == 0) || (iVar1 = FUN_00faace8(iVar1,"\" ",2), iVar1 == 0)) {
LAB_014faa34:
      if ((param_1[4] == 0) || (iVar1 = FUN_00faace8(param_1[4],"fn(",3), iVar1 == 0)) {
        iVar1 = *param_1;
        if (iVar1 != 0) {
          iVar4 = 0;
          do {
            uVar5 = param_1[1];
            uVar7 = param_1[2];
            if ((uVar7 < uVar5) && (uVar5 = (uint)*(byte *)(iVar1 + uVar7), uVar5 == 0x45)) {
              param_1[2] = uVar7 + 1;
              iVar4 = param_1[4];
              goto joined_r0x014facc8;
            }
            if (iVar4 != 0) {
              uVar5 = param_1[4];
            }
            if ((iVar4 != 0 && uVar5 != 0) &&
               (iVar1 = FUN_00faace8(uVar5,&DAT_0041950f,2), iVar1 != 0)) {
              return 1;
            }
            iVar1 = FUN_014f7080(param_1);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = *param_1;
            iVar4 = iVar4 + -1;
          } while (iVar1 != 0);
        }
        iVar1 = 0;
        iVar4 = param_1[4];
joined_r0x014facc8:
        if ((iVar4 != 0) && (iVar2 = FUN_00faace8(iVar4,&DAT_00418e07,1), iVar2 != 0)) {
          return 1;
        }
        if (((iVar1 != 0) && (uVar5 = param_1[2], uVar5 < (uint)param_1[1])) &&
           (*(char *)(iVar1 + uVar5) == 'u')) {
          param_1[2] = uVar5 + 1;
          return 0;
        }
        if ((iVar4 == 0) || (iVar1 = FUN_00faace8(iVar4," -> J",4), iVar1 == 0)) {
          uVar3 = FUN_014f7080(param_1);
          return uVar3;
        }
      }
      return 1;
    }
  }
  return 1;
}

