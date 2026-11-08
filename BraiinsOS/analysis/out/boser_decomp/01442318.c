// FUN_01442318 @ 01442318 size=1360 calls_out=10 calls_in=3
// strings: hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01442318(undefined4 *param_1,undefined4 ***param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 **ppuVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *unaff_r8;
  uint uVar9;
  undefined4 ***local_ac;
  uint local_a8;
  uint *local_a4;
  undefined4 ***local_a0;
  undefined4 ****local_9c;
  undefined1 *local_98;
  undefined4 uStack_94;
  int **local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 ****local_7c;
  undefined1 *local_78;
  int *local_74;
  undefined *local_70;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int ***local_5c;
  undefined **local_58;
  int *local_54;
  int ***local_50;
  int ****local_4c;
  undefined4 ***local_48;
  undefined4 ****local_44;
  undefined1 *local_40;
  undefined4 uStack_3c;
  int **local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  
  uVar9 = (uint)*(byte *)param_2;
  local_ac = param_2;
  if (uVar9 == 0) {
    uVar7 = 0;
  }
  else if (uVar9 == 1) {
    uVar7 = (uint)*(byte *)((int)param_2 + 1) << 8;
  }
  else {
    unaff_r8 = (uint *)FUN_014333b0();
    ppuVar3 = param_2[1];
    (*(code *)**ppuVar3)(&local_a8,ppuVar3 + 3,ppuVar3[1],ppuVar3[2]);
    uVar7 = 0;
    *unaff_r8 = local_a8;
    unaff_r8[1] = (uint)local_a4;
    unaff_r8[2] = (uint)local_a0;
    unaff_r8[3] = (uint)local_9c;
  }
  (*(code *)*param_2[2])(&local_48,param_2 + 5,param_2[3],param_2[4]);
  (*(code *)*param_2[6])(&local_38,param_2 + 9,param_2[7],param_2[8]);
  local_a8 = uVar7 | uVar9;
  local_28 = CONCAT22(local_28._2_2_,*(undefined2 *)(param_2 + 10));
  local_a0 = local_48;
  local_9c = local_44;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  local_90 = local_38;
  iStack_8c = local_34;
  iStack_88 = local_30;
  iStack_84 = iStack_2c;
  uStack_80 = local_28;
  local_a4 = unaff_r8;
  if (uVar9 == 0) {
    if (param_3 == (int *)0x0 || local_40 == (undefined1 *)0x0) goto LAB_01442464;
    FUN_01415bb0(&local_38,local_44,local_40);
    if ((local_38 == (int **)0x0) || ((short)local_30 != 0x1bb)) {
      uVar7 = 1;
      local_34 = 0;
      local_38 = (int **)0x1;
      FUN_0144296c(param_2,&local_38);
    }
    else {
      uVar7 = 0x101;
      local_34 = 0;
      local_38 = (int **)0x101;
      FUN_0144296c(param_2,&local_38);
    }
    param_3 = (int *)0x0;
    (*(code *)*local_a0)(&local_38,&uStack_94,local_9c,local_98);
  }
  else {
    if (local_40 == (undefined1 *)0x0) {
LAB_01442464:
      if ((DAT_01d50f88 < 2) &&
         (((DAT_01d4eb58 - 1 < 2 ||
           ((DAT_01d4eb58 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4eb50), cVar2 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d4eb50), iVar4 != 0)))) {
        local_34 = *(int *)(DAT_01d4eb50 + 0x20);
        if (local_34 == 0) {
LAB_01442850:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf8504);
        }
        local_58 = &local_70;
        local_30 = *(int *)(DAT_01d4eb50 + 0x24);
        iStack_2c = *(int *)(DAT_01d4eb50 + 0x28);
        local_74 = (int *)(DAT_01d4eb50 + 0x1c);
        local_38 = (int **)*local_74;
        local_5c = &local_38;
        local_7c = &local_5c;
        local_28 = 0;
        local_78 = (undefined1 *)0x1;
        local_6c = &local_50;
        local_50 = (int ***)&local_ac;
        local_54 = (int *)&DAT_01d2ea4c;
        local_70 = &DAT_005b7072;
        local_4c = (int ****)&LAB_014438a4;
        FUN_01aaaecc(DAT_01d4eb50,&local_7c);
        iVar4 = DAT_01d4eb50;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_44 = *(undefined4 *****)(DAT_01d4eb50 + 0x14);
          local_40 = *(undefined1 **)(DAT_01d4eb50 + 0x18);
          local_48 = (undefined4 ***)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar8[3])(pcVar1,&local_48);
          if (iVar5 != 0) {
            FUN_01aaa328(iVar4,pcVar1,puVar8[4],&local_48,&local_7c);
          }
        }
      }
      else {
        iVar4 = DAT_01d4eb50;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_64 = *(undefined4 *)(DAT_01d4eb50 + 0x14);
          local_60 = *(undefined4 *)(DAT_01d4eb50 + 0x18);
          local_68 = 4;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar8[3])(pcVar1,&local_68);
          if (iVar5 != 0) {
            local_54 = (int *)(DAT_01d4eb50 + 0x1c);
            local_38 = (int **)*local_54;
            local_34 = *(int *)(DAT_01d4eb50 + 0x20);
            if (local_34 == 0) goto LAB_01442850;
            local_44 = &local_50;
            local_30 = *(int *)(DAT_01d4eb50 + 0x24);
            iStack_2c = *(int *)(DAT_01d4eb50 + 0x28);
            local_48 = &local_38;
            local_5c = (int ***)&local_48;
            local_58 = (undefined **)&DAT_00000001;
            local_4c = (int ****)&local_7c;
            local_28 = 0;
            local_7c = &local_ac;
            local_40 = &DAT_01d2ea4c;
            local_50 = (int ***)&DAT_005b7072;
            local_78 = &LAB_014438a4;
            FUN_01aaa328(iVar4,pcVar1,puVar8[4],&local_68,&local_5c);
          }
        }
      }
      *(undefined1 *)(param_1 + 7) = 5;
      *(undefined1 *)((int)param_1 + 0x19) = 2;
      param_1[1] = 0;
      uVar6 = 1;
      goto LAB_01442820;
    }
    if (uVar9 == 2) {
      param_3 = (int *)FUN_014333b0();
      (**(code **)*local_a4)(&local_38,local_a4 + 3,local_a4[1],local_a4[2]);
      uVar7 = 0;
      *param_3 = (int)local_38;
      param_3[1] = local_34;
      param_3[2] = local_30;
      param_3[3] = iStack_2c;
    }
    (*(code *)*local_a0)(&local_38,&uStack_94,local_9c,local_98);
    uVar7 = uVar7 | uVar9;
  }
  param_1[3] = local_38;
  param_1[4] = local_34;
  param_1[5] = local_30;
  param_1[6] = iStack_2c;
  uVar6 = 0;
  param_1[1] = uVar7;
  param_1[2] = param_3;
LAB_01442820:
  *param_1 = uVar6;
  FUN_01435814(&local_a8);
  return;
}

