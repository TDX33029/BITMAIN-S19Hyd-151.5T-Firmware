// FUN_01072d5c @ 01072d5c size=1336 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01072d5c(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int local_340;
  undefined1 *local_32c;
  undefined1 auStack_328 [72];
  undefined1 auStack_2e0 [72];
  undefined1 auStack_298 [72];
  int *local_250;
  uint uStack_24c;
  int *piStack_248;
  uint uStack_244;
  int *piStack_240;
  uint uStack_23c;
  undefined1 auStack_238 [72];
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int local_1cc;
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int local_1b0;
  int local_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int *local_1a0;
  uint local_19c;
  int *local_198;
  uint uStack_194;
  int *piStack_190;
  uint uStack_18c;
  int *piStack_188;
  uint uStack_184;
  undefined4 local_148;
  int *local_140;
  int local_138;
  int local_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int local_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int *local_f0;
  uint local_ec;
  int *local_e8;
  uint local_e4;
  int *piStack_e0;
  uint uStack_dc;
  int *piStack_d8;
  uint uStack_d4;
  int *local_d0;
  uint uStack_cc;
  int *piStack_c8;
  uint uStack_c4;
  int *piStack_c0;
  uint uStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int local_74;
  undefined1 auStack_70 [76];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar5 = 0x101;
    bVar8 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    *(uint *)(param_2 + 0xa0) = (uint)bVar8;
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    if (bVar8) {
      uVar5 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined2 *)(param_2 + 0x495) = 0;
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    iVar6 = param_2 + 0xa0;
    uVar7 = *(undefined4 *)(param_2 + 0x490);
    *(undefined4 *)(param_2 + 0xa4) = uVar5;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(int *)(param_2 + 0x1d0) = iVar6;
    *(undefined4 *)(param_2 + 0x1d4) = uVar7;
LAB_01072e44:
    *(int *)(param_2 + 0x1d8) = iVar6;
    *(undefined4 *)(param_2 + 0x1dc) = uVar7;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(int *)(param_2 + 0x3f0) = iVar6;
LAB_01072e80:
    FUN_01072358(&local_1f0,param_2 + 0x1e8,param_3);
    if (local_1f0 != 4 || local_1ec != 0) {
      FUN_01bed4e2(auStack_238,&local_1e8,0x48);
      local_250 = local_1a0;
      uStack_24c = local_19c;
      piStack_248 = local_198;
      uStack_244 = uStack_194;
      piStack_240 = piStack_190;
      uStack_23c = uStack_18c;
      FUN_01071974(param_2 + 0x1e8);
      if (local_1f0 == 3 && local_1ec == 0) {
        FUN_01bed4e2(auStack_298,auStack_238,0x48);
        *(undefined1 *)(param_2 + 0x1e1) = 0;
        local_e8 = *(int **)(param_2 + 0x1dc);
        do {
          iVar6 = *local_e8;
          bVar8 = (bool)hasExclusiveAccess(local_e8);
        } while (!bVar8);
        *local_e8 = iVar6 + 1;
        if (iVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x10732bc);
          (*pcVar1)();
        }
        FUN_01bed4e2(&local_138,auStack_238,0x48);
        local_e4 = local_e4 & 0xffffff00;
        iVar6 = thunk_FUN_01be5118(0x58);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x58);
        }
        FUN_01bed4e2(iVar6,&local_138,0x58);
        *(int *)(param_2 + 0x1e8) = iVar6;
        puVar3 = &DAT_01c1db68;
        *(undefined **)(param_2 + 0x1ec) = &DAT_01c1db68;
        goto LAB_01073020;
      }
      FUN_01bed4e2(&local_1e0,auStack_238,0x48);
      local_198 = local_250;
      uStack_194 = uStack_24c;
      piStack_190 = piStack_248;
      uStack_18c = uStack_244;
      piStack_188 = piStack_240;
      uStack_184 = uStack_23c;
      local_1e4 = local_1ec;
      local_1e8 = local_1f0;
      local_1ec = 0;
      local_1f0 = 3;
      FUN_00d5b424(&local_78,&local_1f0,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      piVar4 = *(int **)(param_2 + 0x1dc);
      *(undefined1 *)(param_2 + 0x1e2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar8 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar8);
      *piVar4 = iVar6 + -1;
      goto LAB_010731c4;
    }
    uVar2 = 3;
LAB_01073050:
    local_32c = (undefined1 *)(param_2 + 0x1e0);
    *local_32c = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d8ac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d8ac);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      iVar6 = *(int *)(param_2 + 0x1d0);
      uVar7 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_01072e44;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22498);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22498);
    case 3:
      goto LAB_01072e80;
    case 4:
      iVar6 = *(int *)(param_2 + 0x1e8);
      puVar3 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_01073020:
    (**(code **)(puVar3 + 0xc))(&local_138,iVar6,param_3);
    if (local_138 == 4 && local_134 == 0) {
      uVar2 = 4;
      goto LAB_01073050;
    }
    local_b8 = local_130;
    iStack_b4 = iStack_12c;
    iStack_b0 = iStack_128;
    iStack_ac = iStack_124;
    iStack_a8 = iStack_120;
    local_a4 = local_11c;
    iStack_a0 = iStack_118;
    iStack_9c = iStack_114;
    iStack_98 = iStack_110;
    iStack_94 = iStack_10c;
    local_90 = local_108;
    iStack_8c = iStack_104;
    iStack_88 = iStack_100;
    iStack_84 = iStack_fc;
    iStack_80 = iStack_f8;
    iStack_7c = iStack_f4;
    local_d0 = local_e8;
    uStack_cc = local_e4;
    piStack_c8 = piStack_e0;
    uStack_c4 = uStack_dc;
    piStack_c0 = piStack_d8;
    uStack_bc = uStack_d4;
    FUN_01139b38(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
    if (local_138 == 3 && local_134 == 0) {
      local_1f0 = local_b8;
      local_1ec = iStack_b4;
      local_1e8 = iStack_b0;
      local_1e4 = iStack_ac;
      local_1e0 = iStack_a8;
      local_1dc = local_a4;
      iStack_1d8 = iStack_a0;
      iStack_1d4 = iStack_9c;
      iStack_1d0 = iStack_98;
      local_1cc = iStack_94;
      local_1c8 = local_90;
      iStack_1c4 = iStack_8c;
      iStack_1c0 = iStack_88;
      iStack_1bc = iStack_84;
      local_1b8 = iStack_80;
      iStack_1b4 = iStack_7c;
      local_1b0 = 3;
      local_1ac = 0;
      local_148 = 0;
      local_140 = local_f0;
      if (local_b8 != 3 || iStack_b4 != 0) {
        FUN_011de050();
      }
    }
    else {
      local_1e8 = local_138;
      local_1e4 = local_134;
      local_1e0 = local_b8;
      local_1dc = iStack_b4;
      iStack_1d8 = iStack_b0;
      iStack_1d4 = iStack_ac;
      iStack_1d0 = iStack_a8;
      local_1cc = local_a4;
      local_1c8 = iStack_a0;
      iStack_1c4 = iStack_9c;
      iStack_1c0 = iStack_98;
      iStack_1bc = iStack_94;
      local_1b8 = local_90;
      iStack_1b4 = iStack_8c;
      local_1b0 = iStack_88;
      local_1ac = iStack_84;
      iStack_1a8 = iStack_80;
      iStack_1a4 = iStack_7c;
      local_19c = local_ec;
      local_1a0 = local_f0;
      local_198 = local_d0;
      uStack_194 = uStack_cc;
      piStack_190 = piStack_c8;
      uStack_18c = uStack_c4;
      piStack_188 = piStack_c0;
      uStack_184 = uStack_bc;
      local_1ec = 0;
      local_1f0 = 3;
    }
    FUN_00d5b424(&local_78,&local_1f0,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                 *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
    piVar4 = *(int **)(param_2 + 0x1dc);
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar6 + -1;
LAB_010731c4:
    local_32c = (undefined1 *)(param_2 + 0x1e0);
    local_340 = param_2 + 0xb0;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_2 + 0x1dc));
    }
    FUN_01bed4e2(auStack_328,auStack_70,0x48);
    *local_32c = 1;
    if (local_78 != 3 || local_74 != 0) {
      FUN_01bed4e2(auStack_2e0,auStack_328,0x48);
      FUN_0107186c(local_340);
      FUN_01bed4e2(param_1 + 2,auStack_2e0,0x48);
      *(undefined1 *)(param_2 + 0x495) = 0;
      uVar2 = 1;
      goto LAB_0107321c;
    }
  }
  local_74 = 0;
  local_78 = 3;
  uVar2 = 3;
LAB_0107321c:
  *(undefined1 *)(param_2 + 0x494) = uVar2;
  *param_1 = local_78;
  param_1[1] = local_74;
  return;
}

