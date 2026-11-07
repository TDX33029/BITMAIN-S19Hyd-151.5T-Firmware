// FUN_00b0785c @ 00b0785c size=1760 calls_out=8 calls_in=2
// strings: Inlet | FieldSet corrupted (this is a bug) | undefined | Outlet | Water inlet | Water outlet

undefined4 FUN_00b0785c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 ***pppuVar6;
  undefined4 unaff_r6;
  char *pcVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined8 uVar8;
  undefined4 ***pppuVar9;
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined ***local_50;
  undefined **local_4c;
  undefined2 *local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  local_90 = 8;
  local_94 = &DAT_005704f8;
  uVar8 = FUN_01657df4(param_1 + 0x10,&DAT_005704f8,8);
  iVar2 = (int)uVar8;
  if (iVar2 == 0) {
    if ((DAT_01d50f88 < 5) &&
       (((DAT_01d4ba14 - 1 < 2 ||
         ((DAT_01d4ba14 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4ba0c), cVar1 != '\0')))) &&
        (iVar2 = FUN_01aaa278(DAT_01d4ba0c), iVar2 != 0)))) {
      local_40 = *(uint *)(DAT_01d4ba0c + 0x20);
      puVar4 = extraout_r2;
      local_44 = extraout_r3;
      if (local_40 != 0) {
        unaff_r6 = *(undefined4 *)(DAT_01d4ba0c + 0x24);
        unaff_r7 = *(undefined4 *)(DAT_01d4ba0c + 0x28);
        puVar4 = (undefined4 *)(DAT_01d4ba0c + 0x1c);
        local_44 = *puVar4;
        local_58 = 0;
        local_50 = &local_4c;
        local_4c = &local_94;
        local_54 = &DAT_00576c69;
        local_48 = &DAT_0132b6a0;
        local_68 = local_44;
        uStack_64 = local_40;
        uStack_60 = unaff_r6;
        uStack_5c = unaff_r7;
      }
      if (local_40 < 2) {
LAB_00b07988:
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
      local_84 = puVar4;
      local_3c = unaff_r6;
      local_38 = unaff_r7;
      FUN_01aaaecc(DAT_01d4ba0c,&local_8c);
      if (DAT_01d51ae9 != '\0') {
        return 5;
      }
      if (DAT_01d51b00 == 0) {
        return 5;
      }
      iVar2 = DAT_01d4ba0c;
      goto LAB_00b07ea0;
    }
    iVar2 = DAT_01d4ba0c;
    if (DAT_01d51ae9 != '\0') {
      return 5;
    }
    if (DAT_01d51b00 == 0) {
      return 5;
    }
    local_88 = *(undefined4 *)(DAT_01d4ba0c + 0x14);
    local_84 = *(undefined4 **)(DAT_01d4ba0c + 0x18);
    local_8c = (undefined4 **)&DAT_00000001;
    DataMemoryBarrier(0xb);
    puVar4 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar4 = &DAT_01cfc5e0;
    }
    pcVar7 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar4[3])(pcVar7,&local_8c);
    if (iVar3 == 0) {
      return 5;
    }
    local_24 = (undefined4 *)(DAT_01d4ba0c + 0x1c);
    local_44 = *local_24;
    local_40 = *(uint *)(DAT_01d4ba0c + 0x20);
    if (local_40 != 0) {
      unaff_r8 = *(undefined4 *)(DAT_01d4ba0c + 0x24);
      unaff_r9 = *(undefined4 *)(DAT_01d4ba0c + 0x28);
      local_58 = 0;
      local_50 = &local_4c;
      local_4c = &local_94;
      local_54 = &DAT_00576c69;
      local_48 = &DAT_0132b6a0;
      local_68 = local_44;
      uStack_64 = local_40;
      uStack_60 = unaff_r8;
      uStack_5c = unaff_r9;
    }
    if (local_40 < 2) goto LAB_00b07988;
  }
  else {
    switch((int)((ulonglong)uVar8 >> 0x20)) {
    case 5:
      iVar2 = thunk_FUN_01bed842(iVar2,"Inlet",5);
      if (iVar2 == 0) {
        return 1;
      }
      break;
    case 6:
      iVar2 = thunk_FUN_01bed842(iVar2,"Outlet",6);
      if (iVar2 == 0) {
        return 2;
      }
      break;
    case 9:
      iVar2 = thunk_FUN_01bed842(iVar2,"undefined",9);
      if (iVar2 == 0) {
        return 0;
      }
      break;
    case 0xb:
      iVar2 = thunk_FUN_01bed842(iVar2,"Water inlet",0xb);
      if (iVar2 == 0) {
        return 3;
      }
      break;
    case 0xc:
      iVar2 = thunk_FUN_01bed842(iVar2,"Water outlet",0xc);
      if (iVar2 == 0) {
        return 4;
      }
    }
    if (((DAT_01d50f88 < 5) &&
        ((DAT_01d4ba08 - 1 < 2 ||
         ((DAT_01d4ba08 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4ba00), cVar1 != '\0')))))) &&
       (iVar2 = FUN_01aaa278(DAT_01d4ba00), iVar2 != 0)) {
      local_40 = *(uint *)(DAT_01d4ba00 + 0x20);
      puVar4 = extraout_r2_00;
      local_44 = extraout_r3_00;
      if (local_40 != 0) {
        unaff_r6 = *(undefined4 *)(DAT_01d4ba00 + 0x24);
        unaff_r7 = *(undefined4 *)(DAT_01d4ba00 + 0x28);
        puVar4 = (undefined4 *)(DAT_01d4ba00 + 0x1c);
        local_44 = *puVar4;
        local_58 = 0;
        local_50 = &local_4c;
        local_4c = &local_94;
        local_54 = &DAT_005b7ad9;
        local_48 = &DAT_0132b6a0;
        local_68 = local_44;
        uStack_64 = local_40;
        uStack_60 = unaff_r6;
        uStack_5c = unaff_r7;
      }
      if (local_40 < 2) goto LAB_00b07c58;
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
      local_84 = puVar4;
      local_3c = unaff_r6;
      local_38 = unaff_r7;
      FUN_01aaaecc(DAT_01d4ba00,&local_8c);
      if (DAT_01d51ae9 != '\0') {
        return 5;
      }
      if (DAT_01d51b00 == 0) {
        return 5;
      }
      iVar2 = DAT_01d4ba00;
LAB_00b07ea0:
      pppuVar9 = &local_8c;
      local_28 = *(undefined4 *)(iVar2 + 0x14);
      local_24 = *(undefined4 **)(iVar2 + 0x18);
      local_2c = (undefined4 **)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
      }
      pcVar7 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar4[3])(pcVar7,&local_2c);
      if (iVar3 == 0) {
        return 5;
      }
      uVar5 = puVar4[4];
      pppuVar6 = &local_2c;
      goto LAB_00b07de4;
    }
    iVar2 = DAT_01d4ba00;
    if (DAT_01d51ae9 != '\0') {
      return 5;
    }
    if (DAT_01d51b00 == 0) {
      return 5;
    }
    local_88 = *(undefined4 *)(DAT_01d4ba00 + 0x14);
    local_84 = *(undefined4 **)(DAT_01d4ba00 + 0x18);
    local_8c = (undefined4 **)&DAT_00000001;
    DataMemoryBarrier(0xb);
    puVar4 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar4 = &DAT_01cfc5e0;
    }
    pcVar7 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar4[3])(pcVar7,&local_8c);
    if (iVar3 == 0) {
      return 5;
    }
    local_24 = (undefined4 *)(DAT_01d4ba00 + 0x1c);
    local_44 = *local_24;
    local_40 = *(uint *)(DAT_01d4ba00 + 0x20);
    if (local_40 != 0) {
      unaff_r8 = *(undefined4 *)(DAT_01d4ba00 + 0x24);
      unaff_r9 = *(undefined4 *)(DAT_01d4ba00 + 0x28);
      local_58 = 0;
      local_50 = &local_4c;
      local_4c = &local_94;
      local_54 = &DAT_005b7ad9;
      local_48 = &DAT_0132b6a0;
      local_68 = local_44;
      uStack_64 = local_40;
      uStack_60 = unaff_r8;
      uStack_5c = unaff_r9;
    }
    if (local_40 < 2) {
LAB_00b07c58:
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
  pppuVar6 = &local_8c;
  local_28 = 2;
  local_30 = param_1 + 0x30;
  pppuVar9 = &local_2c;
  local_6c = &DAT_01c119e8;
  local_78 = &DAT_01d2ea4c;
  uVar5 = puVar4[4];
  local_3c = unaff_r8;
  local_38 = unaff_r9;
LAB_00b07de4:
  FUN_01aaa328(iVar2,pcVar7,uVar5,pppuVar6,pppuVar9);
  return 5;
}

