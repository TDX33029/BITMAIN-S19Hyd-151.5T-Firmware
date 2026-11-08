// FUN_014a0acc @ 014a0acc size=9348 calls_out=5 calls_in=2
// strings: 

void FUN_014a0acc(uint *param_1,uint param_2,uint *param_3,uint *param_4)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  uint local_168;
  uint *local_130 [2];
  uint local_128 [65];
  
  if (0x20 < param_2) {
    puVar29 = param_1;
    do {
      if (param_4 == (uint *)0x0) goto LAB_014a2e20;
      puVar34 = puVar29 + (param_2 >> 3) * 8;
      puVar10 = puVar29 + ((param_2 >> 3) * 8 - (param_2 >> 3)) * 2;
      if (param_2 < 0x40) {
        uVar30 = *puVar34;
        uVar3 = *puVar29;
        bVar49 = uVar30 <= uVar3;
        if (uVar3 == uVar30) {
          bVar49 = puVar34[1] <= puVar29[1];
        }
        uVar28 = *puVar10;
        bVar50 = uVar28 <= uVar3;
        if (uVar3 == uVar28) {
          bVar50 = puVar10[1] <= puVar29[1];
        }
        puVar11 = puVar29;
        if (!bVar49 == !bVar50) {
          bVar50 = uVar28 <= uVar30;
          if (uVar30 == uVar28) {
            bVar50 = puVar10[1] <= puVar34[1];
          }
          puVar11 = puVar34;
          if (!bVar49 != !bVar50) {
            puVar11 = puVar10;
          }
        }
      }
      else {
        puVar11 = (uint *)FUN_014a08d0(puVar29);
      }
      puVar34 = puVar29 + 2;
      param_4 = (uint *)((int)param_4 + -1);
      local_130[0] = param_4;
      if (param_3 == (uint *)0x0) {
LAB_014a0bd8:
        uVar30 = *puVar29;
        uVar28 = puVar29[1];
        puVar11 = (uint *)((int)puVar29 + ((int)puVar11 - (int)puVar29));
        puVar9 = puVar29 + param_2 * 2;
        puVar10 = puVar29 + 4;
        uVar3 = puVar11[1];
        *puVar29 = *puVar11;
        puVar29[1] = uVar3;
        local_130[1] = puVar9 + -2;
        *puVar11 = uVar30;
        puVar11[1] = uVar28;
        uVar30 = *puVar29;
        uVar28 = puVar29[1];
        uVar3 = 0;
        local_128[1] = puVar29[3];
        local_128[0] = puVar29[2];
        if (puVar10 < local_130[1]) {
          do {
            puVar11 = puVar10;
            uVar23 = puVar11[1];
            bVar49 = uVar30 <= *puVar11;
            if (*puVar11 == uVar30) {
              bVar49 = uVar28 <= puVar11[1];
            }
            puVar10 = puVar34 + uVar3 * 2;
            uVar31 = puVar10[1];
            puVar11[-2] = *puVar10;
            puVar11[-1] = uVar31;
            *puVar10 = *puVar11;
            puVar10[1] = uVar23;
            uVar23 = puVar11[2];
            puVar8 = puVar34 + (uVar3 + !bVar49) * 2;
            bVar50 = uVar30 <= uVar23;
            bVar48 = uVar23 == uVar30;
            if (bVar48) {
              uVar23 = puVar11[3];
            }
            uVar31 = puVar8[1];
            if (bVar48) {
              bVar50 = uVar28 <= uVar23;
            }
            uVar3 = uVar3 + !bVar49 + (uint)!bVar50;
            *puVar11 = *puVar8;
            puVar11[1] = uVar31;
            puVar10 = puVar11 + 4;
            uVar23 = puVar11[3];
            *puVar8 = puVar11[2];
            puVar8[1] = uVar23;
          } while (puVar10 < local_130[1]);
          puVar11 = puVar11 + 2;
        }
        else {
          puVar11 = puVar34;
        }
        do {
          puVar8 = puVar10;
          puVar10 = puVar8;
          if (puVar8 == puVar9) {
            puVar10 = local_128;
          }
          bVar49 = uVar30 <= *puVar10;
          if (*puVar10 == uVar30) {
            puVar4 = puVar8;
            if (puVar8 == puVar9) {
              puVar4 = local_128;
            }
            bVar49 = uVar28 <= puVar4[1];
          }
          puVar4 = puVar34 + uVar3 * 2;
          uVar3 = uVar3 + !bVar49;
          uVar23 = puVar4[1];
          *puVar11 = *puVar4;
          puVar11[1] = uVar23;
          uVar23 = puVar10[1];
          *puVar4 = *puVar10;
          puVar4[1] = uVar23;
          puVar10 = puVar8 + 2;
          puVar11 = puVar8;
        } while (puVar8 != puVar9);
        if (param_2 <= uVar3) goto LAB_014a2e48;
        uVar28 = *puVar29;
        uVar23 = puVar29[1];
        puVar34 = puVar29 + uVar3 * 2;
        uVar30 = puVar34[1];
        *puVar29 = *puVar34;
        puVar29[1] = uVar30;
        *puVar34 = uVar28;
        puVar34[1] = uVar23;
        FUN_014a0acc(puVar29,uVar3,param_3,param_4);
        uVar3 = ~uVar3;
        param_1 = puVar34 + 2;
      }
      else {
        puVar10 = (uint *)((int)puVar29 + ((int)puVar11 - (int)puVar29));
        bVar49 = *puVar10 <= *param_3;
        if (*param_3 == *puVar10) {
          bVar49 = puVar10[1] <= param_3[1];
        }
        if (!bVar49) goto LAB_014a0bd8;
        uVar3 = *puVar29;
        uVar30 = puVar29[1];
        uVar28 = puVar10[1];
        *puVar29 = *puVar10;
        puVar29[1] = uVar28;
        *puVar10 = uVar3;
        puVar10[1] = uVar30;
        puVar11 = puVar29 + param_2 * 2;
        uVar3 = *puVar29;
        uVar28 = puVar29[1];
        local_128[0] = puVar29[2];
        puVar10 = puVar29 + 4;
        uVar30 = 0;
        local_128[1] = puVar29[3];
        if (puVar10 < puVar11 + -2) {
          do {
            puVar9 = puVar10;
            uVar23 = puVar9[1];
            bVar49 = *puVar9 <= uVar3;
            if (uVar3 == *puVar9) {
              bVar49 = puVar9[1] <= uVar28;
            }
            puVar10 = puVar34 + uVar30 * 2;
            uVar31 = puVar10[1];
            iVar12 = uVar30 + (!bVar49 ^ 1);
            puVar9[-2] = *puVar10;
            puVar9[-1] = uVar31;
            *puVar10 = *puVar9;
            puVar10[1] = uVar23;
            uVar30 = puVar9[2];
            puVar8 = puVar34 + iVar12 * 2;
            bVar49 = uVar30 <= uVar3;
            bVar50 = uVar3 == uVar30;
            if (bVar50) {
              uVar30 = puVar9[3];
            }
            uVar23 = puVar8[1];
            if (bVar50) {
              bVar49 = uVar30 <= uVar28;
            }
            *puVar9 = *puVar8;
            puVar9[1] = uVar23;
            uVar30 = iVar12 + (!bVar49 ^ 1);
            puVar10 = puVar9 + 4;
            uVar23 = puVar9[3];
            *puVar8 = puVar9[2];
            puVar8[1] = uVar23;
          } while (puVar10 < puVar11 + -2);
          puVar9 = puVar9 + 2;
        }
        else {
          puVar9 = puVar34;
        }
        do {
          puVar8 = puVar10;
          puVar10 = puVar8;
          if (puVar8 == puVar11) {
            puVar10 = local_128;
          }
          bVar49 = *puVar10 <= uVar3;
          if (uVar3 == *puVar10) {
            puVar4 = puVar8;
            if (puVar8 == puVar11) {
              puVar4 = local_128;
            }
            bVar49 = puVar4[1] <= uVar28;
          }
          puVar4 = puVar34 + uVar30 * 2;
          uVar23 = puVar4[1];
          *puVar9 = *puVar4;
          puVar9[1] = uVar23;
          uVar23 = puVar10[1];
          *puVar4 = *puVar10;
          puVar4[1] = uVar23;
          uVar30 = uVar30 + (!bVar49 ^ 1);
          puVar10 = puVar8 + 2;
          puVar9 = puVar8;
        } while (puVar8 != puVar11);
        if (param_2 <= uVar30) goto LAB_014a2e48;
        uVar23 = *puVar29;
        uVar31 = puVar29[1];
        puVar10 = puVar29 + uVar30 * 2;
        uVar3 = -(uVar30 + 1);
        puVar34 = (uint *)0x0;
        uVar28 = puVar10[1];
        *puVar29 = *puVar10;
        puVar29[1] = uVar28;
        param_1 = puVar29 + (uVar30 + 1) * 2;
        *puVar10 = uVar23;
        puVar10[1] = uVar31;
      }
      param_2 = param_2 + uVar3;
      param_3 = puVar34;
      puVar29 = param_1;
    } while (0x20 < param_2);
  }
  local_168 = param_2 >> 1;
  if (local_168 != 0) {
    puVar34 = param_1 + local_168 * 2;
    uVar3 = local_168;
    if (param_2 < 0x12) {
      uVar3 = param_2;
    }
    puVar29 = param_1;
    do {
      puVar10 = puVar29 + 2;
      if (uVar3 < 0xd) {
        uVar30 = 1;
        if (8 < uVar3) {
          bVar49 = *puVar29 <= puVar29[6];
          if (puVar29[6] == *puVar29) {
            bVar49 = puVar29[1] <= puVar29[7];
          }
          local_130[1] = puVar29 + 6;
          puVar11 = puVar29;
          if (!bVar49) {
            puVar11 = local_130[1];
          }
          uVar28 = *puVar11;
          uVar30 = puVar11[1];
          puVar11 = local_130[1];
          if (!bVar49) {
            puVar11 = puVar29;
          }
          uVar31 = *puVar11;
          uVar23 = puVar11[1];
          *puVar29 = uVar28;
          puVar29[6] = uVar31;
          bVar49 = puVar29[2] <= puVar29[0xe];
          puVar29[1] = uVar30;
          puVar29[7] = uVar23;
          if (puVar29[0xe] == puVar29[2]) {
            bVar49 = puVar29[3] <= puVar29[0xf];
          }
          puVar8 = puVar29 + 0xe;
          puVar9 = puVar8;
          puVar11 = puVar10;
          if (!bVar49) {
            puVar9 = puVar10;
            puVar11 = puVar8;
          }
          uVar24 = *puVar11;
          uVar20 = puVar11[1];
          iVar12 = 0x38;
          if (!bVar49) {
            iVar12 = 8;
          }
          uVar45 = puVar9[1];
          uVar35 = *(uint *)((int)puVar29 + iVar12);
          *puVar10 = uVar24;
          puVar29[0xe] = uVar35;
          bVar49 = puVar29[4] <= puVar29[10];
          puVar29[3] = uVar20;
          puVar29[0xf] = uVar45;
          if (puVar29[10] == puVar29[4]) {
            bVar49 = puVar29[5] <= puVar29[0xb];
          }
          local_130[0] = puVar29 + 10;
          puVar9 = puVar29 + 4;
          iVar12 = 0x28;
          puVar4 = puVar9;
          puVar11 = local_130[0];
          if (!bVar49) {
            puVar4 = local_130[0];
            puVar11 = puVar9;
          }
          uVar41 = *puVar4;
          if (!bVar49) {
            iVar12 = 0x10;
          }
          uVar43 = puVar11[1];
          uVar39 = puVar4[1];
          uVar25 = *(uint *)((int)puVar29 + iVar12);
          *puVar9 = uVar41;
          bVar49 = puVar29[8] <= puVar29[0x10];
          puVar29[5] = uVar39;
          puVar11 = puVar29 + 0x10;
          puVar4 = puVar29 + 8;
          puVar29[10] = uVar25;
          puVar29[0xb] = uVar43;
          if (puVar29[0x10] == puVar29[8]) {
            bVar49 = puVar29[9] <= puVar29[0x11];
          }
          iVar12 = 0x40;
          puVar18 = puVar4;
          if (!bVar49) {
            iVar12 = 0x20;
            puVar18 = puVar11;
          }
          uVar32 = *puVar18;
          uVar46 = puVar18[1];
          puVar18 = puVar11;
          if (!bVar49) {
            puVar18 = puVar4;
          }
          uVar19 = puVar18[1];
          uVar16 = *(uint *)((int)puVar29 + iVar12);
          *puVar4 = uVar32;
          puVar29[9] = uVar46;
          bVar49 = uVar41 <= uVar32;
          if (uVar32 == uVar41) {
            bVar49 = uVar39 <= uVar46;
          }
          puVar29[0x11] = uVar19;
          puVar29[0x10] = uVar16;
          bVar50 = uVar28 <= uVar35;
          if (uVar35 == uVar28) {
            bVar50 = uVar30 <= uVar45;
          }
          puVar7 = puVar8;
          puVar18 = puVar29;
          if (!bVar50) {
            puVar7 = puVar29;
            puVar18 = puVar8;
          }
          iVar12 = 0x20;
          if (!bVar49) {
            iVar12 = 0x10;
          }
          uVar41 = *puVar7;
          uVar45 = *(uint *)((int)puVar29 + iVar12);
          uVar30 = puVar7[1];
          uVar28 = *puVar18;
          uVar35 = puVar18[1];
          *puVar29 = uVar28;
          puVar29[1] = uVar35;
          puVar29[0xf] = uVar30;
          puVar18 = puVar4;
          if (!bVar49) {
            puVar18 = puVar9;
          }
          puVar29[0xe] = uVar41;
          uVar39 = puVar18[1];
          puVar18 = puVar9;
          if (!bVar49) {
            puVar18 = puVar4;
          }
          uVar32 = *puVar18;
          uVar46 = puVar18[1];
          *puVar9 = uVar32;
          puVar29[5] = uVar46;
          bVar49 = uVar31 <= uVar16;
          if (uVar16 == uVar31) {
            bVar49 = uVar23 <= uVar19;
          }
          iVar12 = 0x40;
          if (!bVar49) {
            iVar12 = 0x18;
          }
          puVar29[8] = uVar45;
          puVar18 = puVar29 + 0xc;
          puVar29[9] = uVar39;
          uVar23 = *(uint *)((int)puVar29 + iVar12);
          puVar7 = puVar11;
          if (!bVar49) {
            puVar7 = local_130[1];
          }
          uVar31 = puVar7[1];
          puVar7 = local_130[1];
          if (!bVar49) {
            puVar7 = puVar11;
          }
          uVar19 = *puVar7;
          uVar16 = puVar7[1];
          *local_130[1] = uVar19;
          bVar49 = uVar25 <= puVar29[0xc];
          puVar29[0x10] = uVar23;
          puVar29[7] = uVar16;
          puVar29[0x11] = uVar31;
          if (puVar29[0xc] == uVar25) {
            bVar49 = uVar43 <= puVar29[0xd];
          }
          iVar12 = 0x30;
          if (!bVar49) {
            iVar12 = 0x28;
          }
          uVar25 = *(uint *)((int)puVar29 + iVar12);
          puVar7 = local_130[0];
          if (!bVar49) {
            puVar7 = puVar18;
          }
          uVar43 = *puVar7;
          uVar21 = puVar7[1];
          puVar7 = puVar18;
          if (!bVar49) {
            puVar7 = local_130[0];
          }
          uVar40 = puVar7[1];
          puVar29[0xc] = uVar25;
          puVar29[0xd] = uVar40;
          *local_130[0] = uVar43;
          puVar29[0xb] = uVar21;
          bVar49 = uVar24 <= uVar19;
          if (uVar19 == uVar24) {
            bVar49 = uVar20 <= uVar16;
          }
          bVar50 = uVar28 <= uVar32;
          if (uVar32 == uVar28) {
            bVar50 = uVar35 <= uVar46;
          }
          puVar15 = puVar9;
          puVar7 = puVar29;
          if (!bVar50) {
            puVar15 = puVar29;
            puVar7 = puVar9;
          }
          uVar20 = puVar15[1];
          uVar28 = *puVar7;
          uVar24 = puVar7[1];
          bVar50 = uVar43 <= uVar45 && uVar45 != uVar43;
          if (uVar45 == uVar43) {
            bVar50 = uVar21 < uVar39;
          }
          uVar35 = *puVar15;
          puVar29[5] = uVar20;
          puVar7 = puVar10;
          if (!bVar49) {
            puVar7 = local_130[1];
          }
          puVar29[4] = uVar35;
          uVar45 = *puVar7;
          uVar39 = puVar7[1];
          iVar12 = 0x18;
          if (!bVar49) {
            iVar12 = 8;
          }
          uVar43 = *(uint *)((int)puVar29 + iVar12);
          puVar7 = local_130[1];
          if (!bVar49) {
            puVar7 = puVar10;
          }
          *puVar29 = uVar28;
          puVar29[1] = uVar24;
          uVar32 = puVar7[1];
          iVar12 = 0x28;
          if (bVar50) {
            iVar12 = 0x20;
          }
          uVar46 = *(uint *)((int)puVar29 + iVar12);
          puVar29[7] = uVar32;
          puVar29[6] = uVar43;
          *puVar10 = uVar45;
          puVar29[3] = uVar39;
          puVar15 = local_130[0];
          puVar7 = puVar4;
          if (bVar50) {
            puVar15 = puVar4;
            puVar7 = local_130[0];
          }
          uVar19 = *puVar7;
          uVar21 = puVar7[1];
          uVar16 = puVar15[1];
          *puVar4 = uVar19;
          puVar29[9] = uVar21;
          puVar29[10] = uVar46;
          bVar49 = uVar45 <= uVar19;
          if (uVar19 == uVar45) {
            bVar49 = uVar39 <= uVar21;
          }
          iVar12 = 0x20;
          puVar7 = puVar4;
          if (!bVar49) {
            iVar12 = 8;
            uVar39 = uVar21;
            puVar7 = puVar10;
            uVar45 = uVar19;
          }
          bVar49 = uVar28 <= uVar45;
          if (uVar45 == uVar28) {
            bVar49 = uVar24 <= uVar39;
          }
          iVar17 = 0x40;
          puVar29[0xb] = uVar16;
          bVar50 = uVar41 <= uVar23;
          if (uVar23 == uVar41) {
            bVar50 = uVar30 <= uVar31;
          }
          puVar27 = puVar11;
          puVar15 = puVar8;
          if (!bVar50) {
            iVar17 = 0x38;
            puVar27 = puVar8;
            puVar15 = puVar11;
          }
          uVar28 = *puVar15;
          uVar31 = puVar15[1];
          uVar23 = puVar27[1];
          uVar30 = *(uint *)((int)puVar29 + iVar12);
          bVar50 = uVar28 <= uVar46 && uVar46 != uVar28;
          if (uVar46 == uVar28) {
            bVar50 = uVar31 < uVar16;
          }
          uVar24 = *(uint *)((int)puVar29 + iVar17);
          *puVar8 = uVar28;
          puVar29[0xf] = uVar31;
          puVar29[0x10] = uVar24;
          puVar29[0x11] = uVar23;
          uVar41 = puVar7[1];
          puVar29[9] = uVar41;
          puVar29[8] = uVar30;
          bVar48 = uVar43 <= uVar25;
          if (uVar25 == uVar43) {
            bVar48 = uVar32 <= uVar40;
          }
          iVar12 = 0x30;
          if (!bVar48) {
            iVar12 = 0x18;
          }
          uVar25 = *(uint *)((int)puVar29 + iVar12);
          *puVar10 = uVar45;
          puVar29[3] = uVar39;
          puVar7 = puVar18;
          if (!bVar48) {
            puVar7 = local_130[1];
          }
          uVar43 = puVar7[1];
          puVar7 = local_130[1];
          if (!bVar48) {
            puVar7 = puVar18;
          }
          uVar46 = *puVar7;
          uVar32 = puVar7[1];
          *local_130[1] = uVar46;
          puVar29[7] = uVar32;
          iVar12 = 0x38;
          if (bVar50) {
            iVar12 = 0x28;
          }
          puVar29[0xd] = uVar43;
          puVar29[0xc] = uVar25;
          puVar7 = puVar8;
          if (bVar50) {
            puVar7 = local_130[0];
          }
          uVar19 = *(uint *)((int)puVar29 + iVar12);
          uVar16 = *local_130[0];
          if (bVar50) {
            uVar16 = uVar28;
          }
          uVar21 = puVar7[1];
          uVar28 = puVar29[0xb];
          if (bVar50) {
            uVar28 = uVar31;
          }
          puVar29[0xf] = uVar21;
          puVar7 = puVar10;
          if (!bVar49) {
            puVar7 = puVar29;
          }
          puVar29[0xe] = uVar19;
          *local_130[0] = uVar16;
          puVar29[0xb] = uVar28;
          uVar42 = *puVar7;
          uVar5 = puVar7[1];
          uVar40 = *puVar29;
          uVar31 = puVar29[1];
          if (!bVar49) {
            uVar40 = uVar45;
            uVar31 = uVar39;
          }
          bVar49 = uVar46 <= uVar16;
          if (uVar16 == uVar46) {
            bVar49 = uVar32 <= uVar28;
          }
          *puVar29 = uVar40;
          puVar29[1] = uVar31;
          puVar29[2] = uVar42;
          bVar50 = uVar35 <= uVar30;
          if (uVar30 == uVar35) {
            bVar50 = uVar20 <= uVar41;
          }
          puVar29[3] = uVar5;
          puVar7 = puVar4;
          if (!bVar50) {
            puVar7 = puVar9;
          }
          uVar30 = puVar7[1];
          iVar12 = 0x20;
          puVar7 = puVar9;
          if (!bVar50) {
            iVar12 = 0x10;
            puVar7 = puVar4;
          }
          uVar31 = *(uint *)((int)puVar29 + iVar12);
          iVar12 = 0x28;
          if (!bVar49) {
            iVar12 = 0x18;
          }
          uVar20 = *puVar7;
          uVar35 = puVar7[1];
          if (bVar49) {
            uVar28 = uVar32;
          }
          puVar29[8] = uVar31;
          iVar17 = 0x40;
          puVar29[9] = uVar30;
          uVar45 = *(uint *)((int)puVar29 + iVar12);
          *puVar9 = uVar20;
          puVar29[5] = uVar35;
          if (bVar49) {
            puVar7 = local_130[0];
            uVar16 = uVar46;
          }
          else {
            puVar7 = local_130[1];
          }
          uVar41 = puVar7[1];
          *local_130[1] = uVar16;
          puVar29[7] = uVar28;
          bVar49 = uVar25 <= uVar24;
          if (uVar24 == uVar25) {
            bVar49 = uVar43 <= uVar23;
          }
          if (!bVar49) {
            iVar17 = 0x30;
          }
          puVar29[10] = uVar45;
          puVar29[0xb] = uVar41;
          uVar23 = *(uint *)((int)puVar29 + iVar17);
          if (bVar49) {
            puVar7 = puVar11;
            puVar11 = puVar18;
          }
          else {
            puVar7 = puVar18;
          }
          uVar24 = puVar11[1];
          uVar25 = *puVar11;
          uVar39 = puVar7[1];
          *puVar18 = uVar25;
          puVar29[0xd] = uVar24;
          puVar29[0x10] = uVar23;
          puVar29[0x11] = uVar39;
          bVar49 = uVar31 <= uVar45;
          if (uVar45 == uVar31) {
            bVar49 = uVar30 <= uVar41;
          }
          bVar50 = uVar20 <= uVar16;
          if (uVar16 == uVar20) {
            bVar50 = uVar35 <= uVar28;
          }
          iVar12 = 0x18;
          if (!bVar50) {
            iVar12 = 0x10;
            uVar35 = uVar28;
            uVar20 = uVar16;
          }
          uVar30 = *(uint *)((int)puVar29 + iVar12);
          puVar11 = local_130[1];
          if (!bVar50) {
            puVar11 = puVar9;
          }
          uVar28 = puVar11[1];
          puVar29[6] = uVar30;
          puVar29[7] = uVar28;
          *puVar9 = uVar20;
          puVar29[5] = uVar35;
          puVar11 = local_130[0];
          if (!bVar49) {
            puVar11 = puVar4;
          }
          uVar23 = puVar11[1];
          puVar11 = puVar4;
          if (!bVar49) {
            puVar11 = local_130[0];
          }
          uVar45 = *puVar11;
          uVar31 = puVar11[1];
          iVar12 = 0x28;
          if (!bVar49) {
            iVar12 = 0x20;
          }
          puVar29[0xb] = uVar23;
          uVar41 = *(uint *)((int)puVar29 + iVar12);
          *puVar4 = uVar45;
          puVar29[10] = uVar41;
          bVar49 = uVar25 <= uVar19;
          if (uVar19 == uVar25) {
            bVar49 = uVar24 <= uVar21;
          }
          puVar29[9] = uVar31;
          puVar11 = puVar8;
          if (!bVar49) {
            puVar11 = puVar18;
          }
          iVar12 = 0x38;
          if (!bVar49) {
            iVar12 = 0x30;
          }
          uVar32 = *(uint *)((int)puVar29 + iVar12);
          uVar43 = *puVar8;
          uVar39 = puVar29[0xf];
          if (bVar49) {
            uVar43 = uVar25;
            uVar39 = uVar24;
          }
          puVar29[0xf] = puVar11[1];
          puVar29[0xe] = uVar32;
          *puVar18 = uVar43;
          bVar49 = uVar20 <= uVar42 && uVar42 != uVar20;
          if (uVar42 == uVar20) {
            bVar49 = uVar35 < uVar5;
          }
          iVar12 = 0x10;
          puVar29[0xd] = uVar39;
          if (bVar49) {
            iVar12 = 8;
            puVar9 = puVar10;
          }
          uVar24 = puVar9[1];
          puVar29[4] = *(uint *)((int)puVar29 + iVar12);
          puVar29[5] = uVar24;
          uVar25 = *puVar10;
          uVar24 = puVar29[3];
          if (bVar49) {
            uVar25 = uVar20;
            uVar24 = uVar35;
          }
          *puVar10 = uVar25;
          puVar29[3] = uVar24;
          bVar49 = uVar45 <= uVar30 && uVar30 != uVar45;
          if (uVar30 == uVar45) {
            bVar49 = uVar31 < uVar28;
          }
          iVar12 = 0x20;
          if (bVar49) {
            iVar12 = 0x18;
            puVar4 = local_130[1];
          }
          uVar30 = *(uint *)((int)puVar29 + iVar12);
          puVar29[9] = puVar4[1];
          puVar29[8] = uVar30;
          uVar30 = puVar29[7];
          if (bVar49) {
            uVar30 = uVar31;
          }
          puVar29[7] = uVar30;
          uVar30 = *local_130[1];
          if (bVar49) {
            uVar30 = uVar45;
          }
          *local_130[1] = uVar30;
          bVar49 = uVar43 <= uVar41 && uVar41 != uVar43;
          if (uVar41 == uVar43) {
            bVar49 = uVar39 < uVar23;
          }
          iVar12 = 0x30;
          if (bVar49) {
            iVar12 = 0x28;
            puVar18 = local_130[0];
          }
          uVar28 = *local_130[0];
          if (bVar49) {
            uVar28 = uVar43;
          }
          uVar23 = puVar29[0xb];
          if (bVar49) {
            uVar23 = uVar39;
          }
          uVar31 = puVar18[1];
          puVar29[0xc] = *(uint *)((int)puVar29 + iVar12);
          uVar30 = 9;
          *local_130[0] = uVar28;
          puVar29[0xd] = uVar31;
          puVar29[0xb] = uVar23;
        }
      }
      else {
        bVar49 = *puVar29 <= puVar29[0x18];
        if (puVar29[0x18] == *puVar29) {
          bVar49 = puVar29[1] <= puVar29[0x19];
        }
        puVar11 = puVar29 + 0x18;
        puVar9 = puVar29;
        if (!bVar49) {
          puVar9 = puVar11;
        }
        uVar28 = *puVar9;
        uVar30 = puVar9[1];
        puVar9 = puVar11;
        if (!bVar49) {
          puVar9 = puVar29;
        }
        uVar31 = *puVar9;
        uVar23 = puVar9[1];
        *puVar29 = uVar28;
        puVar29[0x18] = uVar31;
        bVar49 = puVar29[2] <= puVar29[0x14];
        puVar29[1] = uVar30;
        puVar29[0x19] = uVar23;
        if (puVar29[0x14] == puVar29[2]) {
          bVar49 = puVar29[3] <= puVar29[0x15];
        }
        puVar8 = puVar29 + 0x14;
        puVar4 = puVar8;
        puVar9 = puVar10;
        if (!bVar49) {
          puVar4 = puVar10;
          puVar9 = puVar8;
        }
        uVar20 = *puVar9;
        uVar24 = puVar9[1];
        iVar12 = 0x50;
        if (!bVar49) {
          iVar12 = 8;
        }
        uVar35 = puVar4[1];
        uVar45 = *(uint *)((int)puVar29 + iVar12);
        bVar49 = puVar29[4] <= puVar29[0x12];
        puVar29[0x14] = uVar45;
        *puVar10 = uVar20;
        puVar29[3] = uVar24;
        puVar29[0x15] = uVar35;
        if (puVar29[0x12] == puVar29[4]) {
          bVar49 = puVar29[5] <= puVar29[0x13];
        }
        puVar18 = puVar29 + 4;
        puVar9 = puVar29 + 0x12;
        puVar4 = puVar18;
        if (!bVar49) {
          puVar4 = puVar9;
        }
        uVar41 = *puVar4;
        puVar7 = puVar9;
        if (!bVar49) {
          puVar7 = puVar18;
        }
        uVar39 = puVar4[1];
        iVar12 = 0x48;
        if (!bVar49) {
          iVar12 = 0x10;
        }
        uVar43 = puVar7[1];
        uVar25 = *(uint *)((int)puVar29 + iVar12);
        bVar49 = puVar29[6] <= puVar29[0xe];
        *puVar18 = uVar41;
        puVar29[0x12] = uVar25;
        puVar29[5] = uVar39;
        puVar29[0x13] = uVar43;
        if (puVar29[0xe] == puVar29[6]) {
          bVar49 = puVar29[7] <= puVar29[0xf];
        }
        puVar15 = puVar29 + 6;
        puVar27 = puVar29 + 0xe;
        puVar7 = puVar27;
        puVar4 = puVar15;
        if (!bVar49) {
          puVar7 = puVar15;
          puVar4 = puVar27;
        }
        uVar32 = *puVar4;
        uVar46 = puVar4[1];
        iVar12 = 0x38;
        if (!bVar49) {
          iVar12 = 0x18;
        }
        uVar19 = puVar7[1];
        uVar16 = *(uint *)((int)puVar29 + iVar12);
        bVar49 = puVar29[10] <= puVar29[0x16];
        *puVar15 = uVar32;
        puVar29[7] = uVar46;
        puVar29[0xe] = uVar16;
        puVar29[0xf] = uVar19;
        if (puVar29[0x16] == puVar29[10]) {
          bVar49 = puVar29[0xb] <= puVar29[0x17];
        }
        puVar33 = puVar29 + 10;
        puVar4 = puVar29 + 0x16;
        puVar7 = puVar33;
        if (!bVar49) {
          puVar7 = puVar4;
        }
        uVar40 = *puVar7;
        uVar21 = puVar7[1];
        iVar12 = 0x58;
        if (!bVar49) {
          iVar12 = 0x28;
        }
        uVar42 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = puVar4;
        if (!bVar49) {
          puVar7 = puVar33;
        }
        uVar5 = puVar7[1];
        local_130[0] = puVar29 + 0x10;
        bVar49 = puVar29[0xc] <= puVar29[0x10];
        *puVar33 = uVar40;
        puVar29[0x16] = uVar42;
        local_130[1] = puVar29 + 0xc;
        puVar29[0xb] = uVar21;
        puVar29[0x17] = uVar5;
        if (puVar29[0x10] == puVar29[0xc]) {
          bVar49 = puVar29[0xd] <= puVar29[0x11];
        }
        iVar12 = 0x40;
        if (!bVar49) {
          iVar12 = 0x30;
        }
        uVar22 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = local_130[1];
        if (!bVar49) {
          puVar7 = local_130[0];
        }
        uVar36 = *puVar7;
        uVar44 = puVar7[1];
        puVar7 = local_130[0];
        if (!bVar49) {
          puVar7 = local_130[1];
        }
        uVar13 = puVar7[1];
        bVar49 = uVar20 <= uVar36;
        if (uVar36 == uVar20) {
          bVar49 = uVar24 <= uVar44;
        }
        iVar12 = 0x30;
        if (!bVar49) {
          iVar12 = 8;
        }
        *local_130[1] = uVar36;
        puVar29[0xd] = uVar44;
        uVar20 = *(uint *)((int)puVar29 + iVar12);
        puVar14 = local_130[1];
        puVar7 = puVar10;
        if (!bVar49) {
          puVar14 = puVar10;
          puVar7 = local_130[1];
        }
        puVar29[0x10] = uVar22;
        puVar29[0x11] = uVar13;
        bVar49 = uVar41 <= uVar32;
        if (uVar32 == uVar41) {
          bVar49 = uVar39 <= uVar46;
        }
        uVar41 = *puVar7;
        uVar39 = puVar7[1];
        iVar12 = 0x18;
        uVar24 = puVar14[1];
        if (!bVar49) {
          iVar12 = 0x10;
        }
        uVar32 = *(uint *)((int)puVar29 + iVar12);
        *puVar10 = uVar41;
        puVar29[3] = uVar39;
        puVar7 = puVar15;
        if (!bVar49) {
          puVar7 = puVar18;
        }
        puVar29[0xc] = uVar20;
        puVar29[0xd] = uVar24;
        uVar46 = puVar7[1];
        puVar7 = puVar18;
        if (!bVar49) {
          puVar7 = puVar15;
        }
        puVar14 = puVar29 + 8;
        uVar36 = *puVar7;
        uVar44 = puVar7[1];
        puVar29[6] = uVar32;
        bVar49 = puVar29[8] <= uVar42;
        *puVar18 = uVar36;
        puVar29[5] = uVar44;
        puVar29[7] = uVar46;
        if (uVar42 == puVar29[8]) {
          bVar49 = puVar29[9] <= uVar5;
        }
        iVar12 = 0x58;
        if (!bVar49) {
          iVar12 = 0x20;
        }
        uVar42 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = puVar14;
        if (!bVar49) {
          puVar7 = puVar4;
        }
        uVar47 = *puVar7;
        uVar5 = puVar7[1];
        puVar7 = puVar4;
        if (!bVar49) {
          puVar7 = puVar14;
        }
        uVar6 = puVar7[1];
        *puVar14 = uVar47;
        puVar29[9] = uVar5;
        bVar49 = uVar16 <= uVar25;
        if (uVar25 == uVar16) {
          bVar49 = uVar19 <= uVar43;
        }
        iVar12 = 0x48;
        puVar7 = puVar27;
        puVar2 = puVar9;
        if (!bVar49) {
          iVar12 = 0x38;
          puVar7 = puVar9;
          puVar2 = puVar27;
        }
        uVar43 = *puVar7;
        uVar25 = puVar7[1];
        bVar49 = uVar22 <= uVar45;
        if (uVar45 == uVar22) {
          bVar49 = uVar13 <= uVar35;
        }
        iVar17 = 0x50;
        puVar37 = puVar8;
        puVar7 = local_130[0];
        if (!bVar49) {
          iVar17 = 0x40;
          puVar37 = local_130[0];
          puVar7 = puVar8;
        }
        uVar35 = *puVar7;
        uVar45 = puVar7[1];
        bVar49 = uVar43 <= uVar35;
        if (uVar35 == uVar43) {
          bVar49 = uVar25 <= uVar45;
        }
        bVar50 = uVar28 <= uVar47;
        if (uVar47 == uVar28) {
          bVar50 = uVar30 <= uVar5;
        }
        puVar7 = puVar29;
        if (!bVar50) {
          puVar7 = puVar14;
        }
        uVar30 = *puVar7;
        uVar16 = puVar7[1];
        uVar28 = *(uint *)((int)puVar29 + iVar12);
        puVar29[0x17] = uVar6;
        puVar29[0x16] = uVar42;
        uVar19 = puVar2[1];
        puVar29[0x13] = uVar19;
        puVar29[0x12] = uVar28;
        uVar5 = *(uint *)((int)puVar29 + iVar17);
        puVar7 = puVar14;
        if (!bVar50) {
          puVar7 = puVar29;
        }
        uVar47 = *puVar7;
        *puVar27 = uVar43;
        puVar29[0xf] = uVar25;
        uVar13 = puVar37[1];
        *local_130[0] = uVar35;
        puVar29[0x15] = uVar13;
        puVar29[0x11] = uVar45;
        puVar29[0x14] = uVar5;
        uVar22 = puVar7[1];
        puVar29[8] = uVar47;
        bVar50 = uVar32 <= uVar20;
        if (uVar20 == uVar32) {
          bVar50 = uVar46 <= uVar24;
        }
        puVar29[9] = uVar22;
        bVar48 = uVar41 <= uVar36;
        if (uVar36 == uVar41) {
          bVar48 = uVar39 <= uVar44;
        }
        *puVar29 = uVar30;
        puVar29[1] = uVar16;
        puVar7 = puVar18;
        if (!bVar48) {
          puVar7 = puVar10;
        }
        uVar20 = puVar7[1];
        iVar12 = 0x10;
        if (!bVar48) {
          iVar12 = 8;
        }
        uVar24 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = puVar10;
        if (!bVar48) {
          puVar7 = puVar18;
        }
        uVar41 = *puVar7;
        uVar39 = puVar7[1];
        *puVar10 = uVar41;
        puVar29[3] = uVar39;
        puVar29[4] = uVar24;
        puVar7 = local_130[1];
        if (!bVar50) {
          puVar7 = puVar15;
        }
        puVar29[5] = uVar20;
        uVar32 = puVar7[1];
        iVar12 = 0x30;
        if (!bVar50) {
          iVar12 = 0x18;
        }
        uVar46 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = puVar15;
        if (!bVar50) {
          puVar7 = local_130[1];
        }
        uVar36 = *puVar7;
        uVar44 = puVar7[1];
        *puVar15 = uVar36;
        puVar29[7] = uVar44;
        iVar12 = 0x40;
        if (!bVar49) {
          iVar12 = 0x38;
        }
        puVar29[0xc] = uVar46;
        puVar29[0xd] = uVar32;
        puVar7 = local_130[0];
        if (!bVar49) {
          puVar7 = puVar27;
        }
        uVar38 = *(uint *)((int)puVar29 + iVar12);
        uVar26 = puVar7[1];
        if (!bVar49) {
          uVar43 = uVar35;
        }
        puVar29[0x11] = uVar26;
        if (!bVar49) {
          uVar25 = uVar45;
        }
        *puVar27 = uVar43;
        puVar29[0xf] = uVar25;
        bVar49 = uVar28 <= uVar5;
        if (uVar5 == uVar28) {
          bVar49 = uVar19 <= uVar13;
        }
        puVar29[0x10] = uVar38;
        puVar7 = puVar8;
        if (!bVar49) {
          puVar7 = puVar9;
        }
        uVar28 = puVar7[1];
        iVar12 = 0x50;
        if (!bVar49) {
          iVar12 = 0x48;
        }
        uVar35 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = puVar9;
        if (!bVar49) {
          puVar7 = puVar8;
        }
        uVar19 = *puVar7;
        uVar45 = puVar7[1];
        *puVar9 = uVar19;
        puVar29[0x13] = uVar45;
        bVar49 = uVar42 <= uVar31;
        if (uVar31 == uVar42) {
          bVar49 = uVar6 <= uVar23;
        }
        iVar12 = 0x60;
        puVar29[0x14] = uVar35;
        if (!bVar49) {
          iVar12 = 0x58;
        }
        puVar29[0x15] = uVar28;
        uVar23 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = puVar11;
        if (!bVar49) {
          puVar7 = puVar4;
        }
        uVar31 = puVar7[1];
        puVar7 = puVar4;
        if (!bVar49) {
          puVar7 = puVar11;
        }
        uVar5 = *puVar7;
        uVar42 = puVar7[1];
        *puVar4 = uVar5;
        puVar29[0x17] = uVar42;
        puVar29[0x18] = uVar23;
        bVar49 = uVar35 <= uVar23;
        if (uVar23 == uVar35) {
          bVar49 = uVar28 <= uVar31;
        }
        puVar29[0x19] = uVar31;
        bVar50 = uVar5 <= uVar38 && uVar38 != uVar5;
        if (uVar38 == uVar5) {
          bVar50 = uVar42 < uVar26;
        }
        bVar48 = uVar40 <= uVar19;
        if (uVar19 == uVar40) {
          bVar48 = uVar21 <= uVar45;
        }
        bVar51 = uVar47 <= uVar46;
        if (uVar46 == uVar47) {
          bVar51 = uVar22 <= uVar32;
        }
        puVar7 = local_130[1];
        if (!bVar51) {
          puVar7 = puVar14;
        }
        uVar28 = puVar7[1];
        iVar12 = 0x30;
        if (!bVar51) {
          iVar12 = 0x20;
        }
        uVar23 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = puVar14;
        if (!bVar51) {
          puVar7 = local_130[1];
        }
        uVar31 = *puVar7;
        uVar35 = puVar7[1];
        *puVar14 = uVar31;
        puVar29[9] = uVar35;
        iVar12 = 0x48;
        if (!bVar48) {
          iVar12 = 0x28;
        }
        puVar29[0xc] = uVar23;
        puVar29[0xd] = uVar28;
        uVar45 = *(uint *)((int)puVar29 + iVar12);
        puVar7 = puVar9;
        if (!bVar48) {
          puVar7 = puVar33;
        }
        uVar32 = puVar7[1];
        puVar7 = puVar33;
        if (!bVar48) {
          puVar7 = puVar9;
        }
        uVar19 = *puVar7;
        uVar46 = puVar7[1];
        iVar12 = 0x58;
        puVar29[0x13] = uVar32;
        if (bVar50) {
          iVar12 = 0x40;
        }
        puVar29[0x12] = uVar45;
        uVar22 = *(uint *)((int)puVar29 + iVar12);
        uVar40 = *local_130[0];
        uVar21 = puVar29[0x11];
        if (bVar50) {
          uVar40 = uVar5;
          uVar21 = uVar42;
        }
        *puVar33 = uVar19;
        puVar7 = puVar4;
        if (bVar50) {
          puVar7 = local_130[0];
        }
        puVar29[0xb] = uVar46;
        uVar42 = puVar7[1];
        *local_130[0] = uVar40;
        puVar29[0x11] = uVar21;
        iVar12 = 0x60;
        if (!bVar49) {
          iVar12 = 0x50;
        }
        puVar29[0x17] = uVar42;
        puVar29[0x16] = uVar22;
        if (bVar49) {
          puVar7 = puVar8;
        }
        else {
          puVar7 = puVar11;
          puVar11 = puVar8;
        }
        uVar47 = puVar11[1];
        uVar5 = puVar7[1];
        uVar6 = *puVar7;
        uVar13 = *(uint *)((int)puVar29 + iVar12);
        *puVar8 = uVar6;
        puVar29[0x15] = uVar5;
        puVar29[0x18] = uVar13;
        puVar29[0x19] = uVar47;
        bVar49 = uVar30 <= uVar19;
        if (uVar19 == uVar30) {
          bVar49 = uVar16 <= uVar46;
        }
        puVar11 = puVar33;
        uVar30 = *puVar29;
        uVar16 = puVar29[1];
        if (!bVar49) {
          puVar11 = puVar29;
          uVar30 = uVar19;
          uVar16 = uVar46;
        }
        bVar49 = uVar30 <= uVar41;
        if (uVar41 == uVar30) {
          bVar49 = uVar16 <= uVar39;
        }
        bVar50 = uVar6 <= uVar45 && uVar45 != uVar6;
        if (uVar45 == uVar6) {
          bVar50 = uVar5 < uVar32;
        }
        uVar45 = *puVar11;
        uVar41 = puVar11[1];
        bVar48 = uVar23 <= uVar22;
        if (uVar22 == uVar23) {
          bVar48 = uVar28 <= uVar42;
        }
        bVar51 = uVar36 <= uVar40;
        if (uVar40 == uVar36) {
          bVar51 = uVar44 <= uVar21;
        }
        puVar29[10] = uVar45;
        puVar29[0xb] = uVar41;
        *puVar29 = uVar30;
        puVar29[1] = uVar16;
        puVar11 = local_130[0];
        uVar28 = puVar29[7];
        uVar23 = *puVar15;
        if (!bVar51) {
          puVar11 = puVar15;
          uVar28 = uVar21;
          uVar23 = uVar40;
        }
        uVar39 = puVar11[1];
        iVar12 = 0x40;
        if (!bVar51) {
          iVar12 = 0x18;
        }
        uVar32 = *(uint *)((int)puVar29 + iVar12);
        *puVar15 = uVar23;
        puVar29[7] = uVar28;
        puVar29[0x10] = uVar32;
        bVar51 = uVar31 <= uVar43;
        if (uVar43 == uVar31) {
          bVar51 = uVar35 <= uVar25;
        }
        puVar29[0x11] = uVar39;
        puVar11 = puVar27;
        if (!bVar51) {
          puVar11 = puVar14;
        }
        uVar31 = puVar11[1];
        iVar12 = 0x38;
        if (!bVar51) {
          iVar12 = 0x20;
        }
        uVar35 = *(uint *)((int)puVar29 + iVar12);
        puVar11 = puVar14;
        if (!bVar51) {
          puVar11 = puVar27;
        }
        uVar25 = *puVar11;
        uVar43 = puVar11[1];
        *puVar14 = uVar25;
        puVar29[9] = uVar43;
        puVar29[0xe] = uVar35;
        puVar29[0xf] = uVar31;
        puVar11 = puVar4;
        if (!bVar48) {
          puVar11 = local_130[1];
        }
        uVar46 = puVar11[1];
        iVar12 = 0x58;
        if (!bVar48) {
          iVar12 = 0x30;
        }
        uVar19 = *(uint *)((int)puVar29 + iVar12);
        puVar11 = local_130[1];
        if (!bVar48) {
          puVar11 = puVar4;
        }
        uVar21 = *puVar11;
        uVar40 = puVar11[1];
        *local_130[1] = uVar21;
        puVar29[0xd] = uVar40;
        iVar12 = 0x50;
        if (bVar50) {
          iVar12 = 0x48;
        }
        uVar22 = *(uint *)((int)puVar29 + iVar12);
        uVar42 = *puVar9;
        if (bVar50) {
          uVar42 = uVar6;
        }
        uVar36 = puVar29[0x13];
        puVar11 = puVar8;
        if (bVar50) {
          uVar36 = uVar5;
          puVar11 = puVar9;
        }
        puVar29[0x16] = uVar19;
        puVar29[0x17] = uVar46;
        uVar44 = puVar11[1];
        *puVar9 = uVar42;
        puVar29[0x13] = uVar36;
        puVar29[0x15] = uVar44;
        puVar29[0x14] = uVar22;
        uVar5 = *puVar10;
        puVar11 = puVar10;
        if (!bVar49) {
          puVar11 = puVar29;
        }
        uVar47 = *puVar11;
        uVar6 = puVar11[1];
        uVar13 = puVar29[3];
        if (bVar49) {
          uVar13 = uVar16;
        }
        puVar29[1] = uVar13;
        puVar29[2] = uVar47;
        if (bVar49) {
          uVar5 = uVar30;
        }
        bVar49 = uVar22 <= uVar19;
        if (uVar19 == uVar22) {
          bVar49 = uVar44 <= uVar46;
        }
        bVar50 = uVar21 <= uVar42;
        if (uVar42 == uVar21) {
          bVar50 = uVar40 <= uVar36;
        }
        *puVar29 = uVar5;
        puVar29[3] = uVar6;
        bVar48 = uVar24 <= uVar45;
        if (uVar45 == uVar24) {
          bVar48 = uVar20 <= uVar41;
        }
        iVar12 = 0x28;
        puVar7 = puVar33;
        puVar11 = puVar18;
        if (!bVar48) {
          iVar12 = 0x10;
          puVar7 = puVar18;
          puVar11 = puVar33;
        }
        uVar20 = puVar7[1];
        uVar30 = *puVar11;
        uVar24 = puVar11[1];
        iVar17 = 0x48;
        if (!bVar50) {
          iVar17 = 0x30;
          uVar21 = uVar42;
        }
        uVar45 = *(uint *)((int)puVar29 + iVar12);
        *puVar18 = uVar30;
        puVar29[5] = uVar24;
        puVar29[10] = uVar45;
        puVar11 = puVar9;
        if (!bVar50) {
          puVar11 = local_130[1];
        }
        puVar29[0xb] = uVar20;
        uVar46 = puVar11[1];
        uVar41 = *(uint *)((int)puVar29 + iVar17);
        if (bVar50) {
          uVar36 = uVar40;
        }
        *local_130[1] = uVar21;
        puVar29[0xd] = uVar36;
        puVar29[0x13] = uVar46;
        bVar50 = uVar35 <= uVar32;
        if (uVar32 == uVar35) {
          bVar50 = uVar31 <= uVar39;
        }
        iVar12 = 0x40;
        puVar29[0x12] = uVar41;
        if (!bVar50) {
          iVar12 = 0x38;
        }
        uVar31 = *(uint *)((int)puVar29 + iVar12);
        puVar11 = puVar27;
        if (!bVar50) {
          puVar11 = local_130[0];
        }
        uVar35 = *puVar11;
        uVar39 = puVar11[1];
        puVar11 = local_130[0];
        if (!bVar50) {
          puVar11 = puVar27;
        }
        uVar32 = puVar11[1];
        *puVar27 = uVar35;
        puVar29[0xf] = uVar39;
        puVar29[0x11] = uVar32;
        puVar29[0x10] = uVar31;
        if (bVar49) {
          puVar11 = puVar8;
        }
        else {
          puVar11 = puVar4;
          puVar4 = puVar8;
        }
        uVar16 = puVar4[1];
        iVar12 = 0x58;
        if (!bVar49) {
          iVar12 = 0x50;
        }
        uVar40 = *puVar11;
        uVar19 = puVar11[1];
        puVar29[0x16] = *(uint *)((int)puVar29 + iVar12);
        bVar49 = uVar40 <= uVar41 && uVar41 != uVar40;
        if (uVar41 == uVar40) {
          bVar49 = uVar19 < uVar46;
        }
        *puVar8 = uVar40;
        puVar29[0x15] = uVar19;
        bVar50 = uVar21 <= uVar45 && uVar45 != uVar21;
        if (uVar45 == uVar21) {
          bVar50 = uVar36 < uVar20;
        }
        puVar29[0x17] = uVar16;
        bVar48 = uVar30 <= uVar25;
        if (uVar25 == uVar30) {
          bVar48 = uVar24 <= uVar43;
        }
        bVar51 = uVar23 <= uVar47 && uVar47 != uVar23;
        if (uVar47 == uVar23) {
          bVar51 = uVar28 < uVar6;
        }
        puVar11 = puVar15;
        if (bVar51) {
          puVar11 = puVar10;
        }
        uVar28 = puVar11[1];
        iVar12 = 0x18;
        if (bVar51) {
          iVar12 = 8;
        }
        uVar23 = *(uint *)((int)puVar29 + iVar12);
        puVar11 = puVar10;
        if (bVar51) {
          puVar11 = puVar15;
        }
        uVar20 = *puVar11;
        uVar45 = puVar11[1];
        *puVar10 = uVar20;
        puVar29[3] = uVar45;
        puVar29[6] = uVar23;
        puVar29[7] = uVar28;
        puVar11 = puVar14;
        if (!bVar48) {
          puVar11 = puVar18;
        }
        uVar41 = puVar11[1];
        iVar12 = 0x20;
        if (!bVar48) {
          iVar12 = 0x10;
        }
        uVar43 = *(uint *)((int)puVar29 + iVar12);
        uVar25 = *puVar14;
        if (bVar48) {
          uVar25 = uVar30;
        }
        uVar30 = puVar29[9];
        puVar29[8] = uVar43;
        puVar29[9] = uVar41;
        if (bVar48) {
          uVar30 = uVar24;
        }
        *puVar18 = uVar25;
        puVar29[5] = uVar30;
        uVar24 = puVar29[0xb];
        if (bVar50) {
          uVar24 = uVar36;
        }
        puVar11 = local_130[1];
        uVar46 = *puVar33;
        if (bVar50) {
          puVar11 = puVar33;
          uVar46 = uVar21;
        }
        iVar12 = 0x30;
        if (bVar50) {
          iVar12 = 0x28;
        }
        uVar16 = *(uint *)((int)puVar29 + iVar12);
        iVar12 = 0x50;
        if (bVar49) {
          iVar12 = 0x48;
        }
        uVar42 = puVar11[1];
        *puVar33 = uVar46;
        puVar29[0xb] = uVar24;
        uVar5 = *(uint *)((int)puVar29 + iVar12);
        puVar29[0xc] = uVar16;
        uVar21 = *puVar9;
        if (bVar49) {
          uVar21 = uVar40;
        }
        puVar29[0xd] = uVar42;
        if (bVar49) {
          puVar8 = puVar9;
        }
        uVar22 = puVar8[1];
        uVar40 = puVar29[0x13];
        if (bVar49) {
          uVar40 = uVar19;
        }
        *puVar9 = uVar21;
        puVar29[0x13] = uVar40;
        puVar29[0x14] = uVar5;
        bVar49 = uVar20 <= uVar25;
        if (uVar25 == uVar20) {
          bVar49 = uVar45 <= uVar30;
        }
        iVar12 = 0x10;
        if (!bVar49) {
          iVar12 = 8;
          uVar20 = uVar25;
        }
        puVar29[0x15] = uVar22;
        if (bVar49) {
          puVar11 = puVar18;
        }
        else {
          uVar45 = uVar30;
          puVar11 = puVar10;
        }
        uVar25 = *(uint *)((int)puVar29 + iVar12);
        iVar12 = 0x20;
        uVar30 = puVar11[1];
        *puVar10 = uVar20;
        puVar29[3] = uVar45;
        puVar29[4] = uVar25;
        puVar29[5] = uVar30;
        bVar49 = uVar23 <= uVar43;
        if (uVar43 == uVar23) {
          bVar49 = uVar28 <= uVar41;
        }
        puVar10 = puVar15;
        if (!bVar49) {
          iVar12 = 0x18;
          puVar10 = puVar14;
        }
        uVar28 = *puVar10;
        uVar23 = puVar10[1];
        puVar10 = puVar14;
        if (!bVar49) {
          puVar10 = puVar15;
        }
        bVar49 = uVar28 <= uVar25 && uVar25 != uVar28;
        if (uVar25 == uVar28) {
          bVar49 = uVar23 < uVar30;
        }
        uVar30 = puVar10[1];
        bVar50 = uVar16 <= uVar31;
        if (uVar31 == uVar16) {
          bVar50 = uVar42 <= uVar32;
        }
        uVar31 = *(uint *)((int)puVar29 + iVar12);
        *puVar15 = uVar28;
        puVar29[7] = uVar23;
        puVar29[9] = uVar30;
        bVar48 = uVar46 <= uVar35;
        if (uVar35 == uVar46) {
          bVar48 = uVar24 <= uVar39;
        }
        puVar29[8] = uVar31;
        puVar10 = puVar27;
        if (!bVar48) {
          puVar10 = puVar33;
        }
        uVar20 = puVar10[1];
        iVar12 = 0x38;
        if (!bVar48) {
          iVar12 = 0x28;
          uVar24 = puVar29[0xf];
          uVar46 = *puVar27;
        }
        uVar35 = *(uint *)((int)puVar29 + iVar12);
        *puVar33 = uVar46;
        puVar29[0xb] = uVar24;
        puVar29[0xe] = uVar35;
        puVar10 = local_130[0];
        if (!bVar50) {
          puVar10 = local_130[1];
        }
        puVar29[0xf] = uVar20;
        uVar45 = puVar10[1];
        iVar12 = 0x40;
        if (!bVar50) {
          iVar12 = 0x30;
        }
        uVar41 = *(uint *)((int)puVar29 + iVar12);
        puVar10 = local_130[1];
        if (!bVar50) {
          puVar10 = local_130[0];
        }
        uVar25 = *puVar10;
        uVar39 = puVar10[1];
        *local_130[1] = uVar25;
        puVar29[0xd] = uVar39;
        puVar29[0x10] = uVar41;
        puVar10 = puVar15;
        if (bVar49) {
          puVar10 = puVar18;
        }
        puVar29[0x11] = uVar45;
        uVar43 = puVar10[1];
        iVar12 = 0x18;
        if (bVar49) {
          iVar12 = 0x10;
        }
        uVar16 = *(uint *)((int)puVar29 + iVar12);
        puVar29[6] = uVar16;
        uVar32 = puVar29[5];
        if (bVar49) {
          uVar32 = uVar23;
        }
        puVar29[7] = uVar43;
        uVar23 = *puVar18;
        if (bVar49) {
          uVar23 = uVar28;
        }
        *puVar18 = uVar23;
        puVar29[5] = uVar32;
        bVar49 = uVar25 <= uVar35;
        if (uVar35 == uVar25) {
          bVar49 = uVar39 <= uVar20;
        }
        bVar50 = uVar46 <= uVar31 && uVar31 != uVar46;
        if (uVar31 == uVar46) {
          bVar50 = uVar24 < uVar30;
        }
        puVar10 = puVar33;
        if (bVar50) {
          puVar10 = puVar14;
        }
        uVar23 = puVar10[1];
        iVar12 = 0x28;
        uVar28 = *puVar14;
        uVar30 = puVar29[9];
        if (bVar50) {
          iVar12 = 0x20;
          uVar28 = uVar46;
          uVar30 = uVar24;
        }
        uVar31 = *(uint *)((int)puVar29 + iVar12);
        *puVar14 = uVar28;
        puVar29[9] = uVar30;
        iVar12 = 0x38;
        if (!bVar49) {
          iVar12 = 0x30;
        }
        puVar29[10] = uVar31;
        puVar29[0xb] = uVar23;
        puVar10 = puVar27;
        if (!bVar49) {
          puVar10 = local_130[1];
        }
        uVar24 = puVar10[1];
        uVar20 = *puVar27;
        if (bVar49) {
          uVar20 = uVar25;
        }
        puVar29[0xe] = *(uint *)((int)puVar29 + iVar12);
        uVar35 = puVar29[0xf];
        if (bVar49) {
          uVar35 = uVar39;
        }
        puVar29[0xf] = uVar24;
        *local_130[1] = uVar20;
        puVar29[0xd] = uVar35;
        bVar49 = uVar21 <= uVar41 && uVar41 != uVar21;
        if (uVar41 == uVar21) {
          bVar49 = uVar40 < uVar45;
        }
        if (!bVar49) {
          puVar10 = puVar9;
          puVar9 = local_130[0];
        }
        else {
          puVar10 = local_130[0];
        }
        uVar24 = puVar9[1];
        uVar45 = puVar10[1];
        iVar12 = 0x48;
        if (bVar49) {
          iVar12 = 0x40;
        }
        uVar41 = *(uint *)((int)puVar29 + iVar12);
        *local_130[0] = *puVar9;
        puVar29[0x11] = uVar24;
        puVar29[0x12] = uVar41;
        puVar29[0x13] = uVar45;
        bVar49 = uVar28 <= uVar16 && uVar16 != uVar28;
        if (uVar16 == uVar28) {
          bVar49 = uVar30 < uVar43;
        }
        iVar12 = 0x20;
        if (bVar49) {
          iVar12 = 0x18;
        }
        if (bVar49) {
          puVar14 = puVar15;
        }
        uVar24 = puVar14[1];
        puVar29[8] = *(uint *)((int)puVar29 + iVar12);
        puVar29[9] = uVar24;
        uVar24 = puVar29[7];
        if (bVar49) {
          uVar24 = uVar30;
        }
        puVar29[7] = uVar24;
        uVar30 = *puVar15;
        if (bVar49) {
          uVar30 = uVar28;
        }
        *puVar15 = uVar30;
        bVar49 = uVar20 <= uVar31 && uVar31 != uVar20;
        if (uVar31 == uVar20) {
          bVar49 = uVar35 < uVar23;
        }
        iVar12 = 0x30;
        puVar10 = local_130[1];
        if (bVar49) {
          iVar12 = 0x28;
          puVar10 = puVar33;
        }
        uVar28 = *puVar33;
        if (bVar49) {
          uVar28 = uVar20;
        }
        uVar23 = puVar29[0xb];
        if (bVar49) {
          uVar23 = uVar35;
        }
        uVar31 = *(uint *)((int)puVar29 + iVar12);
        puVar29[0xd] = puVar10[1];
        uVar30 = 0xd;
        puVar29[0xc] = uVar31;
        *puVar33 = uVar28;
        puVar29[0xb] = uVar23;
      }
      if (uVar3 <= uVar30 - 1) {
LAB_014a2e48:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x14a2e48);
        (*pcVar1)();
      }
      if (uVar30 != uVar3) {
        iVar12 = uVar30 << 3;
        do {
          FUN_014a40e0(puVar29,(int)puVar29 + iVar12);
          iVar12 = iVar12 + 8;
        } while (uVar3 * 8 != iVar12);
      }
      if (param_2 < 0x12) {
        return;
      }
      bVar49 = puVar29 == param_1;
      uVar3 = param_2 - local_168;
      puVar29 = puVar34;
    } while (bVar49);
    puVar11 = puVar34 + -2;
    puVar29 = param_1 + param_2 * 2 + -2;
    puVar10 = param_1;
    iVar12 = 0;
    do {
      iVar17 = iVar12;
      bVar49 = *puVar10 <= *puVar34;
      if (*puVar34 == *puVar10) {
        bVar49 = puVar10[1] <= puVar34[1];
      }
      uVar3 = (uint)!bVar49;
      puVar9 = puVar10;
      if (uVar3 != 0) {
        puVar9 = puVar34;
      }
      uVar30 = *puVar11;
      uVar28 = puVar9[1];
      *(uint *)((int)local_128 + iVar17) = *puVar9;
      *(uint *)((int)local_128 + iVar17 + 4) = uVar28;
      bVar49 = uVar30 <= *puVar29;
      if (*puVar29 == uVar30) {
        bVar49 = puVar11[1] <= puVar29[1];
      }
      uVar30 = (uint)!bVar49;
      puVar10 = puVar10 + (uVar3 ^ 1) * 2;
      puVar9 = puVar29;
      if (uVar30 != 0) {
        puVar9 = puVar11;
      }
      puVar4 = puVar29 + uVar30 * 2;
      uVar28 = puVar9[1];
      puVar8 = (uint *)((int)local_130 + (param_2 * 8 - iVar17));
      *puVar8 = *puVar9;
      puVar29 = puVar4 + -2;
      puVar34 = puVar34 + uVar3 * 2;
      puVar11 = puVar11 + uVar30 * -2;
      local_168 = local_168 - 1;
      puVar8[1] = uVar28;
      iVar12 = iVar17 + 8;
    } while (local_168 != 0);
    puVar11 = puVar11 + 2;
    if ((param_2 & 1) != 0) {
      bVar49 = puVar11 <= puVar10;
      puVar9 = puVar34;
      if (!bVar49) {
        puVar9 = puVar10;
      }
      uVar3 = puVar9[1];
      *(uint *)((int)local_128 + iVar17 + 8) = *puVar9;
      *(uint *)((int)local_128 + iVar17 + 0xc) = uVar3;
      puVar8 = (uint *)(uint)!bVar49;
      puVar34 = puVar34 + (uint)bVar49 * 2;
      puVar10 = puVar10 + (int)puVar8 * 2;
    }
    if (puVar10 == puVar11) {
      puVar8 = puVar4;
    }
    if (puVar10 != puVar11 || puVar34 != puVar8) {
      FUN_01307140();
LAB_014a2e20:
      uVar3 = param_2 + (param_2 >> 1);
      do {
        uVar3 = uVar3 - 1;
        if (uVar3 < param_2) {
          uVar30 = 0;
          puVar34 = puVar29 + uVar3 * 2;
          uVar23 = *puVar29;
          uVar31 = puVar29[1];
          uVar28 = puVar34[1];
          *puVar29 = *puVar34;
          puVar29[1] = uVar28;
          *puVar34 = uVar23;
          puVar34[1] = uVar31;
        }
        else {
          uVar30 = uVar3 - param_2;
        }
        uVar23 = uVar30 << 1 | 1;
        uVar28 = uVar3;
        if (param_2 < uVar3) {
          uVar28 = param_2;
        }
        if (uVar23 < uVar28) {
          do {
            uVar31 = uVar30 * 2 + 2;
            if (uVar31 < uVar28) {
              uVar24 = puVar29[uVar31 * 2];
              uVar20 = puVar29[uVar23 * 2];
              bVar49 = uVar24 <= uVar20;
              if (uVar20 == uVar24) {
                bVar49 = (puVar29 + uVar31 * 2)[1] <= (puVar29 + uVar23 * 2)[1];
              }
              uVar31 = uVar23 + !bVar49;
            }
            else {
              uVar31 = uVar23;
            }
            puVar34 = puVar29 + uVar31 * 2;
            puVar10 = puVar29 + uVar30 * 2;
            bVar49 = *puVar34 <= *puVar10;
            if (*puVar10 == *puVar34) {
              bVar49 = puVar34[1] <= puVar10[1];
            }
            if (bVar49) break;
            iVar12 = 0;
            do {
              uVar30 = puVar10[iVar12];
              puVar10[iVar12] = puVar34[iVar12];
              puVar34[iVar12] = uVar30;
              iVar12 = iVar12 + 1;
            } while (iVar12 != 2);
            uVar23 = uVar31 << 1 | 1;
            uVar30 = uVar31;
          } while (uVar23 < uVar28);
        }
        if (uVar3 == 0) {
          return;
        }
      } while( true );
    }
    FUN_01bed4e2(param_1,local_128,param_2 << 3);
  }
  return;
}

