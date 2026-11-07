// FUN_00920404 @ 00920404 size=1264 calls_out=10 calls_in=0
// strings: meteran array of length 2event open/bosminer/bosminer-config/src/support.rs:80bosminer_config::supportopen/bosminer/bosminer-config/src/support.rs | meteran array of length 2event open/bosminer/bosminer-config/src/support.rs:80bosminer_config::supportopen/bosminer/bosminer-config/src/support.rs | no more values in next_value_seed; internal error in ValueDeserializer

void FUN_00920404(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint local_418;
  undefined4 local_414;
  undefined1 auStack_3c0 [72];
  int local_378 [5];
  undefined4 local_364;
  undefined4 uStack_31c;
  int *local_308;
  int *local_304;
  undefined4 local_300;
  int *local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  undefined1 auStack_2d8 [64];
  undefined1 auStack_298 [12];
  uint local_28c;
  uint local_288;
  undefined4 local_284;
  int local_250 [28];
  int local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  uint local_1b0;
  byte local_1ac;
  uint3 local_1ab;
  undefined4 local_1a8;
  int local_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int local_180;
  uint local_17c;
  undefined4 local_178;
  undefined1 auStack_174 [4];
  undefined4 local_170;
  int local_16c;
  undefined1 auStack_128 [72];
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_98 [116];
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  piVar4 = *(int **)(param_2 + 0x14);
  iVar5 = *(int *)(param_2 + 0x18);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar2);
  }
  local_2f8 = *(undefined4 *)(param_2 + 0x30);
  uStack_2f4 = *(undefined4 *)(param_2 + 0x34);
  uStack_2f0 = *(undefined4 *)(param_2 + 0x38);
  local_378[0] = 4;
  local_2fc = piVar4 + iVar5 * 0x30;
  local_2e8 = -0x7fffffff;
  local_308 = piVar4;
  local_304 = piVar4;
  local_300 = uVar7;
  if (iVar5 != 0) {
    local_304 = piVar4 + 0x30;
    iVar1 = *piVar4;
    if (iVar1 != 4) {
      FUN_016dd1aa(auStack_298,piVar4 + 0x1c,0x48);
      FUN_016dd1aa((uint)local_250 | 4,piVar4 + 1,0x6c);
      iVar5 = 0;
      if ((local_28c != 0x80000003) && (0x80000001 < local_28c)) {
        iVar5 = 1;
        local_418 = local_288;
        local_414 = local_284;
      }
      local_250[0] = iVar1;
      FUN_01676758(auStack_128,auStack_298);
      local_178 = local_414;
      local_17c = local_418;
      local_180 = iVar5;
      FUN_016dd1aa(auStack_174,auStack_128,0x48);
      if (local_16c == 5) {
        local_16c = 5;
        iVar1 = thunk_FUN_016dd50a(local_170,
                                   "meteran array of length 2event open/bosminer/bosminer-config/src/support.rs:80bosminer_config::supportopen/bosminer/bosminer-config/src/support.rs"
                                   ,5);
        if (iVar1 != 0) goto LAB_00920a5c;
        local_1b0 = 2;
        FUN_00919614(auStack_174);
LAB_009205fc:
        local_418 = 1;
        local_1dc = CONCAT31(local_1dc._1_3_,1);
        local_1e0 = 2;
      }
      else {
LAB_00920a5c:
        FUN_00924444(&local_1b0,local_170,local_16c,&DAT_01867be0,1);
        uVar3 = local_1b0;
        FUN_00919614(auStack_174);
        if (uVar3 == 2) goto LAB_009205fc;
        local_180 = local_1a4;
        local_17c = uStack_1a0;
        local_178 = uStack_19c;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_418 >> 8;
          local_1a8 = local_414;
        }
        else {
          uVar3 = (uint)local_1ab;
          iVar5 = 1;
          local_418 = (uint)local_1ac;
        }
        local_1dc = local_418 & 0xff | uVar3 << 8;
        local_1d4 = local_1a4;
        uStack_1d0 = uStack_1a0;
        uStack_1cc = uStack_19c;
        uStack_1c8 = uStack_198;
        local_1c4 = local_194;
        uStack_1c0 = uStack_190;
        uStack_1bc = uStack_18c;
        uStack_1b8 = uStack_188;
        uStack_1b4 = uStack_184;
        local_1e0 = iVar5;
        local_1d8 = local_1a8;
      }
      iVar1 = local_1e0;
      FUN_016dd1aa(&local_e0,auStack_298,0x48);
      FUN_016dd1aa(auStack_98,local_250,0x70);
      if (local_378[0] != 4) {
        FUN_00919614(auStack_3c0);
        FUN_008f91a8(local_378);
      }
      FUN_016dd1aa(auStack_3c0,&local_e0,0xb8);
      FUN_016dd1aa(auStack_2d8,(int)&local_1dc + 1,0x2b);
      iVar5 = local_2e8;
      iVar2 = local_378[0];
      if (iVar1 == 2) {
        if ((local_418 & 1) == 0) goto LAB_00920b10;
        if (local_2e8 == -0x7fffffff) {
          local_378[0] = 4;
          if (iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",
                         0x8d,&DAT_0187eedc);
          }
          FUN_016dd1aa(local_250,auStack_3c0,0x48);
                    /* WARNING: Could not recover jumptable at 0x0092070c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00920710 + *(int *)(&DAT_00920710 + iVar2 * 4)))
                    (&DAT_00920710,uStack_31c,local_364);
          return;
        }
        FUN_009244cc(&local_e0,
                     "meteran array of length 2event open/bosminer/bosminer-config/src/support.rs:80bosminer_config::supportopen/bosminer/bosminer-config/src/support.rs"
                     ,5);
        *param_1 = local_e0;
        param_1[1] = iStack_dc;
        param_1[2] = iStack_d8;
        param_1[3] = iStack_d4;
        param_1[4] = iStack_d0;
        param_1[5] = iStack_cc;
        param_1[6] = local_c8;
        param_1[7] = iStack_c4;
        param_1[8] = iStack_c0;
        param_1[9] = iStack_bc;
        param_1[10] = iStack_b8;
        param_1[0xb] = iStack_b4;
        iVar1 = local_2e4;
        iVar2 = local_2e0;
      }
      else {
        FUN_016dd1aa((int)param_1 + 5,auStack_2d8,0x2b);
        *(char *)(param_1 + 1) = (char)local_418;
        *param_1 = iVar1;
        iVar5 = local_2e8;
        iVar1 = local_2e4;
        iVar2 = local_2e0;
      }
      if (-0x7fffffff < iVar5) {
        puVar6 = (undefined4 *)(iVar1 + 0x10);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          if (puVar6[-4] != 0) {
            thunk_FUN_016d3fb4(puVar6[-3]);
          }
          if (puVar6[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar6);
          }
          puVar6 = puVar6 + 6;
        }
        if (iVar5 != 0) {
          thunk_FUN_016d3fb4(iVar1);
        }
      }
      FUN_009248d4(&local_308);
      goto LAB_00920b38;
    }
  }
LAB_00920b10:
  *param_1 = 2;
  iVar1 = local_2e8;
  if (local_2e8 == -0x7fffffff) {
    iVar1 = -0x80000000;
  }
  param_1[1] = iVar1;
  param_1[2] = local_2e4;
  param_1[3] = local_2e0;
  FUN_009248d4(&local_308);
LAB_00920b38:
  if (local_378[0] != 4) {
    FUN_00919614(auStack_3c0);
    FUN_008f91a8(local_378);
  }
  return;
}

