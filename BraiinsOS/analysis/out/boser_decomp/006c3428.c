// FUN_006c3428 @ 006c3428 size=2416 calls_out=10 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: edge.height == self.node.height - 1

/* WARNING: Removing unreachable block (ram,0x006c3d24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006c3428(int *param_1,int *param_2,int *param_3,uint param_4,int *param_5)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  uint uVar16;
  int local_1ac;
  int local_1a4;
  uint local_198;
  int local_15c [3];
  int local_150;
  int local_14c;
  uint local_148;
  int local_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int local_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78 [2];
  int local_70 [2];
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    local_198 = param_2[1];
    do {
      piVar9 = (int *)(iVar3 + 0x210);
      uVar1 = *(ushort *)(iVar3 + 0x26e);
      uVar16 = 0xffffffff;
      iVar14 = (uint)uVar1 << 3;
      do {
        if (iVar14 == 0) {
          uVar16 = (uint)uVar1;
          goto LAB_006c34e4;
        }
        uVar13 = piVar9[1];
        uVar12 = uVar13;
        if (param_4 < uVar13) {
          uVar12 = param_4;
        }
        iVar4 = FUN_01bed842(param_3 + 2,*piVar9 + 8,uVar12);
        if (iVar4 == 0) {
          iVar4 = param_4 - uVar13;
        }
        iVar14 = iVar14 + -8;
        uVar16 = uVar16 + 1;
        piVar9 = piVar9 + 2;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) {
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(param_3,param_4);
        }
        piVar9 = (int *)(iVar3 + uVar16 * 0x30);
        iVar3 = piVar9[1];
        iVar14 = piVar9[2];
        iVar4 = piVar9[3];
        iVar7 = piVar9[4];
        iVar11 = piVar9[5];
        *param_1 = *piVar9;
        param_1[1] = iVar3;
        param_1[2] = iVar14;
        param_1[3] = iVar4;
        param_1[4] = iVar7;
        param_1[5] = iVar11;
        iVar3 = piVar9[7];
        iVar14 = piVar9[8];
        iVar4 = piVar9[9];
        iVar7 = piVar9[10];
        iVar11 = piVar9[0xb];
        param_1[6] = piVar9[6];
        param_1[7] = iVar3;
        param_1[8] = iVar14;
        param_1[9] = iVar4;
        param_1[10] = iVar7;
        param_1[0xb] = iVar11;
        iVar3 = param_5[1];
        iVar14 = param_5[2];
        iVar4 = param_5[3];
        iVar7 = param_5[4];
        iVar11 = param_5[5];
        *piVar9 = *param_5;
        piVar9[1] = iVar3;
        piVar9[2] = iVar14;
        piVar9[3] = iVar4;
        piVar9[4] = iVar7;
        piVar9[5] = iVar11;
        iVar3 = param_5[7];
        iVar14 = param_5[8];
        iVar4 = param_5[9];
        iVar7 = param_5[10];
        iVar11 = param_5[0xb];
        piVar9[6] = param_5[6];
        piVar9[7] = iVar3;
        piVar9[8] = iVar14;
        piVar9[9] = iVar4;
        piVar9[10] = iVar7;
        piVar9[0xb] = iVar11;
        return;
      }
LAB_006c34e4:
      if (local_198 == 0) goto LAB_006c3620;
      local_198 = local_198 + -1;
      iVar3 = *(int *)(iVar3 + uVar16 * 4 + 0x270);
    } while( true );
  }
LAB_006c358c:
  iVar3 = FUN_00702490();
  *param_2 = iVar3;
  param_2[1] = 0;
  local_c0 = *param_5;
  local_bc = param_5[1];
  local_b8 = param_5[2];
  iStack_b4 = param_5[3];
  local_b0 = param_5[4];
  local_ac = param_5[5];
  local_a8 = param_5[6];
  local_a4 = param_5[7];
  local_a0 = param_5[8];
  iStack_9c = param_5[9];
  local_98 = param_5[10];
  iStack_94 = param_5[0xb];
  uVar1 = *(ushort *)(iVar3 + 0x26e);
  uVar16 = (uint)uVar1;
  if (10 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(iVar3 + 0x26e) = uVar1 + 1;
  iVar14 = iVar3 + uVar16 * 8;
  *(int **)(iVar14 + 0x210) = param_3;
  *(uint *)(iVar14 + 0x214) = param_4;
  iVar14 = param_5[1];
  iVar4 = param_5[2];
  iVar7 = param_5[3];
  iVar11 = param_5[4];
  iVar5 = param_5[5];
  piVar9 = (int *)(iVar3 + uVar16 * 0x30);
  *piVar9 = *param_5;
  piVar9[1] = iVar14;
  piVar9[2] = iVar4;
  piVar9[3] = iVar7;
  piVar9[4] = iVar11;
  piVar9[5] = iVar5;
  iVar3 = param_5[7];
  iVar14 = param_5[8];
  iVar4 = param_5[9];
  iVar7 = param_5[10];
  iVar11 = param_5[0xb];
  piVar9[6] = param_5[6];
  piVar9[7] = iVar3;
  piVar9[8] = iVar14;
  piVar9[9] = iVar4;
  piVar9[10] = iVar7;
  piVar9[0xb] = iVar11;
LAB_006c3600:
  param_2[2] = param_2[2] + 1;
  param_1[4] = -0x7ffffff9;
  return;
LAB_006c3620:
  if (iVar3 != 0) {
    local_15c[1] = 0;
    local_58 = *param_5;
    iStack_54 = param_5[1];
    iStack_50 = param_5[2];
    local_4c = param_5[3];
    local_48 = param_5[4];
    local_44 = param_5[5];
    local_40 = param_5[6];
    iStack_3c = param_5[7];
    local_38 = param_5[8];
    iStack_34 = param_5[9];
    iStack_30 = param_5[10];
    iStack_2c = param_5[0xb];
    puVar10 = (ushort *)(iVar3 + 0x26e);
    local_15c[0] = iVar3;
    local_15c[2] = uVar16;
    if (*puVar10 < 0xb) {
      FUN_006b257c(&local_c0,local_15c,param_3,param_4,param_5);
    }
    else {
      uVar12 = 4;
      bVar2 = false;
      if (4 < uVar16) {
        if (uVar16 == 5) {
          uVar12 = 5;
        }
        else {
          if (uVar16 == 6) {
            uVar12 = 5;
            uVar16 = 0;
          }
          else {
            uVar16 = uVar16 - 7;
            uVar12 = 6;
          }
          bVar2 = true;
        }
      }
      local_1ac = FUN_00702490();
      uVar13 = ~uVar12 + (uint)*puVar10;
      piVar9 = (int *)(iVar3 + 0x210 + uVar12 * 8);
      iVar14 = *piVar9;
      *(short *)(local_1ac + 0x26e) = (short)uVar13;
      local_1a4 = piVar9[1];
      piVar9 = (int *)(iVar3 + uVar12 * 0x30);
      local_c0 = *piVar9;
      local_bc = piVar9[1];
      local_b8 = piVar9[2];
      iStack_b4 = piVar9[3];
      local_b0 = piVar9[4];
      local_ac = piVar9[5];
      local_a8 = piVar9[6];
      local_a4 = piVar9[7];
      local_a0 = piVar9[8];
      iStack_9c = piVar9[9];
      local_98 = piVar9[10];
      iStack_94 = piVar9[0xb];
      if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar13,0xb,&DAT_01d2ff10);
      }
      FUN_01bed4e2(local_1ac + 0x210,iVar3 + 0x210 + (uVar12 + 1) * 8,uVar13 * 8);
      FUN_01bed4e2(local_1ac,iVar3 + (uVar12 + 1) * 0x30,uVar13 * 0x30);
      iVar4 = local_b0;
      *puVar10 = (ushort)uVar12;
      local_120 = local_c0;
      iStack_11c = local_bc;
      iStack_118 = local_b8;
      local_114 = iStack_b4;
      local_f0 = local_ac;
      iStack_ec = local_a8;
      iStack_e8 = local_a4;
      local_e4 = local_a0;
      local_e0 = iStack_9c;
      local_dc = local_98;
      iStack_d8 = iStack_94;
      local_198 = 0;
      local_14c = 0;
      local_150 = local_1ac;
      if (!bVar2) {
        local_150 = iVar3;
      }
      local_148 = uVar16;
      FUN_006b257c(&local_c0,&local_150,param_3,param_4,param_5);
      if (iVar4 != -0x7ffffff9) {
        local_130 = local_120;
        iStack_12c = iStack_11c;
        iStack_128 = iStack_118;
        iStack_124 = local_114;
        local_150 = local_f0;
        local_14c = iStack_ec;
        local_148 = iStack_e8;
        local_144 = local_e4;
        iStack_140 = local_e0;
        iStack_13c = local_dc;
        iStack_138 = iStack_d8;
        iVar7 = *(int *)(iVar3 + 0x268);
        if (iVar7 != 0) {
          local_198 = 0;
          iVar11 = iVar14;
          do {
            uVar16 = (uint)*(ushort *)(iVar3 + 0x26c);
            local_f0 = local_130;
            iStack_ec = iStack_12c;
            iStack_e8 = iStack_128;
            local_e4 = iStack_124;
            local_dc = local_150;
            iStack_d8 = local_14c;
            iStack_d4 = local_148;
            local_d0 = local_144;
            iStack_cc = iStack_140;
            iStack_c8 = iStack_13c;
            iStack_c4 = iStack_138;
            puVar10 = (ushort *)(iVar7 + 0x26e);
            uVar1 = *puVar10;
            local_e0 = iVar4;
            if (uVar1 < 0xb) {
              FUN_006b29e0(iVar7,uVar16,iVar11,local_1a4,&local_f0,local_1ac);
              goto LAB_006c3600;
            }
            piVar9 = local_70;
            uVar12 = 4;
            if (4 < uVar16) {
              if (uVar16 == 5) {
                uVar12 = 5;
              }
              else {
                piVar9 = local_78;
                if (uVar16 == 6) {
                  uVar16 = 0;
                  uVar12 = 5;
                }
                else {
                  uVar16 = uVar16 - 7;
                  uVar12 = 6;
                }
              }
            }
            iVar3 = FUN_006c8e48();
            puVar15 = (ushort *)(iVar3 + 0x26e);
            *puVar15 = 0;
            *(undefined4 *)(iVar3 + 0x268) = 0;
            piVar8 = (int *)(iVar7 + 0x210 + uVar12 * 8);
            iVar14 = *piVar8;
            uVar13 = ~uVar12 + (uint)*puVar10;
            *puVar15 = (ushort)uVar13;
            iVar5 = piVar8[1];
            piVar8 = (int *)(iVar7 + uVar12 * 0x30);
            local_58 = *piVar8;
            iStack_54 = piVar8[1];
            iStack_50 = piVar8[2];
            local_4c = piVar8[3];
            local_48 = piVar8[4];
            local_44 = piVar8[5];
            local_40 = piVar8[6];
            iStack_3c = piVar8[7];
            local_38 = piVar8[8];
            iStack_34 = piVar8[9];
            iStack_30 = piVar8[10];
            iStack_2c = piVar8[0xb];
            if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar13,0xb,&DAT_01d2ff10);
            }
            FUN_01bed4e2(iVar3 + 0x210,iVar7 + 0x210 + (uVar12 + 1) * 8,uVar13 * 8);
            FUN_01bed4e2(iVar3,iVar7 + (uVar12 + 1) * 0x30,uVar13 * 0x30);
            *puVar10 = (ushort)uVar12;
            local_b8 = local_58;
            iStack_b4 = iStack_54;
            local_b0 = iStack_50;
            local_ac = local_4c;
            local_a8 = local_48;
            local_a4 = local_44;
            local_a0 = local_40;
            iStack_9c = iStack_3c;
            local_98 = local_38;
            iStack_94 = iStack_34;
            iStack_90 = iStack_30;
            iStack_8c = iStack_2c;
            uVar13 = (uint)*puVar15;
            iVar4 = uVar13 + 1;
            local_c0 = iVar14;
            local_bc = iVar5;
            if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar4,0xc,&DAT_01d2ff20);
            }
            if (uVar1 - uVar12 != iVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            local_198 = local_198 + 1;
            FUN_01bed4e2(iVar3 + 0x270,iVar7 + uVar12 * 4 + 0x274,iVar4 * 4);
            iVar4 = local_a8;
            uVar12 = 0;
            do {
              iVar6 = *(int *)(iVar3 + 0x270 + uVar12 * 4);
              *(short *)(iVar6 + 0x26c) = (short)uVar12;
              *(int *)(iVar6 + 0x268) = iVar3;
              if (uVar13 <= uVar12) break;
              uVar12 = uVar12 + 1;
            } while (uVar12 <= uVar13);
            local_68 = local_b8;
            iStack_64 = iStack_b4;
            iStack_60 = local_b0;
            iStack_5c = local_ac;
            local_58 = local_a4;
            iStack_54 = local_a0;
            iStack_50 = iStack_9c;
            local_4c = local_98;
            local_48 = iStack_94;
            local_44 = iStack_90;
            local_40 = iStack_8c;
            local_78[0] = iVar3;
            local_70[0] = iVar7;
            FUN_006b29e0(*piVar9,uVar16,iVar11,local_1a4,&local_f0,local_1ac);
            local_100 = local_68;
            iStack_fc = iStack_64;
            iStack_f8 = iStack_60;
            iStack_f4 = iStack_5c;
            local_120 = local_58;
            iStack_11c = iStack_54;
            iStack_118 = iStack_50;
            local_114 = local_4c;
            iStack_110 = local_48;
            iStack_10c = local_44;
            iStack_108 = local_40;
            if (iVar4 == -0x7ffffff9) goto LAB_006c3600;
            local_1ac = local_78[0];
            local_130 = local_68;
            iStack_12c = iStack_64;
            iStack_128 = iStack_60;
            iStack_124 = iStack_5c;
            local_150 = local_58;
            local_14c = iStack_54;
            local_148 = iStack_50;
            local_144 = local_4c;
            iStack_140 = local_48;
            iStack_13c = local_44;
            iStack_138 = local_40;
            iVar7 = *(int *)(local_70[0] + 0x268);
            iVar11 = iVar14;
            iVar3 = local_70[0];
            local_1a4 = iVar5;
          } while (iVar7 != 0);
        }
        local_b8 = local_130;
        iStack_b4 = iStack_12c;
        local_b0 = iStack_128;
        local_ac = iStack_124;
        local_a4 = local_150;
        local_a0 = local_14c;
        iStack_9c = local_148;
        local_98 = local_144;
        iStack_94 = iStack_140;
        iStack_90 = iStack_13c;
        iStack_8c = iStack_138;
        local_7c = local_198;
        iVar7 = *param_2;
        local_80 = local_1ac;
        local_c0 = iVar14;
        local_bc = local_1a4;
        local_a8 = iVar4;
        local_88 = iVar3;
        local_84 = local_198;
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        uVar16 = param_2[1];
        piVar9 = (int *)FUN_006c8e48();
        *(undefined2 *)((int)piVar9 + 0x26e) = 0;
        piVar9[0x9c] = iVar7;
        piVar9[0x9a] = 0;
        if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d305e8);
        }
        *param_2 = (int)piVar9;
        *(undefined2 *)(iVar7 + 0x26c) = 0;
        *(int **)(iVar7 + 0x268) = piVar9;
        param_2[1] = uVar16 + 1;
        local_58 = local_130;
        iStack_54 = iStack_12c;
        iStack_50 = iStack_128;
        local_4c = iStack_124;
        local_44 = local_150;
        local_40 = local_14c;
        iStack_3c = local_148;
        local_38 = local_144;
        iStack_34 = iStack_140;
        iStack_30 = iStack_13c;
        iStack_2c = iStack_138;
        if (local_198 != uVar16) {
          local_48 = iVar4;
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
        }
        piVar9[0x84] = iVar14;
        *(undefined2 *)((int)piVar9 + 0x26e) = 1;
        piVar9[0x85] = local_1a4;
        *piVar9 = local_130;
        piVar9[1] = iStack_12c;
        piVar9[2] = iStack_128;
        piVar9[3] = iStack_124;
        piVar9[4] = iVar4;
        piVar9[5] = local_150;
        piVar9[6] = local_14c;
        piVar9[7] = local_148;
        piVar9[8] = local_144;
        piVar9[9] = iStack_140;
        piVar9[10] = iStack_13c;
        piVar9[0xb] = iStack_138;
        piVar9[0x9d] = local_1ac;
        *(undefined2 *)(local_1ac + 0x26c) = 1;
        *(int **)(local_1ac + 0x268) = piVar9;
      }
    }
    goto LAB_006c3600;
  }
  goto LAB_006c358c;
}

