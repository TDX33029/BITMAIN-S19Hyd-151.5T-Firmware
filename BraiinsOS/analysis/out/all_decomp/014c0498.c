// FUN_014c0498 @ 014c0498 size=2388 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014c0498(undefined4 param_1,uint *param_2,uint *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int *piVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  bool bVar24;
  undefined *local_120;
  uint local_e4;
  int *local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  int *local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint *local_8c;
  uint *local_88;
  uint local_84;
  uint *local_80;
  int *local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int *local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar6 = 2;
  if ((uint)(*param_2 < 3) <= -param_2[1]) {
    iVar6 = *param_2 - 3;
  }
  if (iVar6 == 0) {
    uVar12 = param_3[1];
    uVar17 = param_3[2];
    uVar11 = param_3[3];
    uVar16 = param_3[4];
    *param_2 = *param_3;
    param_2[1] = uVar12;
    param_2[2] = uVar17;
    param_2[3] = uVar11;
    param_2[4] = uVar16;
    uVar12 = param_3[6];
    uVar17 = param_3[7];
    uVar11 = param_3[8];
    uVar16 = param_3[9];
    param_2[5] = param_3[5];
    param_2[6] = uVar12;
    param_2[7] = uVar17;
    param_2[8] = uVar11;
    param_2[9] = uVar16;
    uVar12 = param_3[0xb];
    uVar17 = param_3[0xc];
    uVar11 = param_3[0xd];
    uVar16 = param_3[0xe];
    uVar14 = param_3[0xf];
    param_2[10] = param_3[10];
    param_2[0xb] = uVar12;
    param_2[0xc] = uVar17;
    param_2[0xd] = uVar11;
    param_2[0xe] = uVar16;
    param_2[0xf] = uVar14;
  }
  else if (iVar6 == 1) {
    local_38 = (int *)param_2[2];
    uStack_34 = param_2[3];
    uStack_30 = param_2[4];
    uStack_2c = param_2[5];
    uStack_28 = param_2[6];
    local_94 = 0;
    local_98 = 0;
    local_9c = 0x33;
    local_a0 = (int *)0x0;
    FUN_014c10a8(&local_e0,param_3,&local_a0);
    uVar16 = local_d0;
    uVar11 = local_d4;
    uVar17 = local_d8;
    uVar12 = local_dc;
    piVar3 = local_e0;
    uVar14 = local_c8 >> 0x10 & 0xff;
    if (uVar14 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0040929f,0x17,&local_60,&DAT_018a62e4,&DAT_018a6164);
    }
    uVar23 = local_c8 & 0xffff;
    local_a0 = local_38;
    local_9c = uStack_34;
    local_98 = uStack_30;
    local_94 = uStack_2c;
    local_90 = uStack_28;
    if (uVar14 == 2) {
      if ((uint)local_e0[10] <= local_d8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_d8,local_e0[10],&DAT_018a6314);
      }
      (*(code *)local_38[4])(&local_94,uStack_34,uStack_30);
    }
    else {
      local_e0 = local_38;
      local_dc = uStack_34;
      local_d8 = uStack_30;
      local_d4 = uStack_2c;
      local_d0 = uStack_28;
      local_54 = uVar16;
      local_5c = uVar17;
      uVar17 = piVar3[10];
      local_58 = uVar11;
      local_60 = uVar12;
      iVar6 = FUN_014c132c(piVar3,uVar23,&local_60,&local_e0);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0040929f,0x17,&local_60,&DAT_018a62e4,&DAT_018a6174);
      }
      iVar6 = piVar3[6];
      uVar16 = piVar3[7];
      uVar11 = 0;
      uVar12 = uVar17 & 0xffff;
      while( true ) {
        do {
          uVar14 = local_cc;
          local_cc = 0;
        } while (uVar16 <= uVar14);
        puVar13 = (ushort *)(iVar6 + uVar14 * 4);
        uVar1 = *puVar13;
        uVar2 = (ushort)uVar23;
        if (uVar1 == 0xffff) break;
        uVar23 = (uint)puVar13[1];
        *puVar13 = (ushort)uVar12;
        uVar11 = uVar11 + 1;
        puVar13[1] = uVar2;
        uVar12 = (uint)uVar1;
        local_cc = uVar14 + 1;
      }
      puVar13[1] = uVar2;
      *puVar13 = (ushort)uVar12;
      if (((local_c8 & 0x10000) != 0 || 0x7f < uVar11) && (*piVar3 == 0 && piVar3[1] == 0)) {
        *piVar3 = 1;
        piVar3[1] = 0;
      }
      if ((uint)piVar3[10] <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,piVar3[10],&DAT_018a64f4);
      }
    }
    local_e0 = (int *)*param_3;
    local_dc = param_3[1];
    local_d8 = param_3[2];
    local_d4 = param_3[3];
    local_d0 = param_3[4];
    local_cc = param_3[5];
    local_c8 = param_3[6];
    uStack_c4 = param_3[7];
    uStack_c0 = param_3[8];
    uStack_bc = param_3[9];
    local_b8 = param_3[10];
    uStack_b4 = param_3[0xb];
    uStack_b0 = param_3[0xc];
    uStack_ac = param_3[0xd];
    uStack_a8 = param_3[0xe];
    uStack_a4 = param_3[0xf];
    uVar12 = *param_2;
    uVar17 = param_2[1];
    if (uVar12 != 4 || uVar17 != 0) {
      iVar6 = 2;
      if ((uint)(uVar12 < 3) <= -uVar17) {
        iVar6 = uVar12 - 3;
      }
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          (**(code **)(param_2[2] + 0x10))(param_2 + 5,param_2[3],param_2[4]);
        }
        else {
          FUN_01015c1c(param_2,iVar6,-(uVar17 + (uVar12 >= 3)));
        }
      }
    }
    *param_2 = (uint)local_e0;
    param_2[1] = local_dc;
    param_2[2] = local_d8;
    param_2[3] = local_d4;
    param_2[4] = local_d0;
    param_2[5] = local_cc;
    param_2[6] = local_c8;
    param_2[7] = uStack_c4;
    param_2[8] = uStack_c0;
    param_2[9] = uStack_bc;
    param_2[10] = local_b8;
    param_2[0xb] = uStack_b4;
    param_2[0xc] = uStack_b0;
    param_2[0xd] = uStack_ac;
    param_2[0xe] = uStack_a8;
    param_2[0xf] = uStack_a4;
  }
  else {
    uVar12 = param_3[10];
    local_98 = param_3[0xb];
    local_94 = param_3[0xc];
    local_90 = param_3[0xd];
    local_84 = param_3[8];
    puVar19 = (uint *)param_3[9];
    puVar22 = puVar19 + uVar12 * 0xd;
    local_a0 = (int *)0x0;
    local_8c = puVar19;
    local_88 = puVar19;
    local_80 = puVar22;
    if (param_3[7] != 0) {
      thunk_FUN_016d3fb4(param_3[6]);
    }
    uVar11 = local_90;
    uVar17 = local_94;
    if (uVar12 != 0) {
      local_88 = puVar19 + 0xd;
      uVar12 = *puVar19;
      if (uVar12 != 2) {
        local_e4 = puVar19[1];
        local_48 = puVar19[8];
        uStack_44 = puVar19[9];
        uStack_40 = puVar19[10];
        uStack_3c = puVar19[0xb];
        local_78 = (int *)puVar19[3];
        uStack_74 = puVar19[4];
        uStack_70 = puVar19[5];
        uStack_6c = puVar19[6];
        uStack_68 = puVar19[7];
        local_120 = &DAT_018a63a4;
        puVar19 = local_88;
        local_9c = local_e4;
        do {
          FUN_014c10a8(&local_e0,param_2,&local_48);
          uVar4 = local_c8;
          uVar5 = local_cc;
          uVar15 = local_d0;
          uVar23 = local_d4;
          uVar16 = local_d8;
          uVar14 = local_dc;
          piVar3 = local_e0;
          uVar7 = local_c8 >> 0x10 & 0xff;
          if (uVar7 == 3) {
            local_a0 = (int *)(uVar12 & 1);
            local_9c = local_e4;
            local_88 = puVar19;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_0040929f,0x17,&local_60,&DAT_018a62e4,&DAT_018a62c4);
          }
          if (uVar7 == 2) {
            local_e0 = local_78;
            local_dc = uStack_74;
            local_d8 = uStack_70;
            local_d4 = uStack_6c;
            local_d0 = uStack_68;
            uVar14 = piVar3[10];
            if (uVar14 <= uVar16) {
LAB_014c0d98:
              local_a0 = (int *)(uVar12 & 1);
              local_9c = local_e4;
              local_88 = puVar19;
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar16,uVar14,local_120);
            }
            piVar8 = (int *)(piVar3[9] + uVar16 * 0x34);
            if (*piVar8 != 0) {
              FUN_01442274(piVar3,piVar8[1]);
              uVar14 = piVar3[10];
            }
            if (uVar14 <= uVar16) {
              local_120 = &DAT_018a63b4;
              goto LAB_014c0d98;
            }
            iVar6 = uVar16 * 0x34 + piVar3[9];
            local_60 = *(uint *)(iVar6 + 0xc);
            local_5c = *(uint *)(iVar6 + 0x10);
            local_58 = *(uint *)(iVar6 + 0x14);
            local_54 = *(uint *)(iVar6 + 0x18);
            uStack_50 = *(undefined4 *)(iVar6 + 0x1c);
            *(uint *)(iVar6 + 0xc) = (uint)local_78;
            *(uint *)(iVar6 + 0x10) = uStack_74;
            *(uint *)(iVar6 + 0x14) = uStack_70;
            *(uint *)(iVar6 + 0x18) = uStack_6c;
            *(uint *)(iVar6 + 0x1c) = uStack_68;
            (**(code **)(local_60 + 0x10))(&local_54,local_5c,local_58);
          }
          else {
            uVar7 = local_c8 & 0xffff;
            local_e0 = local_78;
            local_dc = uStack_74;
            local_d8 = uStack_70;
            local_d4 = uStack_6c;
            local_d0 = uStack_68;
            local_5c = uVar16;
            local_58 = uVar23;
            local_54 = uVar15;
            uVar16 = piVar3[10];
            local_60 = uVar14;
            iVar6 = FUN_014c132c(piVar3,uVar7,&local_60);
            if (iVar6 != 0) {
              local_a0 = (int *)(uVar12 & 1);
              local_9c = local_e4;
              local_88 = puVar19;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_0040929f,0x17,&local_60,&DAT_018a62e4,&DAT_018a62d4);
            }
            iVar6 = piVar3[6];
            uVar15 = piVar3[7];
            uVar23 = 0;
            uVar14 = uVar16 & 0xffff;
            while( true ) {
              do {
                uVar18 = uVar5;
                uVar5 = 0;
              } while (uVar15 <= uVar18);
              puVar13 = (ushort *)(iVar6 + uVar18 * 4);
              uVar1 = *puVar13;
              uVar2 = (ushort)uVar7;
              if (uVar1 == 0xffff) break;
              uVar7 = (uint)puVar13[1];
              *puVar13 = (ushort)uVar14;
              uVar23 = uVar23 + 1;
              puVar13[1] = uVar2;
              uVar5 = uVar18 + 1;
              uVar14 = (uint)uVar1;
            }
            puVar13[1] = uVar2;
            *puVar13 = (ushort)uVar14;
            if (((uVar4 & 0x10000) != 0 || 0x7f < uVar23) && (*piVar3 == 0 && piVar3[1] == 0)) {
              *piVar3 = 1;
              piVar3[1] = 0;
            }
          }
          if ((uVar12 & 1) != 0) {
            do {
              while( true ) {
                if (uVar11 <= local_e4) {
                  local_a0 = (int *)0x1;
                  local_9c = local_e4;
                  local_88 = puVar19;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(local_e4,uVar11,&DAT_018a65ec);
                }
                iVar6 = uVar17 + local_e4 * 0x24;
                puVar9 = (uint *)(iVar6 + 0x10);
                bVar24 = *(int *)(iVar6 + 8) != 0;
                if (bVar24) {
                  local_e4 = *(uint *)(iVar6 + 0xc);
                }
                local_38 = (int *)*puVar9;
                uStack_34 = *(uint *)(iVar6 + 0x14);
                uStack_30 = *(uint *)(iVar6 + 0x18);
                uStack_2c = *(uint *)(iVar6 + 0x1c);
                uStack_28 = *(uint *)(iVar6 + 0x20);
                piVar8 = (int *)(uint)bVar24;
                if ((uint)piVar3[10] <= uVar16) {
                  local_9c = local_e4;
                  local_a0 = piVar8;
                  local_88 = puVar19;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar16,piVar3[10],&DAT_018a6504);
                }
                piVar20 = (int *)(piVar3[9] + uVar16 * 0x34);
                local_d4 = uVar16;
                if (*piVar20 != 1) break;
                uVar14 = piVar3[0xd];
                uVar12 = piVar20[2];
                local_d0 = *puVar9;
                local_cc = *(uint *)(iVar6 + 0x14);
                local_c8 = *(uint *)(iVar6 + 0x18);
                uStack_c4 = *(uint *)(iVar6 + 0x1c);
                uStack_c0 = *(uint *)(iVar6 + 0x20);
                local_d8 = 0;
                local_e0 = (int *)&DAT_00000001;
                local_dc = uVar12;
                if (uVar14 == piVar3[0xb]) {
                  FUN_0102ccf4(piVar3 + 0xb);
                }
                puVar10 = (undefined4 *)(piVar3[0xc] + uVar14 * 0x24);
                *puVar10 = local_e0;
                puVar10[1] = local_dc;
                puVar10[2] = local_d8;
                puVar10[3] = local_d4;
                puVar10[4] = local_d0;
                puVar10[5] = local_cc;
                puVar10[6] = local_c8;
                puVar10[7] = uStack_c4;
                puVar10[8] = uStack_c0;
                piVar3[0xd] = uVar14 + 1;
                if (uVar14 < uVar12) {
                  local_9c = local_e4;
                  local_a0 = piVar8;
                  local_88 = puVar19;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar12,uVar14 + 1,&DAT_018a6304);
                }
                piVar20[2] = uVar14;
                *piVar20 = 1;
                iVar6 = piVar3[0xc] + uVar12 * 0x24;
                *(undefined4 *)(iVar6 + 8) = 1;
                *(uint *)(iVar6 + 0xc) = uVar14;
                if (piVar8 == (int *)0x0) goto LAB_014c0a30;
              }
              iVar21 = piVar3[0xd];
              local_d0 = *puVar9;
              local_cc = *(uint *)(iVar6 + 0x14);
              local_c8 = *(uint *)(iVar6 + 0x18);
              uStack_c4 = *(uint *)(iVar6 + 0x1c);
              uStack_c0 = *(uint *)(iVar6 + 0x20);
              local_d8 = 0;
              local_e0 = (int *)0x0;
              local_dc = uVar16;
              if (iVar21 == piVar3[0xb]) {
                FUN_0102ccf4(piVar3 + 0xb);
              }
              puVar10 = (undefined4 *)(piVar3[0xc] + iVar21 * 0x24);
              *puVar10 = local_e0;
              puVar10[1] = local_dc;
              puVar10[2] = local_d8;
              puVar10[3] = local_d4;
              puVar10[4] = local_d0;
              puVar10[5] = local_cc;
              puVar10[6] = local_c8;
              puVar10[7] = uStack_c4;
              puVar10[8] = uStack_c0;
              piVar3[0xd] = iVar21 + 1;
              *piVar20 = 1;
              piVar20[1] = iVar21;
              piVar20[2] = iVar21;
            } while (piVar8 != (int *)0x0);
          }
LAB_014c0a30:
          if (puVar19 == puVar22) {
LAB_014c0c20:
            local_a0 = (int *)0x0;
            local_9c = local_e4;
            local_88 = puVar22;
            break;
          }
          uVar12 = *puVar19;
          if (uVar12 == 2) {
            puVar22 = puVar19 + 0xd;
            goto LAB_014c0c20;
          }
          local_e4 = puVar19[1];
          local_48 = puVar19[8];
          uStack_44 = puVar19[9];
          uStack_40 = puVar19[10];
          uStack_3c = puVar19[0xb];
          local_78 = (int *)puVar19[3];
          uStack_74 = puVar19[4];
          uStack_70 = puVar19[5];
          uStack_6c = puVar19[6];
          uStack_68 = puVar19[7];
          puVar19 = puVar19 + 0xd;
        } while( true );
      }
    }
    FUN_014c15e8(&local_a0);
  }
  FUN_016dd1aa(param_1,param_2,0x88);
  return;
}

