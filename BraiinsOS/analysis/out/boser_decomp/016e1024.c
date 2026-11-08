// FUN_016e1024 @ 016e1024 size=2460 calls_out=16 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016e1024(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  byte bVar19;
  int *unaff_r9;
  byte bVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  bool bVar26;
  undefined8 uVar27;
  uint local_134;
  uint local_130;
  int local_12c;
  int *local_128;
  int *local_124;
  uint local_11c;
  int local_118;
  uint local_114;
  int local_110;
  int *local_10c;
  int local_108;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  undefined4 local_ec;
  int *local_e8;
  int local_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint local_c8;
  uint local_c4;
  int *local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  int *local_ac;
  int *local_a8;
  uint local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  uint local_80;
  uint local_7c;
  int *local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  int *local_64;
  int *local_60;
  int *piStack_5c;
  int *local_58;
  int *local_54;
  int *piStack_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  uint local_40;
  undefined8 local_3c;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  local_128 = (int *)&SUB_00000004;
  local_ec = *param_2;
  local_f4 = (int *)param_2[1];
  local_12c = 0;
  local_10c = (int *)&SUB_00000004;
  local_108 = 0;
  piVar7 = local_f4 + param_2[2] * 7;
  local_110 = 0;
  local_100 = (int *)&DAT_80000000;
  local_f0 = local_f4;
  local_e8 = piVar7;
  if (param_2[2] != 0) {
    local_128 = (int *)&SUB_00000004;
    local_12c = 0;
    piVar11 = local_f4;
    local_f0 = local_f4;
    do {
      piVar24 = piVar11 + 7;
      if (*piVar11 == 8) goto LAB_016e15cc;
      local_e0 = piVar11[1];
      iStack_dc = piVar11[2];
      iStack_d8 = piVar11[3];
      iStack_d4 = piVar11[4];
      iStack_d0 = piVar11[5];
      iStack_cc = piVar11[6];
      local_e4 = *piVar11;
      FUN_016e0e70(&local_40,&local_e4);
      uVar16 = local_28;
      piVar9 = local_3c._4_4_;
      uVar13 = (uint)local_3c;
      piVar11 = local_100;
      local_c8 = local_40;
      local_c4 = (uint)local_3c;
      local_c0 = local_3c._4_4_;
      local_bc = local_34;
      uStack_b8 = uStack_30;
      uStack_b4 = uStack_2c;
      if (local_40 == 6) {
        local_a4 = (uint)local_3c;
        local_a8 = local_3c._4_4_;
        piVar9 = local_3c._4_4_ + local_34 * 7;
        local_ac = local_3c._4_4_;
        piVar11 = local_3c._4_4_;
        local_a0 = piVar9;
        if (local_34 != 0) {
          do {
            piVar17 = piVar11 + 7;
            if (*piVar11 == 8) goto LAB_016e1404;
            local_98 = piVar11[1];
            iStack_94 = piVar11[2];
            iStack_90 = piVar11[3];
            iStack_8c = piVar11[4];
            iStack_88 = piVar11[5];
            iStack_84 = piVar11[6];
            local_9c = *piVar11;
            FUN_016e0e70(&local_40,&local_9c);
            uVar18 = local_28;
            piVar2 = local_3c._4_4_;
            uVar13 = (uint)local_3c;
            piVar14 = local_100;
            local_80 = local_40;
            local_7c = (uint)local_3c;
            local_78 = local_3c._4_4_;
            uStack_74 = local_34;
            uStack_70 = uStack_30;
            uStack_6c = uStack_2c;
            if (local_40 == 1) {
              if (local_100 == (int *)&DAT_80000000) {
                piVar14 = (int *)0x0;
                if ((int)local_3c._4_4_ < 0) {
LAB_016e1980:
                  local_f0 = piVar24;
                  local_a8 = piVar17;
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(piVar14,unaff_r9);
                }
                if (local_3c._4_4_ == (int *)0x0) {
                  unaff_r9 = (int *)&DAT_00000001;
                }
                else {
                  piVar14 = (int *)&DAT_00000001;
                  unaff_r9 = (int *)FUN_01298504(local_3c._4_4_,1);
                  if (unaff_r9 == (int *)0x0) {
                    unaff_r9 = piVar2;
                    goto LAB_016e1980;
                  }
                  piVar14 = piVar2;
                }
                FUN_01bed4e2(unaff_r9,uVar13,piVar2);
                local_f8 = piVar2;
                local_100 = piVar14;
                local_fc = unaff_r9;
              }
              else {
                FUN_01ac6cbc(&local_100,(uint)local_3c,local_3c._4_4_);
              }
              if (piVar2 != (int *)0x0) {
                thunk_FUN_01be4678(uVar13);
              }
              thunk_FUN_01be4678(uVar18);
            }
            else {
              bVar26 = local_100 == (int *)&DAT_80000000;
              local_100 = (int *)&DAT_80000000;
              if (bVar26) {
                iVar12 = local_12c;
              }
              else {
                local_64 = piVar14;
                local_60 = local_fc;
                piStack_5c = local_f8;
                uVar27 = FUN_016571c0(&local_64);
                iVar12 = (int)((ulonglong)uVar27 >> 0x20);
                if (iVar12 == 0) {
                  local_28 = FUN_016dee1c();
                  uVar27 = CONCAT44(local_3c._4_4_,(uint)local_3c);
                }
                else {
                  local_28 = FUN_016df13c((int)uVar27,iVar12);
                }
                local_40 = (uint)(iVar12 != 0);
                local_3c = uVar27;
                if (local_12c == local_110) {
                  FUN_015f5b48(&local_110);
                  local_128 = local_10c;
                }
                iVar12 = local_12c + 1;
                puVar4 = (uint *)(local_128 + local_12c * 7);
                *puVar4 = local_40;
                *(undefined8 *)(puVar4 + 1) = local_3c;
                puVar4[3] = local_34;
                puVar4[4] = uStack_30;
                puVar4[5] = uStack_2c;
                puVar4[6] = local_28;
                local_108 = iVar12;
              }
              local_40 = local_80;
              local_3c._0_4_ = local_7c;
              local_3c._4_4_ = local_78;
              local_34 = uStack_74;
              uStack_30 = uStack_70;
              uStack_2c = uStack_6c;
              local_28 = uVar18;
              if (iVar12 == local_110) {
                FUN_015f5b48(&local_110);
                local_128 = local_10c;
              }
              local_12c = iVar12 + 1;
              puVar4 = (uint *)(local_128 + iVar12 * 7);
              *puVar4 = local_40;
              puVar4[1] = (uint)local_3c;
              puVar4[2] = (uint)local_3c._4_4_;
              puVar4[3] = local_34;
              puVar4[4] = uStack_30;
              puVar4[5] = uStack_2c;
              puVar4[6] = local_28;
              local_108 = local_12c;
            }
            piVar14 = piVar11 + 7;
            piVar11 = piVar17;
          } while (piVar14 != piVar9);
          piVar17 = piVar9;
LAB_016e1404:
          local_a8 = piVar17;
        }
        FUN_016f5408(&local_ac);
        thunk_FUN_01be4678(uVar16);
      }
      else if (local_40 == 1) {
        if (local_100 == (int *)&DAT_80000000) {
          piVar11 = (int *)0x0;
          if ((int)local_3c._4_4_ < 0) {
LAB_016e19bc:
            local_f0 = piVar24;
                    /* WARNING: Subroutine does not return */
            FUN_00664620(piVar11,local_124);
          }
          if (local_3c._4_4_ == (int *)0x0) {
            local_124 = (int *)&DAT_00000001;
          }
          else {
            piVar11 = (int *)&DAT_00000001;
            local_124 = (int *)FUN_01298504(local_3c._4_4_,1);
            if (local_124 == (int *)0x0) {
              local_124 = piVar9;
              goto LAB_016e19bc;
            }
            piVar11 = piVar9;
          }
          FUN_01bed4e2(local_124,uVar13,piVar9);
          local_f8 = piVar9;
          local_100 = piVar11;
          local_fc = local_124;
        }
        else {
          FUN_01ac6cbc(&local_100,(uint)local_3c,local_3c._4_4_);
        }
        if (piVar9 != (int *)0x0) {
          thunk_FUN_01be4678(uVar13);
        }
        thunk_FUN_01be4678(uVar16);
      }
      else if (local_40 == 0) {
        thunk_FUN_01be4678(local_28);
        FUN_016df4b4(&local_c8);
      }
      else {
        bVar26 = local_100 == (int *)&DAT_80000000;
        local_100 = (int *)&DAT_80000000;
        if (bVar26) {
          iVar12 = local_12c;
        }
        else {
          local_58 = piVar11;
          local_54 = local_fc;
          piStack_50 = local_f8;
          uVar27 = FUN_016571c0(&local_58);
          iVar12 = (int)((ulonglong)uVar27 >> 0x20);
          if (iVar12 == 0) {
            local_28 = FUN_016dee1c();
            uVar27 = CONCAT44(local_3c._4_4_,(uint)local_3c);
          }
          else {
            local_28 = FUN_016df13c((int)uVar27,iVar12);
          }
          local_40 = (uint)(iVar12 != 0);
          local_3c = uVar27;
          if (local_12c == local_110) {
            FUN_015f5b48(&local_110);
            local_128 = local_10c;
          }
          iVar12 = local_12c + 1;
          puVar4 = (uint *)(local_128 + local_12c * 7);
          *puVar4 = local_40;
          *(undefined8 *)(puVar4 + 1) = local_3c;
          puVar4[3] = local_34;
          puVar4[4] = uStack_30;
          puVar4[5] = uStack_2c;
          puVar4[6] = local_28;
          local_108 = iVar12;
        }
        local_40 = local_c8;
        local_3c._0_4_ = local_c4;
        local_3c._4_4_ = local_c0;
        local_34 = local_bc;
        uStack_30 = uStack_b8;
        uStack_2c = uStack_b4;
        local_28 = uVar16;
        if (iVar12 == local_110) {
          FUN_015f5b48(&local_110);
          local_128 = local_10c;
        }
        local_12c = iVar12 + 1;
        puVar4 = (uint *)(local_128 + iVar12 * 7);
        *puVar4 = local_40;
        puVar4[1] = (uint)local_3c;
        puVar4[2] = (uint)local_3c._4_4_;
        puVar4[3] = local_34;
        puVar4[4] = uStack_30;
        puVar4[5] = uStack_2c;
        puVar4[6] = local_28;
        local_108 = local_12c;
      }
      piVar11 = piVar24;
    } while (piVar24 != piVar7);
    piVar24 = piVar7;
LAB_016e15cc:
    local_f0 = piVar24;
  }
  FUN_016f5408(&local_f4);
  piVar7 = local_100;
  bVar26 = local_100 != (int *)&DAT_80000000;
  local_100 = (int *)0x80000000;
  iVar12 = local_12c;
  if (bVar26) {
    local_48 = local_fc;
    local_4c = piVar7;
    local_44 = local_f8;
    uVar27 = FUN_016571c0(&local_4c);
    iVar12 = (int)((ulonglong)uVar27 >> 0x20);
    if (iVar12 == 0) {
      local_28 = FUN_016dee1c();
      uVar27 = CONCAT44(local_3c._4_4_,(uint)local_3c);
    }
    else {
      local_28 = FUN_016df13c((int)uVar27,iVar12);
    }
    local_40 = (uint)(iVar12 != 0);
    local_3c = uVar27;
    if (local_12c == local_110) {
      FUN_015f5b48(&local_110);
      local_128 = local_10c;
    }
    iVar12 = local_12c + 1;
    puVar4 = (uint *)(local_128 + local_12c * 7);
    *puVar4 = local_40;
    *(undefined8 *)(puVar4 + 1) = local_3c;
    puVar4[3] = local_34;
    puVar4[4] = uStack_30;
    puVar4[5] = uStack_2c;
    puVar4[6] = local_28;
    local_108 = iVar12;
  }
  if (iVar12 == 1) {
    local_108 = 0;
    if (*local_128 == 8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d0a208);
    }
    *param_1 = *local_128;
    iVar12 = local_128[2];
    iVar25 = local_128[3];
    iVar8 = local_128[4];
    iVar5 = local_128[5];
    iVar15 = local_128[6];
    param_1[1] = local_128[1];
    param_1[2] = iVar12;
    param_1[3] = iVar25;
    param_1[4] = iVar8;
    param_1[5] = iVar5;
    param_1[6] = iVar15;
  }
  else {
    if (iVar12 != 0) {
      uVar16 = 1;
      piVar11 = local_128 + iVar12 * 7;
      local_118 = 1;
      local_130 = 0;
      iVar25 = iVar12 * 0x1c;
      local_11c = 1;
      local_134 = 0;
      local_114 = 0;
      uVar18 = 0;
      uVar13 = 0;
      bVar3 = 1;
      bVar19 = 1;
      iVar8 = iVar25;
      piVar7 = local_128 + 6;
      bVar22 = 1;
      do {
        piVar24 = (int *)*piVar7;
        bVar1 = bVar3 & 1;
        bVar3 = 0;
        bVar20 = 0;
        if (bVar1 != 0) {
          bVar3 = *(byte *)(piVar24 + 0xc);
        }
        bVar26 = CARRY4(piVar24[5],local_114);
        local_114 = piVar24[5] + local_114;
        if (bVar26) {
          local_114 = 0xffffffff;
        }
        bVar26 = CARRY4(uVar13,piVar24[0xb]);
        uVar13 = uVar13 + piVar24[0xb];
        if (bVar26) {
          uVar13 = 0xffffffff;
        }
        bVar1 = bVar19 & 1;
        bVar19 = 0;
        if (bVar1 != 0) {
          bVar19 = *(byte *)((int)piVar24 + 0x31);
        }
        if ((bVar22 & 1) != 0) {
          bVar20 = *(byte *)((int)piVar24 + 0x32);
        }
        iVar5 = 0;
        if (local_118 != 0) {
          iVar5 = *piVar24;
        }
        if (local_118 != 0 && iVar5 != 0) {
          bVar26 = CARRY4(local_130,piVar24[1]);
          local_130 = local_130 + piVar24[1];
          local_118 = 1;
          if (bVar26) {
            local_130 = 0xffffffff;
          }
        }
        else {
          local_118 = 0;
        }
        iVar5 = 0;
        if (local_11c != 0) {
          iVar5 = piVar24[2];
        }
        if (local_11c != 0 && iVar5 != 0) {
          local_11c = (uint)(local_134 <= piVar24[3] + local_134);
          local_134 = piVar24[3] + local_134;
        }
        else {
          local_11c = 0;
        }
        uVar18 = piVar24[6] | uVar18;
        uVar16 = piVar24[4] & uVar16;
        iVar8 = iVar8 + -0x1c;
        piVar7 = piVar7 + 7;
        bVar22 = bVar20;
      } while (iVar8 != 0);
      uVar10 = 0;
      uVar23 = 0;
      do {
        if (iVar25 == 0) break;
        iVar8 = local_128[6];
        uVar6 = *(uint *)(iVar8 + 0x1c);
        bVar26 = *(int *)(iVar8 + 8) == 1;
        uVar23 = uVar6 | uVar23;
        if (bVar26) {
          uVar6 = *(uint *)(iVar8 + 0xc);
        }
        uVar10 = *(uint *)(iVar8 + 0x24) | uVar10;
        if (bVar26) {
          iVar25 = iVar25 + -0x1c;
          local_128 = local_128 + 7;
        }
      } while (bVar26 && uVar6 == 0);
      uVar6 = 0;
      iVar12 = iVar12 * -0x1c;
      uVar21 = 0;
      do {
        if (iVar12 == 0) break;
        iVar25 = piVar11[-1];
        uVar21 = *(uint *)(iVar25 + 0x20) | uVar21;
        uVar6 = *(uint *)(iVar25 + 0x28) | uVar6;
        if (*(int *)(iVar25 + 8) != 1) break;
        iVar12 = iVar12 + 0x1c;
        piVar11 = piVar11 + -7;
      } while (*(int *)(iVar25 + 0xc) == 0);
      piVar7 = (int *)thunk_FUN_01be5118(0x34);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x34);
      }
      *(byte *)((int)piVar7 + 0x32) = bVar20 & 1;
      *(byte *)((int)piVar7 + 0x31) = bVar19 & 1;
      *(byte *)(piVar7 + 0xc) = bVar3 & 1;
      piVar7[0xb] = uVar13;
      *piVar7 = local_118;
      piVar7[1] = local_130;
      piVar7[2] = local_11c;
      piVar7[3] = local_134;
      piVar7[8] = uVar21;
      piVar7[5] = local_114;
      piVar7[6] = uVar18;
      piVar7[7] = uVar23;
      piVar7[9] = uVar10;
      piVar7[10] = uVar6;
      piVar7[4] = uVar16;
      param_1[1] = local_110;
      param_1[2] = (int)local_10c;
      param_1[3] = local_108;
      param_1[6] = (int)piVar7;
      *param_1 = 6;
      return;
    }
    iVar12 = FUN_016dee1c();
    param_1[6] = iVar12;
    *param_1 = 0;
  }
  FUN_01334e1c(&local_110);
  return;
}

