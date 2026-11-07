// FUN_0091c278 @ 0091c278 size=2164 calls_out=12 calls_in=0
// strings: user-- | enabled | user-- | no more values in next_value_seed; internal error in ValueDeserializer

/* WARNING: Removing unreachable block (ram,0x0091ce20) */

void FUN_0091c278(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int unaff_r8;
  uint uVar9;
  int local_424;
  int local_420;
  int local_41c;
  int local_3e8;
  uint local_3b8;
  uint local_3b0;
  undefined4 local_3ac;
  uint local_3a8;
  undefined1 auStack_3a0 [72];
  int local_358;
  undefined4 local_354;
  undefined4 local_34c;
  undefined4 local_344;
  undefined4 local_338;
  int *local_2e8;
  int *local_2e4;
  undefined4 local_2e0;
  int *local_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined1 auStack_2c8 [48];
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
  undefined4 local_16c;
  undefined1 auStack_128 [72];
  int local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_98 [116];
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  piVar5 = *(int **)(param_2 + 0x14);
  iVar6 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar3 = iVar2 * 4 + 4, iVar2 + iVar3 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar3);
  }
  local_2d8 = *(undefined4 *)(param_2 + 0x30);
  uStack_2d4 = *(undefined4 *)(param_2 + 0x34);
  uStack_2d0 = *(undefined4 *)(param_2 + 0x38);
  local_358 = 4;
  local_2dc = piVar5 + iVar6 * 0x30;
  local_2e8 = piVar5;
  local_2e0 = uVar7;
  if (iVar6 == 0) {
    uVar8 = 0x80000000;
    local_3b8 = 0x80000001;
    local_3a8 = 0x80000000;
    local_2e4 = piVar5;
  }
  else {
    uVar8 = 0x80000000;
    local_3b8 = 0x80000001;
    local_3a8 = 0x80000000;
    do {
      local_2e4 = piVar5 + 0x30;
      iVar2 = *piVar5;
      if (iVar2 == 4) break;
      FUN_016dd1aa(auStack_298,piVar5 + 0x1c,0x48);
      FUN_016dd1aa((uint)local_250 | 4,piVar5 + 1,0x6c);
      iVar3 = 0;
      if ((local_28c != 0x80000003) && (0x80000001 < local_28c)) {
        iVar3 = 1;
        local_3b0 = local_288;
        local_3ac = local_284;
      }
      local_250[0] = iVar2;
      FUN_01676758(auStack_128,auStack_298);
      local_178 = local_3ac;
      local_17c = local_3b0;
      local_180 = iVar3;
      FUN_016dd1aa(auStack_174,auStack_128,0x48);
      FUN_0090f7cc(&local_1b0,local_170,local_16c);
      FUN_00919614(auStack_174);
      uVar9 = (uint)local_1ac;
      if (local_1b0 == 2) {
        local_1dc = CONCAT31(local_1dc._1_3_,local_1ac);
        local_1e0 = 2;
      }
      else {
        local_180 = local_1a4;
        local_17c = uStack_1a0;
        local_178 = uStack_19c;
        local_170 = local_194;
        local_16c = uStack_190;
        if ((local_1b0 & 1) == 0) {
          uVar4 = local_3b0 >> 8;
          uVar9 = local_3b0 & 0xff;
          local_1d8 = local_3ac;
        }
        else {
          uVar4 = (uint)local_1ab;
          iVar3 = 1;
          local_1d8 = local_1a8;
        }
        local_1dc = uVar9 | uVar4 << 8;
        local_1d4 = local_1a4;
        uStack_1d0 = uStack_1a0;
        uStack_1cc = uStack_19c;
        uStack_1c8 = uStack_198;
        local_1c4 = local_194;
        uStack_1c0 = uStack_190;
        uStack_1bc = uStack_18c;
        uStack_1b8 = uStack_188;
        uStack_1b4 = uStack_184;
        local_1e0 = iVar3;
      }
      iVar2 = local_1e0;
      FUN_016dd1aa(&local_e0,auStack_298,0x48);
      FUN_016dd1aa(auStack_98,local_250,0x70);
      if (local_358 != 4) {
        FUN_00919614(auStack_3a0);
        FUN_008f91a8(&local_358);
      }
      FUN_016dd1aa(auStack_3a0,&local_e0,0xb8);
      FUN_016dd1aa(auStack_2c8,(int)&local_1dc + 1,0x2b);
      iVar3 = local_358;
      if (iVar2 != 2) {
        FUN_016dd1aa((int)param_1 + 5,auStack_2c8,0x2b);
        *(char *)(param_1 + 1) = (char)uVar9;
        *param_1 = iVar2;
LAB_0091cacc:
        bVar1 = true;
        goto LAB_0091cc54;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar9) {
      case 0:
        local_358 = 4;
        if (iVar3 == 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",0x8d
                       ,&DAT_0187eedc);
        }
        FUN_016dd1aa(local_250,auStack_3a0,0x48);
                    /* WARNING: Could not recover jumptable at 0x0091c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&LAB_0091c670 + *(int *)(&LAB_0091c670 + iVar3 * 4)))
                  (local_34c,local_344,local_338,local_354);
        return;
      case 1:
        if (local_3a8 != 0x80000000) {
          FUN_009244cc(&local_e0,"url",3);
LAB_0091ce64:
          *param_1 = local_e0;
          param_1[1] = local_dc;
          param_1[2] = local_d8;
          param_1[3] = local_d4;
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = local_c8;
          param_1[7] = iStack_c4;
          param_1[8] = local_c0;
          param_1[9] = iStack_bc;
          param_1[10] = iStack_b8;
          param_1[0xb] = iStack_b4;
          bVar1 = true;
          goto LAB_0091cc54;
        }
        FUN_0091bba4(&local_e0,auStack_3a0);
        local_3a8 = local_dc;
        if (local_e0 != 2) {
          local_3a8 = 0;
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = local_c8;
          param_1[7] = iStack_c4;
          param_1[8] = local_c0;
          param_1[9] = iStack_bc;
          param_1[10] = iStack_b8;
          param_1[0xb] = iStack_b4;
          bVar1 = true;
          *param_1 = local_e0;
          param_1[1] = local_dc;
          param_1[2] = local_d8;
          param_1[3] = local_d4;
          goto LAB_0091cc54;
        }
        local_3e8 = local_d8;
        iVar6 = local_d4;
        break;
      case 2:
        if (uVar8 != 0x80000000) {
          FUN_009244cc(&local_e0,"user--",4);
          goto LAB_0091ce64;
        }
        FUN_0091bba4(&local_e0,auStack_3a0);
        if (local_e0 != 2) {
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = local_c8;
          param_1[7] = iStack_c4;
          param_1[8] = local_c0;
          param_1[9] = iStack_bc;
          param_1[10] = iStack_b8;
          param_1[0xb] = iStack_b4;
          uVar8 = 0;
          *param_1 = local_e0;
          param_1[1] = local_dc;
          param_1[2] = local_d8;
          param_1[3] = local_d4;
          goto LAB_0091cacc;
        }
        local_420 = local_d8;
        uVar8 = local_dc;
        unaff_r8 = local_d4;
        break;
      case 3:
        if (local_3b8 != 0x80000001) {
          FUN_009244cc(&local_e0,&DAT_0056aa78,8);
          goto LAB_0091ce64;
        }
        FUN_0091d048(&local_e0,auStack_3a0);
        local_41c = local_d8;
        local_424 = local_d4;
        local_3b8 = local_dc;
        if (local_e0 != 2) {
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = local_c8;
          param_1[7] = iStack_c4;
          param_1[8] = local_c0;
          param_1[9] = iStack_bc;
          param_1[10] = iStack_b8;
          param_1[0xb] = iStack_b4;
          bVar1 = true;
          *param_1 = local_e0;
          param_1[1] = local_dc;
          param_1[2] = local_d8;
          param_1[3] = local_d4;
          goto joined_r0x0091cd64;
        }
        break;
      case 4:
        goto LAB_0091cad8;
      }
      piVar5 = local_2e4;
    } while (local_2e4 != local_2dc);
LAB_0091cad8:
  }
  uVar9 = local_3a8;
  iVar2 = local_3e8;
  if (local_3a8 == 0x80000000) {
    FUN_009243d8(&local_e0,"url",3);
    iVar6 = local_d4;
    uVar9 = local_dc;
    iVar2 = local_d8;
    if (local_e0 == 2) goto LAB_0091cb34;
    local_3a8 = 0;
    param_1[4] = local_d0;
    param_1[5] = iStack_cc;
    param_1[6] = local_c8;
    param_1[7] = iStack_c4;
    param_1[8] = local_c0;
    param_1[9] = iStack_bc;
    param_1[10] = iStack_b8;
    param_1[0xb] = iStack_b4;
    bVar1 = true;
    *param_1 = local_e0;
    param_1[1] = local_dc;
    param_1[2] = local_d8;
    param_1[3] = local_d4;
LAB_0091cc54:
    if ((-0x7fffffff < (int)local_3b8) && (local_3b8 != 0)) {
      thunk_FUN_016d3fb4(local_41c);
    }
joined_r0x0091cd64:
    if ((uVar8 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_420);
    }
    if ((bool)(bVar1 & (local_3a8 & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(local_3e8);
    }
    FUN_009248d4(&local_2e8);
  }
  else {
LAB_0091cb34:
    if (uVar8 == 0x80000000) {
      bVar1 = local_3a8 == 0x80000000;
      FUN_009243d8(&local_e0,"user--",4);
      uVar8 = local_dc;
      unaff_r8 = local_d4;
      if (local_e0 != 2) {
        param_1[4] = local_d0;
        param_1[5] = iStack_cc;
        param_1[6] = local_c8;
        param_1[7] = iStack_c4;
        param_1[8] = local_c0;
        param_1[9] = iStack_bc;
        param_1[10] = iStack_b8;
        param_1[0xb] = iStack_b4;
        uVar8 = 0;
        *param_1 = local_e0;
        param_1[1] = local_dc;
        param_1[2] = local_d8;
        param_1[3] = local_d4;
        if (uVar9 != 0) {
          thunk_FUN_016d3fb4(iVar2);
        }
        goto LAB_0091cc54;
      }
    }
    else {
      local_d8 = local_420;
    }
    param_1[8] = local_41c;
    param_1[9] = local_424;
    *(undefined1 *)(param_1 + 10) = 2;
    *param_1 = 2;
    param_1[1] = uVar9;
    param_1[2] = iVar2;
    if (local_3b8 == 0x80000001) {
      local_3b8 = 0x80000000;
    }
    param_1[3] = iVar6;
    param_1[4] = uVar8;
    param_1[5] = local_d8;
    param_1[6] = unaff_r8;
    param_1[7] = local_3b8;
    FUN_009248d4(&local_2e8);
  }
  if (local_358 != 4) {
    FUN_00919614(auStack_3a0);
    FUN_008f91a8(&local_358);
  }
  return;
}

