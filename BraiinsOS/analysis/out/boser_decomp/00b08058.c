// FUN_00b08058 @ 00b08058 size=1660 calls_out=8 calls_in=1
// strings: FieldSet corrupted (this is a bug) | boser::metrics_scraper::metrics_datatypes::utilsopen/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug) | boser::metrics_scraper::metrics_datatypes::utilsopen/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined1 FUN_00b08058(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *extraout_r2;
  undefined4 *puVar5;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 ***pppuVar7;
  int unaff_r6;
  char *pcVar8;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined8 uVar9;
  undefined4 ***pppuVar10;
  undefined *local_94;
  undefined4 local_90;
  undefined4 **local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined **local_7c;
  undefined1 *local_78;
  undefined4 *local_74;
  int *local_70;
  undefined *local_6c;
  undefined4 local_68;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined ***local_50;
  undefined **local_4c;
  undefined2 *local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  local_90 = 4;
  local_94 = &DAT_0056df8c;
  uVar9 = FUN_01657df4(param_1 + 0x10,&DAT_0056df8c,4);
  iVar4 = (int)uVar9;
  if (iVar4 == 0) {
    if ((DAT_01d50f88 < 5) &&
       (((DAT_01d4ba14 - 1 < 2 ||
         ((DAT_01d4ba14 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4ba0c), cVar1 != '\0')))) &&
        (iVar4 = FUN_01aaa278(DAT_01d4ba0c), iVar4 != 0)))) {
      local_40 = *(uint *)(DAT_01d4ba0c + 0x20);
      puVar5 = extraout_r2_00;
      local_44 = extraout_r3_00;
      if (local_40 != 0) {
        unaff_r6 = *(int *)(DAT_01d4ba0c + 0x24);
        unaff_r7 = *(undefined4 *)(DAT_01d4ba0c + 0x28);
        puVar5 = (undefined4 *)(DAT_01d4ba0c + 0x1c);
        local_44 = *puVar5;
        local_58 = 0;
        local_50 = &local_4c;
        local_4c = &local_94;
        local_54 = &DAT_00576c69;
        local_48 = &DAT_0132b6a0;
        local_68 = local_44;
        uStack_64 = local_40;
        iStack_60 = unaff_r6;
        uStack_5c = unaff_r7;
      }
      if (local_40 < 2) {
LAB_00b082b8:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c10fc8);
      }
      local_70 = &local_30;
      local_74 = &local_44;
      local_7c = &local_54;
      local_80 = &local_68;
      local_8c = &local_80;
      local_34 = 1;
      local_88 = 2;
      local_30 = param_1 + 0x30;
      local_6c = &DAT_01c119e8;
      local_78 = &DAT_01d2ea4c;
      local_84 = puVar5;
      local_3c = unaff_r6;
      local_38 = unaff_r7;
      FUN_01aaaecc(DAT_01d4ba0c,&local_8c);
      if (DAT_01d51ae9 != '\0') {
        return 2;
      }
      if (DAT_01d51b00 == 0) {
        return 2;
      }
      iVar4 = DAT_01d4ba0c;
      goto LAB_00b08614;
    }
    iVar4 = DAT_01d4ba0c;
    if (DAT_01d51ae9 != '\0') {
      return 2;
    }
    if (DAT_01d51b00 == 0) {
      return 2;
    }
    local_88 = *(undefined4 *)(DAT_01d4ba0c + 0x14);
    local_84 = *(undefined4 **)(DAT_01d4ba0c + 0x18);
    local_8c = (undefined4 **)&DAT_00000001;
    DataMemoryBarrier(0xb);
    puVar5 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar5 = &DAT_01cfc5e0;
    }
    pcVar8 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar5[3])(pcVar8,&local_8c);
    if (iVar2 == 0) {
      return 2;
    }
    local_24 = (undefined4 *)(DAT_01d4ba0c + 0x1c);
    local_44 = *local_24;
    local_40 = *(uint *)(DAT_01d4ba0c + 0x20);
    if (local_40 != 0) {
      unaff_r8 = *(int *)(DAT_01d4ba0c + 0x24);
      unaff_r9 = *(undefined4 *)(DAT_01d4ba0c + 0x28);
      local_58 = 0;
      local_50 = &local_4c;
      local_4c = &local_94;
      local_54 = &DAT_00576c69;
      local_48 = &DAT_0132b6a0;
      local_68 = local_44;
      uStack_64 = local_40;
      iStack_60 = unaff_r8;
      uStack_5c = unaff_r9;
    }
    if (local_40 < 2) goto LAB_00b082b8;
  }
  else {
    if (((int)((ulonglong)uVar9 >> 0x20) == 8) &&
       ((iVar2 = thunk_FUN_01bed842(iVar4,&DAT_00570528,8), iVar2 == 0 ||
        (iVar3 = thunk_FUN_01bed842(iVar4,&DAT_00570ee0,8), unaff_r6 = iVar4, iVar3 == 0)))) {
      return iVar2 != 0;
    }
    if (((DAT_01d50f88 < 5) &&
        ((DAT_01d4ba08 - 1 < 2 ||
         ((DAT_01d4ba08 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4ba00), cVar1 != '\0')))))) &&
       (iVar4 = FUN_01aaa278(DAT_01d4ba00), iVar4 != 0)) {
      local_40 = *(uint *)(DAT_01d4ba00 + 0x20);
      puVar5 = extraout_r2;
      local_44 = extraout_r3;
      if (local_40 != 0) {
        unaff_r6 = *(int *)(DAT_01d4ba00 + 0x24);
        unaff_r7 = *(undefined4 *)(DAT_01d4ba00 + 0x28);
        puVar5 = (undefined4 *)(DAT_01d4ba00 + 0x1c);
        local_44 = *puVar5;
        local_58 = 0;
        local_50 = &local_4c;
        local_4c = &local_94;
        local_54 = &DAT_005b7ad9;
        local_48 = &DAT_0132b6a0;
        local_68 = local_44;
        uStack_64 = local_40;
        iStack_60 = unaff_r6;
        uStack_5c = unaff_r7;
      }
      if (local_40 < 2) goto LAB_00b083d4;
      local_70 = &local_30;
      local_74 = &local_44;
      local_7c = &local_54;
      local_80 = &local_68;
      local_8c = &local_80;
      local_34 = 1;
      local_88 = 2;
      local_30 = param_1 + 0x30;
      local_6c = &DAT_01c119e8;
      local_78 = &DAT_01d2ea4c;
      local_84 = puVar5;
      local_3c = unaff_r6;
      local_38 = unaff_r7;
      FUN_01aaaecc(DAT_01d4ba00,&local_8c);
      if (DAT_01d51ae9 != '\0') {
        return 2;
      }
      if (DAT_01d51b00 == 0) {
        return 2;
      }
      iVar4 = DAT_01d4ba00;
LAB_00b08614:
      pppuVar10 = &local_8c;
      local_28 = *(undefined4 *)(iVar4 + 0x14);
      local_24 = *(undefined4 **)(iVar4 + 0x18);
      local_2c = (undefined4 **)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar5 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar5 = &DAT_01cfc5e0;
      }
      pcVar8 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar5[3])(pcVar8,&local_2c);
      if (iVar2 == 0) {
        return 2;
      }
      uVar6 = puVar5[4];
      pppuVar7 = &local_2c;
      goto LAB_00b08560;
    }
    iVar4 = DAT_01d4ba00;
    if (DAT_01d51ae9 != '\0') {
      return 2;
    }
    if (DAT_01d51b00 == 0) {
      return 2;
    }
    local_88 = *(undefined4 *)(DAT_01d4ba00 + 0x14);
    local_84 = *(undefined4 **)(DAT_01d4ba00 + 0x18);
    local_8c = (undefined4 **)&DAT_00000001;
    DataMemoryBarrier(0xb);
    puVar5 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar5 = &DAT_01cfc5e0;
    }
    pcVar8 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar5[3])(pcVar8,&local_8c);
    if (iVar2 == 0) {
      return 2;
    }
    local_24 = (undefined4 *)(DAT_01d4ba00 + 0x1c);
    local_44 = *local_24;
    local_40 = *(uint *)(DAT_01d4ba00 + 0x20);
    if (local_40 != 0) {
      unaff_r8 = *(int *)(DAT_01d4ba00 + 0x24);
      unaff_r9 = *(undefined4 *)(DAT_01d4ba00 + 0x28);
      local_58 = 0;
      local_50 = &local_4c;
      local_4c = &local_94;
      local_54 = &DAT_005b7ad9;
      local_48 = &DAT_0132b6a0;
      local_68 = local_44;
      uStack_64 = local_40;
      iStack_60 = unaff_r8;
      uStack_5c = unaff_r9;
    }
    if (local_40 < 2) {
LAB_00b083d4:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c10fd8);
    }
  }
  local_70 = &local_30;
  local_74 = &local_44;
  local_7c = &local_54;
  local_80 = &local_68;
  local_2c = &local_80;
  local_34 = 1;
  pppuVar7 = &local_8c;
  local_28 = 2;
  local_30 = param_1 + 0x30;
  pppuVar10 = &local_2c;
  local_6c = &DAT_01c119e8;
  local_78 = &DAT_01d2ea4c;
  uVar6 = puVar5[4];
  local_3c = unaff_r8;
  local_38 = unaff_r9;
LAB_00b08560:
  FUN_01aaa328(iVar4,pcVar8,uVar6,pppuVar7,pppuVar10);
  return 2;
}

