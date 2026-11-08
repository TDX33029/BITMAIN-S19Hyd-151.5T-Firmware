// FUN_014fff68 @ 014fff68 size=948 calls_out=6 calls_in=1
// strings: unsafe  |  -> J | {recursion limit reached}

undefined4 FUN_014fff68(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *unaff_r7;
  bool bVar10;
  undefined8 uVar11;
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
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar6 = param_1[1];
    bVar10 = false;
    uVar5 = param_1[2];
    if ((uVar5 < uVar6) && (bVar10 = *(char *)(iVar1 + uVar5) == 'U', bVar10)) {
      uVar5 = uVar5 + 1;
      param_1[2] = uVar5;
    }
    if ((uVar5 < uVar6) && (*(char *)(iVar1 + uVar5) == 'K')) {
      uVar7 = uVar5 + 1;
      param_1[2] = uVar7;
      if ((uVar7 < uVar6) && (*(char *)(iVar1 + uVar7) == 'C')) {
        param_1[2] = uVar5 + 2;
        pcVar8 = "C";
        unaff_r7 = (char *)0x1;
      }
      else {
        FUN_014fc644(&local_50,param_1);
        if (local_50 == (char *)0x0) {
          if (param_1[4] != 0) {
            pcVar8 = "{recursion limit reached}";
            if ((char)local_4c == '\0') {
              pcVar8 = &DAT_00564580;
            }
            uVar9 = 0x10;
            if ((char)local_4c != '\0') {
              uVar9 = 0x19;
            }
            iVar1 = FUN_00faace8(param_1[4],pcVar8,uVar9);
            if (iVar1 != 0) {
              return 1;
            }
          }
          *(char *)(param_1 + 1) = (char)local_4c;
LAB_01500300:
          *param_1 = 0;
          return 0;
        }
        if ((local_4c == (char *)0x0) || (pcVar8 = local_50, unaff_r7 = local_4c, local_44 != 0)) {
          if ((param_1[4] != 0) && (iVar1 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar1 != 0)
             ) {
            return 1;
          }
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_01500300;
        }
      }
      if (!bVar10) goto LAB_0150006c;
    }
    else {
      if (!bVar10) goto LAB_015001b8;
      pcVar8 = (char *)0x0;
    }
    if ((param_1[4] != 0) && (iVar1 = FUN_00faace8(param_1[4],"unsafe ",7), iVar1 != 0)) {
      return 1;
    }
    if (pcVar8 != (char *)0x0) {
LAB_0150006c:
      iVar1 = param_1[4];
      if ((iVar1 != 0) && (iVar2 = FUN_00faace8(iVar1,&DAT_00569d40,8), iVar2 != 0)) {
        return 1;
      }
      local_54 = CONCAT22(local_54._2_2_,1);
      local_60 = CONCAT31(local_60._1_3_,1);
      local_64 = 0x5f;
      local_78 = (char *)0x5f;
      local_5c = 0;
      local_6c = 0;
      pcStack_74 = pcVar8;
      pcStack_70 = unaff_r7;
      local_68 = unaff_r7;
      local_58 = unaff_r7;
      uVar11 = FUN_0150034c(&local_78);
      if ((int)uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a72a8);
      }
      if ((iVar1 == 0) ||
         (iVar2 = FUN_00faace8(iVar1,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20)), iVar2 == 0)) {
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
        iVar2 = iVar1;
        do {
          iVar4 = iVar2;
          do {
            iVar3 = iVar4;
            uVar11 = FUN_0150034c(&local_50);
            if ((int)uVar11 == 0) {
              if ((iVar2 != 0) && (iVar1 = FUN_00faace8(iVar2,"\" ",2), iVar1 != 0)) {
                return 1;
              }
              goto LAB_015001b8;
            }
            iVar4 = 0;
          } while (iVar3 == 0);
          iVar2 = FUN_00faace8(iVar3,&DAT_00410f51,1);
        } while ((iVar2 == 0) &&
                ((iVar2 = 0, iVar1 == 0 ||
                 (iVar4 = FUN_00faace8(iVar1,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20)),
                 iVar2 = iVar1, iVar4 == 0))));
      }
      return 1;
    }
  }
LAB_015001b8:
  if ((param_1[4] != 0) && (iVar1 = FUN_00faace8(param_1[4],"fn(",3), iVar1 != 0)) {
    return 1;
  }
  uVar5 = FUN_014ff6a4(param_1);
  uVar9 = 1;
  if (((uVar5 & 1) == 0) &&
     ((param_1[4] == 0 || (iVar1 = FUN_00faace8(param_1[4],&DAT_00418e07,1), iVar1 == 0)))) {
    if ((*param_1 == 0) ||
       ((uVar5 = param_1[2], (uint)param_1[1] <= uVar5 || (*(char *)(*param_1 + uVar5) != 'u')))) {
      if ((param_1[4] == 0) || (iVar1 = FUN_00faace8(param_1[4]," -> J",4), iVar1 == 0)) {
        uVar9 = FUN_014fcdc8(param_1);
        return uVar9;
      }
    }
    else {
      param_1[2] = uVar5 + 1;
      uVar9 = 0;
    }
  }
  return uVar9;
}

