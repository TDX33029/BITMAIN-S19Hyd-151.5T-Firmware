// FUN_00faa8e0 @ 00faa8e0 size=3644 calls_out=15 calls_in=3
// strings: BUG: Unable to decode reflection descriptor

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00faa8e0(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 *param_6,undefined *param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *local_180;
  undefined4 local_17c;
  undefined *local_178;
  undefined4 uStack_174;
  undefined4 *local_170;
  int *local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 **local_138;
  undefined1 *local_134;
  undefined *puStack_130;
  undefined4 **local_128;
  undefined1 *local_124;
  undefined *local_120;
  undefined2 *local_11c;
  undefined4 uStack_118;
  int *local_b0;
  undefined4 *local_ac;
  undefined *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  
  do {
    iVar6 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar6 + 1;
  if (-1 < iVar6) {
    local_9c = 0;
    local_a0 = 4;
    local_a4 = 0;
    local_a8 = (undefined *)0x0;
    local_ac = (undefined4 *)0x4;
    local_b0 = (undefined4 *)0x0;
    local_8c = CONCAT22(local_8c._2_2_,0x101);
    local_90 = 0;
    local_94 = 4;
    local_98 = 0;
    FUN_01a9fed0(&local_120,&local_b0,&DAT_003f365f,0xb2c9);
    FUN_01a9ea48(&local_b0,&local_120);
    uVar5 = local_a0;
    uVar14 = local_a4;
    puVar4 = local_a8;
    puVar17 = local_ac;
    piVar3 = local_b0;
    if (local_b0 == (undefined4 *)0x2) {
      puVar17 = (undefined4 *)((uint)&local_b0 | 4);
      local_120 = (undefined *)*puVar17;
      local_11c = (undefined2 *)puVar17[1];
      uStack_118 = puVar17[2];
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: Unable to decode reflection descriptor",0x2b,&local_120,&DAT_01c1b058,
                   &DAT_01c1b49c);
    }
    puVar7 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar7 = 1;
    puVar7[1] = 1;
    do {
      iVar6 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar6 + 1;
    if (-1 < iVar6) {
      puVar8 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *puVar8 = 1;
      puVar8[1] = 1;
      puVar8[2] = param_3;
      do {
        iVar6 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = iVar6 + 1;
      if (-1 < iVar6) {
        puVar9 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        *puVar9 = 1;
        puVar9[1] = 1;
        puVar9[2] = param_2;
        puVar10 = (undefined4 *)thunk_FUN_01be5118(0x10);
        if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x10);
        }
        *puVar10 = 1;
        puVar10[1] = 1;
        puVar10[2] = param_1;
        puVar10[3] = param_4;
        puVar11 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        *puVar11 = 1;
        puVar11[1] = 1;
        puVar11[2] = param_5;
        local_ac = (undefined4 *)0x1;
        local_b0 = (undefined4 *)0x1;
        local_a8 = (undefined *)*param_6;
        local_a4 = param_6[1];
        local_a0 = param_6[2];
        local_9c = param_6[3];
        local_98 = param_6[4];
        local_94 = param_6[5];
        local_90 = param_6[6];
        local_8c = param_6[7];
        puVar12 = (undefined4 *)thunk_FUN_01be5118(0x28);
        if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x28);
        }
        *puVar12 = local_b0;
        puVar12[1] = local_ac;
        puVar12[2] = local_a8;
        puVar12[3] = local_a4;
        puVar12[4] = local_a0;
        puVar12[5] = local_9c;
        puVar12[6] = local_98;
        puVar12[7] = local_94;
        puVar12[8] = local_90;
        puVar12[9] = local_8c;
        puVar13 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        *puVar13 = 1;
        puVar13[1] = 1;
        puVar13[2] = puVar12;
        local_a4 = param_8;
        local_a8 = param_7;
        local_a0 = param_9;
        local_ac = (undefined4 *)0x1;
        local_b0 = (undefined4 *)0x1;
        puVar12 = (undefined4 *)thunk_FUN_01be5118(0x18);
        if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x18);
        }
        *puVar12 = local_b0;
        puVar12[1] = local_ac;
        puVar12[2] = local_a8;
        puVar12[3] = local_a4;
        puVar12[4] = local_a0;
        puVar12[5] = local_9c;
        local_b0 = piVar3;
        local_ac = puVar17;
        local_a8 = puVar4;
        local_a4 = uVar14;
        local_a0 = uVar5;
        uVar14 = FUN_01a8c79c();
        uVar14 = FUN_010a5ecc(uVar14,&local_b0);
        do {
          iVar6 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar6 + 1;
        if (-1 < iVar6) {
          local_120 = &DAT_01c1e180;
          local_11c = &DAT_0132b6a0;
          FUN_00664898(&local_b0,&DAT_00574ea5,&local_120);
          puVar4 = local_a8;
          puVar17 = local_ac;
          piVar3 = local_b0;
          FUN_00711858(&local_120,uVar14);
          puVar15 = (undefined4 *)thunk_FUN_01be5118(0x18);
          if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x18);
          }
          puVar15[4] = puVar7;
          puVar15[5] = param_3;
          puVar15[2] = 0;
          *puVar15 = 0;
          local_b0 = (undefined4 *)0x3;
          local_a8 = &DAT_01c1c8a0;
          local_ac = puVar15;
          FUN_00ff5734(&local_180,&local_120,puVar17,puVar4,&local_b0);
          if (local_180 != (undefined4 *)0x80000001) {
            local_138 = &local_b0;
            local_b0 = local_180;
            local_ac = (undefined4 *)local_17c;
            local_a8 = local_178;
            local_134 = &LAB_012b97d8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_138,&DAT_01c1d24c);
          }
          FUN_01bed4e2(&local_a8,&local_120,0x70);
          local_ac = (undefined4 *)0x1;
          local_b0 = (undefined4 *)0x1;
          iVar6 = thunk_FUN_01be5118(0x78);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x78);
          }
          FUN_01bed4e2(iVar6,&local_b0,0x78);
          FUN_019bb7e0(piVar3,puVar17);
          local_120 = &DAT_01c1e198;
          local_11c = &DAT_0132b6a0;
          FUN_00664898(&local_b0,&DAT_00574ea5,&local_120);
          puVar4 = local_a8;
          puVar17 = local_ac;
          piVar3 = local_b0;
          FUN_00711858(&local_120,iVar6);
          puVar7 = (undefined4 *)thunk_FUN_01be5118(0x14);
          if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          puVar7[4] = puVar8;
          puVar7[2] = 0;
          *puVar7 = 0;
          local_b0 = (undefined4 *)0x3;
          local_a8 = &DAT_01c1c6c0;
          local_ac = puVar7;
          FUN_00ff5734(&local_180,&local_120,puVar17,puVar4,&local_b0);
          if (local_180 != (undefined4 *)0x80000001) {
            local_b0 = local_180;
            local_ac = (undefined4 *)local_17c;
            local_a8 = local_178;
            local_134 = &LAB_012b97d8;
            local_138 = &local_b0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_138,&DAT_01c1d24c);
          }
          FUN_01bed4e2(&local_a8,&local_120,0x70);
          local_ac = (undefined4 *)0x1;
          local_b0 = (undefined4 *)0x1;
          iVar6 = thunk_FUN_01be5118(0x78);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x78);
          }
          FUN_01bed4e2(iVar6,&local_b0,0x78);
          FUN_019bb7e0(piVar3,puVar17);
          do {
            iVar16 = *param_3;
            bVar2 = (bool)hasExclusiveAccess(param_3);
          } while (!bVar2);
          *param_3 = iVar16 + 1;
          if (-1 < iVar16) {
            local_178 = (undefined *)0x0;
            local_180 = (undefined4 *)0x0;
            local_11c = &DAT_0132b6a0;
            local_120 = &DAT_01c1e190;
            local_170 = puVar9;
            local_16c = param_3;
            FUN_00664898(&local_b0,&DAT_00574ea5,&local_120);
            puVar4 = local_a8;
            puVar17 = local_ac;
            piVar3 = local_b0;
            puVar7 = (undefined4 *)((uint)&local_168 | 4);
            *puVar7 = local_17c;
            puVar7[1] = local_178;
            puVar7[2] = uStack_174;
            puVar7[3] = local_170;
            puVar7[4] = local_16c;
            local_168 = 0;
            FUN_00711858(&local_120,iVar6);
            puVar7 = (undefined4 *)thunk_FUN_01be5118(0x18);
            if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x18);
            }
            *puVar7 = local_168;
            puVar7[1] = uStack_164;
            puVar7[2] = uStack_160;
            puVar7[3] = uStack_15c;
            puVar7[4] = uStack_158;
            puVar7[5] = uStack_154;
            local_a8 = &DAT_01c1c5d0;
            local_b0 = (undefined4 *)0x3;
            local_ac = puVar7;
            FUN_00ff5734(&local_138,&local_120,puVar17,puVar4,&local_b0);
            if (local_138 != (undefined4 **)0x80000001) {
              local_b0 = (int *)local_138;
              local_ac = (undefined4 *)local_134;
              local_a8 = puStack_130;
              local_124 = &LAB_012b97d8;
              local_128 = &local_b0;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_00590e5f,&local_128,&DAT_01c1d24c);
            }
            FUN_01bed4e2(&local_a8,&local_120,0x70);
            local_ac = (undefined4 *)0x1;
            local_b0 = (undefined4 *)0x1;
            iVar6 = thunk_FUN_01be5118(0x78);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x78);
            }
            FUN_01bed4e2(iVar6,&local_b0,0x78);
            FUN_019bb7e0(piVar3,puVar17);
            do {
              iVar16 = *param_3;
              bVar2 = (bool)hasExclusiveAccess(param_3);
            } while (!bVar2);
            *param_3 = iVar16 + 1;
            if (-1 < iVar16) {
              local_178 = (undefined *)0x0;
              local_180 = (undefined4 *)0x0;
              local_120 = &DAT_01c1e1a8;
              local_11c = &DAT_0132b6a0;
              local_170 = puVar10;
              local_16c = param_3;
              FUN_00664898(&local_b0,&DAT_00574ea5,&local_120);
              puVar4 = local_a8;
              puVar17 = local_ac;
              piVar3 = local_b0;
              puVar7 = (undefined4 *)((uint)&local_150 | 4);
              *puVar7 = local_17c;
              puVar7[1] = local_178;
              puVar7[2] = uStack_174;
              puVar7[3] = local_170;
              puVar7[4] = local_16c;
              local_150 = 0;
              FUN_00711858(&local_120,iVar6);
              puVar7 = (undefined4 *)thunk_FUN_01be5118(0x18);
              if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x18);
              }
              *puVar7 = local_150;
              puVar7[1] = uStack_14c;
              puVar7[2] = uStack_148;
              puVar7[3] = uStack_144;
              puVar7[4] = uStack_140;
              puVar7[5] = uStack_13c;
              local_a8 = &DAT_01c1c498;
              local_b0 = (undefined4 *)0x3;
              local_ac = puVar7;
              FUN_00ff5734(&local_138,&local_120,puVar17,puVar4,&local_b0);
              if (local_138 != (undefined4 **)0x80000001) {
                local_b0 = (int *)local_138;
                local_ac = (undefined4 *)local_134;
                local_a8 = puStack_130;
                local_124 = &LAB_012b97d8;
                local_128 = &local_b0;
                    /* WARNING: Subroutine does not return */
                FUN_012fb100(&DAT_00590e5f,&local_128,&DAT_01c1d24c);
              }
              FUN_01bed4e2(&local_a8,&local_120,0x70);
              local_ac = (undefined4 *)0x1;
              local_b0 = (undefined4 *)0x1;
              iVar6 = thunk_FUN_01be5118(0x78);
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(8,0x78);
              }
              FUN_01bed4e2(iVar6,&local_b0,0x78);
              FUN_019bb7e0(piVar3,puVar17);
              do {
                iVar16 = *param_3;
                bVar2 = (bool)hasExclusiveAccess(param_3);
              } while (!bVar2);
              *param_3 = iVar16 + 1;
              if (-1 < iVar16) {
                local_11c = &DAT_0132b6a0;
                local_120 = &DAT_01c1e1b0;
                FUN_00664898(&local_b0,&DAT_00574ea5,&local_120);
                puVar4 = local_a8;
                puVar17 = local_ac;
                piVar3 = local_b0;
                FUN_00711858(&local_120,iVar6);
                puVar7 = (undefined4 *)thunk_FUN_01be5118(0x18);
                if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(4,0x18);
                }
                puVar7[4] = puVar11;
                puVar7[5] = param_3;
                puVar7[2] = 0;
                *puVar7 = 0;
                local_b0 = (undefined4 *)0x3;
                local_a8 = &DAT_01c1c3a8;
                local_ac = puVar7;
                FUN_00ff5734(&local_180,&local_120,puVar17,puVar4,&local_b0);
                if (local_180 != (undefined4 *)0x80000001) {
                  local_b0 = local_180;
                  local_ac = (undefined4 *)local_17c;
                  local_a8 = local_178;
                  local_134 = &LAB_012b97d8;
                  local_138 = &local_b0;
                    /* WARNING: Subroutine does not return */
                  FUN_012fb100(&DAT_00590e5f,&local_138,&DAT_01c1d24c);
                }
                FUN_01bed4e2(&local_a8,&local_120,0x70);
                local_ac = (undefined4 *)0x1;
                local_b0 = (undefined4 *)0x1;
                iVar6 = thunk_FUN_01be5118(0x78);
                if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(8,0x78);
                }
                FUN_01bed4e2(iVar6,&local_b0,0x78);
                FUN_019bb7e0(piVar3,puVar17);
                do {
                  iVar16 = *param_3;
                  bVar2 = (bool)hasExclusiveAccess(param_3);
                } while (!bVar2);
                *param_3 = iVar16 + 1;
                if (-1 < iVar16) {
                  local_11c = &DAT_0132b6a0;
                  local_120 = &DAT_01c1e1e0;
                  FUN_00664898(&local_b0,&DAT_00574ea5,&local_120);
                  puVar4 = local_a8;
                  puVar17 = local_ac;
                  piVar3 = local_b0;
                  FUN_00711858(&local_120,iVar6);
                  puVar7 = (undefined4 *)thunk_FUN_01be5118(0x18);
                  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0066439c(4,0x18);
                  }
                  puVar7[4] = puVar13;
                  puVar7[5] = param_3;
                  puVar7[2] = 0;
                  *puVar7 = 0;
                  local_b0 = (undefined4 *)0x3;
                  local_a8 = &DAT_01c1bdd8;
                  local_ac = puVar7;
                  FUN_00ff5734(&local_180,&local_120,puVar17,puVar4,&local_b0);
                  if (local_180 != (undefined4 *)0x80000001) {
                    local_b0 = local_180;
                    local_ac = (undefined4 *)local_17c;
                    local_a8 = local_178;
                    local_134 = &LAB_012b97d8;
                    local_138 = &local_b0;
                    /* WARNING: Subroutine does not return */
                    FUN_012fb100(&DAT_00590e5f,&local_138,&DAT_01c1d24c);
                  }
                  FUN_01bed4e2(&local_a8,&local_120,0x70);
                  local_ac = (undefined4 *)0x1;
                  local_b0 = (undefined4 *)0x1;
                  iVar6 = thunk_FUN_01be5118(0x78);
                  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0066439c(8,0x78);
                  }
                  FUN_01bed4e2(iVar6,&local_b0,0x78);
                  FUN_019bb7e0(piVar3,puVar17);
                  do {
                    iVar16 = *param_3;
                    bVar2 = (bool)hasExclusiveAccess(param_3);
                  } while (!bVar2);
                  *param_3 = iVar16 + 1;
                  if (-1 < iVar16) {
                    local_11c = &DAT_0132b6a0;
                    local_120 = &DAT_01c1e1a0;
                    FUN_00664898(&local_b0,&DAT_00574ea5,&local_120);
                    puVar4 = local_a8;
                    puVar17 = local_ac;
                    piVar3 = local_b0;
                    FUN_00711858(&local_120,iVar6);
                    puVar7 = (undefined4 *)thunk_FUN_01be5118(0x18);
                    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0x18);
                    }
                    puVar7[4] = puVar12;
                    puVar7[5] = param_3;
                    puVar7[2] = 0;
                    *puVar7 = 0;
                    local_b0 = (undefined4 *)0x3;
                    local_a8 = &DAT_01c1c270;
                    local_ac = puVar7;
                    FUN_00ff5734(&local_180,&local_120,puVar17,puVar4,&local_b0);
                    if (local_180 != (undefined4 *)0x80000001) {
                      local_b0 = local_180;
                      local_ac = (undefined4 *)local_17c;
                      local_a8 = local_178;
                      local_134 = &LAB_012b97d8;
                      local_138 = &local_b0;
                    /* WARNING: Subroutine does not return */
                      FUN_012fb100(&DAT_00590e5f,&local_138,&DAT_01c1d24c);
                    }
                    FUN_01bed4e2(&local_a8,&local_120,0x70);
                    local_ac = (undefined4 *)0x1;
                    local_b0 = (undefined4 *)0x1;
                    iVar6 = thunk_FUN_01be5118(0x78);
                    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(8,0x78);
                    }
                    FUN_01bed4e2(iVar6,&local_b0,0x78);
                    FUN_019bb7e0(piVar3,puVar17);
                    DataMemoryBarrier(0xb);
                    do {
                      iVar16 = *param_3;
                      bVar2 = (bool)hasExclusiveAccess(param_3);
                    } while (!bVar2);
                    *param_3 = iVar16 + -1;
                    if (iVar16 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_0117fe74(param_3);
                    }
                    DataMemoryBarrier(0xb);
                    do {
                      iVar16 = *param_3;
                      bVar2 = (bool)hasExclusiveAccess(param_3);
                    } while (!bVar2);
                    *param_3 = iVar16 + -1;
                    if (iVar16 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_0117fe74(param_3);
                    }
                    DataMemoryBarrier(0xb);
                    do {
                      iVar16 = *param_2;
                      bVar2 = (bool)hasExclusiveAccess(param_2);
                    } while (!bVar2);
                    *param_2 = iVar16 + -1;
                    if (iVar16 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_01177340(param_2);
                    }
                    return iVar6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xfab78c);
  (*pcVar1)();
}

