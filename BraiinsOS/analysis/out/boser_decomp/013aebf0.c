// FUN_013aebf0 @ 013aebf0 size=1640 calls_out=17 calls_in=1
// strings: hpack::encodeh2::hpack::encoder/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/hpack/encoder.rs | tracing::span::active | hpack::encodeh2::hpack::encoder/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/hpack/encoder.rs | hpack::encodeh2::hpack::encoder/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/hpack/encoder.rs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013aebf0(undefined4 *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  uint local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  uint local_294;
  undefined4 local_290 [5];
  int local_27c;
  int local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined1 auStack_26c [92];
  undefined4 **local_210;
  undefined2 *puStack_20c;
  uint local_208;
  int local_204;
  int local_200;
  undefined4 uStack_1fc;
  int local_1f8;
  undefined4 uStack_1f4;
  uint local_1f0 [12];
  undefined4 **local_1c0;
  undefined2 *local_1bc;
  uint *local_1b8;
  undefined1 *local_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  char local_19c;
  undefined3 local_19b;
  uint local_198;
  uint local_188;
  uint local_184;
  uint local_178;
  uint local_174;
  uint local_168;
  uint local_164;
  uint local_158;
  uint local_154;
  short local_148;
  uint local_130;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined4 *local_80 [10];
  undefined4 *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  iVar7 = *(int *)(param_2 + 0x24);
  iVar13 = *(int *)(param_2 + 0x28) * 0x34 + iVar7;
  local_294 = 1;
  puVar10 = (undefined4 *)((uint)&local_1c0 | 4);
  local_2a0 = 1;
  local_298 = 0;
  local_29c = 0;
  iVar14 = *(int *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar12 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  uVar9 = *(undefined4 *)(param_2 + 0x34);
  *puVar10 = *(undefined4 *)(param_2 + 0x2c);
  puVar10[1] = uVar5;
  puVar10[2] = uVar9;
  if (iVar14 != 0) {
    thunk_FUN_01be4678(uVar4);
  }
  FUN_01bed4e2(auStack_26c,param_2 + 0x40,0x58);
  local_290[0] = 0;
  puVar10 = (undefined4 *)((uint)local_290 | 4);
  *puVar10 = local_1c0;
  puVar10[1] = local_1bc;
  puVar10[2] = local_1b8;
  puVar10[3] = local_1b4;
  local_27c = iVar7;
  local_278 = iVar7;
  uStack_274 = uVar12;
  iStack_270 = iVar13;
  if ((DAT_01d50f88 == 0) &&
     ((DAT_01d4dc70 - 1 < 2 ||
      ((DAT_01d4dc70 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4dc68), cVar3 != '\0')))))) {
    iVar7 = FUN_01aaa278(DAT_01d4dc68);
    if (iVar7 == 0) goto LAB_013aeca8;
    local_1b8 = (uint *)(DAT_01d4dc68 + 0x1c);
    local_1bc = (undefined2 *)0x0;
    local_1c0 = (undefined4 **)&SUB_00000004;
    FUN_01aaa548(&local_210,DAT_01d4dc68,&local_1c0);
  }
  else {
LAB_013aeca8:
    local_1a8 = DAT_01d4dc68;
    local_1b8 = (uint *)0x2;
    if (DAT_01d51ae9 == '\0') {
      local_50 = DAT_01d4dc68 + 0x1c;
      local_54 = 0;
      local_58 = (undefined4 *)0x4;
      FUN_01aaa3e0(&local_1c0,&local_58);
    }
    local_210 = local_1c0;
    puStack_20c = local_1bc;
    local_208 = (uint)local_1b8;
    local_204 = (int)local_1b4;
    local_200 = local_1b0;
    uStack_1fc = uStack_1ac;
    local_1f8 = local_1a8;
    uStack_1f4 = uStack_1a4;
  }
  if (local_208 != 2) {
    if ((local_208 & 1) == 0) {
      iVar7 = local_204;
    }
    else {
      iVar7 = local_204 + (*(int *)(local_200 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_200 + 0x30))(iVar7,&local_210);
  }
  if ((DAT_01d51ae9 == '\0') && (local_1f8 != 0)) {
    local_54 = *(uint *)(local_1f8 + 0x10);
    local_58 = *(undefined4 **)(local_1f8 + 0xc);
    local_1c0 = &local_58;
    local_1bc = &DAT_0132b6a0;
    FUN_006404a8(&local_210,"tracing::span::active",0x15,&DAT_00594cdd,&local_1c0);
  }
  uVar11 = *param_3;
  uVar8 = param_3[1];
  uVar6 = param_3[2];
  *param_3 = 2;
  if (uVar11 != 2) {
    FUN_013b5334(param_3 + 3,uVar8);
    if ((uVar11 & 1) != 0) {
      FUN_013b5334(param_3 + 3,uVar6);
      FUN_0138aa64(uVar8,5,0x20,&local_2a0);
      uVar8 = uVar6;
    }
    FUN_0138aa64(uVar8,5,0x20,&local_2a0);
  }
  local_1f0[0] = 5;
  FUN_01bed4e2(&local_1c0,local_290,0x7c);
  sVar2 = local_148;
  uVar1 = local_158;
  uVar11 = local_168;
  uVar6 = local_178;
  uVar8 = local_188;
  cVar3 = local_19c;
  if (local_19c == '\f') {
LAB_013aef64:
    local_19c = '\f';
    FUN_013b4c44(&local_58,&local_1c0);
    if (local_58 == (undefined4 *)0x2) {
      FUN_013ab1a8(&local_1c0);
      if (local_1f0[0] != 5) {
        FUN_013ab184(local_1f0);
      }
      FUN_0134c39c(&local_210);
      FUN_01834abc(&local_210);
      uVar8 = local_294;
      if ((local_294 & 1) == 0) {
        local_58 = &DAT_01d2e520;
      }
      else {
        local_d0 = local_29c + (local_294 >> 5);
        local_d4 = local_2a0 - (local_294 >> 5);
        local_d8 = local_298 + (local_294 >> 5);
        FUN_01283524(&local_58,&local_d8);
        local_80[0] = (undefined4 *)(uVar8 >> 5);
        if (local_50 < uVar8 >> 5) {
          local_1f0[0] = local_50;
          local_1b4 = &LAB_01a6a304;
          local_1bc = (undefined2 *)&LAB_01a6a304;
          local_1c0 = local_80;
          local_1b8 = local_1f0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_1c0,&DAT_01d2e534);
        }
        local_29c = local_50 - (int)local_80[0];
        local_2a0 = local_54 + (int)local_80[0];
        local_294 = local_4c;
      }
      param_1[1] = local_2a0;
      param_1[2] = local_29c;
      param_1[3] = local_294;
      *param_1 = local_58;
      return;
    }
    local_130 = local_50;
    puVar10 = local_58;
    uVar6 = local_54;
  }
  else {
    bVar15 = local_19c != '\v';
    local_19c = '\v';
    if (bVar15) {
      local_130 = local_198;
      puVar10 = (undefined4 *)0x3;
      uVar6 = CONCAT31(local_19b,cVar3);
      goto LAB_013af088;
    }
    local_188 = 0;
    if (uVar8 == 0) {
      local_178 = 0;
      if (uVar6 == 0) {
        local_168 = 0;
        if (uVar11 != 0) {
          local_130 = local_164;
          puVar10 = (undefined4 *)0x5;
          uVar6 = uVar11;
          goto LAB_013af088;
        }
        local_158 = 0;
        if (uVar1 != 0) {
          local_130 = local_154;
          puVar10 = (undefined4 *)0x6;
          uVar6 = uVar1;
          goto LAB_013af088;
        }
        local_148 = 0;
        if (sVar2 != 0) {
          puVar10 = (undefined4 *)0x7;
          uVar6 = local_2a8 & 0xffff0000;
          goto LAB_013af088;
        }
        FUN_008e1044(&local_19c);
        goto LAB_013aef64;
      }
      puVar10 = (undefined4 *)0x2;
      local_184 = local_174;
    }
    else {
      puVar10 = (undefined4 *)0x4;
      uVar6 = uVar8;
    }
    local_130 = local_184;
  }
LAB_013af088:
  iVar7 = (int)puVar10 + -1;
  if (puVar10 == (undefined4 *)0x0) {
    iVar7 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x013af0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_013af0a8 + (&DAT_013af0a8)[iVar7]))(uVar6 >> 0x10,7);
  return;
}

