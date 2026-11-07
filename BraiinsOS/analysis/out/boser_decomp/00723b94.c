// FUN_00723b94 @ 00723b94 size=2392 calls_out=5 calls_in=2
// strings: 

void FUN_00723b94(uint *param_1,uint **param_2,uint *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint **ppuVar4;
  uint **ppuVar5;
  uint **ppuVar6;
  uint uVar7;
  uint **ppuVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint **ppuVar19;
  uint **ppuVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined4 *puVar25;
  bool bVar26;
  uint *local_4e0;
  uint **local_4dc;
  uint local_4d8;
  uint **local_4d4;
  int local_4d0;
  uint **local_4cc;
  uint *local_4c8 [279];
  int local_6c;
  uint **local_68;
  int local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint local_40 [2];
  uint *local_38;
  uint *puStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  
  if (&DAT_00000020 < param_2) {
    do {
      if (param_4 == 0) {
        ppuVar19 = (uint **)((int)param_2 + ((uint)param_2 >> 1));
        do {
          ppuVar19 = (uint **)((int)ppuVar19 + -1);
          if (ppuVar19 < param_2) {
            local_40[0] = *param_1;
            local_40[1] = param_1[1];
            local_38 = (uint *)param_1[2];
            puStack_34 = (uint *)param_1[3];
            puStack_30 = (uint *)param_1[4];
            puStack_2c = (uint *)param_1[5];
            puVar14 = param_1 + (int)ppuVar19 * 6;
            FUN_01bed864(param_1,puVar14,0x18);
            *puVar14 = local_40[0];
            puVar14[1] = local_40[1];
            puVar14[2] = (uint)local_38;
            puVar14[3] = (uint)puStack_34;
            puVar14[4] = (uint)puStack_30;
            puVar14[5] = (uint)puStack_2c;
            ppuVar8 = (uint **)0x0;
          }
          else {
            ppuVar8 = (uint **)((int)ppuVar19 - (int)param_2);
          }
          ppuVar4 = (uint **)((int)ppuVar8 << 1 | 1);
          ppuVar20 = ppuVar19;
          if (param_2 < ppuVar19) {
            ppuVar20 = param_2;
          }
          if (ppuVar4 < ppuVar20) {
            do {
              ppuVar6 = (uint **)((int)ppuVar8 * 2 + 2);
              ppuVar5 = ppuVar4;
              if ((ppuVar6 < ppuVar20) &&
                 (uVar10 = (param_1 + (int)ppuVar6 * 6)[1], uVar16 = (param_1 + (int)ppuVar4 * 6)[1]
                 , uVar16 <= uVar10 &&
                   (uint)(param_1[(int)ppuVar6 * 6] <= param_1[(int)ppuVar4 * 6]) <= uVar16 - uVar10
                 )) {
                ppuVar5 = (uint **)((int)ppuVar4 + 1);
              }
              puVar14 = param_1 + (int)ppuVar8 * 6;
              puVar9 = param_1 + (int)ppuVar5 * 6;
              if (puVar9[1] < puVar14[1] || puVar14[1] - puVar9[1] < (uint)(*puVar9 <= *puVar14))
              break;
              iVar18 = 0;
              do {
                uVar10 = puVar14[iVar18];
                puVar14[iVar18] = puVar9[iVar18];
                puVar9[iVar18] = uVar10;
                iVar18 = iVar18 + 1;
              } while (iVar18 != 6);
              ppuVar4 = (uint **)((int)ppuVar5 << 1 | 1);
              ppuVar8 = ppuVar5;
            } while (ppuVar4 < ppuVar20);
          }
          if (ppuVar19 == (uint **)0x0) {
            return;
          }
        } while( true );
      }
      puVar9 = param_1 + ((uint)param_2 >> 3) * 0x2a;
      puVar14 = param_1 + ((uint)param_2 >> 3) * 0x18;
      if (&DAT_0000003f < param_2) {
        puVar12 = (uint *)FUN_007234b0(param_1);
      }
      else {
        uVar16 = puVar9[1];
        uVar10 = puVar14[1];
        uVar23 = param_1[1];
        bVar26 = uVar23 <= uVar10 && (uint)(*puVar14 <= *param_1) <= uVar23 - uVar10;
        puVar12 = puVar9;
        if (bVar26 == (uVar10 <= uVar16 && (uint)(*puVar9 <= *puVar14) <= uVar10 - uVar16)) {
          puVar12 = puVar14;
        }
        if (bVar26 != (uVar23 <= uVar16 && (uint)(*puVar9 <= *param_1) <= uVar23 - uVar16)) {
          puVar12 = param_1;
        }
      }
      local_64 = param_4 + -1;
      local_5c = param_1;
      if ((param_3 == (uint *)0x0) ||
         (puVar14 = (uint *)((int)param_1 + ((int)puVar12 - (int)param_1)),
         param_3[1] <= puVar14[1] && (uint)(*puVar14 <= *param_3) <= param_3[1] - puVar14[1])) {
        local_40[0] = *param_1;
        local_40[1] = param_1[1];
        local_38 = (uint *)param_1[2];
        puStack_34 = (uint *)param_1[3];
        puStack_30 = (uint *)param_1[4];
        puStack_2c = (uint *)param_1[5];
        puVar14 = (uint *)((int)param_1 + ((int)puVar12 - (int)param_1));
        local_58 = param_3;
        FUN_01bed864(param_1,puVar14,0x18);
        puVar24 = (undefined1 *)((int)param_2 + -1);
        *puVar14 = local_40[0];
        puVar14[1] = local_40[1];
        puVar14[2] = (uint)local_38;
        puVar14[3] = (uint)puStack_34;
        puVar14[4] = (uint)puStack_30;
        puVar14[5] = (uint)puStack_2c;
        if (puVar24 == (undefined1 *)0x0) {
          ppuVar19 = (uint **)0x0;
        }
        else {
          local_48 = param_1 + 6;
          local_4c = (uint *)param_1[1];
          local_40[0] = *local_48;
          local_40[1] = param_1[7];
          local_38 = (uint *)param_1[8];
          puStack_34 = (uint *)param_1[9];
          puStack_30 = (uint *)param_1[10];
          puStack_2c = (uint *)param_1[0xb];
          local_68 = param_2;
          local_50 = local_48 + (int)puVar24 * 6;
          if (puVar24 == (undefined1 *)0x1) {
            ppuVar19 = (uint **)0x0;
            puVar9 = param_1 + 0xc;
            puVar12 = (uint *)*param_1;
            puVar14 = local_48;
          }
          else {
            ppuVar19 = (uint **)0x0;
            puVar14 = local_48;
            local_54 = (uint *)*param_1;
            do {
              puVar12 = puVar14;
              local_44 = (uint *)puVar12[7];
              puVar14 = puVar12 + 6;
              puVar13 = (uint *)*puVar14;
              puVar9 = local_48 + (int)ppuVar19 * 6;
              FUN_01bed864(puVar12,puVar9,0x18);
              uVar10 = puVar12[7];
              uVar16 = puVar12[8];
              uVar23 = puVar12[9];
              uVar7 = puVar12[10];
              uVar11 = puVar12[0xb];
              *puVar9 = *puVar14;
              puVar9[1] = uVar10;
              puVar9[2] = uVar16;
              puVar9[3] = uVar23;
              puVar9[4] = uVar7;
              puVar9[5] = uVar11;
              if (local_44 <= local_4c &&
                  (uint)(local_54 <= puVar13) <= (uint)((int)local_44 - (int)local_4c)) {
                ppuVar19 = (uint **)((int)ppuVar19 + 1);
              }
            } while (puVar12 + 0xc < local_50);
            puVar9 = puVar12 + 0xc;
            puVar12 = local_54;
          }
          do {
            puVar22 = puVar9;
            puVar13 = local_50;
            puVar9 = puVar22;
            if (puVar22 == local_50) {
              puVar9 = local_40;
            }
            puVar21 = local_48 + (int)ppuVar19 * 6;
            local_44 = (uint *)puVar9[1];
            puVar15 = (uint *)*puVar9;
            FUN_01bed864(puVar14,puVar21,0x18);
            if (local_44 <= local_4c &&
                (uint)(puVar12 <= puVar15) <= (uint)((int)local_44 - (int)local_4c)) {
              ppuVar19 = (uint **)((int)ppuVar19 + 1);
            }
            uVar10 = puVar9[1];
            uVar16 = puVar9[2];
            uVar23 = puVar9[3];
            uVar7 = puVar9[4];
            uVar11 = puVar9[5];
            *puVar21 = *puVar9;
            puVar21[1] = uVar10;
            puVar21[2] = uVar16;
            puVar21[3] = uVar23;
            puVar21[4] = uVar7;
            puVar21[5] = uVar11;
            puVar9 = puVar22 + 6;
            puVar14 = puVar22;
          } while (puVar22 != puVar13);
          param_2 = local_68;
          if (local_68 <= ppuVar19) goto LAB_0072407c;
        }
        puVar14 = local_5c;
        local_40[0] = *local_5c;
        local_40[1] = local_5c[1];
        local_38 = (uint *)local_5c[2];
        puStack_34 = (uint *)local_5c[3];
        puStack_30 = (uint *)local_5c[4];
        puStack_2c = (uint *)local_5c[5];
        param_3 = local_5c + (int)ppuVar19 * 6;
        FUN_01bed864(local_5c,param_3,0x18);
        param_4 = local_64;
        *param_3 = local_40[0];
        param_3[1] = local_40[1];
        param_3[2] = (uint)local_38;
        param_3[3] = (uint)puStack_34;
        param_3[4] = (uint)puStack_30;
        param_3[5] = (uint)puStack_2c;
        FUN_00723b94(puVar14,ppuVar19,local_58,local_64);
        param_2 = (uint **)((int)param_2 + ~(uint)ppuVar19);
        param_1 = param_3;
      }
      else {
        local_40[0] = *param_1;
        local_40[1] = param_1[1];
        local_38 = (uint *)param_1[2];
        puStack_34 = (uint *)param_1[3];
        puStack_30 = (uint *)param_1[4];
        puStack_2c = (uint *)param_1[5];
        FUN_01bed864(param_1,puVar14,0x18);
        ppuVar19 = (uint **)0x0;
        *puVar14 = local_40[0];
        puVar14[1] = local_40[1];
        puVar14[2] = (uint)local_38;
        puVar14[3] = (uint)puStack_34;
        puVar14[4] = (uint)puStack_30;
        puVar14[5] = (uint)puStack_2c;
        local_4c = param_1 + 6;
        local_48 = (uint *)param_1[1];
        local_44 = (uint *)*param_1;
        local_40[0] = *local_4c;
        local_40[1] = param_1[7];
        local_38 = (uint *)param_1[8];
        puStack_34 = (uint *)param_1[9];
        puStack_30 = (uint *)param_1[10];
        puStack_2c = (uint *)param_1[0xb];
        local_60 = param_1 + (int)param_2 * 6;
        local_6c = (int)param_2 * 0x18;
        puVar14 = (uint *)&DAT_00000018;
        puVar9 = (uint *)0x0;
        puVar12 = local_4c;
        local_68 = param_2;
        do {
          puVar22 = puVar9;
          puVar13 = puVar14;
          local_50 = (uint *)puVar12[7];
          puVar15 = puVar12 + 6;
          local_58 = (uint *)*puVar15;
          puVar14 = local_4c + (int)ppuVar19 * 6;
          local_54 = puVar12;
          FUN_01bed864(puVar12,puVar14,0x18);
          uVar10 = puVar12[7];
          uVar16 = puVar12[8];
          uVar23 = puVar12[9];
          uVar7 = puVar12[10];
          uVar11 = puVar12[0xb];
          *puVar14 = *puVar15;
          puVar14[1] = uVar10;
          puVar14[2] = uVar16;
          puVar14[3] = uVar23;
          puVar14[4] = uVar7;
          puVar14[5] = uVar11;
          if (local_50 < local_48 ||
              (uint)((int)local_48 - (int)local_50) < (uint)(local_58 <= local_44)) {
            ppuVar19 = (uint **)((int)ppuVar19 + 1);
          }
          puVar14 = puVar13 + 6;
          puVar9 = puVar22 + 6;
          puVar12 = puVar15;
        } while (local_54 + 0xc < local_60);
        local_58 = (uint *)(local_6c + -0x30);
        do {
          puVar14 = local_58;
          puVar9 = local_40;
          puVar12 = local_4c + (int)ppuVar19 * 6;
          if (local_58 != puVar13) {
            puVar9 = (uint *)((undefined1 *)((int)local_5c + (int)puVar13) + 0x30);
          }
          local_54 = (uint *)*puVar9;
          local_50 = (uint *)puVar9[1];
          FUN_01bed864((undefined1 *)((int)local_5c + (int)puVar13) + 0x18,puVar12,0x18);
          param_2 = local_68;
          uVar10 = puVar9[1];
          uVar16 = puVar9[2];
          uVar23 = puVar9[3];
          uVar7 = puVar9[4];
          uVar11 = puVar9[5];
          puVar13 = puVar13 + 6;
          puVar22 = puVar22 + 6;
          *puVar12 = *puVar9;
          puVar12[1] = uVar10;
          puVar12[2] = uVar16;
          puVar12[3] = uVar23;
          puVar12[4] = uVar7;
          puVar12[5] = uVar11;
          if (local_50 < local_48 ||
              (uint)((int)local_48 - (int)local_50) < (uint)(local_54 <= local_44)) {
            ppuVar19 = (uint **)((int)ppuVar19 + 1);
          }
        } while (puVar14 != puVar22);
        if (local_68 <= ppuVar19) {
LAB_0072407c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x72407c);
          (*pcVar1)();
        }
        local_40[0] = *local_5c;
        local_40[1] = local_5c[1];
        local_38 = (uint *)local_5c[2];
        puStack_34 = (uint *)local_5c[3];
        puStack_30 = (uint *)local_5c[4];
        puStack_2c = (uint *)local_5c[5];
        param_1 = local_5c + (int)ppuVar19 * 6;
        FUN_01bed864(local_5c,param_1,0x18);
        param_2 = (uint **)(~(uint)ppuVar19 + (int)param_2);
        *param_1 = local_40[0];
        param_1[1] = local_40[1];
        param_1[2] = (uint)local_38;
        param_1[3] = (uint)puStack_34;
        param_1[4] = (uint)puStack_30;
        param_1[5] = (uint)puStack_2c;
        param_3 = (uint *)0x0;
        param_4 = local_64;
      }
      param_1 = param_1 + 6;
    } while (&DAT_00000020 < param_2);
  }
  uVar10 = (uint)param_2 >> 1;
  if (uVar10 != 0) {
    ppuVar19 = local_4c8 + uVar10 * 6;
    puVar14 = param_1 + uVar10 * 6;
    if (param_2 < &DAT_00000008) {
      local_4c8[0] = (uint *)*param_1;
      local_4c8[1] = (uint *)param_1[1];
      local_4c8[2] = (uint *)param_1[2];
      local_4c8[3] = (uint *)param_1[3];
      local_4c8[4] = (uint *)param_1[4];
      local_4c8[5] = (uint *)param_1[5];
      puVar9 = (uint *)puVar14[1];
      puVar12 = (uint *)puVar14[2];
      puVar13 = (uint *)puVar14[3];
      puVar22 = (uint *)puVar14[4];
      puVar15 = (uint *)puVar14[5];
      *ppuVar19 = (uint *)*puVar14;
      local_4c8[uVar10 * 6 + 1] = puVar9;
      local_4c8[uVar10 * 6 + 2] = puVar12;
      local_4c8[uVar10 * 6 + 3] = puVar13;
      local_4c8[uVar10 * 6 + 4] = puVar22;
      local_4c8[uVar10 * 6 + 5] = puVar15;
      uVar16 = 1;
    }
    else {
      FUN_00733eb4(param_1,local_4c8);
      FUN_00733eb4(puVar14,ppuVar19);
      uVar16 = 4;
    }
    local_40[1] = uVar10;
    local_40[0] = 0;
    iVar18 = 0;
    do {
      uVar7 = local_40[iVar18];
      uVar23 = uVar10;
      if (uVar7 != 0) {
        uVar23 = (int)param_2 - uVar10;
      }
      if (uVar16 < uVar23) {
        local_4dc = local_4c8 + uVar7 * 6;
        local_4e0 = param_1 + uVar7 * 6;
        local_4cc = &local_4e0 + uVar7 * 6 + -6;
        local_4d0 = 0x18;
        uVar11 = uVar16;
        local_4d4 = local_4dc;
        do {
          local_4d8 = uVar11;
          puVar15 = param_1 + uVar7 * 6 + uVar11 * 6;
          ppuVar8 = local_4dc + uVar11 * 6;
          puVar14 = (uint *)puVar15[1];
          puVar9 = (uint *)puVar15[2];
          puVar12 = (uint *)puVar15[3];
          puVar13 = (uint *)puVar15[4];
          puVar22 = (uint *)puVar15[5];
          *ppuVar8 = (uint *)*puVar15;
          ppuVar8[1] = puVar14;
          ppuVar8[2] = puVar9;
          ppuVar8[3] = puVar12;
          ppuVar8[4] = puVar13;
          ppuVar8[5] = puVar22;
          puVar9 = local_4dc[uVar11 * 6];
          puVar14 = ppuVar8[1];
          if (puVar14 <= ppuVar8[-5] &&
              (uint)(ppuVar8[-6] <= puVar9) <= (uint)((int)puVar14 - (int)ppuVar8[-5])) {
            local_38 = (uint *)puVar15[2];
            puStack_34 = (uint *)puVar15[3];
            puStack_30 = (uint *)puVar15[4];
            puStack_2c = (uint *)puVar15[5];
            iVar17 = local_4d0;
            ppuVar8 = local_4d4;
            ppuVar20 = local_4cc;
            do {
              ppuVar4 = ppuVar8 + uVar16 * 6;
              *ppuVar4 = ppuVar4[-6];
              ppuVar4[1] = ppuVar4[-5];
              ppuVar4[2] = ppuVar4[-4];
              ppuVar4[3] = ppuVar4[-3];
              ppuVar4[4] = ppuVar4[-2];
              ppuVar4[5] = ppuVar4[-1];
              if (uVar16 * 0x18 == iVar17) {
                ppuVar8 = local_4dc;
                goto LAB_007343f8;
              }
              ppuVar4 = ppuVar20 + uVar16 * 6;
              iVar17 = iVar17 + 0x18;
              ppuVar8 = ppuVar8 + -6;
              puVar12 = ppuVar4[1];
              ppuVar20 = ppuVar20 + -6;
            } while (puVar14 <= puVar12 &&
                     (uint)(*ppuVar4 <= puVar9) <= (uint)((int)puVar14 - (int)puVar12));
            ppuVar8 = ppuVar8 + uVar16 * 6;
LAB_007343f8:
            *ppuVar8 = puVar9;
            ppuVar8[1] = puVar14;
            ppuVar8[2] = local_38;
            ppuVar8[3] = puStack_34;
            ppuVar8[4] = puStack_30;
            ppuVar8[5] = puStack_2c;
          }
          local_4d0 = local_4d0 + -0x18;
          local_4cc = local_4cc + 6;
          local_4d4 = local_4d4 + 6;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar23);
      }
      bVar26 = iVar18 == 0;
      iVar18 = 1;
    } while (bVar26);
    ppuVar8 = local_4c8;
    iVar18 = 0;
    local_4cc = (uint **)(param_1 + (int)param_2 * 6 + -6);
    ppuVar20 = &local_4e0 + uVar10 * 6;
    ppuVar4 = &local_4e0 + (int)param_2 * 6;
    local_4d0 = (int)param_2 * 3;
    do {
      puVar14 = (uint *)((int)param_1 + iVar18);
      if (ppuVar8[1] < ppuVar19[1] ||
          (uint)((int)ppuVar19[1] - (int)ppuVar8[1]) < (uint)(*ppuVar8 <= *ppuVar19)) {
        ppuVar5 = ppuVar19;
        ppuVar19 = ppuVar8;
        ppuVar8 = ppuVar8 + 6;
      }
      else {
        ppuVar5 = ppuVar19 + 6;
      }
      puVar9 = ppuVar19[1];
      puVar12 = ppuVar19[2];
      puVar13 = ppuVar19[3];
      puVar22 = ppuVar19[4];
      puVar15 = ppuVar19[5];
      *puVar14 = (uint)*ppuVar19;
      puVar14[1] = (uint)puVar9;
      puVar14[2] = (uint)puVar12;
      puVar14[3] = (uint)puVar13;
      puVar14[4] = (uint)puVar22;
      puVar14[5] = (uint)puVar15;
      bVar26 = ppuVar20[1] < ppuVar4[1];
      bVar2 = (uint)((int)ppuVar4[1] - (int)ppuVar20[1]) < (uint)(*ppuVar20 <= *ppuVar4);
      ppuVar19 = ppuVar4;
      if (!bVar26 && !bVar2) {
        ppuVar19 = ppuVar20;
      }
      puVar14 = (uint *)((int)(param_1 + (int)param_2 * 6 + -6) - iVar18);
      puVar9 = ppuVar19[1];
      puVar12 = ppuVar19[2];
      puVar13 = ppuVar19[3];
      puVar22 = ppuVar19[4];
      puVar15 = ppuVar19[5];
      iVar18 = iVar18 + 0x18;
      *puVar14 = (uint)*ppuVar19;
      puVar14[1] = (uint)puVar9;
      puVar14[2] = (uint)puVar12;
      puVar14[3] = (uint)puVar13;
      puVar14[4] = (uint)puVar22;
      puVar14[5] = (uint)puVar15;
      iVar17 = 0;
      if (!bVar26 && !bVar2) {
        iVar17 = -1;
      }
      iVar3 = 0;
      if (bVar26 || bVar2) {
        iVar3 = -1;
      }
      uVar10 = uVar10 - 1;
      ppuVar20 = ppuVar20 + iVar17 * 6;
      ppuVar4 = ppuVar4 + iVar3 * 6;
      ppuVar19 = ppuVar5;
    } while (uVar10 != 0);
    ppuVar20 = ppuVar20 + 6;
    ppuVar19 = ppuVar8;
    if (((uint)param_2 & 1) != 0) {
      puVar25 = (undefined4 *)((int)param_1 + iVar18);
      if (ppuVar8 < ppuVar20) {
        ppuVar19 = ppuVar8 + 6;
      }
      else {
        ppuVar8 = ppuVar5;
        ppuVar5 = ppuVar5 + 6;
      }
      param_2 = (uint **)*ppuVar8;
      puVar14 = ppuVar8[1];
      puVar9 = ppuVar8[2];
      puVar12 = ppuVar8[3];
      puVar13 = ppuVar8[4];
      puVar22 = ppuVar8[5];
      *puVar25 = param_2;
      puVar25[1] = puVar14;
      puVar25[2] = puVar9;
      puVar25[3] = puVar12;
      puVar25[4] = puVar13;
      puVar25[5] = puVar22;
    }
    if (ppuVar19 == ppuVar20) {
      param_2 = ppuVar4 + 6;
    }
    if (ppuVar19 != ppuVar20 || ppuVar5 != param_2) {
      FUN_01307140();
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x734584);
      (*pcVar1)();
    }
  }
  return;
}

