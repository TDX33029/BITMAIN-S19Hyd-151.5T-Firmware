// FUN_0061938c @ 0061938c size=1644 calls_out=3 calls_in=2
// strings: 

void FUN_0061938c(uint *param_1,uint **param_2,uint *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint **ppuVar3;
  int iVar4;
  uint **ppuVar5;
  uint *puVar6;
  uint **ppuVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint **ppuVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint **ppuVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 uVar25;
  uint uVar26;
  uint **ppuVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  uint *puVar32;
  undefined4 *puVar33;
  uint **ppuVar34;
  uint *puVar35;
  uint uVar36;
  bool bVar37;
  byte in_Q;
  uint auStack_4e8 [2];
  uint **ppuStack_4e0;
  uint **ppuStack_4dc;
  uint *puStack_4d8;
  uint uStack_4d4;
  uint *puStack_4d0;
  uint **ppuStack_4cc;
  uint uStack_4c8;
  uint *apuStack_4c4 [2];
  uint uStack_4bc;
  uint *puStack_4b8;
  uint auStack_4b4 [5];
  uint *apuStack_4a0 [268];
  uint *local_70;
  int local_6c;
  int local_68;
  uint **local_64;
  uint *local_60;
  uint *local_5c;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint **local_44;
  uint local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint *puStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  
  if (&DAT_00000020 < param_2) {
LAB_0061941c:
    do {
      if (param_4 == 0) {
        ppuVar27 = (uint **)((int)param_2 + ((uint)param_2 >> 1));
        local_44 = param_2;
        do {
          ppuVar5 = local_44;
          ppuVar27 = (uint **)((int)ppuVar27 + -1);
          if (ppuVar27 < local_44) {
            local_40 = *param_1;
            uStack_3c = param_1[1];
            puStack_38 = (uint *)param_1[2];
            puStack_34 = (uint *)param_1[3];
            puStack_30 = (uint *)param_1[4];
            puStack_2c = (uint *)param_1[5];
            puVar20 = param_1 + (int)ppuVar27 * 6;
            FUN_016dd52c(param_1,puVar20,0x18);
            *puVar20 = local_40;
            puVar20[1] = uStack_3c;
            puVar20[2] = (uint)puStack_38;
            puVar20[3] = (uint)puStack_34;
            puVar20[4] = (uint)puStack_30;
            puVar20[5] = (uint)puStack_2c;
            ppuVar7 = (uint **)0x0;
          }
          else {
            ppuVar7 = (uint **)((int)ppuVar27 - (int)local_44);
          }
          ppuVar15 = (uint **)((int)ppuVar7 << 1 | 1);
          ppuVar34 = ppuVar27;
          if (ppuVar5 < ppuVar27) {
            ppuVar34 = ppuVar5;
          }
          if (ppuVar15 < ppuVar34) {
            do {
              ppuVar11 = (uint **)((int)ppuVar7 * 2 + 2);
              ppuVar5 = ppuVar15;
              if ((ppuVar11 < ppuVar34) &&
                 (uVar12 = (param_1 + (int)ppuVar11 * 6)[1],
                 uVar17 = (param_1 + (int)ppuVar15 * 6)[1],
                 uVar17 <= uVar12 &&
                 (uint)(param_1[(int)ppuVar11 * 6] <= param_1[(int)ppuVar15 * 6]) <= uVar17 - uVar12
                 )) {
                ppuVar5 = (uint **)((int)ppuVar15 + 1);
              }
              puVar20 = param_1 + (int)ppuVar7 * 6;
              puVar6 = param_1 + (int)ppuVar5 * 6;
              if (puVar6[1] < puVar20[1] || puVar20[1] - puVar6[1] < (uint)(*puVar6 <= *puVar20))
              break;
              uVar12 = puVar6[1];
              uVar22 = puVar6[2];
              uVar31 = puVar6[3];
              uVar28 = *puVar20;
              *puVar20 = *puVar6;
              uVar19 = puVar20[1];
              uVar26 = puVar20[2];
              uVar36 = puVar20[3];
              puVar20[1] = uVar12;
              uVar17 = puVar6[4];
              puVar6[4] = puVar20[4];
              uVar12 = puVar20[5];
              *puVar6 = uVar28;
              uVar28 = puVar6[5];
              puVar6[1] = uVar19;
              puVar6[5] = uVar12;
              puVar6[2] = uVar26;
              puVar6[3] = uVar36;
              ppuVar15 = (uint **)((int)ppuVar5 << 1 | 1);
              puVar20[2] = uVar22;
              puVar20[3] = uVar31;
              puVar20[4] = uVar17;
              puVar20[5] = uVar28;
              ppuVar7 = ppuVar5;
            } while (ppuVar15 < ppuVar34);
          }
          if (ppuVar27 == (uint **)0x0) {
            return;
          }
        } while( true );
      }
      puVar6 = param_1 + ((uint)param_2 >> 3) * 0x2a;
      puVar20 = param_1 + ((uint)param_2 >> 3) * 0x18;
      local_5c = param_1;
      if (&DAT_0000003f < param_2) {
        puVar14 = (uint *)FUN_006199f8(param_1);
      }
      else {
        uVar22 = puVar6[1];
        uVar12 = puVar20[1];
        uVar17 = param_1[1];
        bVar37 = uVar17 <= uVar12 && (uint)(*puVar20 <= *param_1) <= uVar17 - uVar12;
        puVar14 = puVar6;
        if (bVar37 == (uVar12 <= uVar22 && (uint)(*puVar6 <= *puVar20) <= uVar12 - uVar22)) {
          puVar14 = puVar20;
        }
        if (bVar37 != (uVar17 <= uVar22 && (uint)(*puVar6 <= *param_1) <= uVar17 - uVar22)) {
          puVar14 = param_1;
        }
      }
      local_68 = param_4 + -1;
      local_64 = param_2;
      if ((param_3 == (uint *)0x0) ||
         (puVar20 = (uint *)((int)param_1 + ((int)puVar14 - (int)param_1)),
         !(puVar20[1] < param_3[1] || param_3[1] - puVar20[1] < (uint)(*puVar20 <= *param_3)))) {
        local_40 = *param_1;
        uStack_3c = param_1[1];
        puStack_38 = (uint *)param_1[2];
        puStack_34 = (uint *)param_1[3];
        puStack_30 = (uint *)param_1[4];
        puStack_2c = (uint *)param_1[5];
        puVar20 = (uint *)((int)param_1 + ((int)puVar14 - (int)param_1));
        local_70 = param_3;
        FUN_016dd52c(param_1,puVar20,0x18);
        local_44 = (uint **)(param_1 + 6);
        *puVar20 = local_40;
        puVar20[1] = uStack_3c;
        puVar20[2] = (uint)puStack_38;
        puVar20[3] = (uint)puStack_34;
        puVar20[4] = (uint)puStack_30;
        puVar20[5] = (uint)puStack_2c;
        ppuVar27 = (uint **)0x0;
        local_40 = (uint)*local_44;
        uStack_3c = param_1[7];
        puStack_38 = (uint *)param_1[8];
        puStack_34 = (uint *)param_1[9];
        puStack_30 = (uint *)param_1[10];
        puStack_2c = (uint *)param_1[0xb];
        local_60 = param_1 + (int)param_2 * 6;
        local_6c = (int)param_2 * 0x18;
        local_48 = *param_1;
        local_4c = param_1[1];
        iVar8 = 0x18;
        iVar13 = 0;
        puVar20 = (uint *)local_44;
        do {
          iVar30 = iVar13;
          iVar4 = iVar8;
          local_50 = puVar20[7];
          puVar6 = puVar20 + 6;
          local_58 = *puVar6;
          puVar14 = (uint *)(local_44 + (int)ppuVar27 * 6);
          local_54 = puVar20;
          FUN_016dd52c(puVar20,puVar14,0x18);
          uVar12 = puVar20[7];
          uVar17 = puVar20[8];
          uVar22 = puVar20[9];
          uVar19 = puVar20[10];
          uVar28 = puVar20[0xb];
          *puVar14 = *puVar6;
          puVar14[1] = uVar12;
          puVar14[2] = uVar17;
          puVar14[3] = uVar22;
          puVar14[4] = uVar19;
          puVar14[5] = uVar28;
          if (local_50 <= local_4c && (uint)(local_48 <= local_58) <= local_50 - local_4c) {
            ppuVar27 = (uint **)((int)ppuVar27 + 1);
          }
          iVar8 = iVar4 + 0x18;
          iVar13 = iVar30 + 0x18;
          puVar20 = puVar6;
        } while (local_54 + 0xc < local_60);
        local_58 = local_6c + -0x30;
        do {
          uVar12 = local_58;
          puVar20 = &local_40;
          puVar6 = (uint *)(local_44 + (int)ppuVar27 * 6);
          if (local_58 != iVar4) {
            puVar20 = (uint *)((int)local_5c + iVar4 + 0x30);
          }
          local_50 = *puVar20;
          local_54 = (uint *)puVar20[1];
          FUN_016dd52c((int)local_5c + iVar4 + 0x18,puVar6,0x18);
          puVar14 = local_5c;
          param_2 = local_64;
          iVar4 = iVar4 + 0x18;
          uVar17 = puVar20[1];
          uVar22 = puVar20[2];
          uVar19 = puVar20[3];
          uVar28 = puVar20[4];
          uVar26 = puVar20[5];
          iVar30 = iVar30 + 0x18;
          *puVar6 = *puVar20;
          puVar6[1] = uVar17;
          puVar6[2] = uVar22;
          puVar6[3] = uVar19;
          puVar6[4] = uVar28;
          puVar6[5] = uVar26;
          if (local_54 <= local_4c && (uint)(local_48 <= local_50) <= (int)local_54 - local_4c) {
            ppuVar27 = (uint **)((int)ppuVar27 + 1);
          }
        } while (uVar12 != iVar30);
        if (local_64 <= ppuVar27) {
LAB_00619870:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x619870);
          (*pcVar1)();
        }
        local_40 = *local_5c;
        uStack_3c = local_5c[1];
        puStack_38 = (uint *)local_5c[2];
        puStack_34 = (uint *)local_5c[3];
        puStack_30 = (uint *)local_5c[4];
        puStack_2c = (uint *)local_5c[5];
        param_3 = local_5c + (int)ppuVar27 * 6;
        FUN_016dd52c(local_5c,param_3,0x18);
        param_4 = local_68;
        *param_3 = local_40;
        param_3[1] = uStack_3c;
        param_3[2] = (uint)puStack_38;
        param_3[3] = (uint)puStack_34;
        param_3[4] = (uint)puStack_30;
        param_3[5] = (uint)puStack_2c;
        FUN_0061938c(puVar14,ppuVar27,local_70,local_68);
        param_2 = (uint **)((int)param_2 + ~(uint)ppuVar27);
        param_1 = param_3 + 6;
        if (param_2 <= &DAT_00000020) break;
        goto LAB_0061941c;
      }
      local_40 = *param_1;
      uStack_3c = param_1[1];
      puStack_38 = (uint *)param_1[2];
      puStack_34 = (uint *)param_1[3];
      puStack_30 = (uint *)param_1[4];
      puStack_2c = (uint *)param_1[5];
      FUN_016dd52c(param_1,puVar20,0x18);
      local_44 = (uint **)(param_1 + 6);
      ppuVar27 = (uint **)0x0;
      *puVar20 = local_40;
      puVar20[1] = uStack_3c;
      puVar20[2] = (uint)puStack_38;
      puVar20[3] = (uint)puStack_34;
      puVar20[4] = (uint)puStack_30;
      puVar20[5] = (uint)puStack_2c;
      local_40 = (uint)*local_44;
      uStack_3c = param_1[7];
      puStack_38 = (uint *)param_1[8];
      puStack_34 = (uint *)param_1[9];
      puStack_30 = (uint *)param_1[10];
      puStack_2c = (uint *)param_1[0xb];
      local_60 = param_1 + (int)param_2 * 6;
      local_6c = (int)param_2 * 0x18;
      local_48 = *param_1;
      local_4c = param_1[1];
      iVar8 = 0x18;
      iVar13 = 0;
      puVar20 = (uint *)local_44;
      do {
        iVar30 = iVar13;
        iVar4 = iVar8;
        local_50 = puVar20[7];
        puVar6 = puVar20 + 6;
        local_58 = *puVar6;
        puVar14 = (uint *)(local_44 + (int)ppuVar27 * 6);
        local_54 = puVar20;
        FUN_016dd52c(puVar20,puVar14,0x18);
        uVar12 = puVar20[7];
        uVar17 = puVar20[8];
        uVar22 = puVar20[9];
        uVar19 = puVar20[10];
        uVar28 = puVar20[0xb];
        *puVar14 = *puVar6;
        puVar14[1] = uVar12;
        puVar14[2] = uVar17;
        puVar14[3] = uVar22;
        puVar14[4] = uVar19;
        puVar14[5] = uVar28;
        if (local_50 < local_4c || local_4c - local_50 < (uint)(local_58 <= local_48)) {
          ppuVar27 = (uint **)((int)ppuVar27 + 1);
        }
        iVar8 = iVar4 + 0x18;
        iVar13 = iVar30 + 0x18;
        puVar20 = puVar6;
      } while (local_54 + 0xc < local_60);
      local_58 = local_6c + -0x30;
      do {
        uVar12 = local_58;
        puVar20 = &local_40;
        puVar6 = (uint *)(local_44 + (int)ppuVar27 * 6);
        if (local_58 != iVar4) {
          puVar20 = (uint *)((int)local_5c + iVar4 + 0x30);
        }
        local_50 = *puVar20;
        local_54 = (uint *)puVar20[1];
        FUN_016dd52c((int)local_5c + iVar4 + 0x18,puVar6,0x18);
        param_2 = local_64;
        param_4 = local_68;
        iVar4 = iVar4 + 0x18;
        uVar17 = puVar20[1];
        uVar22 = puVar20[2];
        uVar19 = puVar20[3];
        uVar28 = puVar20[4];
        uVar26 = puVar20[5];
        iVar30 = iVar30 + 0x18;
        *puVar6 = *puVar20;
        puVar6[1] = uVar17;
        puVar6[2] = uVar22;
        puVar6[3] = uVar19;
        puVar6[4] = uVar28;
        puVar6[5] = uVar26;
        if (local_54 < local_4c || local_4c - (int)local_54 < (uint)(local_50 <= local_48)) {
          ppuVar27 = (uint **)((int)ppuVar27 + 1);
        }
      } while (uVar12 != iVar30);
      if (local_64 <= ppuVar27) goto LAB_00619870;
      local_40 = *local_5c;
      uStack_3c = local_5c[1];
      puStack_38 = (uint *)local_5c[2];
      puStack_34 = (uint *)local_5c[3];
      puStack_30 = (uint *)local_5c[4];
      puStack_2c = (uint *)local_5c[5];
      param_1 = local_5c + (int)ppuVar27 * 6;
      FUN_016dd52c(local_5c,param_1,0x18);
      param_2 = (uint **)(~(uint)ppuVar27 + (int)param_2);
      *param_1 = local_40;
      param_1[1] = uStack_3c;
      param_1[2] = (uint)puStack_38;
      param_1[3] = (uint)puStack_34;
      param_1[4] = (uint)puStack_30;
      param_1[5] = (uint)puStack_2c;
      param_1 = param_1 + 6;
      param_3 = (uint *)0x0;
    } while (&DAT_00000021 <= param_2);
  }
  uStack_4bc = (uint)param_2 >> 1;
  if (uStack_4bc != 0) {
    ppuStack_4e0 = param_2;
    if (param_2 < &DAT_00000008) {
      puStack_4b8 = (uint *)*param_1;
      auStack_4b4[0] = param_1[1];
      auStack_4b4[1] = param_1[2];
      auStack_4b4[2] = param_1[3];
      auStack_4b4[3] = param_1[4];
      auStack_4b4[4] = param_1[5];
      puVar35 = param_1 + uStack_4bc * 6;
      puVar20 = (uint *)puVar35[1];
      puVar6 = (uint *)puVar35[2];
      puVar14 = (uint *)puVar35[3];
      puVar9 = (uint *)puVar35[4];
      puVar23 = (uint *)puVar35[5];
      apuStack_4c4[uStack_4bc * 6 + 3] = (uint *)*puVar35;
      apuStack_4c4[uStack_4bc * 6 + 4] = puVar20;
      apuStack_4c4[uStack_4bc * 6 + 5] = puVar6;
      apuStack_4c4[uStack_4bc * 6 + 6] = puVar14;
      apuStack_4c4[uStack_4bc * 6 + 7] = puVar9;
      apuStack_4c4[uStack_4bc * 6 + 8] = puVar23;
      uVar17 = 1;
      ppuVar27 = param_2;
      uVar12 = uStack_4bc;
    }
    else {
      uVar22 = param_1[1];
      uVar12 = param_1[7];
      uVar17 = param_1[0xd];
      uVar28 = param_1[0x13];
      bVar37 = uVar12 - uVar22 < (uint)(*param_1 <= param_1[6]);
      uVar19 = (uint)(uVar22 < uVar12 || bVar37);
      uVar12 = (uint)(uVar22 >= uVar12 && !bVar37);
      bVar37 = (uint)(param_1[0xc] <= param_1[0x12]) <= uVar28 - uVar17;
      iVar13 = 0x30;
      iVar8 = 0x48;
      if (uVar28 <= uVar17 && bVar37) {
        iVar8 = 0x30;
      }
      puVar20 = (uint *)((int)param_1 + iVar8);
      if (uVar28 <= uVar17 && bVar37) {
        iVar13 = 0x48;
      }
      puVar9 = (uint *)((int)param_1 + iVar13);
      puVar14 = param_1 + (uVar12 | uVar12 << 1) * 2;
      puVar23 = param_1 + (uVar19 | uVar19 << 1) * 2;
      uVar17 = puVar9[1];
      uVar12 = puVar14[1];
      bVar37 = uVar17 - uVar12 < (uint)(*puVar14 <= *puVar9);
      puVar6 = puVar9;
      if (uVar12 >= uVar17 && !bVar37) {
        puVar6 = puVar23;
      }
      puVar24 = puVar23;
      puVar35 = puVar20;
      if (puVar20[1] <= puVar23[1] && (uint)(*puVar23 <= *puVar20) <= puVar20[1] - puVar23[1]) {
        puVar24 = puVar9;
        puVar35 = puVar23;
        puVar6 = puVar20;
      }
      bVar37 = (((byte)((uVar12 < uVar17 || bVar37) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0;
      if (bVar37) {
        puVar24 = puVar14;
      }
      if (bVar37) {
        puVar14 = puVar9;
      }
      puStack_4b8 = (uint *)*puVar14;
      auStack_4b4[0] = puVar14[1];
      auStack_4b4[1] = puVar14[2];
      auStack_4b4[2] = puVar14[3];
      auStack_4b4[3] = puVar14[4];
      auStack_4b4[4] = puVar14[5];
      if (puVar24[1] < puVar6[1] || puVar6[1] - puVar24[1] < (uint)(*puVar24 <= *puVar6)) {
        puVar20 = puVar6;
      }
      else {
        puVar20 = puVar24;
        puVar24 = puVar6;
      }
      apuStack_4a0[0] = (uint *)*puVar24;
      apuStack_4a0[1] = (uint *)puVar24[1];
      apuStack_4a0[2] = (uint *)puVar24[2];
      apuStack_4a0[3] = (uint *)puVar24[3];
      apuStack_4a0[4] = (uint *)puVar24[4];
      apuStack_4a0[5] = (uint *)puVar24[5];
      apuStack_4a0[6] = (uint *)*puVar20;
      apuStack_4a0[7] = (uint *)puVar20[1];
      apuStack_4a0[8] = (uint *)puVar20[2];
      apuStack_4a0[9] = (uint *)puVar20[3];
      apuStack_4a0[10] = (uint *)puVar20[4];
      apuStack_4a0[0xb] = (uint *)puVar20[5];
      apuStack_4a0[0xc] = (uint *)*puVar35;
      apuStack_4a0[0xd] = (uint *)puVar35[1];
      apuStack_4a0[0xe] = (uint *)puVar35[2];
      apuStack_4a0[0xf] = (uint *)puVar35[3];
      apuStack_4a0[0x10] = (uint *)puVar35[4];
      apuStack_4a0[0x11] = (uint *)puVar35[5];
      puVar20 = param_1 + uStack_4bc * 6;
      uVar22 = puVar20[7];
      uVar12 = puVar20[1];
      bVar37 = uVar22 - uVar12 < (uint)(*puVar20 <= puVar20[6]);
      uVar17 = (uint)(uVar12 < uVar22 || bVar37);
      uVar12 = (uint)(uVar12 >= uVar22 && !bVar37);
      iVar13 = 0x48;
      iVar8 = 0x30;
      if (puVar20[0x13] <= puVar20[0xd] &&
          (uint)(puVar20[0xc] <= puVar20[0x12]) <= puVar20[0x13] - puVar20[0xd]) {
        iVar8 = 0x48;
        iVar13 = 0x30;
      }
      puVar23 = (uint *)((int)puVar20 + iVar8);
      puVar14 = puVar20 + (uVar12 | uVar12 << 1) * 2;
      puVar9 = (uint *)((int)puVar20 + iVar13);
      puVar20 = puVar20 + (uVar17 | uVar17 << 1) * 2;
      bVar37 = puVar23[1] <= puVar14[1];
      bVar2 = (uint)(*puVar14 <= *puVar23) <= puVar23[1] - puVar14[1];
      puVar6 = puVar23;
      if (bVar37 && bVar2) {
        puVar6 = puVar20;
      }
      puVar24 = puVar20;
      puVar35 = puVar9;
      if (puVar9[1] <= puVar20[1] && (uint)(*puVar20 <= *puVar9) <= puVar9[1] - puVar20[1]) {
        puVar24 = puVar23;
        puVar35 = puVar20;
        puVar6 = puVar9;
      }
      if (bVar37 && bVar2) {
        puVar24 = puVar14;
      }
      uVar12 = *puVar24;
      if (bVar37 && bVar2) {
        puVar14 = puVar23;
      }
      uStack_4c8 = puVar24[1];
      uVar17 = *puVar6;
      uVar22 = puVar6[1];
      puVar20 = (uint *)puVar14[1];
      puVar9 = (uint *)puVar14[2];
      puVar23 = (uint *)puVar14[3];
      puVar29 = (uint *)puVar14[4];
      puVar32 = (uint *)puVar14[5];
      apuStack_4c4[uStack_4bc * 6 + 3] = (uint *)*puVar14;
      apuStack_4c4[uStack_4bc * 6 + 4] = puVar20;
      apuStack_4c4[uStack_4bc * 6 + 5] = puVar9;
      apuStack_4c4[uStack_4bc * 6 + 6] = puVar23;
      apuStack_4c4[uStack_4bc * 6 + 7] = puVar29;
      apuStack_4c4[uStack_4bc * 6 + 8] = puVar32;
      if (uStack_4c8 < uVar22 || uVar22 - uStack_4c8 < (uint)(uVar12 <= uVar17)) {
        puVar20 = puVar6;
      }
      else {
        puVar20 = puVar24;
        puVar24 = puVar6;
      }
      puVar6 = (uint *)puVar24[1];
      puVar14 = (uint *)puVar24[2];
      puVar9 = (uint *)puVar24[3];
      puVar23 = (uint *)puVar24[4];
      puVar29 = (uint *)puVar24[5];
      apuStack_4c4[uStack_4bc * 6 + 9] = (uint *)*puVar24;
      apuStack_4c4[uStack_4bc * 6 + 10] = puVar6;
      apuStack_4c4[uStack_4bc * 6 + 0xb] = puVar14;
      apuStack_4c4[uStack_4bc * 6 + 0xc] = puVar9;
      apuStack_4c4[uStack_4bc * 6 + 0xd] = puVar23;
      apuStack_4c4[uStack_4bc * 6 + 0xe] = puVar29;
      puVar6 = (uint *)puVar20[1];
      puVar14 = (uint *)puVar20[2];
      puVar9 = (uint *)puVar20[3];
      puVar23 = (uint *)puVar20[4];
      puVar24 = (uint *)puVar20[5];
      apuStack_4c4[uStack_4bc * 6 + 0xf] = (uint *)*puVar20;
      apuStack_4c4[uStack_4bc * 6 + 0x10] = puVar6;
      apuStack_4c4[uStack_4bc * 6 + 0x11] = puVar14;
      apuStack_4c4[uStack_4bc * 6 + 0x12] = puVar9;
      apuStack_4c4[uStack_4bc * 6 + 0x13] = puVar23;
      apuStack_4c4[uStack_4bc * 6 + 0x14] = puVar24;
      puVar20 = (uint *)puVar35[1];
      puVar6 = (uint *)puVar35[2];
      puVar14 = (uint *)puVar35[3];
      puVar9 = (uint *)puVar35[4];
      puVar23 = (uint *)puVar35[5];
      apuStack_4c4[uStack_4bc * 6 + 0x15] = (uint *)*puVar35;
      apuStack_4c4[uStack_4bc * 6 + 0x16] = puVar20;
      apuStack_4c4[uStack_4bc * 6 + 0x17] = puVar6;
      apuStack_4c4[uStack_4bc * 6 + 0x18] = puVar14;
      apuStack_4c4[uStack_4bc * 6 + 0x19] = puVar9;
      apuStack_4c4[uStack_4bc * 6 + 0x1a] = puVar23;
      uVar17 = 4;
      ppuVar27 = ppuStack_4e0;
      uVar12 = uStack_4bc;
    }
    uStack_4d4 = (int)ppuVar27 - uVar12;
    puStack_4d0 = (uint *)uVar17;
    apuStack_4c4[1] = param_1;
    ppuStack_4cc = (uint **)(uVar17 * 3);
    if (uVar17 < uVar12) {
      ppuVar27 = apuStack_4c4 + 3;
      uStack_4c8 = uVar17 * 0x18 + -0x30;
      apuStack_4c4[0] = (uint *)(uVar17 * 0x18);
      uVar22 = uVar17;
      do {
        puVar9 = param_1 + uVar22 * 6;
        puVar20 = (uint *)puVar9[1];
        puVar6 = (uint *)puVar9[2];
        puVar14 = (uint *)puVar9[3];
        puVar23 = (uint *)puVar9[4];
        puVar35 = (uint *)puVar9[5];
        ppuVar27[uVar22 * 6] = (uint *)*puVar9;
        apuStack_4c4[uVar22 * 6 + 4] = puVar20;
        apuStack_4c4[uVar22 * 6 + 5] = puVar6;
        apuStack_4c4[uVar22 * 6 + 6] = puVar14;
        apuStack_4c4[uVar22 * 6 + 7] = puVar23;
        apuStack_4c4[uVar22 * 6 + 8] = puVar35;
        puVar20 = ppuVar27[uVar22 * 6];
        puVar6 = apuStack_4c4[uVar22 * 6 + 4];
        if (puVar6 <= apuStack_4c4[uVar22 * 6 + -2] &&
            (uint)(apuStack_4c4[uVar22 * 6 + -3] <= puVar20) <=
            (uint)((int)puVar6 - (int)apuStack_4c4[uVar22 * 6 + -2])) {
          puStack_38 = (uint *)puVar9[2];
          puStack_34 = (uint *)puVar9[3];
          puStack_30 = (uint *)puVar9[4];
          puStack_2c = (uint *)puVar9[5];
          iVar8 = uStack_4c8;
          puVar14 = apuStack_4c4[0];
          do {
            uVar10 = *(undefined4 *)((int)apuStack_4c4 + (int)(puVar14 + -2));
            uVar16 = *(undefined4 *)((int)apuStack_4c4 + (int)(puVar14 + -1));
            uVar18 = *(undefined4 *)((int)apuStack_4c4 + (int)puVar14);
            uVar21 = *(undefined4 *)((int)apuStack_4c4 + (int)(puVar14 + 1));
            uVar25 = *(undefined4 *)((int)(apuStack_4c4 + 2) + (int)puVar14);
            *(undefined4 *)((int)ppuVar27 + (int)puVar14) =
                 *(undefined4 *)((int)apuStack_4c4 + (int)(puVar14 + -3));
            *(undefined4 *)((int)(apuStack_4c4 + 2) + (int)(puVar14 + 2)) = uVar10;
            *(undefined4 *)((int)(apuStack_4c4 + 2) + (int)(puVar14 + 3)) = uVar16;
            *(undefined4 *)((int)(apuStack_4c4 + 2) + (int)(puVar14 + 4)) = uVar18;
            *(undefined4 *)((int)(apuStack_4c4 + 2) + (int)(puVar14 + 5)) = uVar21;
            *(undefined4 *)((int)(apuStack_4c4 + 2) + (int)(puVar14 + 6)) = uVar25;
            if (puVar14 == (uint *)0x18) {
              ppuVar5 = ppuVar27;
              goto LAB_006132c0;
            }
            puVar23 = (uint *)((int)ppuVar27 + iVar8);
            puVar14 = puVar14 + -6;
            puVar9 = (uint *)((int)auStack_4b4 + iVar8);
            iVar8 = iVar8 + -0x18;
          } while (puVar6 <= (uint *)*puVar9 &&
                   (uint)((uint *)*puVar23 <= puVar20) <= (uint)((int)puVar6 - (int)*puVar9));
          ppuVar5 = (uint **)((int)ppuVar27 + (int)puVar14);
LAB_006132c0:
          *ppuVar5 = puVar20;
          ppuVar5[1] = puVar6;
          puVar14 = puStack_2c;
          puVar6 = puStack_30;
          puVar20 = puStack_34;
          ppuVar5[2] = puStack_38;
          ppuVar5[3] = puVar20;
          ppuVar5[4] = puVar6;
          ppuVar5[5] = puVar14;
        }
        uVar22 = uVar22 + 1;
        uStack_4c8 = uStack_4c8 + 0x18;
        apuStack_4c4[0] = apuStack_4c4[0] + 6;
        uVar12 = uStack_4bc;
      } while (uVar22 != uStack_4bc);
    }
    ppuVar27 = apuStack_4c4 + uVar12 * 6 + 3;
    if (uVar17 < uStack_4d4) {
      ppuStack_4dc = ppuVar27;
      puStack_4d8 = param_1 + uVar12 * 6;
      apuStack_4c4[0] = auStack_4e8 + uVar12 * 6;
      ppuStack_4cc = ppuVar27;
      uStack_4c8 = 0x18;
      puVar20 = puStack_4d0;
      do {
        puVar24 = param_1 + uVar12 * 6 + (int)puVar20 * 6;
        ppuVar5 = ppuVar27 + (int)puVar20 * 6;
        puVar6 = (uint *)puVar24[1];
        puVar14 = (uint *)puVar24[2];
        puVar9 = (uint *)puVar24[3];
        puVar23 = (uint *)puVar24[4];
        puVar35 = (uint *)puVar24[5];
        *ppuVar5 = (uint *)*puVar24;
        ppuVar5[1] = puVar6;
        ppuVar5[2] = puVar14;
        ppuVar5[3] = puVar9;
        ppuVar5[4] = puVar23;
        ppuVar5[5] = puVar35;
        puVar14 = ppuVar27[(int)puVar20 * 6];
        puVar6 = ppuVar5[1];
        if (puVar6 <= ppuVar5[-5] &&
            (uint)(ppuVar5[-6] <= puVar14) <= (uint)((int)puVar6 - (int)ppuVar5[-5])) {
          puStack_4d0 = puVar20;
          puStack_38 = (uint *)puVar24[2];
          puStack_34 = (uint *)puVar24[3];
          puStack_30 = (uint *)puVar24[4];
          puStack_2c = (uint *)puVar24[5];
          ppuVar27 = ppuStack_4cc;
          uVar22 = uStack_4c8;
          puVar20 = apuStack_4c4[0];
          do {
            ppuVar5 = ppuVar27 + uVar17 * 6;
            *ppuVar5 = ppuVar5[-6];
            ppuVar5[1] = ppuVar5[-5];
            ppuVar5[2] = ppuVar5[-4];
            ppuVar5[3] = ppuVar5[-3];
            ppuVar5[4] = ppuVar5[-2];
            ppuVar5[5] = ppuVar5[-1];
            if (uVar17 * 0x18 == uVar22) {
              ppuVar27 = ppuStack_4dc;
              goto LAB_006133e4;
            }
            puVar23 = puVar20 + uVar17 * 6;
            uVar22 = uVar22 + 0x18;
            ppuVar27 = ppuVar27 + -6;
            puVar9 = (uint *)puVar23[1];
            puVar20 = puVar20 + -6;
          } while (puVar6 <= puVar9 &&
                   (uint)((uint *)*puVar23 <= puVar14) <= (uint)((int)puVar6 - (int)puVar9));
          ppuVar27 = ppuVar27 + uVar17 * 6;
LAB_006133e4:
          *ppuVar27 = puVar14;
          ppuVar27[1] = puVar6;
          ppuVar27[2] = puStack_38;
          ppuVar27[3] = puStack_34;
          ppuVar27[4] = puStack_30;
          ppuVar27[5] = puStack_2c;
          puVar20 = puStack_4d0;
          ppuVar27 = ppuStack_4dc;
        }
        puVar20 = (uint *)((int)puVar20 + 1);
        uStack_4c8 = uStack_4c8 + -0x18;
        apuStack_4c4[0] = apuStack_4c4[0] + 6;
        ppuStack_4cc = ppuStack_4cc + 6;
      } while (puVar20 != (uint *)uStack_4d4);
    }
    ppuVar34 = ppuVar27 + -6;
    iVar8 = 0;
    uStack_4c8 = (int)param_2 * 3;
    apuStack_4c4[0] = param_1 + (int)param_2 * 6 + -6;
    ppuVar7 = apuStack_4c4 + (int)param_2 * 6 + -3;
    uVar12 = uStack_4bc;
    ppuVar5 = apuStack_4c4 + 3;
    do {
      uStack_4bc = uVar12;
      puVar20 = ppuVar5[1];
      puVar14 = ppuVar27[1];
      bVar37 = (uint)(*ppuVar5 <= *ppuVar27) <= (uint)((int)puVar14 - (int)puVar20);
      puVar6 = (uint *)((int)param_1 + iVar8);
      ppuVar11 = ppuVar5;
      ppuVar15 = ppuVar27;
      if (puVar14 > puVar20 || !bVar37) {
        ppuVar11 = ppuVar5 + 6;
        ppuVar15 = ppuVar5;
      }
      puVar9 = ppuVar15[1];
      puVar23 = ppuVar15[2];
      puVar35 = ppuVar15[3];
      puVar24 = ppuVar15[4];
      puVar29 = ppuVar15[5];
      if (puVar14 <= puVar20 && bVar37) {
        ppuVar27 = ppuVar27 + 6;
      }
      *puVar6 = (uint)*ppuVar15;
      puVar6[1] = (uint)puVar9;
      puVar6[2] = (uint)puVar23;
      puVar6[3] = (uint)puVar35;
      puVar6[4] = (uint)puVar24;
      puVar6[5] = (uint)puVar29;
      bVar37 = ppuVar34[1] < ppuVar7[1];
      bVar2 = (uint)((int)ppuVar7[1] - (int)ppuVar34[1]) < (uint)(*ppuVar34 <= *ppuVar7);
      ppuVar5 = ppuVar7;
      if (!bVar37 && !bVar2) {
        ppuVar5 = ppuVar34;
      }
      puVar20 = (uint *)((int)(param_1 + (int)param_2 * 6 + -6) - iVar8);
      puVar6 = ppuVar5[1];
      puVar14 = ppuVar5[2];
      puVar9 = ppuVar5[3];
      puVar23 = ppuVar5[4];
      puVar35 = ppuVar5[5];
      iVar8 = iVar8 + 0x18;
      *puVar20 = (uint)*ppuVar5;
      puVar20[1] = (uint)puVar6;
      puVar20[2] = (uint)puVar14;
      puVar20[3] = (uint)puVar9;
      puVar20[4] = (uint)puVar23;
      puVar20[5] = (uint)puVar35;
      iVar13 = 0;
      if (!bVar37 && !bVar2) {
        iVar13 = -1;
      }
      iVar4 = 0;
      if (bVar37 || bVar2) {
        iVar4 = -1;
      }
      ppuVar34 = ppuVar34 + iVar13 * 6;
      ppuVar7 = ppuVar7 + iVar4 * 6;
      uVar12 = uVar12 - 1;
      ppuVar5 = ppuVar11;
    } while (uVar12 != 0);
    ppuVar34 = ppuVar34 + 6;
    ppuVar5 = ppuStack_4e0;
    ppuVar15 = ppuVar11;
    if (((uint)param_2 & 1) != 0) {
      ppuVar3 = ppuVar27;
      if (ppuVar11 < ppuVar34) {
        ppuVar15 = ppuVar11 + 6;
        ppuVar3 = ppuVar11;
      }
      ppuVar5 = (uint **)*ppuVar3;
      puVar20 = ppuVar3[1];
      puVar6 = ppuVar3[2];
      puVar14 = ppuVar3[3];
      puVar9 = ppuVar3[4];
      puVar23 = ppuVar3[5];
      if (ppuVar11 >= ppuVar34) {
        ppuVar27 = ppuVar27 + 6;
      }
      puVar33 = (undefined4 *)((int)param_1 + iVar8);
      *puVar33 = ppuVar5;
      puVar33[1] = puVar20;
      puVar33[2] = puVar6;
      puVar33[3] = puVar14;
      puVar33[4] = puVar9;
      puVar33[5] = puVar23;
    }
    if (ppuVar15 == ppuVar34) {
      ppuVar5 = ppuVar7 + 6;
    }
    if (ppuVar15 != ppuVar34 || ppuVar27 != ppuVar5) {
      FUN_00fb7254();
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x6135f8);
      (*pcVar1)();
    }
  }
  return;
}

