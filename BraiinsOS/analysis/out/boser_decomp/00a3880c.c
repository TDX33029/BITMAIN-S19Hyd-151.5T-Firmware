// FUN_00a3880c @ 00a3880c size=1724 calls_out=17 calls_in=0
// strings: boser::advanced_settings::bosminer_provideropen/boser/boser/src/advanced_settings/bosminer_provider.rsevent open/boser/boser/src/advanced_settings/bosminer_provider.rs:107struct Configstruct MdnsConfigstruct CgminerConfigstruct FormatSection | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::advanced_settings::bosminer_provideropen/boser/boser/src/advanced_settings/bosminer_provider.rsevent open/boser/boser/src/advanced_settings/bosminer_provider.rs:107struct Configstruct MdnsConfigstruct CgminerConfigstruct FormatSection | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::advanced_settings::bosminer_provideropen/boser/boser/src/advanced_settings/bosminer_provider.rsevent open/boser/boser/src/advanced_settings/bosminer_provider.rs:107struct Configstruct MdnsConfigstruct CgminerConfigstruct FormatSection

void FUN_00a3880c(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 **unaff_r4;
  uint *puVar10;
  undefined4 **ppuVar11;
  undefined4 **ppuVar12;
  undefined4 **ppuVar13;
  undefined4 *puVar14;
  undefined4 ****ppppuVar15;
  undefined8 uVar16;
  undefined4 *local_10c;
  undefined4 ***local_108;
  int local_104;
  undefined4 **local_100;
  undefined4 **local_fc;
  uint local_f8;
  undefined4 **local_f4;
  int local_f0;
  undefined4 *local_ec;
  uint local_e4;
  undefined *local_e0;
  uint **local_dc;
  undefined4 **local_d8;
  undefined4 *local_d4;
  undefined4 *puStack_d0;
  undefined4 *local_cc;
  uint local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 ***local_b8;
  undefined4 *puStack_b4;
  undefined4 **ppuStack_b0;
  undefined4 **local_ac;
  uint local_a8;
  undefined4 **local_a4;
  int iStack_a0;
  undefined4 *local_9c;
  undefined4 ****local_98;
  undefined **local_94;
  undefined4 *local_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 ****local_80;
  undefined **local_7c;
  undefined4 *local_78;
  uint *local_64;
  undefined4 *local_60;
  undefined4 *puStack_5c;
  undefined4 ****local_58;
  undefined **local_54;
  undefined4 *local_50;
  undefined4 ****local_40;
  undefined **ppuStack_3c;
  undefined4 *puStack_38;
  
  FUN_00b32cc8(&local_b8,*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40));
  if (local_b8 == (undefined4 ***)0x0) {
    local_e4 = (uint)&local_b8 | 4;
    if ((DAT_01d50f88 < 4) &&
       (((DAT_01d4b8d0 - 1 < 2 ||
         ((DAT_01d4b8d0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4b8c8), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4b8c8), iVar3 != 0)))) {
      local_104 = *(int *)(DAT_01d4b8c8 + 0x20);
      if (local_104 == 0) {
LAB_00a38eb0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e2b4);
      }
      local_7c = &local_e0;
      local_100 = *(undefined4 ***)(DAT_01d4b8c8 + 0x24);
      local_fc = *(undefined4 ***)(DAT_01d4b8c8 + 0x28);
      local_90 = (undefined4 *)(DAT_01d4b8c8 + 0x1c);
      local_108 = (undefined4 ***)*local_90;
      local_80 = &local_108;
      local_98 = &local_80;
      unaff_r4 = (undefined4 **)0x0;
      local_f8 = 0;
      local_94 = (undefined **)&DAT_00000001;
      local_dc = &local_64;
      local_64 = &local_e4;
      local_78 = (undefined4 *)&DAT_01d2ea4c;
      local_e0 = &DAT_005806c7;
      local_60 = (undefined4 *)&LAB_0125f734;
      FUN_01aaaecc(DAT_01d4b8c8,&local_98);
      iVar3 = DAT_01d4b8c8;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_54 = *(undefined ***)(DAT_01d4b8c8 + 0x14);
        local_50 = *(undefined4 **)(DAT_01d4b8c8 + 0x18);
        local_58 = (undefined4 ****)0x2;
        DataMemoryBarrier(0xb);
        unaff_r4 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          unaff_r4 = (undefined4 **)&DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)unaff_r4[3])(pcVar1,&local_58);
        if (iVar4 != 0) {
          local_40 = local_58;
          ppuStack_3c = local_54;
          puStack_38 = local_50;
          FUN_01aaa328(iVar3,pcVar1,unaff_r4[4],&local_40,&local_98);
        }
      }
    }
    else {
      iVar3 = DAT_01d4b8c8;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_94 = *(undefined ***)(DAT_01d4b8c8 + 0x14);
        local_90 = *(undefined4 **)(DAT_01d4b8c8 + 0x18);
        local_98 = (undefined4 ****)0x2;
        DataMemoryBarrier(0xb);
        unaff_r4 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          unaff_r4 = (undefined4 **)&DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)unaff_r4[3])(pcVar1,&local_98);
        if (iVar4 != 0) {
          local_78 = (undefined4 *)(DAT_01d4b8c8 + 0x1c);
          local_108 = (undefined4 ***)*local_78;
          local_104 = *(int *)(DAT_01d4b8c8 + 0x20);
          if (local_104 == 0) goto LAB_00a38eb0;
          local_54 = &local_e0;
          local_100 = *(undefined4 ***)(DAT_01d4b8c8 + 0x24);
          local_fc = *(undefined4 ***)(DAT_01d4b8c8 + 0x28);
          local_58 = &local_108;
          local_80 = &local_58;
          local_f8 = 0;
          local_7c = (undefined **)&DAT_00000001;
          local_dc = &local_64;
          local_64 = &local_e4;
          local_50 = (undefined4 *)&DAT_01d2ea4c;
          local_e0 = &DAT_005806c7;
          local_60 = (undefined4 *)&LAB_0125f734;
          local_40 = local_98;
          ppuStack_3c = local_94;
          puStack_38 = local_90;
          FUN_01aaa328(iVar3,pcVar1,unaff_r4[4],&local_40,&local_80);
        }
      }
    }
  }
  local_d8 = local_b8;
  local_d4 = puStack_b4;
  puStack_d0 = ppuStack_b0;
  local_cc = local_ac;
  local_c8 = local_a8;
  iStack_c4 = (int)local_a4;
  iStack_c0 = iStack_a0;
  uStack_bc = local_9c;
  if (local_b8 == (undefined4 ***)0x0) {
    uVar16 = thunk_FUN_01bee35a(0,0x2c0);
    unaff_r4 = (undefined4 **)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    if (*(char *)(unaff_r4 + 4) == '\0') {
      FUN_019ae6ac(&local_b8);
      *unaff_r4 = local_b8;
      unaff_r4[1] = puStack_b4;
      unaff_r4[2] = ppuStack_b0;
      unaff_r4[3] = local_ac;
      *(undefined1 *)(unaff_r4 + 4) = 1;
    }
    puVar5 = *unaff_r4;
    *unaff_r4 = (undefined4 *)((int)puVar5 + 1);
    unaff_r4[1] = (undefined4 *)((int)unaff_r4[1] + (uint)((undefined4 *)0xfffffffe < puVar5));
    (**(code **)*local_d4)();
    local_ec = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0xffffffff;
    puVar5 = (undefined4 *)0x0;
    local_fc = (undefined4 **)&DAT_0056d238;
    local_108 = (undefined4 ***)0x0;
  }
  else {
    puVar9 = *local_b8;
    local_fc = local_b8;
    puVar5 = puStack_b4;
    local_ec = local_ac;
    if (puStack_b4 == (undefined4 *)0x0) {
      local_108 = (undefined4 ***)0x0;
    }
    else {
      unaff_r4 = local_b8 + (int)puStack_b4 * -10 + -10;
      iStack_a0 = (int)puStack_b4 * 0x29 + 0x2d;
      local_108 = (undefined4 ***)0x8;
    }
  }
  local_f4 = local_fc + 1;
  local_f8 = ~(uint)puVar9 & 0x80808080;
  local_104 = iStack_a0;
  local_100 = unaff_r4;
  uVar16 = thunk_FUN_01bee35a(local_fc,(int)local_fc + (int)puVar5);
  iVar3 = (int)uVar16;
  puVar10 = (uint *)(iVar3 + 0x2c0);
  local_f0 = (int)((ulonglong)uVar16 >> 0x20) + 1;
  if (*(char *)(iVar3 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_b8);
    *puVar10 = (uint)local_b8;
    *(undefined4 **)(iVar3 + 0x2c4) = puStack_b4;
    *(undefined4 ***)(iVar3 + 0x2c8) = ppuStack_b0;
    *(undefined4 ***)(iVar3 + 0x2cc) = local_ac;
    *(undefined1 *)(iVar3 + 0x2d0) = 1;
  }
  local_c8 = *puVar10;
  iStack_c4 = *(int *)(iVar3 + 0x2c4);
  iStack_c0 = *(undefined4 *)(iVar3 + 0x2c8);
  uStack_bc = *(undefined4 *)(iVar3 + 0x2cc);
  *puVar10 = local_c8 + 1;
  *(uint *)(iVar3 + 0x2c4) = iStack_c4 + (uint)(0xfffffffe < local_c8);
  local_d8 = (undefined4 **)&DAT_0056d238;
  local_d4 = (undefined4 *)0x0;
  puStack_d0 = (undefined4 *)0x0;
  local_cc = (undefined4 *)0x0;
  local_b8 = local_108;
  puStack_b4 = (undefined4 *)local_104;
  ppuStack_b0 = local_100;
  local_ac = local_fc;
  local_a8 = local_f8;
  local_a4 = local_f4;
  iStack_a0 = local_f0;
  local_9c = local_ec;
  puVar5 = (undefined4 *)((uint)&local_58 | 4);
  local_10c = local_ec;
  uVar6 = local_f8;
  ppuVar11 = local_fc;
  ppuVar13 = local_f4;
  while( true ) {
    puVar9 = (undefined4 *)0x0;
    if (local_10c == (undefined4 *)0x0) break;
    ppuVar12 = ppuVar13;
    if (uVar6 == 0) {
      do {
        ppuVar13 = ppuVar12 + 1;
        puVar9 = *ppuVar12;
        ppuVar11 = ppuVar11 + -0x28;
        ppuVar12 = ppuVar13;
      } while (((uint)puVar9 & 0x80808080) == 0x80808080);
      uVar6 = (uint)puVar9 & 0x80808080 ^ 0x80808080;
      local_ac = ppuVar11;
      local_a4 = ppuVar13;
    }
    uVar7 = uVar6 - 1 & uVar6;
    uVar6 = LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                    uVar6 >> 0x18);
    iVar3 = (uVar6 >> 3) * -4 - (uVar6 >> 3);
    puVar8 = ppuVar11[iVar3 * 2 + -9];
    ppppuVar15 = (undefined4 ****)ppuVar11[iVar3 * 2 + -6];
    puVar10 = ppuVar11[iVar3 * 2 + -10];
    puVar14 = ppuVar11[iVar3 * 2 + -8];
    local_98 = (undefined4 ****)ppuVar11[iVar3 * 2 + -5];
    local_94 = (undefined **)ppuVar11[iVar3 * 2 + -4];
    local_90 = ppuVar11[iVar3 * 2 + -3];
    puStack_8c = ppuVar11[iVar3 * 2 + -2];
    puStack_88 = ppuVar11[iVar3 * 2 + -1];
    puVar9 = (undefined4 *)((int)local_10c - 1);
    local_a8 = uVar7;
    if (ppppuVar15 == (undefined4 ****)&DAT_00000009) break;
    *puVar5 = local_98;
    puVar5[1] = local_94;
    puVar5[2] = local_90;
    puVar5[3] = puStack_8c;
    puVar5[4] = puStack_88;
    local_58 = ppppuVar15;
    FUN_012767d0(&local_40,&local_58);
    cVar2 = (char)local_40;
    if ((char)local_40 == '\x06') {
      FUN_00699f78((uint)&local_40 | 4);
      FUN_019bb7e0(puVar10,puVar8);
      FUN_00a9d26c(&local_58);
    }
    else {
      FUN_01bed4e2(&local_80,(uint)&local_40 | 1,0x17);
      FUN_00a9d26c(&local_58);
      if (puVar10 != (uint *)&DAT_80000000) {
        FUN_01bed4e2((uint)&local_58 | 1,&local_80,0x17);
        local_58 = (undefined4 ****)CONCAT31(local_58._1_3_,cVar2);
        local_64 = puVar10;
        local_60 = puVar8;
        puStack_5c = puVar14;
        FUN_01274ad8(&local_40,&local_d8,&local_64,&local_58);
        if ((char)local_40 != '\x06') {
          FUN_00e0febc(&local_40);
        }
      }
    }
    uVar6 = uVar7;
    local_10c = puVar9;
  }
  local_9c = puVar9;
  FUN_00943d2c(&local_b8);
  *param_1 = local_d8;
  param_1[1] = local_d4;
  param_1[2] = puStack_d0;
  param_1[3] = local_cc;
  param_1[4] = local_c8;
  param_1[5] = iStack_c4;
  param_1[6] = iStack_c0;
  param_1[7] = uStack_bc;
  return;
}

