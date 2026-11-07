// FUN_016c1354 @ 016c1354 size=3064 calls_out=18 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016c1354(undefined4 *param_1,int param_2,undefined4 param_3,int *******param_4)

{
  int *******pppppppiVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int ******ppppppiVar7;
  int *piVar8;
  uint extraout_r1;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *******pppppppiVar14;
  int *******unaff_r11;
  int *******pppppppiVar15;
  int *******extraout_r12;
  int *******extraout_r12_00;
  int *******pppppppiVar16;
  int *******pppppppiVar17;
  bool bVar18;
  int *******local_158;
  int *******local_154;
  undefined4 local_150;
  int *******local_14c;
  int *******local_148;
  int *******local_144;
  int local_140;
  int local_13c;
  int ******local_134;
  int *******local_130;
  int *******local_12c;
  int *******local_128;
  int *******pppppppiStack_124;
  int *******local_120;
  int *******pppppppiStack_11c;
  int iStack_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int *******local_fc;
  int *******local_f8;
  int local_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int *******local_d4;
  int *******pppppppiStack_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int *******local_c0;
  int *******local_bc;
  int *******local_b8;
  int *******local_b0;
  int *******local_ac;
  int *******local_a8;
  int *******pppppppiStack_a4;
  int *******local_a0;
  int *******pppppppiStack_9c;
  int iStack_98;
  int local_94;
  int *******local_90;
  int *******pppppppiStack_8c;
  int *******pppppppiStack_88;
  int *******pppppppiStack_84;
  int *******pppppppiStack_80;
  int *******pppppppiStack_7c;
  int *******local_78;
  int *local_74;
  int *******local_70;
  int *******local_6c;
  int *******local_68;
  int *local_58;
  int *******local_50;
  int *******local_4c;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  int *******local_3c;
  int *******pppppppiStack_38;
  int *******local_34;
  int *******local_30;
  int *******local_2c;
  
  uVar6 = *(uint *)(param_2 + 0x30);
  uVar2 = *(uint *)(param_2 + 0x58);
  if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af278);
  }
  if (uVar6 - uVar2 == *(int *)(param_2 + 0x18)) {
    if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar6,&DAT_018af258);
    }
    piVar13 = (int *)(*(int *)(param_2 + 0x2c) + uVar2 * 0x20);
    iVar3 = *piVar13;
    if (iVar3 != -0x7ffffffd) {
      if (iVar3 == -0x7ffffffe) {
        iVar3 = piVar13[7];
        FUN_016056c8(&local_50,piVar13 + 1);
        if (((uint)local_50 & 1) == 0) {
          local_110 = 2;
        }
        else if (local_48 == (int *******)0x0) {
          local_108 = -0x80000000;
          local_10c = -0x80000000;
          local_110 = 1;
          local_fc = local_44;
          local_f8 = local_40;
          local_f4 = iVar3 + 1;
        }
        else {
          FUN_016c2544(&local_110,iVar3 + 1,&local_48);
          DataMemoryBarrier(0xb);
          do {
            ppppppiVar7 = *local_30;
            bVar18 = (bool)hasExclusiveAccess(local_30);
          } while (!bVar18);
          *local_30 = (int ******)((int)ppppppiVar7 + -1);
          if (ppppppiVar7 == (int ******)0x1) {
            DataMemoryBarrier(0xb);
            FUN_015f4880(local_30);
          }
          *(undefined1 *)local_48 = 0;
          if (local_44 != (int *******)0x0) {
            thunk_FUN_016d3fb4();
          }
        }
      }
      else {
        *piVar13 = -0x7fffffff;
        local_110 = 2;
        if (iVar3 != -0x7fffffff) {
          local_108 = piVar13[1];
          iStack_104 = piVar13[2];
          iStack_100 = piVar13[3];
          local_fc = (int *******)piVar13[4];
          local_f8 = (int *******)piVar13[5];
          local_110 = 1;
          local_10c = iVar3;
          local_f4 = piVar13[6];
        }
      }
      if (local_110 != 2) {
        local_74 = (int *)thunk_FUN_016d4a50(0xa0);
        if (local_74 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,0xa0);
        }
        *local_74 = local_110;
        local_74[1] = local_10c;
        local_74[2] = local_108;
        local_74[3] = iStack_104;
        local_74[4] = iStack_100;
        local_74[5] = (int)local_fc;
        local_74[6] = (int)local_f8;
        local_74[7] = local_f4;
        local_74[8] = iStack_f0;
        local_74[9] = iStack_ec;
        local_70 = (int *******)&DAT_00000001;
        local_78 = (int *******)&DAT_00000004;
        do {
          iVar3 = *piVar13;
          pppppppiVar16 = local_70;
          piVar12 = local_74;
          unaff_r11 = local_78;
          if (iVar3 == -0x7ffffffd) {
            piVar8 = (int *)piVar13[2];
            if (piVar8 == (int *)piVar13[4]) goto LAB_016c16d4;
            piVar13[2] = (int)(piVar8 + 10);
            local_e8 = *piVar8;
            local_e0 = piVar8[2];
            iStack_dc = piVar8[3];
            iStack_d8 = piVar8[4];
            local_d4 = (int *******)piVar8[5];
            pppppppiStack_d0 = (int *******)piVar8[6];
            iStack_c8 = piVar8[8];
            iStack_c4 = piVar8[9];
            local_e4 = piVar8[1];
            local_cc = piVar8[7];
          }
          else if (iVar3 == -0x7ffffffe) {
            iVar3 = piVar13[7];
            FUN_016056c8(&local_50,piVar13 + 1);
            pppppppiVar16 = local_70;
            piVar12 = local_74;
            unaff_r11 = local_78;
            if (((uint)local_50 & 1) == 0) {
              local_e8 = 2;
            }
            else if (local_48 == (int *******)0x0) {
              local_e0 = -0x80000000;
              local_e4 = -0x80000000;
              local_e8 = 1;
              local_d4 = local_44;
              pppppppiStack_d0 = local_40;
              local_cc = iVar3 + 1;
            }
            else {
              FUN_016c2544(&local_e8,iVar3 + 1,&local_48);
              DataMemoryBarrier(0xb);
              do {
                ppppppiVar7 = *local_30;
                bVar18 = (bool)hasExclusiveAccess(local_30);
              } while (!bVar18);
              *local_30 = (int ******)((int)ppppppiVar7 + -1);
              if (ppppppiVar7 == (int ******)0x1) {
                DataMemoryBarrier(0xb);
                FUN_015f4880(local_30);
              }
              *(undefined1 *)local_48 = 0;
              unaff_r11 = local_78;
              piVar12 = local_74;
              pppppppiVar16 = local_70;
              if (local_44 != (int *******)0x0) {
                thunk_FUN_016d3fb4();
                unaff_r11 = local_78;
                piVar12 = local_74;
                pppppppiVar16 = local_70;
              }
            }
          }
          else {
            *piVar13 = -0x7fffffff;
            local_e8 = 2;
            if (iVar3 != -0x7fffffff) {
              local_e0 = piVar13[1];
              iStack_dc = piVar13[2];
              iStack_d8 = piVar13[3];
              local_d4 = (int *******)piVar13[4];
              pppppppiStack_d0 = (int *******)piVar13[5];
              local_cc = piVar13[6];
              local_e8 = 1;
              local_e4 = iVar3;
            }
          }
          local_78 = unaff_r11;
          local_74 = piVar12;
          local_70 = pppppppiVar16;
          if (local_e8 == 2) goto LAB_016c16d4;
          if (pppppppiVar16 == unaff_r11) {
            FUN_016c0774(&local_78,unaff_r11,1);
          }
          piVar12 = local_74 + (int)pppppppiVar16 * 10;
          *piVar12 = local_e8;
          piVar12[1] = local_e4;
          piVar12[2] = local_e0;
          piVar12[3] = iStack_dc;
          piVar12[4] = iStack_d8;
          piVar12[5] = (int)local_d4;
          piVar12[6] = (int)pppppppiStack_d0;
          piVar12[7] = local_cc;
          piVar12[8] = iStack_c8;
          piVar12[9] = iStack_c4;
          local_70 = (int *******)((int)pppppppiVar16 + 1);
        } while( true );
      }
      pppppppiVar16 = (int *******)0x0;
      piVar12 = (int *)&DAT_00000008;
      unaff_r11 = (int *******)0x0;
LAB_016c16d4:
      FUN_016c11c0(piVar13);
      piVar13[2] = (int)piVar12;
      *piVar13 = -0x7ffffffd;
      piVar13[1] = (int)piVar12;
      piVar13[3] = (int)unaff_r11;
      piVar13[4] = (int)(piVar12 + (int)pppppppiVar16 * 10);
    }
  }
  pppppppiVar17 = (int *******)0x16c170c;
  FUN_015f5c04(&local_50,param_3,param_4);
  pppppppiVar15 = local_48;
  pppppppiVar16 = local_4c;
  if (local_50 == (int *******)0x0) {
    local_158 = (int *******)0x80000002;
    uVar4 = (uint)local_48 & 0xff;
    iVar3 = *(int *)(param_2 + 0x5c);
    uVar9 = extraout_r1;
    local_154 = local_4c;
    local_148 = param_4;
    pppppppiVar16 = extraout_r12;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x5c);
    if (param_4 == (int *******)0x0) {
      uVar4 = 1;
    }
    else {
      uVar4 = thunk_FUN_016d4a50(param_4);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_4);
      }
    }
    pppppppiVar17 = (int *******)0x16c1784;
    FUN_016dd1aa(uVar4,param_3,param_4);
    uVar9 = uVar4 >> 8;
    local_158 = (int *******)&DAT_80000000;
    local_154 = param_4;
    local_148 = pppppppiVar16;
    unaff_r11 = pppppppiVar15;
    pppppppiVar16 = extraout_r12_00;
  }
  local_150 = (int *******)CONCAT13((char)(uVar9 >> 0x10),CONCAT21((short)uVar9,(char)uVar4));
  local_14c = param_4;
  local_144 = unaff_r11;
  local_140 = iVar3;
  local_13c = iVar3;
  if (*(int *)(param_2 + 0x10) == 0) goto LAB_016c1db4;
  local_134 = (int ******)(param_2 + 0x10);
  local_128 = local_150;
  local_130 = local_158;
  local_12c = local_154;
  pppppppiStack_124 = param_4;
  local_120 = local_148;
  pppppppiStack_11c = unaff_r11;
  iStack_118 = iVar3;
  local_114 = iVar3;
  if (local_158 == (int *******)0x80000003) {
    if (local_150 != local_148) {
      local_128 = local_150 + 10;
      local_50 = (int *******)*local_150;
      pppppppiVar15 = (int *******)local_150[1];
      local_b0 = (int *******)local_150[2];
      local_ac = (int *******)local_150[3];
      local_a8 = (int *******)local_150[4];
      pppppppiStack_a4 = (int *******)local_150[5];
      local_a0 = (int *******)local_150[6];
      pppppppiStack_9c = (int *******)local_150[7];
      pppppppiVar16 = (int *******)local_150[8];
      pppppppiVar17 = (int *******)local_150[9];
      if (local_50 != (int *******)&SUB_00000002) goto LAB_016c1a2c;
      goto LAB_016c1950;
    }
  }
  else {
    if (local_158 != (int *******)0x80000002) {
      local_130 = (int *******)0x80000001;
      if (local_158 != (int *******)0x80000001) {
        puVar5 = (undefined4 *)((uint)&local_158 | 4);
        local_50 = (int *******)&DAT_00000001;
        local_b0 = (int *******)*puVar5;
        local_ac = (int *******)puVar5[1];
        local_a8 = (int *******)puVar5[2];
        pppppppiStack_a4 = (int *******)puVar5[3];
        local_a0 = (int *******)puVar5[4];
        pppppppiStack_9c = (int *******)puVar5[5];
        pppppppiVar15 = local_158;
LAB_016c1a2c:
        local_48 = local_b0;
        local_44 = local_ac;
        local_40 = local_a8;
        local_3c = pppppppiStack_a4;
        pppppppiStack_38 = local_a0;
        local_34 = pppppppiStack_9c;
        local_4c = pppppppiVar15;
        local_30 = pppppppiVar16;
        local_2c = pppppppiVar17;
        local_bc = (int *******)thunk_FUN_016d4a50(0xa0);
        if (local_bc == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,0xa0);
        }
        *local_bc = (int ******)local_50;
        local_bc[1] = (int ******)local_4c;
        local_bc[2] = (int ******)local_48;
        local_bc[3] = (int ******)local_44;
        local_bc[4] = (int ******)local_40;
        local_bc[5] = (int ******)local_3c;
        local_bc[6] = (int ******)pppppppiStack_38;
        local_bc[7] = (int ******)local_34;
        local_bc[8] = (int ******)local_30;
        local_bc[9] = (int ******)local_2c;
        local_c0 = (int *******)&DAT_00000004;
        local_b8 = (int *******)&DAT_00000001;
        pppppppiVar16 = (int *******)&local_120;
        local_b0 = local_130;
        local_ac = local_12c;
        local_a8 = local_128;
        pppppppiStack_a4 = pppppppiStack_124;
        local_a0 = local_120;
        pppppppiStack_9c = pppppppiStack_11c;
        iStack_98 = iStack_118;
        local_94 = local_114;
        puVar5 = (undefined4 *)((uint)&local_b0 | 4);
        pppppppiVar17 = (int *******)&local_b0;
        do {
          iVar3 = local_94;
          pppppppiVar14 = local_b0;
          if (local_b0 == (int *******)0x80000003) {
            if (local_a8 == local_a0) goto LAB_016c1cb0;
            local_90 = (int *******)local_a8[2];
            pppppppiStack_8c = (int *******)local_a8[3];
            pppppppiStack_88 = (int *******)local_a8[4];
            pppppppiStack_84 = (int *******)local_a8[5];
            pppppppiStack_80 = (int *******)local_a8[6];
            pppppppiStack_7c = (int *******)local_a8[7];
            pppppppiVar16 = (int *******)local_a8[8];
            pppppppiVar14 = (int *******)local_a8[1];
            pppppppiVar15 = (int *******)local_a8[9];
            pppppppiVar17 = (int *******)*local_a8;
            local_a8 = local_a8 + 10;
LAB_016c1c58:
            if (pppppppiVar17 == (int *******)&SUB_00000002) goto LAB_016c1ca4;
          }
          else {
            if (local_b0 == (int *******)0x80000002) {
              FUN_016056c8(&local_78,puVar5);
              pppppppiVar14 = pppppppiVar17;
              pppppppiVar17 = (int *******)&SUB_00000002;
              if (((uint)local_78 & 1) != 0) {
                if (local_70 == (int *******)0x0) {
                  local_3c = local_6c;
                  pppppppiStack_38 = local_68;
                  local_48 = (int *******)&DAT_80000000;
                  local_4c = (int *******)&DAT_80000000;
                  local_50 = (int *******)&DAT_00000001;
                  local_34 = (int *******)(iVar3 + 1);
                }
                else {
                  FUN_016c2544(&local_50,(int *******)(iVar3 + 1),&local_70);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar3 = *local_58;
                    bVar18 = (bool)hasExclusiveAccess(local_58);
                  } while (!bVar18);
                  *local_58 = iVar3 + -1;
                  if (iVar3 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_015f4880(local_58);
                  }
                  *(undefined1 *)local_70 = 0;
                  if (local_6c != (int *******)0x0) {
                    thunk_FUN_016d3fb4();
                  }
                }
                local_90 = local_48;
                pppppppiStack_8c = local_44;
                pppppppiStack_88 = local_40;
                pppppppiStack_84 = local_3c;
                pppppppiStack_80 = pppppppiStack_38;
                pppppppiStack_7c = local_34;
                pppppppiVar16 = local_30;
                pppppppiVar14 = local_4c;
                pppppppiVar15 = local_2c;
                pppppppiVar17 = local_50;
              }
              goto LAB_016c1c58;
            }
            bVar18 = local_b0 == (int *******)0x80000001;
            local_b0 = (int *******)0x80000001;
            if (bVar18) goto LAB_016c1d60;
            local_90 = (int *******)*puVar5;
            pppppppiStack_8c = (int *******)puVar5[1];
            pppppppiStack_88 = (int *******)puVar5[2];
            pppppppiStack_84 = (int *******)puVar5[3];
            pppppppiStack_80 = (int *******)puVar5[4];
            pppppppiStack_7c = (int *******)puVar5[5];
            pppppppiVar17 = (int *******)&DAT_00000001;
          }
          pppppppiVar1 = local_b8;
          local_48 = local_90;
          local_44 = pppppppiStack_8c;
          local_40 = pppppppiStack_88;
          local_3c = pppppppiStack_84;
          pppppppiStack_38 = pppppppiStack_80;
          local_34 = pppppppiStack_7c;
          local_50 = pppppppiVar17;
          local_4c = pppppppiVar14;
          local_30 = pppppppiVar16;
          local_2c = pppppppiVar15;
          if (local_b8 == local_c0) {
            FUN_016c0774(&local_c0,local_b8,1);
          }
          local_b8 = (int *******)((int)pppppppiVar1 + 1);
          pppppppiVar17 = local_bc + (int)pppppppiVar1 * 10;
          *pppppppiVar17 = (int ******)local_50;
          pppppppiVar17[1] = (int ******)local_4c;
          pppppppiVar17[2] = (int ******)local_48;
          pppppppiVar17[3] = (int ******)local_44;
          pppppppiVar17[4] = (int ******)local_40;
          pppppppiVar17[5] = (int ******)local_3c;
          pppppppiVar17[6] = (int ******)pppppppiStack_38;
          pppppppiVar17[7] = (int ******)local_34;
          pppppppiVar17[8] = (int ******)local_30;
          pppppppiVar17[9] = (int ******)local_2c;
          pppppppiVar17 = pppppppiVar14;
        } while( true );
      }
      local_48 = (int *******)0x0;
      local_4c = (int *******)&DAT_00000008;
      local_50 = (int *******)0x0;
      goto LAB_016c1d70;
    }
    FUN_016056c8(&local_78,(uint)&local_130 | 4);
    if (((uint)local_78 & 1) != 0) {
      if (local_70 == (int *******)0x0) {
        local_3c = local_6c;
        pppppppiStack_38 = local_68;
        local_48 = (int *******)&DAT_80000000;
        local_4c = (int *******)&DAT_80000000;
        local_50 = (int *******)&DAT_00000001;
        local_34 = (int *******)(iVar3 + 1);
      }
      else {
        FUN_016c2544(&local_50,(int *******)(iVar3 + 1),&local_70);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_58;
          bVar18 = (bool)hasExclusiveAccess(local_58);
        } while (!bVar18);
        *local_58 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015f4880(local_58);
        }
        *(undefined1 *)local_70 = 0;
        if (local_6c != (int *******)0x0) {
          thunk_FUN_016d3fb4();
        }
      }
      local_b0 = local_48;
      local_ac = local_44;
      local_a8 = local_40;
      pppppppiStack_a4 = local_3c;
      local_a0 = pppppppiStack_38;
      pppppppiStack_9c = local_34;
      pppppppiVar15 = local_4c;
      pppppppiVar16 = local_30;
      pppppppiVar17 = local_2c;
      if (local_50 != (int *******)&SUB_00000002) goto LAB_016c1a2c;
    }
LAB_016c1950:
    local_48 = (int *******)0x0;
    local_4c = (int *******)&DAT_00000008;
    local_50 = (int *******)0x0;
    if (local_130 != (int *******)0x80000003) {
      if (local_130 != (int *******)0x80000001) {
        if (local_130 == (int *******)0x80000002) {
          DataMemoryBarrier(0xb);
          do {
            ppppppiVar7 = *local_12c;
            bVar18 = (bool)hasExclusiveAccess(local_12c);
          } while (!bVar18);
          *local_12c = (int ******)((int)ppppppiVar7 + -1);
          if (ppppppiVar7 == (int ******)0x1) {
            DataMemoryBarrier(0xb);
            FUN_015f4880(local_12c);
          }
        }
        else {
          FUN_016c2dd0(&local_130);
        }
      }
      goto LAB_016c1d70;
    }
  }
  local_48 = (int *******)0x0;
  local_4c = (int *******)&DAT_00000008;
  local_50 = (int *******)0x0;
  FUN_016c2ce4((uint)&local_130 | 4);
  goto LAB_016c1d70;
LAB_016c1ca4:
  if (local_b0 == (int *******)0x80000003) {
LAB_016c1cb0:
    FUN_016c2ce4(puVar5);
  }
  else if (local_b0 != (int *******)0x80000001) {
    if (local_b0 == (int *******)0x80000002) {
      DataMemoryBarrier(0xb);
      do {
        ppppppiVar7 = *local_ac;
        bVar18 = (bool)hasExclusiveAccess(local_ac);
      } while (!bVar18);
      *local_ac = (int ******)((int)ppppppiVar7 + -1);
      if (ppppppiVar7 == (int ******)0x1) {
        DataMemoryBarrier(0xb);
        FUN_015f4880(local_ac);
      }
    }
    else {
      FUN_016c2dd0(&local_b0);
    }
  }
LAB_016c1d60:
  local_50 = local_c0;
  local_4c = local_bc;
  local_48 = local_b8;
LAB_016c1d70:
  pppppppiVar15 = local_48;
  pppppppiVar16 = local_4c;
  local_b0 = &local_134;
  local_78 = (int *******)&local_b0;
  if (&DAT_00000001 < local_48) {
    if (&DAT_00000014 < local_48) {
      FUN_016c2414(local_4c,local_48,&local_78);
    }
    else {
      FUN_016bf1a4(local_4c,local_48,&local_b0);
    }
  }
  local_14c = local_50;
  local_158 = (int *******)0x80000003;
  local_150 = pppppppiVar16;
  local_148 = pppppppiVar16 + (int)pppppppiVar15 * 10;
  local_154 = pppppppiVar16;
LAB_016c1db4:
  if (*(char *)(param_2 + 0x24) != '\0') {
    if (param_4 == (int *******)0x0) {
      iVar3 = 1;
      FUN_016dd1aa(1,param_3,0);
    }
    else {
      iVar3 = thunk_FUN_016d4a50(param_4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_4);
      }
      FUN_016dd1aa(iVar3,param_3,param_4);
      if (param_4 == (int *******)&DAT_80000000) {
        uVar10 = *(undefined4 *)(param_2 + 0x5c);
        *param_1 = 0x80000000;
        param_1[1] = 0x80000000;
        param_1[5] = 0x80000000;
        param_1[4] = iVar3;
        param_1[6] = uVar10;
        FUN_016c11c0(&local_158);
        return;
      }
    }
    iVar11 = *(int *)(param_2 + 0x3c);
    if (iVar11 == *(int *)(param_2 + 0x34)) {
      FUN_016c0714();
    }
    puVar5 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar11 * 0xc);
    *puVar5 = param_4;
    puVar5[1] = iVar3;
    puVar5[2] = param_4;
    *(int *)(param_2 + 0x3c) = iVar11 + 1;
  }
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 == *(int *)(param_2 + 0x28)) {
    FUN_016c0508(param_2 + 0x28);
  }
  puVar5 = (undefined4 *)(*(int *)(param_2 + 0x2c) + iVar3 * 0x20);
  *puVar5 = local_158;
  puVar5[1] = local_154;
  puVar5[2] = local_150;
  puVar5[3] = local_14c;
  puVar5[4] = local_148;
  puVar5[5] = local_144;
  puVar5[6] = local_140;
  puVar5[7] = local_13c;
  *(int *)(param_2 + 0x30) = iVar3 + 1;
  if (uVar6 - uVar2 == *(int *)(param_2 + 0x18)) {
    if (0xfffffffe < *(uint *)(param_2 + 0x58)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af268);
    }
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) + 1;
  }
  *param_1 = 0x80000001;
  return;
}

