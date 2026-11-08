// FUN_00a39e28 @ 00a39e28 size=2528 calls_out=11 calls_in=0
// strings: 

void FUN_00a39e28(uint *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  undefined1 auStack_190 [88];
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  int *local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_100 = 4;
  local_114 = 4;
  local_10c = 0;
  local_110 = (int *)0x0;
  local_118 = 0;
  local_11c = 0;
  local_120 = 0;
  local_128 = 0;
  local_12c = local_12c & 0xffffff00;
  local_130 = 0;
  local_f0 = 1;
  local_f4 = 1;
  local_104 = 0x80000000;
  local_124 = 8;
  local_134 = 1;
  local_138 = 1;
  piVar3 = (int *)thunk_FUN_016d4a50(0x50);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x50);
  }
  FUN_016dd1aa(piVar3,&local_138,0x50);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    local_ec = 0;
    local_f8 = 0;
    local_fc = 0;
    local_100 = 4;
    local_114 = 4;
    local_10c = 0;
    local_110 = (int *)0x0;
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    local_128 = 0;
    local_12c = local_12c & 0xffffff00;
    local_130 = 0;
    local_f0 = 1;
    local_f4 = 1;
    local_104 = 0x80000000;
    local_124 = 8;
    local_134 = 1;
    local_138 = 1;
    piVar5 = (int *)thunk_FUN_016d4a50(0x50);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x50);
    }
    FUN_016dd1aa(piVar5,&local_138,0x50);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    if (-1 < iVar4) {
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x14);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      puVar6[4] = piVar5;
      *(undefined1 *)(puVar6 + 3) = 0;
      puVar6[2] = 0;
      local_ec = 0;
      local_f8 = 0;
      local_fc = 0;
      local_10c = 0;
      local_110 = (int *)0x0;
      local_118 = 0;
      local_11c = 0;
      local_120 = 0;
      local_128 = 0;
      local_12c = local_12c & 0xffffff00;
      local_130 = 0;
      *puVar6 = 1;
      puVar6[1] = 1;
      local_f0 = 1;
      local_f4 = 1;
      local_100 = 4;
      local_104 = 0x80000000;
      local_114 = 4;
      local_124 = 4;
      local_134 = 1;
      local_138 = 1;
      piVar7 = (int *)thunk_FUN_016d4a50(0x50);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x50);
      }
      FUN_016dd1aa(piVar7,&local_138,0x50);
      do {
        iVar4 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar4 + 1;
      if (-1 < iVar4) {
        local_ec = 0;
        local_f8 = 0;
        local_fc = 0;
        local_100 = 4;
        local_114 = 4;
        local_104 = 0;
        local_10c = 0;
        local_110 = (int *)0x0;
        local_118 = 0;
        local_11c = 0;
        local_120 = 0;
        local_128 = 0;
        local_12c = local_12c & 0xffffff00;
        local_130 = 0;
        local_f0 = 1;
        local_f4 = 1;
        local_108 = 100;
        local_124 = 8;
        local_134 = 1;
        local_138 = 1;
        piVar8 = (int *)thunk_FUN_016d4a50(0x50);
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x50);
        }
        FUN_016dd1aa(piVar8,&local_138,0x50);
        do {
          iVar4 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar4 + 1;
        if (-1 < iVar4) {
          local_10c = local_10c & 0xffffff00;
          local_114 = 0;
          local_118 = 0;
          local_11c = 0;
          local_124 = 0;
          local_128 = local_128 & 0xffffff00;
          local_12c = 0;
          local_130 = 0;
          local_134 = 1;
          local_138 = 1;
          local_120 = 4;
          local_110 = piVar3;
          puVar9 = (uint *)thunk_FUN_016d4a50(0x30);
          if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x30);
          }
          *puVar9 = local_138;
          puVar9[1] = local_134;
          puVar9[2] = local_130;
          puVar9[3] = local_12c;
          puVar9[4] = local_128;
          puVar9[5] = local_124;
          puVar9[6] = local_120;
          puVar9[7] = local_11c;
          puVar9[8] = local_118;
          puVar9[9] = local_114;
          puVar9[10] = (uint)local_110;
          puVar9[0xb] = local_10c;
          do {
            uVar10 = *puVar9;
            bVar2 = (bool)hasExclusiveAccess(puVar9);
          } while (!bVar2);
          *puVar9 = uVar10 + 1;
          if (-1 < (int)uVar10) {
            uVar23 = thunk_FUN_016de0ee(uVar10,0x2c0);
            puVar17 = (uint *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
            if ((char)puVar17[4] == '\0') {
              FUN_015f62e4(&local_138);
              *puVar17 = local_138;
              puVar17[1] = local_134;
              puVar17[2] = local_130;
              puVar17[3] = local_12c;
              *(undefined1 *)(puVar17 + 4) = 1;
            }
            uVar22 = *puVar17;
            uVar20 = puVar17[1];
            uVar18 = puVar17[2];
            uVar10 = puVar17[3];
            *puVar17 = uVar22 + 1;
            puVar17[1] = uVar20 + (0xfffffffe < uVar22);
            piVar11 = (int *)thunk_FUN_016d4a50(0x108);
            if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x108);
            }
            *piVar11 = 1;
            piVar11[1] = 1;
            FUN_016dd606(piVar11 + 2,0,0x84);
            piVar11[0x35] = uVar10;
            piVar13 = piVar11 + 0x3f;
            *piVar13 = 1;
            piVar11[0x30] = 0;
            piVar11[0x2e] = (int)&DAT_005674cc;
            piVar11[0x24] = 2;
            piVar11[0x3a] = 0;
            piVar11[0x31] = 0;
            piVar11[0x32] = uVar22;
            piVar11[0x33] = uVar20;
            piVar11[0x34] = uVar18;
            piVar11[0x2f] = 0;
            *(undefined2 *)((int)piVar11 + 0xe2) = 0;
            *(undefined2 *)(piVar11 + 0x36) = 0;
            piVar11[0x3b] = 0;
            piVar11[0x3c] = 0;
            piVar11[0x3d] = 0;
            piVar11[0x3e] = 0;
            piVar11[0x40] = 1;
            do {
              iVar4 = *piVar11;
              bVar2 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar2);
            *piVar11 = iVar4 + 1;
            if (-1 < iVar4) {
              do {
                iVar4 = *piVar13;
                bVar2 = (bool)hasExclusiveAccess(piVar13);
              } while (!bVar2);
              *piVar13 = iVar4 + -1;
              if (iVar4 == 1) {
                FUN_0163b708();
              }
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar11;
                bVar2 = (bool)hasExclusiveAccess(piVar11);
              } while (!bVar2);
              *piVar11 = iVar4 + -1;
              if (iVar4 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aad1e0(piVar11);
              }
              puVar12 = (undefined4 *)thunk_FUN_016d4a50(0x60);
              if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,0x60);
              }
              puVar12[2] = 3;
              *puVar12 = 1;
              puVar12[1] = 1;
              piVar13 = (int *)thunk_FUN_016d4a50(0xac);
              if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0xac);
              }
              *piVar13 = 1;
              piVar13[1] = 1;
              FUN_016dd606(piVar13 + 2,0,0x94);
              piVar16 = piVar13 + 0x29;
              *piVar16 = 1;
              piVar13[0x27] = (int)puVar12;
              piVar13[0x2a] = 1;
              piVar13[0x28] = 0;
              do {
                iVar4 = *piVar13;
                bVar2 = (bool)hasExclusiveAccess(piVar13);
              } while (!bVar2);
              *piVar13 = iVar4 + 1;
              if (-1 < iVar4) {
                do {
                  iVar4 = *piVar16;
                  bVar2 = (bool)hasExclusiveAccess(piVar16);
                } while (!bVar2);
                *piVar16 = iVar4 + -1;
                if (iVar4 == 1) {
                  FUN_0163b708(piVar13 + 0x22);
                }
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *piVar13;
                  bVar2 = (bool)hasExclusiveAccess(piVar13);
                } while (!bVar2);
                *piVar13 = iVar4 + -1;
                if (iVar4 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_00aacce0(piVar13);
                }
                puVar12 = (undefined4 *)thunk_FUN_016d4a50(0xc);
                if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0xc);
                }
                *puVar12 = 1;
                puVar12[1] = 1;
                puVar12[2] = piVar13;
                puVar14 = (undefined4 *)thunk_FUN_016d4a50(0x18);
                if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(8,0x18);
                }
                *puVar14 = 1;
                puVar14[1] = 1;
                puVar14[2] = 0;
                puVar14[3] = 0;
                puVar14[4] = 0;
                piVar13 = (int *)thunk_FUN_016d4a50(0xac);
                if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0xac);
                }
                *piVar13 = 1;
                piVar13[1] = 1;
                FUN_016dd606(piVar13 + 2,0,0x94);
                piVar16 = piVar13 + 0x29;
                *piVar16 = 1;
                piVar13[0x27] = (int)puVar14;
                piVar13[0x2a] = 1;
                piVar13[0x28] = 0;
                do {
                  iVar4 = *piVar13;
                  bVar2 = (bool)hasExclusiveAccess(piVar13);
                } while (!bVar2);
                *piVar13 = iVar4 + 1;
                if (-1 < iVar4) {
                  do {
                    iVar4 = *piVar16;
                    bVar2 = (bool)hasExclusiveAccess(piVar16);
                  } while (!bVar2);
                  *piVar16 = iVar4 + -1;
                  if (iVar4 == 1) {
                    FUN_0163b708(piVar13 + 0x22);
                  }
                  DataMemoryBarrier(0xb);
                  do {
                    iVar4 = *piVar13;
                    bVar2 = (bool)hasExclusiveAccess(piVar13);
                  } while (!bVar2);
                  *piVar13 = iVar4 + -1;
                  if (iVar4 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_00aaae74(piVar13);
                  }
                  puVar14 = (undefined4 *)thunk_FUN_016d4a50(0xc);
                  if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874(4,0xc);
                  }
                  puVar14[2] = piVar13;
                  *puVar14 = 1;
                  puVar14[1] = 1;
                  local_98 = 3;
                  local_a0 = 0;
                  FUN_016dd606(&local_130,0,0x80);
                  local_b0 = 0;
                  local_134 = 1;
                  local_138 = 1;
                  local_ac = 0;
                  local_a8 = 0;
                  local_a4 = 0;
                  local_30 = 1;
                  local_34 = 1;
                  local_38 = 0;
                  piVar13 = (int *)thunk_FUN_016d4a50(0x110);
                  if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874(8,0x110);
                  }
                  FUN_016dd1aa(piVar13,&local_138,0x110);
                  do {
                    iVar4 = *piVar13;
                    bVar2 = (bool)hasExclusiveAccess(piVar13);
                  } while (!bVar2);
                  *piVar13 = iVar4 + 1;
                  if (-1 < iVar4) {
                    piVar16 = piVar13 + 0x41;
                    do {
                      iVar4 = *piVar16;
                      bVar2 = (bool)hasExclusiveAccess(piVar16);
                    } while (!bVar2);
                    *piVar16 = iVar4 + -1;
                    if (iVar4 == 1) {
                      FUN_0163b708(piVar13 + 0x22);
                    }
                    DataMemoryBarrier(0xb);
                    do {
                      iVar4 = *piVar13;
                      bVar2 = (bool)hasExclusiveAccess(piVar13);
                    } while (!bVar2);
                    *piVar13 = iVar4 + -1;
                    if (iVar4 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_00aac2e8(piVar13);
                    }
                    puVar15 = (undefined4 *)thunk_FUN_016d4a50(0xc);
                    if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00600874(4,0xc);
                    }
                    *puVar15 = 1;
                    puVar15[1] = 1;
                    uVar10 = *(uint *)(param_5 + 0x50);
                    puVar15[2] = piVar13;
                    if (uVar10 != 0x80000000) {
                      local_1a0 = *(uint *)(param_5 + 0x54);
                      local_198 = *(uint *)(param_5 + 0x5c);
                      local_19c = *(uint *)(param_5 + 0x58);
                      FUN_016dd1aa((uint)auStack_190 | 3,param_5,0x50);
                    }
                    FUN_016dd1aa(param_1 + 0x6c,param_2,0x48);
                    uVar18 = param_4[1];
                    uVar20 = param_4[2];
                    uVar22 = param_4[3];
                    uVar19 = param_4[4];
                    uVar21 = param_4[5];
                    param_1[0x86] = *param_4;
                    param_1[0x87] = uVar18;
                    param_1[0x88] = uVar20;
                    param_1[0x89] = uVar22;
                    param_1[0x8a] = uVar19;
                    param_1[0x8b] = uVar21;
                    FUN_016dd1aa(param_1 + 0x1c,param_3,0x140);
                    *(undefined1 *)(param_1 + 3) = 0;
                    *param_1 = (uint)(uVar10 != 0x80000000);
                    param_1[1] = 0;
                    param_1[2] = 0;
                    FUN_016dd1aa((int)param_1 + 0xd,auStack_190,0x53);
                    param_1[0x18] = uVar10;
                    param_1[0x12e] = (uint)piVar8;
                    param_1[0x12f] = (uint)piVar8;
                    param_1[0x124] = (uint)puVar12;
                    param_1[0x125] = (uint)puVar14;
                    param_1[0x126] = (uint)puVar15;
                    param_1[0x127] = (uint)piVar5;
                    param_1[0x128] = (uint)puVar6;
                    param_1[0x12a] = (uint)piVar3;
                    param_1[0x94] = 2;
                    param_1[300] = (uint)piVar7;
                    param_1[0x12d] = (uint)piVar11;
                    param_1[0x130] = (uint)puVar9;
                    param_1[0x131] = 0;
                    param_1[0x129] = (uint)puVar9;
                    param_1[299] = (uint)piVar7;
                    param_1[0x8f] = 0;
                    param_1[0x90] = 4;
                    param_1[0x91] = 0;
                    param_1[0x92] = 0;
                    param_1[0x93] = 0;
                    param_1[0x95] = 0;
                    *(undefined1 *)(param_1 + 0x8e) = 0;
                    param_1[0x8c] = 0;
                    param_1[0x8d] = 0;
                    param_1[0x81] = 0;
                    param_1[0x82] = 4;
                    param_1[0x83] = 0;
                    param_1[0x84] = 0;
                    param_1[0x85] = 0;
                    *(undefined1 *)(param_1 + 0x80) = 0;
                    param_1[0x7e] = 0;
                    param_1[0x7f] = 0;
                    param_1[0x19] = local_1a0;
                    param_1[0x1a] = local_19c;
                    param_1[0x1b] = local_198;
                    return;
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
  pcVar1 = (code *)software_udf(0xfdee,0xa3a83c);
  (*pcVar1)();
}

