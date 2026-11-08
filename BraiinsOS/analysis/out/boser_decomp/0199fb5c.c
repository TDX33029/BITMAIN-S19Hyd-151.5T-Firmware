// FUN_0199fb5c @ 0199fb5c size=3376 calls_out=4 calls_in=2
// strings: 

uint * FUN_0199fb5c(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  byte in_Q;
  undefined1 auStack_4e8 [4];
  uint *local_4e4;
  uint *local_4e0;
  uint local_4dc;
  uint *local_4d8;
  uint *local_4d4;
  uint local_4d0;
  undefined1 *local_4cc;
  uint local_4c8;
  uint *local_4c4;
  uint local_4c0;
  uint *local_4bc;
  uint local_4b8 [274];
  uint *local_70;
  int local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (&DAT_00000020 < param_2) {
LAB_0199fbf4:
    do {
      if (param_4 == 0) {
        local_44 = (uint *)((int)param_2 + ((uint)param_2 >> 1));
        local_48 = param_2;
        do {
          local_44 = (uint *)((int)local_44 + -1);
          if (local_44 < local_48) {
            local_40 = *param_1;
            local_3c = param_1[1];
            local_38 = param_1[2];
            uStack_34 = param_1[3];
            uStack_30 = param_1[4];
            uStack_2c = param_1[5];
            puVar25 = param_1 + (int)local_44 * 6;
            FUN_01bed864(param_1,puVar25,0x18);
            puVar11 = (uint *)0x0;
            *puVar25 = local_40;
            puVar25[1] = local_3c;
            puVar25[2] = local_38;
            puVar25[3] = uStack_34;
            puVar25[4] = uStack_30;
            puVar25[5] = uStack_2c;
          }
          else {
            puVar11 = (uint *)((int)local_44 - (int)local_48);
          }
          puVar25 = local_44;
          if (local_48 < local_44) {
            puVar25 = local_48;
          }
          puVar21 = (uint *)((int)puVar11 << 1 | 1);
          if (puVar21 < puVar25) {
            do {
              puVar15 = (uint *)((int)puVar11 * 2 + 2);
              puVar9 = puVar21;
              if ((puVar15 < puVar25) &&
                 (uVar12 = (param_1 + (int)puVar15 * 6)[1], uVar3 = (param_1 + (int)puVar21 * 6)[1],
                 uVar3 <= uVar12 &&
                 (uint)(param_1[(int)puVar15 * 6] <= param_1[(int)puVar21 * 6]) <= uVar3 - uVar12))
              {
                puVar9 = (uint *)((int)puVar21 + 1);
              }
              puVar21 = param_1 + (int)puVar9 * 6;
              uVar22 = *puVar21;
              puVar15 = param_1 + (int)puVar11 * 6;
              uVar12 = *puVar15;
              uVar13 = puVar21[1];
              uVar3 = puVar15[1];
              puVar11 = (uint *)(uVar3 - (uVar13 + (uVar22 > uVar12)));
              if (uVar13 < uVar3 || uVar3 - uVar13 < (uint)(uVar22 <= uVar12)) break;
              *puVar15 = uVar22;
              puVar15[1] = uVar13;
              uVar22 = puVar15[2];
              uVar28 = puVar15[3];
              uVar26 = puVar15[4];
              uVar27 = puVar15[5];
              *puVar21 = uVar12;
              puVar21[1] = uVar3;
              uVar3 = puVar21[2];
              uVar12 = puVar21[3];
              uVar13 = puVar21[4];
              uVar23 = puVar21[5];
              puVar21[2] = uVar22;
              puVar21[3] = uVar28;
              puVar21[4] = uVar26;
              puVar21[5] = uVar27;
              puVar21 = (uint *)((int)puVar9 << 1 | 1);
              puVar15[4] = uVar13;
              puVar15[2] = uVar3;
              puVar15[3] = uVar12;
              puVar15[5] = uVar23;
              puVar11 = puVar9;
            } while (puVar21 < puVar25);
          }
          if (local_44 == (uint *)0x0) {
            return puVar11;
          }
        } while( true );
      }
      puVar25 = param_1 + ((uint)param_2 >> 3) * 0x2a;
      puVar11 = param_1 + ((uint)param_2 >> 3) * 0x18;
      local_5c = param_1;
      if (&DAT_0000003f < param_2) {
        puVar21 = (uint *)FUN_019a08ac(param_1);
      }
      else {
        uVar12 = puVar25[1];
        uVar3 = puVar11[1];
        uVar22 = param_1[1];
        bVar29 = uVar22 <= uVar3 && (uint)(*puVar11 <= *param_1) <= uVar22 - uVar3;
        puVar21 = puVar25;
        if (bVar29 == (uVar3 <= uVar12 && (uint)(*puVar25 <= *puVar11) <= uVar3 - uVar12)) {
          puVar21 = puVar11;
        }
        if (bVar29 != (uVar22 <= uVar12 && (uint)(*puVar25 <= *param_1) <= uVar22 - uVar12)) {
          puVar21 = param_1;
        }
      }
      puVar11 = local_5c;
      local_6c = param_4 + -1;
      local_68 = param_2;
      if ((param_3 == (uint *)0x0) ||
         (puVar25 = (uint *)((int)local_5c + ((int)puVar21 - (int)local_5c)),
         !(puVar25[1] < param_3[1] || param_3[1] - puVar25[1] < (uint)(*puVar25 <= *param_3)))) {
        local_40 = *local_5c;
        local_3c = local_5c[1];
        local_38 = local_5c[2];
        uStack_34 = local_5c[3];
        uStack_30 = local_5c[4];
        uStack_2c = local_5c[5];
        puVar25 = (uint *)((int)local_5c + ((int)puVar21 - (int)local_5c));
        local_70 = param_3;
        FUN_01bed864(local_5c,puVar25,0x18);
        local_44 = puVar11 + 6;
        *puVar25 = local_40;
        puVar25[1] = local_3c;
        puVar25[2] = local_38;
        puVar25[3] = uStack_34;
        puVar25[4] = uStack_30;
        puVar25[5] = uStack_2c;
        local_40 = *local_44;
        local_3c = puVar11[7];
        local_38 = puVar11[8];
        uStack_34 = puVar11[9];
        uStack_30 = puVar11[10];
        uStack_2c = puVar11[0xb];
        local_48 = (uint *)*puVar11;
        local_4c = (uint *)puVar11[1];
        local_60 = puVar11 + (int)local_68 * 6;
        local_64 = (uint *)((int)local_68 * 0x18);
        puVar9 = (uint *)0x0;
        puVar11 = (uint *)0x0;
        puVar25 = local_44;
        puVar21 = (uint *)&DAT_00000018;
        do {
          puVar24 = puVar21;
          puVar15 = puVar11;
          local_50 = (uint *)puVar25[7];
          puVar21 = puVar25 + 6;
          local_58 = (uint *)*puVar21;
          puVar11 = local_44 + (int)puVar9 * 6;
          local_54 = puVar25;
          FUN_01bed864(puVar25,puVar11,0x18);
          uVar3 = puVar25[7];
          uVar12 = puVar25[8];
          uVar22 = puVar25[9];
          uVar13 = puVar25[10];
          uVar23 = puVar25[0xb];
          *puVar11 = *puVar21;
          puVar11[1] = uVar3;
          puVar11[2] = uVar12;
          puVar11[3] = uVar22;
          puVar11[4] = uVar13;
          puVar11[5] = uVar23;
          if (local_50 <= local_4c &&
              (uint)(local_48 <= local_58) <= (uint)((int)local_50 - (int)local_4c)) {
            puVar9 = (uint *)((int)puVar9 + 1);
          }
          puVar11 = puVar15 + 6;
          puVar25 = puVar21;
          puVar21 = puVar24 + 6;
        } while (local_54 + 0xc < local_60);
        local_58 = local_64 + -0xc;
        do {
          puVar11 = local_58;
          puVar21 = &local_40;
          puVar25 = local_44 + (int)puVar9 * 6;
          if (local_58 != puVar24) {
            puVar21 = (uint *)((undefined1 *)((int)local_5c + (int)puVar24) + 0x30);
          }
          local_54 = (uint *)*puVar21;
          local_50 = (uint *)puVar21[1];
          FUN_01bed864((undefined1 *)((int)local_5c + (int)puVar24) + 0x18,puVar25,0x18);
          puVar6 = local_5c;
          param_2 = local_68;
          uVar3 = puVar21[1];
          uVar12 = puVar21[2];
          uVar22 = puVar21[3];
          uVar13 = puVar21[4];
          uVar23 = puVar21[5];
          puVar24 = puVar24 + 6;
          puVar15 = puVar15 + 6;
          *puVar25 = *puVar21;
          puVar25[1] = uVar3;
          puVar25[2] = uVar12;
          puVar25[3] = uVar22;
          puVar25[4] = uVar13;
          puVar25[5] = uVar23;
          if (local_50 <= local_4c &&
              (uint)(local_48 <= local_54) <= (uint)((int)local_50 - (int)local_4c)) {
            puVar9 = (uint *)((int)puVar9 + 1);
          }
        } while (puVar11 != puVar15);
        if (local_68 <= puVar9) {
LAB_019a007c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x19a007c);
          (*pcVar1)();
        }
        local_40 = *local_5c;
        local_3c = local_5c[1];
        local_38 = local_5c[2];
        uStack_34 = local_5c[3];
        uStack_30 = local_5c[4];
        uStack_2c = local_5c[5];
        param_3 = local_5c + (int)puVar9 * 6;
        FUN_01bed864(local_5c,param_3,0x18);
        param_4 = local_6c;
        *param_3 = local_40;
        param_3[1] = local_3c;
        param_3[2] = local_38;
        param_3[3] = uStack_34;
        param_3[4] = uStack_30;
        param_3[5] = uStack_2c;
        FUN_0199fb5c(puVar6,puVar9,local_70,local_6c);
        param_2 = (uint *)((int)param_2 + ~(uint)puVar9);
        param_1 = param_3 + 6;
        if (param_2 <= &DAT_00000020) break;
        goto LAB_0199fbf4;
      }
      local_40 = *local_5c;
      local_3c = local_5c[1];
      local_38 = local_5c[2];
      uStack_34 = local_5c[3];
      uStack_30 = local_5c[4];
      uStack_2c = local_5c[5];
      FUN_01bed864(local_5c,puVar25,0x18);
      local_44 = puVar11 + 6;
      *puVar25 = local_40;
      puVar25[1] = local_3c;
      puVar25[2] = local_38;
      puVar25[3] = uStack_34;
      puVar25[4] = uStack_30;
      puVar25[5] = uStack_2c;
      local_40 = *local_44;
      local_3c = puVar11[7];
      local_38 = puVar11[8];
      uStack_34 = puVar11[9];
      uStack_30 = puVar11[10];
      uStack_2c = puVar11[0xb];
      puVar9 = (uint *)0x0;
      local_48 = (uint *)*puVar11;
      local_4c = (uint *)puVar11[1];
      local_64 = puVar11 + (int)local_68 * 6;
      local_70 = (uint *)((int)local_68 * 0x18);
      puVar11 = (uint *)&DAT_00000018;
      puVar25 = (uint *)0x0;
      puVar21 = local_44;
      do {
        puVar24 = puVar25;
        puVar15 = puVar11;
        local_50 = (uint *)puVar21[7];
        puVar6 = puVar21 + 6;
        local_58 = (uint *)*puVar6;
        local_60 = local_44 + (int)puVar9 * 6;
        local_54 = puVar21;
        FUN_01bed864(puVar21,local_60,0x18);
        uVar3 = puVar21[7];
        uVar12 = puVar21[8];
        uVar22 = puVar21[9];
        uVar13 = puVar21[10];
        uVar23 = puVar21[0xb];
        *local_60 = *puVar6;
        local_60[1] = uVar3;
        local_60[2] = uVar12;
        local_60[3] = uVar22;
        local_60[4] = uVar13;
        local_60[5] = uVar23;
        if (local_50 < local_4c ||
            (uint)((int)local_4c - (int)local_50) < (uint)(local_58 <= local_48)) {
          puVar9 = (uint *)((int)puVar9 + 1);
        }
        puVar11 = puVar15 + 6;
        puVar25 = puVar24 + 6;
        puVar21 = puVar6;
      } while (local_54 + 0xc < local_64);
      local_50 = local_70 + -0xc;
      do {
        puVar11 = &local_40;
        if (local_50 != puVar15) {
          puVar11 = (uint *)((int)local_5c + (int)puVar15 + 0x30);
        }
        puVar25 = local_44 + (int)puVar9 * 6;
        local_58 = (uint *)*puVar11;
        local_54 = (uint *)puVar11[1];
        FUN_01bed864((int)local_5c + (int)puVar15 + 0x18,puVar25,0x18);
        param_2 = local_68;
        puVar15 = puVar15 + 6;
        uVar3 = puVar11[1];
        uVar12 = puVar11[2];
        uVar22 = puVar11[3];
        uVar13 = puVar11[4];
        uVar23 = puVar11[5];
        puVar24 = puVar24 + 6;
        *puVar25 = *puVar11;
        puVar25[1] = uVar3;
        puVar25[2] = uVar12;
        puVar25[3] = uVar22;
        puVar25[4] = uVar13;
        puVar25[5] = uVar23;
        if (local_54 < local_4c ||
            (uint)((int)local_4c - (int)local_54) < (uint)(local_58 <= local_48)) {
          puVar9 = (uint *)((int)puVar9 + 1);
        }
      } while (local_50 != puVar24);
      if (local_68 <= puVar9) goto LAB_019a007c;
      local_40 = *local_5c;
      local_3c = local_5c[1];
      local_38 = local_5c[2];
      uStack_34 = local_5c[3];
      uStack_30 = local_5c[4];
      uStack_2c = local_5c[5];
      puVar11 = local_5c + (int)puVar9 * 6;
      FUN_01bed864(local_5c,puVar11,0x18);
      param_1 = puVar11 + 6;
      param_2 = (uint *)(~(uint)puVar9 + (int)param_2);
      *puVar11 = local_40;
      puVar11[1] = local_3c;
      puVar11[2] = local_38;
      puVar11[3] = uStack_34;
      puVar11[4] = uStack_30;
      puVar11[5] = uStack_2c;
      param_3 = (uint *)0x0;
      param_4 = local_6c;
    } while (&DAT_00000021 <= param_2);
  }
  local_4c0 = (uint)param_2 >> 1;
  if (local_4c0 != 0) {
    local_4c4 = param_1;
    local_4e4 = param_2;
    if (param_2 < &DAT_00000008) {
      local_4b8[0] = *param_1;
      local_4b8[1] = param_1[1];
      local_4b8[2] = param_1[2];
      local_4b8[3] = param_1[3];
      local_4b8[4] = param_1[4];
      local_4b8[5] = param_1[5];
      puVar11 = param_1 + local_4c0 * 6;
      uVar3 = puVar11[1];
      uVar12 = puVar11[2];
      uVar22 = puVar11[3];
      uVar13 = puVar11[4];
      uVar23 = puVar11[5];
      local_4b8[local_4c0 * 6] = *puVar11;
      local_4b8[local_4c0 * 6 + 1] = uVar3;
      local_4b8[local_4c0 * 6 + 2] = uVar12;
      local_4b8[local_4c0 * 6 + 3] = uVar22;
      local_4b8[local_4c0 * 6 + 4] = uVar13;
      local_4b8[local_4c0 * 6 + 5] = uVar23;
      uVar12 = 1;
      uVar3 = local_4c0;
      puVar11 = param_2;
    }
    else {
      uVar22 = param_1[1];
      uVar12 = param_1[7];
      bVar29 = uVar12 - uVar22 < (uint)(*param_1 <= param_1[6]);
      uVar3 = (uint)(uVar22 < uVar12 || bVar29);
      uVar12 = (uint)(uVar22 >= uVar12 && !bVar29);
      iVar17 = 0x48;
      iVar5 = 0x30;
      if (param_1[0x13] <= param_1[0xd] &&
          (uint)(param_1[0xc] <= param_1[0x12]) <= param_1[0x13] - param_1[0xd]) {
        iVar17 = 0x30;
        iVar5 = 0x48;
      }
      puVar15 = (uint *)((int)param_1 + iVar17);
      puVar9 = (uint *)((int)param_1 + iVar5);
      puVar25 = param_1 + (uVar12 | uVar12 << 1) * 2;
      puVar21 = param_1 + (uVar3 | uVar3 << 1) * 2;
      uVar12 = puVar9[1];
      uVar3 = puVar25[1];
      bVar29 = uVar12 - uVar3 < (uint)(*puVar25 <= *puVar9);
      puVar11 = puVar9;
      if (uVar3 >= uVar12 && !bVar29) {
        puVar11 = puVar21;
      }
      puVar6 = puVar21;
      puVar24 = puVar15;
      if (puVar15[1] <= puVar21[1] && (uint)(*puVar21 <= *puVar15) <= puVar15[1] - puVar21[1]) {
        puVar6 = puVar9;
        puVar24 = puVar21;
        puVar11 = puVar15;
      }
      bVar29 = (((byte)((uVar3 < uVar12 || bVar29) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0;
      if (bVar29) {
        puVar6 = puVar25;
      }
      if (bVar29) {
        puVar25 = puVar9;
      }
      local_4b8[0] = *puVar25;
      local_4b8[1] = puVar25[1];
      local_4b8[2] = puVar25[2];
      local_4b8[3] = puVar25[3];
      local_4b8[4] = puVar25[4];
      local_4b8[5] = puVar25[5];
      if (puVar6[1] < puVar11[1] || puVar11[1] - puVar6[1] < (uint)(*puVar6 <= *puVar11)) {
        puVar25 = puVar11;
      }
      else {
        puVar25 = puVar6;
        puVar6 = puVar11;
      }
      local_4b8[6] = *puVar6;
      local_4b8[7] = puVar6[1];
      local_4b8[8] = puVar6[2];
      local_4b8[9] = puVar6[3];
      local_4b8[10] = puVar6[4];
      local_4b8[0xb] = puVar6[5];
      local_4b8[0xc] = *puVar25;
      local_4b8[0xd] = puVar25[1];
      local_4b8[0xe] = puVar25[2];
      local_4b8[0xf] = puVar25[3];
      local_4b8[0x10] = puVar25[4];
      local_4b8[0x11] = puVar25[5];
      local_4b8[0x12] = *puVar24;
      local_4b8[0x13] = puVar24[1];
      local_4b8[0x14] = puVar24[2];
      local_4b8[0x15] = puVar24[3];
      local_4b8[0x16] = puVar24[4];
      local_4b8[0x17] = puVar24[5];
      puVar11 = param_1 + local_4c0 * 6;
      uVar13 = puVar11[7];
      uVar3 = puVar11[1];
      uVar23 = puVar11[0xd];
      bVar29 = uVar13 - uVar3 < (uint)(*puVar11 <= puVar11[6]);
      uVar22 = puVar11[0x13];
      uVar12 = (uint)(uVar3 < uVar13 || bVar29);
      uVar3 = (uint)(uVar3 >= uVar13 && !bVar29);
      bVar29 = (uint)(puVar11[0xc] <= puVar11[0x12]) <= uVar22 - uVar23;
      iVar5 = 0x48;
      iVar17 = 0x30;
      if (uVar22 <= uVar23 && bVar29) {
        iVar5 = 0x30;
      }
      puVar25 = (uint *)((int)puVar11 + iVar5);
      if (uVar22 <= uVar23 && bVar29) {
        iVar17 = 0x48;
      }
      puVar15 = (uint *)((int)puVar11 + iVar17);
      puVar9 = puVar11 + (uVar3 | uVar3 << 1) * 2;
      puVar11 = puVar11 + (uVar12 | uVar12 << 1) * 2;
      bVar29 = puVar15[1] <= puVar9[1];
      bVar2 = (uint)(*puVar9 <= *puVar15) <= puVar15[1] - puVar9[1];
      puVar21 = puVar15;
      if (bVar29 && bVar2) {
        puVar21 = puVar11;
      }
      puVar6 = puVar11;
      puVar24 = puVar25;
      if (puVar25[1] <= puVar11[1] && (uint)(*puVar11 <= *puVar25) <= puVar25[1] - puVar11[1]) {
        puVar6 = puVar15;
        puVar24 = puVar11;
        puVar21 = puVar25;
      }
      if (bVar29 && bVar2) {
        puVar6 = puVar9;
      }
      uVar3 = *puVar6;
      puVar18 = (undefined1 *)puVar6[1];
      if (bVar29 && bVar2) {
        puVar9 = puVar15;
      }
      local_4cc = (undefined1 *)puVar21[1];
      local_4d0 = *puVar21;
      uVar12 = puVar9[1];
      uVar22 = puVar9[2];
      uVar13 = puVar9[3];
      uVar23 = puVar9[4];
      uVar27 = puVar9[5];
      local_4b8[local_4c0 * 6] = *puVar9;
      local_4b8[local_4c0 * 6 + 1] = uVar12;
      local_4b8[local_4c0 * 6 + 2] = uVar22;
      local_4b8[local_4c0 * 6 + 3] = uVar13;
      local_4b8[local_4c0 * 6 + 4] = uVar23;
      local_4b8[local_4c0 * 6 + 5] = uVar27;
      if (puVar18 < local_4cc || (uint)((int)local_4cc - (int)puVar18) < (uint)(uVar3 <= local_4d0))
      {
        puVar11 = puVar21;
      }
      else {
        puVar11 = puVar6;
        puVar6 = puVar21;
      }
      uVar3 = puVar6[1];
      uVar12 = puVar6[2];
      uVar22 = puVar6[3];
      uVar13 = puVar6[4];
      uVar23 = puVar6[5];
      local_4b8[local_4c0 * 6 + 6] = *puVar6;
      local_4b8[local_4c0 * 6 + 7] = uVar3;
      local_4b8[local_4c0 * 6 + 8] = uVar12;
      local_4b8[local_4c0 * 6 + 9] = uVar22;
      local_4b8[local_4c0 * 6 + 10] = uVar13;
      local_4b8[local_4c0 * 6 + 0xb] = uVar23;
      uVar3 = puVar11[1];
      uVar12 = puVar11[2];
      uVar22 = puVar11[3];
      uVar13 = puVar11[4];
      uVar23 = puVar11[5];
      local_4b8[local_4c0 * 6 + 0xc] = *puVar11;
      local_4b8[local_4c0 * 6 + 0xd] = uVar3;
      local_4b8[local_4c0 * 6 + 0xe] = uVar12;
      local_4b8[local_4c0 * 6 + 0xf] = uVar22;
      local_4b8[local_4c0 * 6 + 0x10] = uVar13;
      local_4b8[local_4c0 * 6 + 0x11] = uVar23;
      uVar12 = 4;
      uVar3 = puVar24[1];
      uVar22 = puVar24[2];
      uVar13 = puVar24[3];
      uVar23 = puVar24[4];
      uVar27 = puVar24[5];
      local_4b8[local_4c0 * 6 + 0x12] = *puVar24;
      local_4b8[local_4c0 * 6 + 0x13] = uVar3;
      local_4b8[local_4c0 * 6 + 0x14] = uVar22;
      local_4b8[local_4c0 * 6 + 0x15] = uVar13;
      local_4b8[local_4c0 * 6 + 0x16] = uVar23;
      local_4b8[local_4c0 * 6 + 0x17] = uVar27;
      uVar3 = local_4c0;
      puVar11 = local_4e4;
    }
    local_4dc = (int)puVar11 - uVar3;
    local_4d4 = (uint *)(uVar12 * 3);
    uVar22 = uVar12;
    if (uVar12 < uVar3) {
      local_4c8 = uVar12;
      local_4bc = (uint *)(uVar12 * 0x18 + -0x30);
      local_4cc = (undefined1 *)(uVar12 * 0x18);
      uVar13 = uVar12;
      do {
        local_4d0 = uVar13;
        puVar11 = param_1 + uVar13 * 6;
        uVar3 = puVar11[1];
        uVar23 = puVar11[2];
        uVar27 = puVar11[3];
        uVar26 = puVar11[4];
        uVar28 = puVar11[5];
        local_4b8[uVar13 * 6] = *puVar11;
        local_4b8[uVar13 * 6 + 1] = uVar3;
        local_4b8[uVar13 * 6 + 2] = uVar23;
        local_4b8[uVar13 * 6 + 3] = uVar27;
        local_4b8[uVar13 * 6 + 4] = uVar26;
        local_4b8[uVar13 * 6 + 5] = uVar28;
        uVar3 = local_4b8[uVar13 * 6];
        uVar23 = local_4b8[uVar13 * 6 + 1];
        if (uVar23 <= local_4b8[uVar13 * 6 + -5] &&
            (uint)(local_4b8[uVar13 * 6 + -6] <= uVar3) <= uVar23 - local_4b8[uVar13 * 6 + -5]) {
          local_38 = puVar11[2];
          uStack_34 = puVar11[3];
          uStack_30 = puVar11[4];
          uStack_2c = puVar11[5];
          puVar11 = local_4bc;
          puVar18 = local_4cc;
          do {
            uVar10 = *(undefined4 *)((int)&local_4c8 + (int)puVar18);
            uVar14 = *(undefined4 *)((int)&local_4c4 + (int)puVar18);
            uVar16 = *(undefined4 *)((int)&local_4c0 + (int)puVar18);
            uVar19 = *(undefined4 *)((int)&local_4bc + (int)puVar18);
            *(undefined4 *)((int)local_4b8 + (int)puVar18) =
                 *(undefined4 *)((int)&local_4d0 + (int)puVar18);
            *(undefined4 *)((int)(local_4b8 + 1) + (int)puVar18) =
                 *(undefined4 *)((int)&local_4cc + (int)puVar18);
            *(undefined4 *)((int)(local_4b8 + 2) + (int)puVar18) = uVar10;
            *(undefined4 *)((int)(local_4b8 + 3) + (int)puVar18) = uVar14;
            *(undefined4 *)((int)(local_4b8 + 4) + (int)puVar18) = uVar16;
            *(undefined4 *)((int)(local_4b8 + 5) + (int)puVar18) = uVar19;
            if (puVar18 == &DAT_00000018) {
              puVar11 = local_4b8;
              goto LAB_019a03b0;
            }
            puVar25 = (uint *)((int)local_4b8 + (int)puVar11);
            puVar18 = puVar18 + -0x18;
            puVar21 = puVar11 + 1;
            puVar11 = puVar11 + -6;
          } while (uVar23 <= *(uint *)((int)local_4b8 + (int)puVar21) &&
                   (uint)(*puVar25 <= uVar3) <= uVar23 - *(uint *)((int)local_4b8 + (int)puVar21));
          puVar11 = (uint *)((int)local_4b8 + (int)puVar18);
LAB_019a03b0:
          *puVar11 = uVar3;
          puVar11[1] = uVar23;
          uVar23 = uStack_2c;
          uVar22 = uStack_30;
          uVar3 = uStack_34;
          puVar11[2] = local_38;
          puVar11[3] = uVar3;
          puVar11[4] = uVar22;
          puVar11[5] = uVar23;
          uVar22 = local_4c8;
        }
        local_4cc = local_4cc + 0x18;
        local_4bc = local_4bc + 6;
        uVar13 = uVar13 + 1;
        uVar3 = local_4c0;
      } while (uVar13 != local_4c0);
    }
    puVar11 = local_4b8 + uVar3 * 6;
    local_4d8 = puVar11;
    if (uVar22 < local_4dc) {
      local_4e0 = param_1 + uVar3 * 6;
      local_4cc = auStack_4e8 + uVar3 * 0x18;
      local_4d0 = 0x18;
      local_4d4 = puVar11;
      do {
        puVar21 = param_1 + uVar3 * 6 + uVar22 * 6;
        puVar25 = puVar11 + uVar22 * 6;
        uVar13 = puVar21[1];
        uVar23 = puVar21[2];
        uVar27 = puVar21[3];
        uVar26 = puVar21[4];
        uVar28 = puVar21[5];
        *puVar25 = *puVar21;
        puVar25[1] = uVar13;
        puVar25[2] = uVar23;
        puVar25[3] = uVar27;
        puVar25[4] = uVar26;
        puVar25[5] = uVar28;
        uVar13 = puVar11[uVar22 * 6];
        uVar23 = puVar25[1];
        if (uVar23 <= puVar25[-5] && (uint)(puVar25[-6] <= uVar13) <= uVar23 - puVar25[-5]) {
          uVar26 = puVar21[2];
          uVar28 = puVar21[3];
          uVar8 = puVar21[4];
          uVar20 = puVar21[5];
          local_38 = uVar26;
          uStack_34 = uVar28;
          uStack_30 = uVar8;
          uStack_2c = uVar20;
          puVar18 = local_4cc;
          uVar27 = local_4d0;
          puVar25 = local_4d4;
          do {
            puVar21 = puVar25 + uVar12 * 6;
            *puVar21 = puVar21[-6];
            puVar21[1] = puVar21[-5];
            puVar21[2] = puVar21[-4];
            puVar21[3] = puVar21[-3];
            puVar21[4] = puVar21[-2];
            puVar21[5] = puVar21[-1];
            if (uVar12 * 0x18 == uVar27) {
              puVar25 = puVar11;
              goto LAB_019a04dc;
            }
            puVar21 = (uint *)(puVar18 + uVar12 * 0x18);
            uVar27 = uVar27 + 0x18;
            uVar7 = puVar21[1];
            puVar25 = puVar25 + -6;
            puVar18 = puVar18 + -0x18;
          } while (uVar23 <= uVar7 && (uint)(*puVar21 <= uVar13) <= uVar23 - uVar7);
          puVar25 = puVar25 + uVar12 * 6;
LAB_019a04dc:
          *puVar25 = uVar13;
          puVar25[1] = uVar23;
          puVar25[2] = uVar26;
          puVar25[3] = uVar28;
          puVar25[4] = uVar8;
          puVar25[5] = uVar20;
        }
        uVar22 = uVar22 + 1;
        local_4d0 = local_4d0 - 0x18;
        local_4cc = local_4cc + 0x18;
        local_4d4 = local_4d4 + 6;
      } while (uVar22 != local_4dc);
    }
    puVar25 = local_4b8;
    iVar17 = 0;
    puVar21 = local_4b8 + uVar3 * 6 + -6;
    local_4c8 = (int)param_2 * 3;
    local_4bc = param_1 + (int)param_2 * 6 + -6;
    local_4bc = local_4b8 + (int)param_2 * 6 + -6;
    uVar3 = local_4c0;
    do {
      uVar22 = puVar25[1];
      uVar12 = puVar11[1];
      local_4c0 = uVar3;
      bVar29 = uVar12 - uVar22 < (uint)(*puVar25 <= *puVar11);
      if (uVar22 < uVar12 || bVar29) {
        puVar9 = puVar25;
        puVar25 = puVar25 + 6;
      }
      else {
        puVar9 = puVar11;
      }
      puVar15 = (uint *)((int)param_1 + iVar17);
      uVar13 = puVar9[1];
      uVar23 = puVar9[2];
      uVar27 = puVar9[3];
      uVar26 = puVar9[4];
      uVar28 = puVar9[5];
      if (uVar22 >= uVar12 && !bVar29) {
        puVar11 = puVar11 + 6;
      }
      *puVar15 = *puVar9;
      puVar15[1] = uVar13;
      puVar15[2] = uVar23;
      puVar15[3] = uVar27;
      puVar15[4] = uVar26;
      puVar15[5] = uVar28;
      bVar29 = puVar21[1] < local_4bc[1];
      bVar2 = local_4bc[1] - puVar21[1] < (uint)(*puVar21 <= *local_4bc);
      puVar9 = local_4bc;
      if (!bVar29 && !bVar2) {
        puVar9 = puVar21;
      }
      puVar15 = (uint *)((int)(param_1 + (int)param_2 * 6 + -6) - iVar17);
      uVar12 = puVar9[1];
      uVar22 = puVar9[2];
      uVar13 = puVar9[3];
      uVar23 = puVar9[4];
      uVar27 = puVar9[5];
      iVar17 = iVar17 + 0x18;
      *puVar15 = *puVar9;
      puVar15[1] = uVar12;
      puVar15[2] = uVar22;
      puVar15[3] = uVar13;
      puVar15[4] = uVar23;
      puVar15[5] = uVar27;
      iVar5 = 0;
      if (!bVar29 && !bVar2) {
        iVar5 = -1;
      }
      iVar4 = 0;
      if (bVar29 || bVar2) {
        iVar4 = -1;
      }
      puVar21 = puVar21 + iVar5 * 6;
      local_4bc = local_4bc + iVar4 * 6;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    puVar21 = puVar21 + 6;
    if (((uint)param_2 & 1) != 0) {
      param_1 = (uint *)((int)param_1 + iVar17);
      puVar15 = puVar25;
      puVar9 = puVar11;
      if (puVar25 < puVar21) {
        puVar15 = puVar25 + 6;
        puVar9 = puVar25;
      }
      uVar3 = puVar9[1];
      uVar12 = puVar9[2];
      uVar22 = puVar9[3];
      uVar13 = puVar9[4];
      uVar23 = puVar9[5];
      if (puVar25 >= puVar21) {
        puVar11 = puVar11 + 6;
      }
      *param_1 = *puVar9;
      param_1[1] = uVar3;
      param_1[2] = uVar12;
      param_1[3] = uVar22;
      param_1[4] = uVar13;
      param_1[5] = uVar23;
      puVar25 = puVar15;
    }
    param_1 = local_4bc;
    if (puVar25 == puVar21) {
      param_1 = local_4bc + 6;
    }
    if (puVar25 != puVar21 || puVar11 != param_1) {
      FUN_01307140();
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19a0714);
      (*pcVar1)();
    }
  }
  return param_1;
}

