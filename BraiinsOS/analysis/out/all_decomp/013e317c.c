// FUN_013e317c @ 013e317c size=2680 calls_out=13 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013e317c(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  int *piVar4;
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  byte bVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  byte bVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  int *local_168;
  int *local_160;
  uint local_140;
  int *local_138;
  uint local_134;
  int local_130;
  int local_128;
  int *local_124;
  int local_120;
  int *local_118;
  int *local_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  undefined4 local_104;
  int *local_100;
  int local_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int local_dc;
  int *local_d8;
  int local_d4;
  int iStack_d0;
  int iStack_cc;
  int *local_c8;
  int *local_c4;
  int local_c0;
  int *local_bc;
  undefined4 local_b8;
  int iStack_b4;
  int *piStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 *local_a0;
  int local_98;
  int local_94;
  int *local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int *piStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int *local_64;
  int *local_60;
  int *piStack_5c;
  int *local_58;
  int *local_54;
  int *piStack_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int iStack_3c;
  int *piStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *local_28;
  
  local_124 = (int *)&DAT_00000004;
  local_104 = *param_2;
  local_10c = (int *)param_2[1];
  local_120 = 0;
  local_128 = 0;
  piVar14 = local_10c + param_2[2] * 7;
  local_118 = (int *)&DAT_80000000;
  local_108 = local_10c;
  local_100 = piVar14;
  if (param_2[2] != 0) {
    piVar10 = (int *)((uint)&local_b8 | 4);
    piVar28 = param_1;
    piVar23 = local_10c;
    local_108 = local_10c;
    do {
      piVar31 = piVar23 + 7;
      if (*piVar23 == 8) goto LAB_013e37e0;
      local_f8 = piVar23[1];
      iStack_f4 = piVar23[2];
      iStack_f0 = piVar23[3];
      iStack_ec = piVar23[4];
      iStack_e8 = piVar23[5];
      iStack_e4 = piVar23[6];
      local_fc = *piVar23;
      FUN_013e2e04(&local_40,&local_fc);
      puVar13 = local_28;
      piVar18 = piStack_38;
      iVar15 = iStack_3c;
      piVar4 = local_110;
      piVar23 = local_118;
      local_e0 = local_40;
      local_dc = iStack_3c;
      local_d8 = piStack_38;
      local_d4 = local_34;
      iStack_d0 = iStack_30;
      iStack_cc = iStack_2c;
      if (local_40 == 6) {
        local_c0 = iStack_3c;
        local_c4 = piStack_38;
        piVar23 = piStack_38 + local_34 * 7;
        local_c8 = piStack_38;
        local_bc = piVar23;
        if (local_34 != 0) {
          piVar4 = piStack_38;
          do {
            piVar18 = piVar4 + 7;
            iVar15 = *piVar4;
            if (iVar15 == 8) goto LAB_013e3788;
            iVar17 = piVar4[2];
            iVar26 = piVar4[3];
            iVar20 = piVar4[4];
            iVar22 = piVar4[5];
            iVar24 = piVar4[6];
            *piVar10 = piVar4[1];
            piVar10[1] = iVar17;
            piVar10[2] = iVar26;
            piVar10[3] = iVar20;
            piVar10[4] = iVar22;
            piVar10[5] = iVar24;
            iStack_3c = iStack_b4;
            piStack_38 = piStack_b0;
            local_34 = iStack_ac;
            iStack_30 = iStack_a8;
            iStack_2c = iStack_a4;
            local_b8 = 0;
            local_40 = iVar15;
            puVar12 = (undefined4 *)thunk_FUN_016d4a50(0x34);
            puVar7 = local_a0;
            if (puVar12 == (undefined4 *)0x0) {
              local_108 = piVar31;
              local_c4 = piVar18;
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x34);
            }
            *puVar12 = 1;
            puVar12[1] = 0;
            puVar12[2] = 1;
            puVar12[3] = 0;
            puVar12[4] = 1;
            *(undefined2 *)(puVar12 + 0xc) = 1;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[7] = 0;
            puVar12[8] = 0;
            puVar12[9] = 0;
            puVar12[10] = 0;
            puVar12[0xb] = 0;
            *(undefined1 *)((int)puVar12 + 0x32) = 0;
            local_80 = local_40;
            iStack_7c = iStack_3c;
            piStack_78 = piStack_38;
            iStack_74 = local_34;
            iStack_70 = iStack_30;
            iStack_6c = iStack_2c;
            local_a0 = puVar12;
            FUN_013e0514(&local_b8);
            FUN_013e0a18(&local_b8);
            thunk_FUN_016d3fb4(local_a0);
            piVar8 = piStack_78;
            iVar15 = iStack_7c;
            piVar6 = local_110;
            piVar25 = local_118;
            local_98 = local_80;
            local_94 = iStack_7c;
            local_90 = piStack_78;
            iStack_8c = iStack_74;
            iStack_88 = iStack_70;
            iStack_84 = iStack_6c;
            if (local_80 == 1) {
              if (local_118 == (int *)&DAT_80000000) {
                uVar11 = 0;
                if ((int)piStack_78 < 0) {
LAB_013e3bd4:
                  local_108 = piVar31;
                  local_c4 = piVar18;
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(uVar11,local_160);
                }
                if (piStack_78 == (int *)0x0) {
                  local_138 = (int *)&DAT_00000001;
                  piVar25 = (int *)0x0;
                }
                else {
                  local_138 = (int *)thunk_FUN_016d4a50(piStack_78);
                  if (local_138 == (int *)0x0) {
                    uVar11 = 1;
                    local_160 = piVar8;
                    goto LAB_013e3bd4;
                  }
                  piVar25 = piVar8;
                }
                FUN_016dd1aa(local_138,iVar15,piVar8);
                piVar28 = piVar8;
                local_160 = local_138;
                local_118 = piVar25;
                local_114 = local_138;
              }
              else {
                if ((int *)((int)local_118 - (int)piVar28) < piStack_78) {
                  FUN_01401968(&local_118,piVar28,piStack_78,1);
                  local_138 = local_114;
                  piVar28 = local_110;
                }
                FUN_016dd1aa((int)local_138 + (int)piVar28,iVar15,piVar8);
                piVar28 = (int *)((int)piVar28 + (int)piVar8);
              }
              local_110 = piVar28;
              if (piVar8 != (int *)0x0) {
                thunk_FUN_016d3fb4(iVar15);
              }
              thunk_FUN_016d3fb4(puVar7);
              if (local_98 != 1) {
                FUN_013e0a18(&local_98);
              }
            }
            else {
              local_138 = local_114;
              bVar36 = local_118 != (int *)&DAT_80000000;
              local_118 = (int *)&DAT_80000000;
              if (bVar36) {
                local_64 = piVar25;
                local_60 = local_114;
                piStack_5c = local_110;
                FUN_013e4248(&local_40,&local_64);
                iVar15 = local_120;
                if (local_120 == local_128) {
                  FUN_01401574(&local_128);
                }
                local_120 = iVar15 + 1;
                piVar28 = local_124 + iVar15 * 7;
                *piVar28 = local_40;
                piVar28[1] = iStack_3c;
                piVar28[2] = (int)piStack_38;
                piVar28[3] = local_34;
                piVar28[4] = iStack_30;
                piVar28[5] = iStack_2c;
                piVar28[6] = (int)local_28;
              }
              iVar15 = local_120;
              local_40 = local_98;
              iStack_3c = local_94;
              piStack_38 = local_90;
              local_34 = iStack_8c;
              iStack_30 = iStack_88;
              iStack_2c = iStack_84;
              local_28 = puVar7;
              if (local_120 == local_128) {
                FUN_01401574(&local_128);
              }
              piVar28 = local_124 + iVar15 * 7;
              *piVar28 = local_40;
              piVar28[1] = iStack_3c;
              piVar28[2] = (int)piStack_38;
              piVar28[3] = local_34;
              piVar28[4] = iStack_30;
              piVar28[5] = iStack_2c;
              piVar28[6] = (int)local_28;
              local_120 = iVar15 + 1;
              piVar28 = piVar6;
            }
            piVar25 = piVar4 + 7;
            piVar4 = piVar18;
          } while (piVar25 != piVar23);
          piVar18 = piVar23;
LAB_013e3788:
          local_c4 = piVar18;
        }
        FUN_013fc820(&local_c8);
        iVar15 = local_e0;
        thunk_FUN_016d3fb4(puVar13);
        if ((iVar15 != 1) && (iVar15 != 6)) {
LAB_013e32bc:
          FUN_013e0a18(&local_e0);
        }
      }
      else if (local_40 == 1) {
        if (local_118 == (int *)&DAT_80000000) {
          uVar11 = 0;
          if ((int)piStack_38 < 0) {
LAB_013e3bf4:
            local_108 = piVar31;
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar11,local_168);
          }
          if (piStack_38 == (int *)0x0) {
            piVar23 = (int *)0x0;
            local_138 = (int *)&DAT_00000001;
          }
          else {
            local_138 = (int *)thunk_FUN_016d4a50(piStack_38);
            if (local_138 == (int *)0x0) {
              uVar11 = 1;
              local_168 = piVar18;
              goto LAB_013e3bf4;
            }
            piVar23 = piVar18;
          }
          FUN_016dd1aa(local_138,iVar15,piVar18);
          piVar28 = piVar18;
          local_168 = local_138;
          local_118 = piVar23;
          local_114 = local_138;
        }
        else {
          if ((int *)((int)local_118 - (int)piVar28) < piStack_38) {
            FUN_01401968(&local_118,piVar28,piStack_38,1);
            piVar28 = local_110;
          }
          local_138 = local_114;
          FUN_016dd1aa((int)local_114 + (int)piVar28,iVar15,piVar18);
          piVar28 = (int *)((int)piVar28 + (int)piVar18);
        }
        local_110 = piVar28;
        if (piVar18 != (int *)0x0) {
          thunk_FUN_016d3fb4(iVar15);
        }
        thunk_FUN_016d3fb4(puVar13);
      }
      else {
        if (local_40 == 0) {
          thunk_FUN_016d3fb4(local_28);
          goto LAB_013e32bc;
        }
        local_138 = local_114;
        bVar36 = local_118 != (int *)&DAT_80000000;
        local_118 = (int *)&DAT_80000000;
        if (bVar36) {
          local_58 = piVar23;
          local_54 = local_114;
          piStack_50 = local_110;
          FUN_013e4248(&local_40,&local_58);
          iVar15 = local_120;
          if (local_120 == local_128) {
            FUN_01401574(&local_128);
          }
          local_120 = iVar15 + 1;
          piVar28 = local_124 + iVar15 * 7;
          *piVar28 = local_40;
          piVar28[1] = iStack_3c;
          piVar28[2] = (int)piStack_38;
          piVar28[3] = local_34;
          piVar28[4] = iStack_30;
          piVar28[5] = iStack_2c;
          piVar28[6] = (int)local_28;
        }
        iVar15 = local_120;
        local_40 = local_e0;
        iStack_3c = local_dc;
        piStack_38 = local_d8;
        local_34 = local_d4;
        iStack_30 = iStack_d0;
        iStack_2c = iStack_cc;
        local_28 = puVar13;
        if (local_120 == local_128) {
          FUN_01401574(&local_128);
        }
        piVar28 = local_124 + iVar15 * 7;
        *piVar28 = local_40;
        piVar28[1] = iStack_3c;
        piVar28[2] = (int)piStack_38;
        piVar28[3] = local_34;
        piVar28[4] = iStack_30;
        piVar28[5] = iStack_2c;
        piVar28[6] = (int)local_28;
        local_120 = iVar15 + 1;
        piVar28 = piVar4;
      }
      piVar23 = piVar31;
    } while (piVar31 != piVar14);
    piVar31 = piVar14;
LAB_013e37e0:
    local_108 = piVar31;
  }
  FUN_013fc820(&local_10c);
  piVar14 = local_118;
  bVar36 = local_118 != (int *)&DAT_80000000;
  local_118 = (int *)0x80000000;
  if (bVar36) {
    local_48 = local_114;
    local_4c = piVar14;
    local_44 = local_110;
    FUN_013e4248(&local_40,&local_4c);
    iVar15 = local_120;
    if (local_120 == local_128) {
      FUN_01401574(&local_128);
    }
    local_120 = iVar15 + 1;
    piVar14 = local_124 + iVar15 * 7;
    *piVar14 = local_40;
    piVar14[1] = iStack_3c;
    piVar14[2] = (int)piStack_38;
    piVar14[3] = local_34;
    piVar14[4] = iStack_30;
    piVar14[5] = iStack_2c;
    piVar14[6] = (int)local_28;
  }
  if (local_120 == 0) {
    puVar13 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar13 == (undefined4 *)0x0) goto LAB_013e3ba0;
    *puVar13 = 1;
    puVar13[1] = 0;
    puVar13[2] = 1;
    puVar13[3] = 0;
    puVar13[4] = 1;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    *(undefined1 *)((int)puVar13 + 0x32) = 0;
    *(undefined2 *)(puVar13 + 0xc) = 1;
    param_1[6] = (int)puVar13;
    *param_1 = 0;
  }
  else {
    if (local_120 != 1) {
      uVar33 = 0;
      uVar35 = 1;
      uVar21 = 1;
      uVar19 = 0;
      iVar15 = local_120 * 0x1c;
      local_130 = 1;
      uVar27 = 0;
      local_140 = 0;
      local_134 = 0;
      bVar9 = 1;
      bVar3 = 1;
      iVar17 = iVar15;
      piVar14 = local_124 + 6;
      bVar5 = 1;
      do {
        piVar28 = (int *)*piVar14;
        bVar16 = bVar9 & 1;
        bVar9 = 0;
        if (bVar16 != 0) {
          bVar9 = *(byte *)(piVar28 + 0xc);
        }
        bVar36 = CARRY4(piVar28[5],uVar19);
        uVar19 = piVar28[5] + uVar19;
        if (bVar36) {
          uVar19 = 0xffffffff;
        }
        bVar36 = CARRY4(local_134,piVar28[0xb]);
        local_134 = local_134 + piVar28[0xb];
        if (bVar36) {
          local_134 = 0xffffffff;
        }
        bVar16 = bVar3 & 1;
        bVar3 = 0;
        if (bVar16 != 0) {
          bVar3 = *(byte *)((int)piVar28 + 0x31);
        }
        bVar16 = 0;
        if ((bVar5 & 1) != 0) {
          bVar16 = *(byte *)((int)piVar28 + 0x32);
        }
        if (local_130 == 0) {
          local_130 = 0;
        }
        else {
          local_130 = 0;
          if (*piVar28 != 0) {
            bVar36 = CARRY4(uVar33,piVar28[1]);
            uVar33 = uVar33 + piVar28[1];
            local_130 = 1;
            if (bVar36) {
              uVar33 = 0xffffffff;
            }
          }
        }
        if (uVar35 == 0) {
          uVar35 = 0;
        }
        else {
          uVar35 = 0;
          if (piVar28[2] != 0) {
            uVar35 = (uint)(local_140 <= piVar28[3] + local_140);
            local_140 = piVar28[3] + local_140;
          }
        }
        uVar27 = piVar28[6] | uVar27;
        uVar21 = piVar28[4] & uVar21;
        iVar17 = iVar17 + -0x1c;
        piVar14 = piVar14 + 7;
        bVar5 = bVar16;
      } while (iVar17 != 0);
      uVar32 = 0;
      uVar29 = 0;
      piVar14 = local_124 + 6;
      do {
        iVar15 = iVar15 + -0x1c;
        iVar17 = *piVar14;
        puVar1 = (uint *)(iVar17 + 0x1c);
        puVar2 = (uint *)(iVar17 + 0x24);
        bVar36 = *(int *)(iVar17 + 8) == 1;
        if (bVar36) {
          iVar17 = *(int *)(iVar17 + 0xc);
        }
        uVar32 = *puVar1 | uVar32;
        uVar29 = *puVar2 | uVar29;
      } while ((bVar36 && iVar17 == 0) && (piVar14 = piVar14 + 7, iVar15 != 0));
      uVar30 = 0;
      uVar34 = 0;
      iVar15 = local_120 * -0x1c;
      do {
        iVar17 = *(int *)((int)local_124 + (-4 - iVar15));
        puVar1 = (uint *)(iVar17 + 0x20);
        puVar2 = (uint *)(iVar17 + 0x28);
        bVar36 = *(int *)(iVar17 + 8) == 1;
        if (bVar36) {
          iVar17 = *(int *)(iVar17 + 0xc);
        }
        uVar30 = *puVar1 | uVar30;
        uVar34 = *puVar2 | uVar34;
      } while ((bVar36 && iVar17 == 0) && (bVar36 = iVar15 != -0x1c, iVar15 = iVar15 + 0x1c, bVar36)
              );
      piVar14 = (int *)thunk_FUN_016d4a50(0x34);
      if (piVar14 != (int *)0x0) {
        piVar14[8] = uVar30;
        *(byte *)((int)piVar14 + 0x32) = bVar16 & 1;
        piVar14[9] = uVar29;
        *(byte *)((int)piVar14 + 0x31) = bVar3 & 1;
        piVar14[10] = uVar34;
        *(byte *)(piVar14 + 0xc) = bVar9 & 1;
        piVar14[0xb] = local_134;
        *piVar14 = local_130;
        piVar14[1] = uVar33;
        piVar14[2] = uVar35;
        piVar14[3] = local_140;
        piVar14[4] = uVar21;
        piVar14[5] = uVar19;
        piVar14[6] = uVar27;
        piVar14[7] = uVar32;
        param_1[6] = (int)piVar14;
        *param_1 = 6;
        param_1[1] = local_128;
        param_1[2] = (int)local_124;
        param_1[3] = local_120;
        return;
      }
LAB_013e3ba0:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    local_120 = 0;
    iVar15 = local_124[1];
    iVar17 = local_124[2];
    *param_1 = *local_124;
    param_1[1] = iVar15;
    param_1[2] = iVar17;
    iVar15 = local_124[4];
    iVar17 = local_124[5];
    iVar26 = local_124[6];
    param_1[3] = local_124[3];
    param_1[4] = iVar15;
    param_1[5] = iVar17;
    param_1[6] = iVar26;
  }
  FUN_013e75f4(&local_128);
  if (local_128 != 0) {
    thunk_FUN_016d3fb4(local_124);
  }
  return;
}

