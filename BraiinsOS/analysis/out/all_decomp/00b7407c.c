// FUN_00b7407c @ 00b7407c size=3248 calls_out=7 calls_in=2
// strings: 

void FUN_00b7407c(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  uint *local_64;
  uint *local_54;
  int local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_64 = param_6;
    local_54 = (uint *)param_2;
LAB_00b744ec:
    do {
      if (param_5 == 0) {
        FUN_00b739b0(param_1,local_54,param_3,param_4,1);
        return;
      }
      puVar7 = param_1 + ((uint)local_54 >> 3) * 0x20;
      puVar9 = param_1 + (((uint)local_54 >> 3) * 8 - ((uint)local_54 >> 3)) * 8;
      if (local_54 < 0x40) {
        uVar15 = *puVar7;
        uVar14 = *param_1;
        uVar11 = *puVar9;
        bVar21 = uVar15 <= uVar14;
        if (uVar14 == uVar15) {
          bVar21 = puVar7[1] <= param_1[1];
        }
        bVar20 = uVar11 <= uVar14;
        if (uVar14 == uVar11) {
          bVar20 = puVar9[1] <= param_1[1];
        }
        puVar6 = param_1;
        if (!bVar21 == !bVar20) {
          bVar20 = uVar11 <= uVar15;
          if (uVar15 == uVar11) {
            bVar20 = puVar9[1] <= puVar7[1];
          }
          puVar6 = puVar7;
          if (!bVar21 != !bVar20) {
            puVar6 = puVar9;
          }
        }
      }
      else {
        puVar6 = (uint *)FUN_00b74d54(param_1);
      }
      local_48 = *puVar6;
      uStack_44 = puVar6[1];
      uStack_40 = puVar6[2];
      uStack_3c = puVar6[3];
      param_5 = param_5 + -1;
      local_38 = puVar6[4];
      uStack_34 = puVar6[5];
      uStack_30 = puVar6[6];
      uStack_2c = puVar6[7];
      puVar7 = (uint *)((uint)((int)puVar6 - (int)param_1) >> 5);
      if (local_64 == (uint *)0x0) {
LAB_00b7461c:
        if (param_4 < local_54) goto LAB_00b74d14;
        puVar9 = param_3 + (int)local_54 * 8;
        param_2 = 0;
        puVar10 = param_1;
        puVar5 = puVar7;
        while( true ) {
          for (puVar13 = puVar10; puVar13 < param_1 + (int)puVar5 * 8; puVar13 = puVar13 + 8) {
            puVar9 = puVar9 + -8;
            bVar21 = *puVar6 <= *puVar13;
            if (*puVar13 == *puVar6) {
              bVar21 = puVar6[1] <= puVar13[1];
            }
            uVar15 = puVar13[1];
            uVar14 = puVar13[2];
            uVar11 = puVar13[3];
            puVar10 = puVar9;
            if (!bVar21 != 0) {
              puVar10 = param_3;
            }
            puVar10 = puVar10 + param_2 * 8;
            param_2 = param_2 + !bVar21;
            *puVar10 = *puVar13;
            puVar10[1] = uVar15;
            puVar10[2] = uVar14;
            puVar10[3] = uVar11;
            uVar15 = puVar13[5];
            uVar14 = puVar13[6];
            uVar11 = puVar13[7];
            puVar10[4] = puVar13[4];
            puVar10[5] = uVar15;
            puVar10[6] = uVar14;
            puVar10[7] = uVar11;
          }
          if (puVar5 == local_54) break;
          puVar9 = puVar9 + -8;
          uVar15 = puVar13[1];
          uVar14 = puVar13[2];
          uVar11 = puVar13[3];
          puVar5 = puVar9 + param_2 * 8;
          puVar10 = puVar13 + 8;
          *puVar5 = *puVar13;
          puVar5[1] = uVar15;
          puVar5[2] = uVar14;
          puVar5[3] = uVar11;
          uVar15 = puVar13[5];
          uVar14 = puVar13[6];
          uVar11 = puVar13[7];
          puVar5[4] = puVar13[4];
          puVar5[5] = uVar15;
          puVar5[6] = uVar14;
          puVar5[7] = uVar11;
          puVar5 = local_54;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 5);
        iVar16 = (int)local_54 - param_2;
        if (iVar16 != 0) {
          puVar9 = param_1 + param_2 * 8;
          iVar19 = iVar16;
          puVar10 = param_3 + (int)local_54 * 8 + -8;
          do {
            uVar15 = puVar10[1];
            uVar14 = puVar10[2];
            uVar11 = puVar10[3];
            iVar19 = iVar19 + -1;
            *puVar9 = *puVar10;
            puVar9[1] = uVar15;
            puVar9[2] = uVar14;
            puVar9[3] = uVar11;
            uVar15 = puVar10[5];
            uVar14 = puVar10[6];
            uVar11 = puVar10[7];
            puVar9[4] = puVar10[4];
            puVar9[5] = uVar15;
            puVar9[6] = uVar14;
            puVar9[7] = uVar11;
            puVar9 = puVar9 + 8;
            puVar10 = puVar10 + -8;
          } while (iVar19 != 0);
        }
        if (param_2 != 0) {
          if (local_54 < param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
          }
          FUN_00b7407c(param_1 + param_2 * 8,iVar16,param_3,param_4,param_5,&local_48);
          local_54 = (uint *)param_2;
          if (param_2 < 0x21) break;
          goto LAB_00b744ec;
        }
      }
      else {
        bVar21 = *puVar6 <= *local_64;
        if (*local_64 == *puVar6) {
          bVar21 = puVar6[1] <= local_64[1];
        }
        if (!bVar21) goto LAB_00b7461c;
      }
      if (param_4 < local_54) goto LAB_00b74d14;
      puVar9 = param_3 + (int)local_54 * 8;
      uVar15 = 0;
      puVar10 = param_1;
      while( true ) {
        for (puVar5 = puVar10; puVar5 < param_1 + (int)puVar7 * 8; puVar5 = puVar5 + 8) {
          puVar9 = puVar9 + -8;
          bVar21 = *puVar6 < *puVar5;
          if (*puVar6 == *puVar5) {
            bVar21 = puVar6[1] < puVar5[1];
          }
          uVar14 = puVar5[1];
          uVar11 = puVar5[2];
          uVar4 = puVar5[3];
          puVar10 = puVar9;
          if (!bVar21 != 0) {
            puVar10 = param_3;
          }
          puVar10 = puVar10 + uVar15 * 8;
          *puVar10 = *puVar5;
          puVar10[1] = uVar14;
          puVar10[2] = uVar11;
          puVar10[3] = uVar4;
          uVar15 = uVar15 + !bVar21;
          uVar14 = puVar5[5];
          uVar11 = puVar5[6];
          uVar4 = puVar5[7];
          puVar10[4] = puVar5[4];
          puVar10[5] = uVar14;
          puVar10[6] = uVar11;
          puVar10[7] = uVar4;
        }
        if (puVar7 == local_54) break;
        uVar14 = puVar5[1];
        uVar11 = puVar5[2];
        uVar4 = puVar5[3];
        puVar10 = puVar5 + 8;
        puVar7 = param_3 + uVar15 * 8;
        uVar15 = uVar15 + 1;
        *puVar7 = *puVar5;
        puVar7[1] = uVar14;
        puVar7[2] = uVar11;
        puVar7[3] = uVar4;
        puVar9 = puVar9 + -8;
        uVar14 = puVar5[5];
        uVar11 = puVar5[6];
        uVar4 = puVar5[7];
        puVar7[4] = puVar5[4];
        puVar7[5] = uVar14;
        puVar7[6] = uVar11;
        puVar7[7] = uVar4;
        puVar7 = local_54;
      }
      FUN_016dd1aa(param_1,param_3,uVar15 << 5);
      param_2 = (int)local_54 - uVar15;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar15 * 8;
      puVar7 = param_1;
      puVar9 = param_3 + (int)local_54 * 8 + -8;
      uVar14 = param_2;
      do {
        uVar11 = puVar9[1];
        uVar4 = puVar9[2];
        uVar3 = puVar9[3];
        uVar14 = uVar14 - 1;
        *puVar7 = *puVar9;
        puVar7[1] = uVar11;
        puVar7[2] = uVar4;
        puVar7[3] = uVar3;
        uVar11 = puVar9[5];
        uVar4 = puVar9[6];
        uVar3 = puVar9[7];
        puVar7[4] = puVar9[4];
        puVar7[5] = uVar11;
        puVar7[6] = uVar4;
        puVar7[7] = uVar3;
        puVar7 = puVar7 + 8;
        puVar9 = puVar9 + -8;
      } while (uVar14 != 0);
      if (local_54 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar15,local_54,local_54,&DAT_018af348);
      }
      local_64 = (uint *)0x0;
      local_54 = (uint *)param_2;
    } while (0x20 < param_2);
  }
  uVar15 = param_2 >> 1;
  if (uVar15 != 0) {
    if (param_2 < 8) {
      uVar14 = param_1[1];
      uVar11 = param_1[2];
      uVar4 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar14;
      param_3[2] = uVar11;
      param_3[3] = uVar4;
      uVar14 = param_1[5];
      uVar11 = param_1[6];
      uVar4 = param_1[7];
      puVar7 = param_1 + uVar15 * 8;
      param_3[4] = param_1[4];
      param_3[5] = uVar14;
      param_3[6] = uVar11;
      param_3[7] = uVar4;
      puVar9 = param_3 + uVar15 * 8;
      uVar14 = puVar7[1];
      uVar11 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar9 = *puVar7;
      puVar9[1] = uVar14;
      puVar9[2] = uVar11;
      puVar9[3] = uVar4;
      uVar11 = puVar7[5];
      uVar4 = puVar7[6];
      uVar3 = puVar7[7];
      uVar14 = 1;
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar11;
      puVar9[6] = uVar4;
      puVar9[7] = uVar3;
    }
    else {
      bVar21 = param_1[0x10] <= param_1[0x18];
      if (param_1[0x18] == param_1[0x10]) {
        bVar21 = param_1[0x11] <= param_1[0x19];
      }
      bVar20 = *param_1 <= param_1[8];
      if (param_1[8] == *param_1) {
        bVar20 = param_1[1] <= param_1[9];
      }
      uVar4 = (uint)!bVar20;
      uVar14 = 3;
      uVar11 = 2;
      if (!bVar21) {
        uVar14 = 2;
        uVar11 = 3;
      }
      puVar9 = param_1 + uVar14 * 8;
      puVar6 = param_1 + uVar11 * 8;
      uVar3 = uVar4 ^ 1;
      puVar10 = param_1 + uVar4 * 8;
      puVar7 = param_1 + uVar3 * 8;
      bVar21 = *puVar10 <= *puVar6;
      if (*puVar6 == *puVar10) {
        bVar21 = puVar10[1] <= puVar6[1];
      }
      puVar5 = puVar6;
      uVar12 = uVar11;
      if (!bVar21) {
        puVar5 = puVar7;
        uVar12 = uVar3;
      }
      bVar20 = *puVar7 <= *puVar9;
      if (*puVar9 == *puVar7) {
        bVar20 = puVar7[1] <= puVar9[1];
      }
      puVar13 = puVar6;
      if (bVar20) {
        uVar11 = uVar3;
        puVar13 = puVar7;
        puVar7 = puVar9;
        uVar14 = uVar12;
        puVar9 = puVar5;
      }
      if (!bVar21) {
        puVar13 = puVar10;
        uVar11 = uVar4;
      }
      uVar11 = param_1[uVar11 * 8];
      if (bVar21) {
        puVar6 = puVar10;
      }
      uVar14 = param_1[uVar14 * 8];
      uVar4 = puVar13[1];
      uVar3 = puVar9[1];
      uVar12 = puVar6[1];
      uVar17 = puVar6[2];
      uVar18 = puVar6[3];
      *param_3 = *puVar6;
      param_3[1] = uVar12;
      param_3[2] = uVar17;
      param_3[3] = uVar18;
      uVar12 = puVar6[5];
      uVar17 = puVar6[6];
      uVar18 = puVar6[7];
      param_3[4] = puVar6[4];
      param_3[5] = uVar12;
      param_3[6] = uVar17;
      param_3[7] = uVar18;
      bVar21 = uVar11 <= uVar14;
      if (uVar14 == uVar11) {
        bVar21 = uVar4 <= uVar3;
      }
      if (bVar21) {
        puVar6 = puVar9;
      }
      else {
        puVar6 = puVar13;
        puVar13 = puVar9;
      }
      uVar14 = puVar13[1];
      uVar11 = puVar13[2];
      uVar4 = puVar13[3];
      param_3[8] = *puVar13;
      param_3[9] = uVar14;
      param_3[10] = uVar11;
      param_3[0xb] = uVar4;
      uVar14 = puVar13[5];
      uVar11 = puVar13[6];
      uVar4 = puVar13[7];
      param_3[0xc] = puVar13[4];
      param_3[0xd] = uVar14;
      param_3[0xe] = uVar11;
      param_3[0xf] = uVar4;
      uVar14 = puVar6[1];
      uVar11 = puVar6[2];
      uVar4 = puVar6[3];
      param_3[0x10] = *puVar6;
      param_3[0x11] = uVar14;
      param_3[0x12] = uVar11;
      param_3[0x13] = uVar4;
      uVar14 = puVar6[5];
      uVar11 = puVar6[6];
      uVar4 = puVar6[7];
      param_3[0x14] = puVar6[4];
      param_3[0x15] = uVar14;
      param_3[0x16] = uVar11;
      param_3[0x17] = uVar4;
      uVar14 = puVar7[1];
      uVar11 = puVar7[2];
      uVar4 = puVar7[3];
      param_3[0x18] = *puVar7;
      param_3[0x19] = uVar14;
      param_3[0x1a] = uVar11;
      param_3[0x1b] = uVar4;
      uVar14 = puVar7[5];
      uVar11 = puVar7[6];
      uVar4 = puVar7[7];
      param_3[0x1c] = puVar7[4];
      param_3[0x1d] = uVar14;
      param_3[0x1e] = uVar11;
      param_3[0x1f] = uVar4;
      puVar7 = param_1 + uVar15 * 8;
      bVar21 = puVar7[0x10] <= puVar7[0x18];
      if (puVar7[0x18] == puVar7[0x10]) {
        bVar21 = puVar7[0x11] <= puVar7[0x19];
      }
      bVar20 = *puVar7 <= puVar7[8];
      if (puVar7[8] == *puVar7) {
        bVar20 = puVar7[1] <= puVar7[9];
      }
      uVar11 = (uint)!bVar20;
      puVar9 = puVar7 + uVar11 * 8;
      uVar14 = 2;
      if (!bVar21) {
        uVar14 = 3;
      }
      uVar4 = 3;
      if (!bVar21) {
        uVar4 = 2;
      }
      uVar3 = uVar11 ^ 1;
      puVar10 = puVar7 + uVar4 * 8;
      puVar5 = puVar7 + uVar14 * 8;
      puVar6 = puVar7 + uVar3 * 8;
      bVar21 = *puVar9 <= *puVar5;
      if (*puVar5 == *puVar9) {
        bVar21 = puVar9[1] <= puVar5[1];
      }
      puVar13 = puVar5;
      uVar12 = uVar14;
      if (!bVar21) {
        puVar13 = puVar6;
        uVar12 = uVar3;
      }
      bVar20 = *puVar6 <= *puVar10;
      if (*puVar10 == *puVar6) {
        bVar20 = puVar6[1] <= puVar10[1];
      }
      puVar2 = puVar5;
      if (bVar20) {
        uVar14 = uVar3;
        puVar2 = puVar6;
        puVar6 = puVar10;
        puVar10 = puVar13;
        uVar4 = uVar12;
      }
      if (!bVar21) {
        uVar14 = uVar11;
      }
      uVar14 = puVar7[uVar14 * 8];
      uVar11 = puVar7[uVar4 * 8];
      if (bVar21) {
        puVar5 = puVar9;
      }
      else {
        puVar2 = puVar9;
      }
      uVar4 = puVar2[1];
      uVar3 = puVar10[1];
      uVar12 = puVar5[1];
      uVar17 = puVar5[2];
      uVar18 = puVar5[3];
      puVar7 = param_3 + uVar15 * 8;
      *puVar7 = *puVar5;
      puVar7[1] = uVar12;
      puVar7[2] = uVar17;
      puVar7[3] = uVar18;
      uVar12 = puVar5[5];
      uVar17 = puVar5[6];
      uVar18 = puVar5[7];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar12;
      puVar7[6] = uVar17;
      puVar7[7] = uVar18;
      bVar21 = uVar14 <= uVar11;
      if (uVar11 == uVar14) {
        bVar21 = uVar4 <= uVar3;
      }
      if (bVar21) {
        puVar9 = puVar10;
      }
      else {
        puVar9 = puVar2;
        puVar2 = puVar10;
      }
      uVar14 = puVar2[1];
      uVar11 = puVar2[2];
      uVar4 = puVar2[3];
      puVar7[8] = *puVar2;
      puVar7[9] = uVar14;
      puVar7[10] = uVar11;
      puVar7[0xb] = uVar4;
      uVar14 = puVar2[5];
      uVar11 = puVar2[6];
      uVar4 = puVar2[7];
      puVar7[0xc] = puVar2[4];
      puVar7[0xd] = uVar14;
      puVar7[0xe] = uVar11;
      puVar7[0xf] = uVar4;
      uVar14 = puVar9[1];
      uVar11 = puVar9[2];
      uVar4 = puVar9[3];
      puVar7[0x10] = *puVar9;
      puVar7[0x11] = uVar14;
      puVar7[0x12] = uVar11;
      puVar7[0x13] = uVar4;
      uVar14 = puVar9[5];
      uVar11 = puVar9[6];
      uVar4 = puVar9[7];
      puVar7[0x14] = puVar9[4];
      puVar7[0x15] = uVar14;
      puVar7[0x16] = uVar11;
      puVar7[0x17] = uVar4;
      uVar14 = puVar6[1];
      uVar11 = puVar6[2];
      uVar4 = puVar6[3];
      puVar7[0x18] = *puVar6;
      puVar7[0x19] = uVar14;
      puVar7[0x1a] = uVar11;
      puVar7[0x1b] = uVar4;
      uVar14 = puVar6[5];
      uVar11 = puVar6[6];
      uVar4 = puVar6[7];
      puVar7[0x1c] = puVar6[4];
      puVar7[0x1d] = uVar14;
      puVar7[0x1e] = uVar11;
      puVar7[0x1f] = uVar4;
      uVar14 = 4;
    }
    if (uVar14 < uVar15) {
      iVar16 = uVar14 << 5;
      uVar11 = uVar14;
      do {
        puVar9 = param_1 + uVar11 * 8;
        puVar7 = param_3 + uVar11 * 8;
        uVar4 = puVar9[1];
        uVar3 = puVar9[2];
        uVar12 = puVar9[3];
        *puVar7 = *puVar9;
        puVar7[1] = uVar4;
        puVar7[2] = uVar3;
        puVar7[3] = uVar12;
        uVar4 = puVar9[5];
        uVar3 = puVar9[6];
        uVar12 = puVar9[7];
        puVar7[4] = puVar9[4];
        puVar7[5] = uVar4;
        puVar7[6] = uVar3;
        puVar7[7] = uVar12;
        uVar3 = puVar7[1];
        uVar4 = param_3[uVar11 * 8];
        bVar21 = puVar7[-8] <= uVar4;
        if (uVar4 == puVar7[-8]) {
          bVar21 = puVar7[-7] <= uVar3;
        }
        if (!bVar21) {
          local_48 = puVar9[2];
          uStack_44 = puVar9[3];
          uStack_40 = puVar9[4];
          uStack_3c = puVar9[5];
          local_38 = puVar9[6];
          uStack_34 = puVar9[7];
          iVar19 = iVar16;
          do {
            puVar8 = (undefined4 *)((int)param_3 + iVar19);
            *puVar8 = puVar8[-8];
            puVar8[1] = puVar8[-7];
            puVar8[2] = puVar8[-6];
            puVar8[3] = puVar8[-5];
            puVar8[4] = puVar8[-4];
            puVar8[5] = puVar8[-3];
            puVar8[6] = puVar8[-2];
            puVar8[7] = puVar8[-1];
            if (iVar19 == 0x20) {
              puVar7 = param_3;
              goto LAB_00b74968;
            }
            iVar19 = iVar19 + -0x20;
            bVar21 = (uint)puVar8[-0x10] <= uVar4;
            if (uVar4 == puVar8[-0x10]) {
              bVar21 = (uint)puVar8[-0xf] <= uVar3;
            }
          } while (!bVar21);
          puVar7 = (uint *)((int)param_3 + iVar19);
LAB_00b74968:
          *puVar7 = uVar4;
          puVar7[1] = uVar3;
          puVar7[2] = local_48;
          puVar7[3] = uStack_44;
          puVar7[4] = uStack_40;
          puVar7[5] = uStack_3c;
          puVar7[6] = local_38;
          puVar7[7] = uStack_34;
        }
        uVar11 = uVar11 + 1;
        iVar16 = iVar16 + 0x20;
      } while (uVar11 != uVar15);
    }
    puVar7 = param_3 + uVar15 * 8;
    if (uVar14 < param_2 - uVar15) {
      local_4c = 0x20;
      uVar11 = uVar14;
      local_54 = puVar7;
      do {
        puVar6 = puVar7 + uVar11 * 8;
        puVar9 = param_1 + uVar15 * 8 + uVar11 * 8;
        uVar4 = puVar9[1];
        uVar3 = puVar9[2];
        uVar12 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar4;
        puVar6[2] = uVar3;
        puVar6[3] = uVar12;
        uVar4 = puVar9[5];
        uVar3 = puVar9[6];
        uVar12 = puVar9[7];
        puVar6[4] = puVar9[4];
        puVar6[5] = uVar4;
        puVar6[6] = uVar3;
        puVar6[7] = uVar12;
        uVar3 = puVar6[1];
        uVar4 = puVar7[uVar11 * 8];
        bVar21 = puVar6[-8] <= uVar4;
        if (uVar4 == puVar6[-8]) {
          bVar21 = puVar6[-7] <= uVar3;
        }
        if (!bVar21) {
          local_48 = puVar9[2];
          uStack_44 = puVar9[3];
          uStack_40 = puVar9[4];
          uStack_3c = puVar9[5];
          local_38 = puVar9[6];
          uStack_34 = puVar9[7];
          puVar9 = local_54;
          iVar16 = local_4c;
          do {
            puVar6 = puVar9 + uVar14 * 8;
            *puVar6 = puVar6[-8];
            puVar6[1] = puVar6[-7];
            puVar6[2] = puVar6[-6];
            puVar6[3] = puVar6[-5];
            puVar6[4] = puVar6[-4];
            puVar6[5] = puVar6[-3];
            puVar6[6] = puVar6[-2];
            puVar6[7] = puVar6[-1];
            if (uVar14 * 0x20 == iVar16) {
              puVar9 = puVar7;
              goto LAB_00b74a94;
            }
            iVar16 = iVar16 + 0x20;
            puVar9 = puVar9 + -8;
            bVar21 = puVar6[-0x10] <= uVar4;
            if (uVar4 == puVar6[-0x10]) {
              bVar21 = puVar6[-0xf] <= uVar3;
            }
          } while (!bVar21);
          puVar9 = puVar9 + uVar14 * 8;
LAB_00b74a94:
          *puVar9 = uVar4;
          puVar9[1] = uVar3;
          puVar9[2] = local_48;
          puVar9[3] = uStack_44;
          puVar9[4] = uStack_40;
          puVar9[5] = uStack_3c;
          puVar9[6] = local_38;
          puVar9[7] = uStack_34;
        }
        uVar11 = uVar11 + 1;
        local_4c = local_4c + -0x20;
        local_54 = local_54 + 8;
      } while (uVar11 != param_2 - uVar15);
    }
    puVar6 = puVar7 + -8;
    iVar16 = 0;
    puVar9 = param_3 + param_2 * 8;
    do {
      puVar10 = puVar9 + -8;
      bVar21 = *param_3 <= *puVar7;
      if (*puVar7 == *param_3) {
        bVar21 = param_3[1] <= puVar7[1];
      }
      uVar14 = (uint)!bVar21;
      puVar13 = (uint *)((int)param_1 + iVar16);
      puVar5 = param_3;
      if (uVar14 != 0) {
        puVar5 = puVar7;
      }
      uVar11 = puVar5[1];
      uVar4 = puVar5[2];
      uVar3 = puVar5[3];
      *puVar13 = *puVar5;
      puVar13[1] = uVar11;
      puVar13[2] = uVar4;
      puVar13[3] = uVar3;
      uVar11 = puVar5[5];
      uVar4 = puVar5[6];
      uVar3 = puVar5[7];
      puVar13[4] = puVar5[4];
      puVar13[5] = uVar11;
      puVar13[6] = uVar4;
      puVar13[7] = uVar3;
      bVar21 = *puVar6 <= *puVar10;
      if (*puVar10 == *puVar6) {
        bVar21 = puVar6[1] <= puVar9[-7];
      }
      uVar11 = (uint)!bVar21;
      puVar5 = puVar10;
      if (uVar11 != 0) {
        puVar5 = puVar6;
      }
      uVar4 = puVar5[1];
      uVar3 = puVar5[2];
      uVar12 = puVar5[3];
      puVar6 = puVar6 + uVar11 * -8;
      puVar13 = (uint *)((int)param_1 + ((param_2 * 0x20 + -0x20) - iVar16));
      puVar9 = puVar10 + uVar11 * 8;
      *puVar13 = *puVar5;
      puVar13[1] = uVar4;
      puVar13[2] = uVar3;
      puVar13[3] = uVar12;
      iVar16 = iVar16 + 0x20;
      uVar11 = puVar5[5];
      uVar4 = puVar5[6];
      uVar3 = puVar5[7];
      uVar15 = uVar15 - 1;
      puVar13[4] = puVar5[4];
      puVar13[5] = uVar11;
      puVar13[6] = uVar4;
      puVar13[7] = uVar3;
      param_3 = param_3 + (uVar14 ^ 1) * 8;
      puVar7 = puVar7 + uVar14 * 8;
    } while (uVar15 != 0);
    puVar6 = puVar6 + 8;
    puVar10 = puVar9;
    if ((param_2 & 1) != 0) {
      bVar21 = puVar6 <= param_3;
      puVar10 = puVar7;
      if (!bVar21) {
        puVar10 = param_3;
      }
      uVar15 = puVar10[1];
      uVar14 = puVar10[2];
      uVar11 = puVar10[3];
      param_1 = (uint *)((int)param_1 + iVar16);
      *param_1 = *puVar10;
      param_1[1] = uVar15;
      param_1[2] = uVar14;
      param_1[3] = uVar11;
      uVar15 = puVar10[5];
      uVar14 = puVar10[6];
      uVar11 = puVar10[7];
      param_1[4] = puVar10[4];
      param_1[5] = uVar15;
      param_1[6] = uVar14;
      param_1[7] = uVar11;
      puVar10 = (uint *)(uint)!bVar21;
      puVar7 = puVar7 + (uint)bVar21 * 8;
      param_3 = param_3 + (int)puVar10 * 8;
    }
    if (param_3 == puVar6) {
      puVar10 = puVar9;
    }
    if (param_3 != puVar6 || puVar7 != puVar10) {
      FUN_00fb7254();
LAB_00b74d14:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb74d14);
      (*pcVar1)();
    }
  }
  return;
}

