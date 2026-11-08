// FUN_01810d14 @ 01810d14 size=1028 calls_out=8 calls_in=1
// strings: hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01810d14(uint *param_1,uint *param_2,undefined4 ***param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  uint uVar6;
  char *unaff_r4;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 ***local_80;
  undefined4 ****local_7c;
  undefined *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint ***local_5c;
  undefined **local_58;
  undefined4 *local_54;
  uint ***local_50;
  uint ****local_4c;
  uint **local_48;
  char *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  undefined4 ***local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  local_80 = param_3;
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4f994 - 1 < 2 ||
       ((DAT_01d4f994 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4f98c), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4f98c), iVar2 != 0)))) {
    local_44 = *(char **)(DAT_01d4f98c + 0x20);
    if (local_44 == (char *)0x0) {
LAB_01811100:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d9d0);
    }
    local_40 = *(uint *)(DAT_01d4f98c + 0x24);
    local_3c = *(uint *)(DAT_01d4f98c + 0x28);
    local_74 = (undefined4 *)(DAT_01d4f98c + 0x1c);
    local_48 = (uint **)*local_74;
    local_58 = &local_70;
    local_5c = &local_48;
    local_78 = (undefined *)0x1;
    local_6c = &local_50;
    local_7c = &local_5c;
    local_50 = (uint ***)&local_80;
    unaff_r4 = (char *)0x0;
    local_38 = 0;
    local_54 = (undefined4 *)&DAT_01d2ea4c;
    local_70 = &DAT_0059dc5c;
    local_4c = (uint ****)&DAT_017bdb44;
    FUN_01aaaecc(DAT_01d4f98c,&local_7c);
    iVar2 = DAT_01d4f98c;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4f98c + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4f98c + 0x18);
      local_30 = (undefined4 ***)&SUB_00000004;
      DataMemoryBarrier(0xb);
      pcVar7 = DAT_01d4edc8;
      unaff_r4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar7 = "";
        unaff_r4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (**(code **)(pcVar7 + 0xc))(unaff_r4,&local_30);
      if (iVar3 != 0) {
        FUN_01aaa328(iVar2,unaff_r4,*(undefined4 *)(pcVar7 + 0x10),&local_30,&local_7c);
      }
    }
  }
  else {
    iVar2 = DAT_01d4f98c;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_64 = *(undefined4 *)(DAT_01d4f98c + 0x14);
      local_60 = *(undefined4 *)(DAT_01d4f98c + 0x18);
      local_68 = 4;
      DataMemoryBarrier(0xb);
      unaff_r4 = DAT_01d4edc8;
      pcVar7 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        unaff_r4 = "";
        pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (**(code **)(unaff_r4 + 0xc))(pcVar7,&local_68);
      if (iVar3 != 0) {
        local_54 = (undefined4 *)(DAT_01d4f98c + 0x1c);
        local_48 = (uint **)*local_54;
        local_44 = *(char **)(DAT_01d4f98c + 0x20);
        if (local_44 == (char *)0x0) goto LAB_01811100;
        local_30 = &local_48;
        local_5c = (uint ***)&local_30;
        local_40 = *(uint *)(DAT_01d4f98c + 0x24);
        local_38 = 0;
        local_3c = *(uint *)(DAT_01d4f98c + 0x28);
        local_2c = &local_50;
        local_58 = (undefined **)&DAT_00000001;
        local_28 = &DAT_01d2ea4c;
        local_4c = (uint ****)&local_7c;
        local_50 = (uint ***)&DAT_0059dc5c;
        local_78 = &DAT_017bdb44;
        local_7c = &local_80;
        FUN_01aaa328(iVar2,pcVar7,*(undefined4 *)(unaff_r4 + 0x10),&local_68,&local_5c);
      }
    }
  }
  uVar4 = (uint)(byte)param_4[2];
  uVar9 = 0;
  bVar10 = uVar4 != 2;
  if (bVar10) {
    uVar4 = *param_2;
  }
  if (bVar10 && uVar4 != 0) {
    uVar9 = FUN_017048d8(param_2);
  }
  uVar4 = (uint)*(byte *)param_3;
  if (uVar4 == 0) {
    uVar6 = 0;
  }
  else if (uVar4 == 1) {
    uVar6 = (uint)*(byte *)((int)param_3 + 1) << 8;
  }
  else {
    unaff_r4 = (char *)FUN_014333b0();
    ppuVar5 = param_3[1];
    (*(code *)**ppuVar5)(&local_48,ppuVar5 + 3,ppuVar5[1],ppuVar5[2]);
    *(uint ***)unaff_r4 = local_48;
    *(char **)(unaff_r4 + 4) = local_44;
    *(uint *)(unaff_r4 + 8) = local_40;
    *(uint *)(unaff_r4 + 0xc) = local_3c;
    uVar6 = 0;
  }
  local_48 = (uint **)(uVar6 | uVar4);
  local_44 = unaff_r4;
  (*(code *)*param_3[2])(&local_40,param_3 + 5,param_3[3],param_3[4]);
  uVar4 = param_4[1];
  uVar6 = param_4[2];
  param_1[6] = *param_4;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  uVar4 = param_4[4];
  uVar6 = param_4[5];
  uVar8 = param_4[6];
  param_1[9] = param_4[3];
  param_1[10] = uVar4;
  param_1[0xb] = uVar6;
  param_1[0xc] = uVar8;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *param_1 = (uint)local_48;
  param_1[1] = (uint)local_44;
  param_1[2] = local_40;
  param_1[3] = local_3c;
  param_1[4] = local_38;
  param_1[5] = uStack_34;
  param_1[0xd] = uVar9;
  return;
}

