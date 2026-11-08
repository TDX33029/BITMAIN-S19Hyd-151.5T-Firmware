// FUN_013caa30 @ 013caa30 size=1624 calls_out=22 calls_in=2
// strings: 

void FUN_013caa30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  undefined1 local_7f0 [424];
  int *local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  uint local_4a4;
  undefined1 auStack_4a0 [352];
  undefined1 auStack_340 [32];
  uint local_320;
  undefined4 local_31c;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  undefined4 local_1d4;
  int local_1b8;
  undefined4 local_1b4;
  uint local_19c;
  int local_198;
  uint local_194;
  uint local_190;
  int local_18c;
  uint local_188;
  uint local_184;
  int local_180;
  uint local_17c;
  uint local_178;
  int local_174;
  uint local_170;
  uint local_16c [2];
  uint local_164;
  int *local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined1 auStack_154 [264];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FUN_005ed9c0(&local_648);
  if (local_4a4 == 0x80000000) {
    param_1[2] = local_648;
    param_1[3] = local_644;
    param_1[4] = local_640;
    param_1[5] = local_63c;
    param_1[6] = local_638;
    param_1[7] = local_634;
  }
  else {
    FUN_016dd1aa(local_7f0,&local_648,0x1a4);
    FUN_016dd1aa(&local_198,auStack_4a0,0x160);
    FUN_016dd1aa(auStack_340,local_7f0,0x1a4);
    local_19c = local_4a4;
    if (local_188 == local_190) {
      FUN_005fd3dc(&local_190);
    }
    puVar3 = (undefined1 *)(local_18c + local_188 * 9);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    local_188 = local_188 + 1;
    if (local_170 == local_178) {
      FUN_005fd440(&local_178);
    }
    puVar4 = (undefined4 *)(local_174 + local_170 * 8);
    *puVar4 = 0;
    puVar4[1] = 0;
    local_170 = local_170 + 1;
    if (local_17c == local_184) {
      FUN_005fd37c(&local_184);
    }
    uVar14 = local_44;
    uVar2 = local_194;
    *(undefined4 *)(local_180 + local_17c * 4) = 0;
    local_17c = local_17c + 1;
    if (local_194 == local_19c) {
      FUN_005fd4a0(&local_19c);
    }
    uVar12 = local_44;
    puVar4 = (undefined4 *)(local_198 + local_194 * 0x14);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[4] = 0;
    uVar11 = local_194 + 1;
    puVar4[3] = uVar14;
    if (uVar11 == local_19c) {
      local_194 = uVar11;
      FUN_005fd4a0(&local_19c);
    }
    uVar14 = uVar2 + 2;
    puVar4 = (undefined4 *)(local_198 + uVar11 * 0x14);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = uVar12;
    puVar4[4] = 0;
    if (uVar14 == local_19c) {
      local_194 = uVar14;
      FUN_005fd4a0(&local_19c);
    }
    uVar12 = uVar2 + 3;
    puVar4 = (undefined4 *)(local_198 + uVar14 * 0x14);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = local_44;
    puVar4[4] = 0;
    local_44 = uVar14;
    if (uVar12 == local_19c) {
      local_194 = uVar12;
      FUN_005fd4a0(&local_19c);
    }
    puVar4 = (undefined4 *)(local_198 + uVar12 * 0x14);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = uVar14;
    puVar4[4] = 0;
    local_194 = uVar2 + 4;
    local_40[0] = uVar12;
    FUN_005ec7c4(&local_648,&local_19c,local_44,1);
    piVar15 = local_648;
    if ((local_648 == (int *)0x3) &&
       (FUN_005ec7c4(&local_648,&local_19c,uVar12,1), piVar15 = local_648, local_648 == (int *)0x3))
    {
      FUN_005ec7c4(&local_648,&local_19c,0,0);
      if (local_648 == (int *)0x3) {
        FUN_013cb0bc(&local_648,auStack_340,param_3,param_4);
        if (local_648 == (int *)0x3) {
          if ((local_194 < local_19c) &&
             (iVar5 = FUN_013c93d8(&local_19c,local_194,4,0x14), iVar5 != -0x7fffffff)) {
LAB_013cb084:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4();
          }
          FUN_005ff430(&local_648,auStack_340);
          FUN_016dd1aa(auStack_154,&local_648,0x100);
          FUN_005ed5a8(&local_648,auStack_340);
          if (local_648 == (int *)0x3) {
            FUN_005ed754(auStack_340);
            FUN_005edbe4(&local_648,auStack_340);
            if ((local_648 == (int *)0x3) &&
               (FUN_005ec944(&local_648,auStack_340), local_648 == (int *)0x3)) {
              FUN_005ed81c(auStack_340);
              FUN_005eddbc(auStack_340);
              FUN_005f7bbc(&local_648,&local_320);
              if (local_160 != (int *)0x0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar5 = *local_160;
                  bVar1 = (bool)hasExclusiveAccess(local_160);
                } while (!bVar1);
                *local_160 = iVar5 + -1;
                if (iVar5 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0089ddfc(local_160,local_15c);
                }
              }
              local_160 = local_648;
              local_15c = local_644;
              uStack_158 = local_640;
              puVar8 = local_40;
              if (local_648 == (int *)0x0) {
                puVar8 = &local_48;
              }
              local_4c = *puVar8;
              if (((((local_190 <= local_188) ||
                    (iVar5 = FUN_013c93d8(&local_190,local_188,1,9), iVar5 == -0x7fffffff)) &&
                   ((local_184 <= local_17c ||
                    (iVar5 = FUN_013c93d8(&local_184,local_17c,4,4), iVar5 == -0x7fffffff)))) &&
                  ((local_178 <= local_170 ||
                   (iVar5 = FUN_013c93d8(&local_178,local_170,4,8), iVar5 == -0x7fffffff)))) &&
                 ((local_16c[0] <= local_164 ||
                  (iVar5 = FUN_013c93d8(local_16c,local_164,4,4), iVar5 == -0x7fffffff)))) {
                uVar12 = local_188;
                uVar14 = local_194;
                uVar2 = local_19c;
                FUN_016dd1aa(param_1 + 8,&local_180,0x148);
                FUN_013c94c8(&local_320);
                param_1[3] = uVar14;
                *param_1 = 0;
                param_1[1] = uVar2;
                param_1[2] = local_198;
                param_1[4] = local_190;
                param_1[5] = local_18c;
                param_1[6] = uVar12;
                param_1[7] = local_184;
                return;
              }
              goto LAB_013cb084;
            }
          }
        }
        uVar6 = local_640;
        uVar7 = local_63c;
        uVar9 = local_638;
        uVar10 = local_634;
        uVar13 = local_644;
        piVar15 = local_648;
      }
      else {
        local_30 = local_638;
        uVar6 = local_640;
        uVar7 = local_63c;
        uVar9 = local_638;
        uVar10 = local_634;
        uVar13 = local_644;
        piVar15 = local_648;
      }
    }
    else {
      local_38 = local_640;
      uStack_34 = local_63c;
      local_30 = local_638;
      uStack_2c = local_634;
      uVar6 = local_640;
      uVar7 = local_63c;
      uVar9 = local_638;
      uVar10 = local_634;
      uVar13 = local_644;
    }
    if (local_1b8 != 0) {
      thunk_FUN_016d3fb4(local_1b4);
    }
    if ((local_320 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_31c);
    }
    if (local_1e4 != -0x80000000) {
      puVar4 = (undefined4 *)(local_1e0 + 4);
      for (; local_1dc != 0; local_1dc = local_1dc + -1) {
        if (puVar4[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar4);
        }
        puVar4 = puVar4 + 3;
      }
      if (local_1e4 != 0) {
        thunk_FUN_016d3fb4(local_1e0);
      }
      if (local_1d8 != 0) {
        thunk_FUN_016d3fb4(local_1d4);
      }
    }
    FUN_013c957c(&local_19c);
    param_1[2] = piVar15;
    param_1[3] = uVar13;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
  }
  *param_1 = 1;
  return;
}

