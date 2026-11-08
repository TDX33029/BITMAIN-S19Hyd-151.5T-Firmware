// FUN_00b9114c @ 00b9114c size=2892 calls_out=7 calls_in=2
// strings: 

void FUN_00b9114c(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  bool bVar21;
  bool bVar22;
  uint *local_78;
  uint *local_6c;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_78 = param_6;
    do {
      uVar6 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00b90a6c(param_1,uVar6,param_3,param_4,1);
          return;
        }
        puVar18 = param_1 + (uVar6 >> 3) * 0x62;
        puVar10 = param_1 + ((uVar6 >> 3) * 8 - (uVar6 >> 3)) * 8;
        if (uVar6 < 0x40) {
          uVar2 = *puVar10;
          uVar3 = *param_1;
          puVar5 = puVar18;
          if (uVar3 < uVar2 == uVar2 < *puVar18) {
            puVar5 = puVar10;
          }
          if (uVar3 < uVar2 != uVar3 < *puVar18) {
            puVar5 = param_1;
          }
        }
        else {
          puVar5 = (uint *)FUN_00b91cc4(param_1,puVar10,puVar18);
        }
        param_5 = param_5 + -1;
        uVar2 = (uint)((int)puVar5 - (int)param_1) >> 3;
        uVar3 = uVar2 * -0x49249249;
        local_60 = *puVar5;
        uStack_5c = puVar5[1];
        uStack_58 = puVar5[2];
        uStack_54 = puVar5[3];
        local_50 = puVar5[4];
        uStack_4c = puVar5[5];
        uStack_48 = puVar5[6];
        uStack_44 = puVar5[7];
        local_40 = puVar5[8];
        local_3c = puVar5[9];
        uStack_38 = puVar5[10];
        uStack_34 = puVar5[0xb];
        uStack_30 = puVar5[0xc];
        uStack_2c = puVar5[0xd];
        if ((local_78 != (uint *)0x0) && (*puVar5 <= *local_78)) break;
        if (param_4 < uVar6) goto LAB_00b91c80;
        puVar7 = param_3 + uVar6 * 0xe;
        puVar20 = param_1 + uVar2 * 2;
        puVar10 = param_1;
        puVar18 = param_1;
        param_2 = 0;
        uVar11 = uVar3;
        if (puVar20 <= param_1) goto LAB_00b91590;
LAB_00b91544:
        do {
          puVar18 = puVar10 + 0xe;
          puVar7 = puVar7 + -0xe;
          uVar12 = param_2;
          puVar9 = puVar7;
          if (*puVar10 < *puVar5) {
            uVar12 = param_2 + 1;
            puVar9 = param_3;
          }
          puVar9 = puVar9 + param_2 * 0xe;
          uVar17 = puVar10[1];
          uVar13 = puVar10[2];
          uVar15 = puVar10[3];
          *puVar9 = *puVar10;
          puVar9[1] = uVar17;
          puVar9[2] = uVar13;
          puVar9[3] = uVar15;
          uVar17 = puVar10[5];
          uVar13 = puVar10[6];
          uVar15 = puVar10[7];
          uVar16 = puVar10[8];
          puVar9[4] = puVar10[4];
          puVar9[5] = uVar17;
          puVar9[6] = uVar13;
          puVar9[7] = uVar15;
          puVar9[8] = uVar16;
          uVar17 = puVar10[10];
          uVar13 = puVar10[0xb];
          uVar15 = puVar10[0xc];
          uVar16 = puVar10[0xd];
          puVar9[9] = puVar10[9];
          puVar9[10] = uVar17;
          puVar9[0xb] = uVar13;
          puVar9[0xc] = uVar15;
          puVar9[0xd] = uVar16;
          puVar10 = puVar18;
          param_2 = uVar12;
        } while (puVar18 < puVar20);
LAB_00b91590:
        if (uVar11 != uVar6) goto code_r0x00b915a4;
        FUN_016dd1aa(param_1,param_3,param_2 * 0x38);
        iVar8 = uVar6 - param_2;
        if (iVar8 != 0) {
          puVar10 = param_1 + param_2 * 0xe;
          iVar14 = iVar8;
          puVar18 = param_3 + uVar6 * 0xe + -0xe;
          do {
            uVar11 = puVar18[1];
            uVar12 = puVar18[2];
            uVar17 = puVar18[3];
            iVar14 = iVar14 + -1;
            *puVar10 = *puVar18;
            puVar10[1] = uVar11;
            puVar10[2] = uVar12;
            puVar10[3] = uVar17;
            uVar11 = puVar18[5];
            uVar12 = puVar18[6];
            uVar17 = puVar18[7];
            uVar13 = puVar18[8];
            puVar10[4] = puVar18[4];
            puVar10[5] = uVar11;
            puVar10[6] = uVar12;
            puVar10[7] = uVar17;
            puVar10[8] = uVar13;
            uVar11 = puVar18[10];
            uVar12 = puVar18[0xb];
            uVar17 = puVar18[0xc];
            uVar13 = puVar18[0xd];
            puVar10[9] = puVar18[9];
            puVar10[10] = uVar11;
            puVar10[0xb] = uVar12;
            puVar10[0xc] = uVar17;
            puVar10[0xd] = uVar13;
            puVar10 = puVar10 + 0xe;
            puVar18 = puVar18 + -0xe;
          } while (iVar14 != 0);
        }
        if (param_2 == 0) break;
        if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b9114c(param_1 + param_2 * 0xe,iVar8,param_3,param_4,param_5,&local_60);
        uVar6 = param_2;
        if (param_2 < 0x21) goto LAB_00b91170;
      }
      if (param_4 < uVar6) goto LAB_00b91c80;
      puVar20 = param_3 + uVar6 * 0xe;
      puVar7 = param_1 + uVar2 * 2;
      puVar10 = param_1;
      puVar18 = param_1;
      uVar2 = 0;
      if (puVar7 <= param_1) goto LAB_00b9171c;
LAB_00b916d0:
      do {
        puVar20 = puVar20 + -0xe;
        puVar18 = puVar10 + 0xe;
        uVar11 = uVar2;
        puVar9 = puVar20;
        if (*puVar10 <= *puVar5) {
          uVar11 = uVar2 + 1;
          puVar9 = param_3;
        }
        puVar9 = puVar9 + uVar2 * 0xe;
        uVar2 = puVar10[1];
        uVar12 = puVar10[2];
        uVar17 = puVar10[3];
        *puVar9 = *puVar10;
        puVar9[1] = uVar2;
        puVar9[2] = uVar12;
        puVar9[3] = uVar17;
        uVar2 = puVar10[5];
        uVar12 = puVar10[6];
        uVar17 = puVar10[7];
        uVar13 = puVar10[8];
        puVar9[4] = puVar10[4];
        puVar9[5] = uVar2;
        puVar9[6] = uVar12;
        puVar9[7] = uVar17;
        puVar9[8] = uVar13;
        uVar2 = puVar10[10];
        uVar12 = puVar10[0xb];
        uVar17 = puVar10[0xc];
        uVar13 = puVar10[0xd];
        puVar9[9] = puVar10[9];
        puVar9[10] = uVar2;
        puVar9[0xb] = uVar12;
        puVar9[0xc] = uVar17;
        puVar9[0xd] = uVar13;
        puVar10 = puVar18;
        uVar2 = uVar11;
      } while (puVar18 < puVar7);
LAB_00b9171c:
      if (uVar3 != uVar6) goto code_r0x00b9172c;
      FUN_016dd1aa(param_1,param_3,uVar2 * 0x38);
      param_2 = uVar6 - uVar2;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar2 * 0xe;
      puVar10 = param_1;
      uVar3 = param_2;
      puVar18 = param_3 + uVar6 * 0xe + -0xe;
      do {
        uVar11 = puVar18[1];
        uVar12 = puVar18[2];
        uVar17 = puVar18[3];
        uVar3 = uVar3 - 1;
        *puVar10 = *puVar18;
        puVar10[1] = uVar11;
        puVar10[2] = uVar12;
        puVar10[3] = uVar17;
        uVar11 = puVar18[5];
        uVar12 = puVar18[6];
        uVar17 = puVar18[7];
        uVar13 = puVar18[8];
        puVar10[4] = puVar18[4];
        puVar10[5] = uVar11;
        puVar10[6] = uVar12;
        puVar10[7] = uVar17;
        puVar10[8] = uVar13;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        uVar17 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar10[9] = puVar18[9];
        puVar10[10] = uVar11;
        puVar10[0xb] = uVar12;
        puVar10[0xc] = uVar17;
        puVar10[0xd] = uVar13;
        puVar10 = puVar10 + 0xe;
        puVar18 = puVar18 + -0xe;
      } while (uVar3 != 0);
      if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar6,uVar6,&DAT_018af348);
      }
      local_78 = (uint *)0x0;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_00b91170:
  uVar6 = param_2 >> 1;
  if (uVar6 != 0) {
    if (param_2 < 8) {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar11 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar11;
      uVar2 = param_1[5];
      uVar3 = param_1[6];
      uVar11 = param_1[7];
      uVar12 = param_1[8];
      param_3[4] = param_1[4];
      param_3[5] = uVar2;
      param_3[6] = uVar3;
      param_3[7] = uVar11;
      param_3[8] = uVar12;
      uVar2 = param_1[10];
      uVar3 = param_1[0xb];
      uVar11 = param_1[0xc];
      uVar12 = param_1[0xd];
      param_3[9] = param_1[9];
      param_3[10] = uVar2;
      param_3[0xb] = uVar3;
      param_3[0xc] = uVar11;
      param_3[0xd] = uVar12;
      puVar18 = param_1 + uVar6 * 0xe;
      puVar10 = param_3 + uVar6 * 0xe;
      uVar2 = puVar18[1];
      uVar3 = puVar18[2];
      uVar11 = puVar18[3];
      *puVar10 = *puVar18;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar11;
      uVar2 = puVar18[5];
      uVar3 = puVar18[6];
      uVar11 = puVar18[7];
      uVar12 = puVar18[8];
      puVar10[4] = puVar18[4];
      puVar10[5] = uVar2;
      puVar10[6] = uVar3;
      puVar10[7] = uVar11;
      puVar10[8] = uVar12;
      uVar2 = puVar18[10];
      uVar3 = puVar18[0xb];
      uVar11 = puVar18[0xc];
      uVar12 = puVar18[0xd];
      puVar10[9] = puVar18[9];
      puVar10[10] = uVar2;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar11;
      puVar10[0xd] = uVar12;
      uVar2 = 1;
    }
    else {
      iVar8 = 0xa8;
      iVar14 = 0x70;
      if (param_1[0x2a] < param_1[0x1c]) {
        iVar14 = 0xa8;
      }
      puVar10 = (uint *)((int)param_1 + iVar14);
      if (param_1[0x2a] < param_1[0x1c]) {
        iVar8 = 0x70;
      }
      puVar20 = (uint *)((int)param_1 + iVar8);
      puVar5 = param_1 + (uint)(*param_1 > param_1[0xe]) * 0xe;
      puVar7 = param_1 + (uint)(*param_1 <= param_1[0xe]) * 0xe;
      puVar18 = puVar10;
      if (*puVar10 < *puVar5) {
        puVar18 = puVar7;
      }
      puVar4 = puVar7;
      puVar9 = puVar20;
      if (*puVar20 < *puVar7) {
        puVar4 = puVar10;
        puVar9 = puVar7;
        puVar18 = puVar20;
      }
      puVar7 = puVar5;
      if (*puVar10 < *puVar5) {
        puVar7 = puVar10;
        puVar4 = puVar5;
      }
      uVar2 = *puVar4;
      uVar3 = *puVar18;
      uVar11 = puVar7[1];
      uVar12 = puVar7[2];
      uVar17 = puVar7[3];
      *param_3 = *puVar7;
      param_3[1] = uVar11;
      param_3[2] = uVar12;
      param_3[3] = uVar17;
      uVar11 = puVar7[5];
      uVar12 = puVar7[6];
      uVar17 = puVar7[7];
      uVar13 = puVar7[8];
      param_3[4] = puVar7[4];
      param_3[5] = uVar11;
      param_3[6] = uVar12;
      param_3[7] = uVar17;
      param_3[8] = uVar13;
      uVar11 = puVar7[10];
      uVar12 = puVar7[0xb];
      uVar17 = puVar7[0xc];
      uVar13 = puVar7[0xd];
      param_3[9] = puVar7[9];
      param_3[10] = uVar11;
      param_3[0xb] = uVar12;
      param_3[0xc] = uVar17;
      param_3[0xd] = uVar13;
      puVar10 = puVar4;
      if (uVar3 < uVar2) {
        puVar10 = puVar18;
      }
      uVar11 = puVar10[1];
      uVar12 = puVar10[2];
      uVar17 = puVar10[3];
      if (uVar3 >= uVar2) {
        puVar4 = puVar18;
      }
      param_3[0xe] = *puVar10;
      param_3[0xf] = uVar11;
      param_3[0x10] = uVar12;
      param_3[0x11] = uVar17;
      uVar2 = puVar10[5];
      uVar3 = puVar10[6];
      uVar11 = puVar10[7];
      uVar12 = puVar10[8];
      param_3[0x12] = puVar10[4];
      param_3[0x13] = uVar2;
      param_3[0x14] = uVar3;
      param_3[0x15] = uVar11;
      param_3[0x16] = uVar12;
      uVar2 = puVar10[10];
      uVar3 = puVar10[0xb];
      uVar11 = puVar10[0xc];
      uVar12 = puVar10[0xd];
      param_3[0x17] = puVar10[9];
      param_3[0x18] = uVar2;
      param_3[0x19] = uVar3;
      param_3[0x1a] = uVar11;
      param_3[0x1b] = uVar12;
      uVar2 = puVar4[1];
      uVar3 = puVar4[2];
      uVar11 = puVar4[3];
      param_3[0x1c] = *puVar4;
      param_3[0x1d] = uVar2;
      param_3[0x1e] = uVar3;
      param_3[0x1f] = uVar11;
      uVar2 = puVar4[5];
      uVar3 = puVar4[6];
      uVar11 = puVar4[7];
      uVar12 = puVar4[8];
      param_3[0x20] = puVar4[4];
      param_3[0x21] = uVar2;
      param_3[0x22] = uVar3;
      param_3[0x23] = uVar11;
      param_3[0x24] = uVar12;
      uVar2 = puVar4[10];
      uVar3 = puVar4[0xb];
      uVar11 = puVar4[0xc];
      uVar12 = puVar4[0xd];
      param_3[0x25] = puVar4[9];
      param_3[0x26] = uVar2;
      param_3[0x27] = uVar3;
      param_3[0x28] = uVar11;
      param_3[0x29] = uVar12;
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      uVar11 = puVar9[3];
      param_3[0x2a] = *puVar9;
      param_3[0x2b] = uVar2;
      param_3[0x2c] = uVar3;
      param_3[0x2d] = uVar11;
      uVar2 = puVar9[5];
      uVar3 = puVar9[6];
      uVar11 = puVar9[7];
      uVar12 = puVar9[8];
      param_3[0x2e] = puVar9[4];
      param_3[0x2f] = uVar2;
      param_3[0x30] = uVar3;
      param_3[0x31] = uVar11;
      param_3[0x32] = uVar12;
      uVar2 = puVar9[10];
      uVar3 = puVar9[0xb];
      uVar11 = puVar9[0xc];
      uVar12 = puVar9[0xd];
      param_3[0x33] = puVar9[9];
      param_3[0x34] = uVar2;
      param_3[0x35] = uVar3;
      param_3[0x36] = uVar11;
      param_3[0x37] = uVar12;
      puVar10 = param_1 + uVar6 * 0xe;
      iVar8 = 0xa8;
      iVar14 = 0x70;
      if (puVar10[0x2a] < puVar10[0x1c]) {
        iVar8 = 0x70;
      }
      puVar18 = (uint *)((int)puVar10 + iVar8);
      if (puVar10[0x2a] < puVar10[0x1c]) {
        iVar14 = 0xa8;
      }
      puVar20 = (uint *)((int)puVar10 + iVar14);
      puVar7 = puVar10 + (uint)(*puVar10 <= puVar10[0xe]) * 0xe;
      puVar10 = puVar10 + (uint)(*puVar10 > puVar10[0xe]) * 0xe;
      puVar5 = puVar20;
      if (*puVar20 < *puVar10) {
        puVar5 = puVar7;
      }
      puVar4 = puVar7;
      puVar9 = puVar18;
      if (*puVar18 < *puVar7) {
        puVar4 = puVar20;
        puVar9 = puVar7;
        puVar5 = puVar18;
      }
      puVar18 = puVar10;
      if (*puVar20 < *puVar10) {
        puVar18 = puVar20;
        puVar4 = puVar10;
      }
      uVar2 = *puVar4;
      uVar3 = *puVar5;
      puVar10 = param_3 + uVar6 * 0xe;
      uVar11 = puVar18[1];
      uVar12 = puVar18[2];
      uVar17 = puVar18[3];
      *puVar10 = *puVar18;
      puVar10[1] = uVar11;
      puVar10[2] = uVar12;
      puVar10[3] = uVar17;
      uVar11 = puVar18[5];
      uVar12 = puVar18[6];
      uVar17 = puVar18[7];
      uVar13 = puVar18[8];
      puVar10[4] = puVar18[4];
      puVar10[5] = uVar11;
      puVar10[6] = uVar12;
      puVar10[7] = uVar17;
      puVar10[8] = uVar13;
      uVar11 = puVar18[10];
      uVar12 = puVar18[0xb];
      uVar17 = puVar18[0xc];
      uVar13 = puVar18[0xd];
      puVar10[9] = puVar18[9];
      puVar10[10] = uVar11;
      puVar10[0xb] = uVar12;
      puVar10[0xc] = uVar17;
      puVar10[0xd] = uVar13;
      if (uVar3 < uVar2) {
        puVar18 = puVar4;
        puVar4 = puVar5;
      }
      else {
        puVar18 = puVar5;
      }
      uVar2 = puVar4[1];
      uVar3 = puVar4[2];
      uVar11 = puVar4[3];
      puVar10[0xe] = *puVar4;
      puVar10[0xf] = uVar2;
      puVar10[0x10] = uVar3;
      puVar10[0x11] = uVar11;
      uVar2 = puVar4[5];
      uVar3 = puVar4[6];
      uVar11 = puVar4[7];
      uVar12 = puVar4[8];
      puVar10[0x12] = puVar4[4];
      puVar10[0x13] = uVar2;
      puVar10[0x14] = uVar3;
      puVar10[0x15] = uVar11;
      puVar10[0x16] = uVar12;
      uVar2 = puVar4[10];
      uVar3 = puVar4[0xb];
      uVar11 = puVar4[0xc];
      uVar12 = puVar4[0xd];
      puVar10[0x17] = puVar4[9];
      puVar10[0x18] = uVar2;
      puVar10[0x19] = uVar3;
      puVar10[0x1a] = uVar11;
      puVar10[0x1b] = uVar12;
      uVar2 = puVar18[1];
      uVar3 = puVar18[2];
      uVar11 = puVar18[3];
      puVar10[0x1c] = *puVar18;
      puVar10[0x1d] = uVar2;
      puVar10[0x1e] = uVar3;
      puVar10[0x1f] = uVar11;
      uVar2 = puVar18[5];
      uVar3 = puVar18[6];
      uVar11 = puVar18[7];
      uVar12 = puVar18[8];
      puVar10[0x20] = puVar18[4];
      puVar10[0x21] = uVar2;
      puVar10[0x22] = uVar3;
      puVar10[0x23] = uVar11;
      puVar10[0x24] = uVar12;
      uVar2 = puVar18[10];
      uVar3 = puVar18[0xb];
      uVar11 = puVar18[0xc];
      uVar12 = puVar18[0xd];
      puVar10[0x25] = puVar18[9];
      puVar10[0x26] = uVar2;
      puVar10[0x27] = uVar3;
      puVar10[0x28] = uVar11;
      puVar10[0x29] = uVar12;
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      uVar11 = puVar9[3];
      puVar10[0x2a] = *puVar9;
      puVar10[0x2b] = uVar2;
      puVar10[0x2c] = uVar3;
      puVar10[0x2d] = uVar11;
      uVar2 = puVar9[5];
      uVar3 = puVar9[6];
      uVar11 = puVar9[7];
      uVar12 = puVar9[8];
      puVar10[0x2e] = puVar9[4];
      puVar10[0x2f] = uVar2;
      puVar10[0x30] = uVar3;
      puVar10[0x31] = uVar11;
      puVar10[0x32] = uVar12;
      uVar2 = puVar9[10];
      uVar3 = puVar9[0xb];
      uVar11 = puVar9[0xc];
      uVar12 = puVar9[0xd];
      puVar10[0x33] = puVar9[9];
      puVar10[0x34] = uVar2;
      puVar10[0x35] = uVar3;
      puVar10[0x36] = uVar11;
      puVar10[0x37] = uVar12;
      uVar2 = 4;
    }
    if (uVar2 < uVar6) {
      iVar8 = uVar2 * 0x38;
      uVar3 = uVar2;
      do {
        puVar10 = param_1 + uVar3 * 0xe;
        puVar18 = param_3 + uVar3 * 0xe;
        uVar11 = puVar10[1];
        uVar12 = puVar10[2];
        uVar17 = puVar10[3];
        *puVar18 = *puVar10;
        puVar18[1] = uVar11;
        puVar18[2] = uVar12;
        puVar18[3] = uVar17;
        uVar11 = puVar10[5];
        uVar12 = puVar10[6];
        uVar17 = puVar10[7];
        uVar13 = puVar10[8];
        puVar18[4] = puVar10[4];
        puVar18[5] = uVar11;
        puVar18[6] = uVar12;
        puVar18[7] = uVar17;
        puVar18[8] = uVar13;
        uVar11 = puVar10[10];
        uVar12 = puVar10[0xb];
        uVar17 = puVar10[0xc];
        uVar13 = puVar10[0xd];
        puVar18[9] = puVar10[9];
        puVar18[10] = uVar11;
        puVar18[0xb] = uVar12;
        puVar18[0xc] = uVar17;
        puVar18[0xd] = uVar13;
        uVar11 = param_3[uVar3 * 0xe];
        if (uVar11 < puVar18[-0xe]) {
          local_60 = puVar10[1];
          uStack_5c = puVar10[2];
          uStack_58 = puVar10[3];
          uStack_54 = puVar10[4];
          local_50 = puVar10[5];
          uStack_4c = puVar10[6];
          uStack_48 = puVar10[7];
          uStack_44 = puVar10[8];
          local_40 = puVar10[9];
          local_3c = puVar10[10];
          uStack_38 = puVar10[0xb];
          uStack_34 = puVar10[0xc];
          uStack_30 = puVar10[0xd];
          iVar14 = iVar8;
          do {
            puVar19 = (undefined4 *)((int)param_3 + iVar14);
            *puVar19 = puVar19[-0xe];
            puVar19[1] = puVar19[-0xd];
            puVar19[2] = puVar19[-0xc];
            puVar19[3] = puVar19[-0xb];
            puVar19[4] = puVar19[-10];
            puVar19[5] = puVar19[-9];
            puVar19[6] = puVar19[-8];
            puVar19[7] = puVar19[-7];
            puVar19[8] = puVar19[-6];
            puVar19[9] = puVar19[-5];
            puVar19[10] = puVar19[-4];
            puVar19[0xb] = puVar19[-3];
            puVar19[0xc] = puVar19[-2];
            puVar19[0xd] = puVar19[-1];
            if (iVar14 == 0x38) {
              puVar10 = param_3;
              goto LAB_00b918a8;
            }
            iVar14 = iVar14 + -0x38;
          } while (uVar11 < (uint)puVar19[-0x1c]);
          puVar10 = (uint *)((int)param_3 + iVar14);
LAB_00b918a8:
          *puVar10 = uVar11;
          puVar10[1] = local_60;
          puVar10[2] = uStack_5c;
          puVar10[3] = uStack_58;
          puVar10[4] = uStack_54;
          puVar10[5] = local_50;
          puVar10[6] = uStack_4c;
          puVar10[7] = uStack_48;
          puVar10[8] = uStack_44;
          puVar10[9] = local_40;
          puVar10[10] = local_3c;
          puVar10[0xb] = uStack_38;
          puVar10[0xc] = uStack_34;
          puVar10[0xd] = uStack_30;
        }
        uVar3 = uVar3 + 1;
        iVar8 = iVar8 + 0x38;
      } while (uVar3 != uVar6);
    }
    puVar10 = param_3 + uVar6 * 0xe;
    if (uVar2 < param_2 - uVar6) {
      iVar8 = 0x38;
      uVar3 = uVar2;
      local_6c = puVar10;
      do {
        puVar18 = param_1 + uVar6 * 0xe + uVar3 * 0xe;
        puVar5 = puVar10 + uVar3 * 0xe;
        uVar11 = puVar18[1];
        uVar12 = puVar18[2];
        uVar17 = puVar18[3];
        *puVar5 = *puVar18;
        puVar5[1] = uVar11;
        puVar5[2] = uVar12;
        puVar5[3] = uVar17;
        uVar11 = puVar18[5];
        uVar12 = puVar18[6];
        uVar17 = puVar18[7];
        uVar13 = puVar18[8];
        puVar5[4] = puVar18[4];
        puVar5[5] = uVar11;
        puVar5[6] = uVar12;
        puVar5[7] = uVar17;
        puVar5[8] = uVar13;
        uVar11 = puVar18[10];
        uVar12 = puVar18[0xb];
        uVar17 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar5[9] = puVar18[9];
        puVar5[10] = uVar11;
        puVar5[0xb] = uVar12;
        puVar5[0xc] = uVar17;
        puVar5[0xd] = uVar13;
        uVar11 = puVar10[uVar3 * 0xe];
        if (uVar11 < puVar5[-0xe]) {
          local_60 = puVar18[1];
          uStack_5c = puVar18[2];
          uStack_58 = puVar18[3];
          uStack_54 = puVar18[4];
          local_50 = puVar18[5];
          uStack_4c = puVar18[6];
          uStack_48 = puVar18[7];
          uStack_44 = puVar18[8];
          local_40 = puVar18[9];
          local_3c = puVar18[10];
          uStack_38 = puVar18[0xb];
          uStack_34 = puVar18[0xc];
          uStack_30 = puVar18[0xd];
          iVar14 = iVar8;
          puVar18 = local_6c;
          do {
            puVar5 = puVar18 + uVar2 * 0xe;
            *puVar5 = puVar5[-0xe];
            puVar5[1] = puVar5[-0xd];
            puVar5[2] = puVar5[-0xc];
            puVar5[3] = puVar5[-0xb];
            puVar5[4] = puVar5[-10];
            puVar5[5] = puVar5[-9];
            puVar5[6] = puVar5[-8];
            puVar5[7] = puVar5[-7];
            puVar5[8] = puVar5[-6];
            puVar5[9] = puVar5[-5];
            puVar5[10] = puVar5[-4];
            puVar5[0xb] = puVar5[-3];
            puVar5[0xc] = puVar5[-2];
            puVar5[0xd] = puVar5[-1];
            if (uVar2 * 0x38 == iVar14) {
              puVar18 = puVar10;
              goto LAB_00b919d4;
            }
            iVar14 = iVar14 + 0x38;
            puVar18 = puVar18 + -0xe;
          } while (uVar11 < puVar5[-0x1c]);
          puVar18 = puVar18 + uVar2 * 0xe;
LAB_00b919d4:
          *puVar18 = uVar11;
          puVar18[1] = local_60;
          puVar18[2] = uStack_5c;
          puVar18[3] = uStack_58;
          puVar18[4] = uStack_54;
          puVar18[5] = local_50;
          puVar18[6] = uStack_4c;
          puVar18[7] = uStack_48;
          puVar18[8] = uStack_44;
          puVar18[9] = local_40;
          puVar18[10] = local_3c;
          puVar18[0xb] = uStack_38;
          puVar18[0xc] = uStack_34;
          puVar18[0xd] = uStack_30;
        }
        iVar8 = iVar8 + -0x38;
        local_6c = local_6c + 0xe;
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_2 - uVar6);
    }
    iVar8 = 0;
    puVar5 = puVar10 + -0xe;
    puVar18 = param_3 + param_2 * 0xe + -0xe;
    do {
      bVar21 = *puVar10 < *param_3;
      puVar7 = param_3;
      if (bVar21) {
        puVar7 = puVar10;
      }
      puVar20 = (uint *)((int)param_1 + iVar8);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar11 = puVar7[3];
      *puVar20 = *puVar7;
      puVar20[1] = uVar2;
      puVar20[2] = uVar3;
      puVar20[3] = uVar11;
      uVar2 = puVar7[5];
      uVar3 = puVar7[6];
      uVar11 = puVar7[7];
      uVar12 = puVar7[8];
      puVar20[4] = puVar7[4];
      puVar20[5] = uVar2;
      puVar20[6] = uVar3;
      puVar20[7] = uVar11;
      puVar20[8] = uVar12;
      uVar2 = puVar7[10];
      uVar3 = puVar7[0xb];
      uVar11 = puVar7[0xc];
      uVar12 = puVar7[0xd];
      puVar20[9] = puVar7[9];
      puVar20[10] = uVar2;
      puVar20[0xb] = uVar3;
      puVar20[0xc] = uVar11;
      puVar20[0xd] = uVar12;
      bVar22 = *puVar18 < *puVar5;
      puVar7 = puVar18;
      if (bVar22) {
        puVar7 = puVar5;
      }
      puVar20 = (uint *)((int)param_1 + ((param_2 * 0x38 + -0x38) - iVar8));
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar11 = puVar7[3];
      iVar8 = iVar8 + 0x38;
      *puVar20 = *puVar7;
      puVar20[1] = uVar2;
      puVar20[2] = uVar3;
      puVar20[3] = uVar11;
      uVar2 = puVar7[5];
      uVar3 = puVar7[6];
      uVar11 = puVar7[7];
      uVar12 = puVar7[8];
      puVar20[4] = puVar7[4];
      puVar20[5] = uVar2;
      puVar20[6] = uVar3;
      puVar20[7] = uVar11;
      puVar20[8] = uVar12;
      uVar2 = puVar7[10];
      uVar3 = puVar7[0xb];
      uVar11 = puVar7[0xc];
      uVar12 = puVar7[0xd];
      puVar20[9] = puVar7[9];
      puVar20[10] = uVar2;
      puVar20[0xb] = uVar3;
      puVar20[0xc] = uVar11;
      puVar20[0xd] = uVar12;
      param_3 = param_3 + (uint)!bVar21 * 0xe;
      puVar10 = puVar10 + (uint)bVar21 * 0xe;
      iVar14 = 0;
      if (bVar22) {
        iVar14 = -1;
      }
      puVar5 = puVar5 + iVar14 * 0xe;
      iVar14 = 0;
      if (!bVar22) {
        iVar14 = -1;
      }
      puVar18 = puVar18 + iVar14 * 0xe;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar5 = puVar5 + 0xe;
    puVar7 = (uint *)0x0;
    if ((param_2 & 1) != 0) {
      bVar21 = puVar5 <= param_3;
      param_1 = (uint *)((int)param_1 + iVar8);
      puVar7 = puVar10;
      if (!bVar21) {
        puVar7 = param_3;
      }
      uVar6 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *param_1 = *puVar7;
      param_1[1] = uVar6;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      uVar6 = puVar7[5];
      uVar2 = puVar7[6];
      uVar3 = puVar7[7];
      uVar11 = puVar7[8];
      param_1[4] = puVar7[4];
      param_1[5] = uVar6;
      param_1[6] = uVar2;
      param_1[7] = uVar3;
      param_1[8] = uVar11;
      uVar6 = puVar7[10];
      uVar2 = puVar7[0xb];
      uVar3 = puVar7[0xc];
      uVar11 = puVar7[0xd];
      param_1[9] = puVar7[9];
      param_1[10] = uVar6;
      param_1[0xb] = uVar2;
      param_1[0xc] = uVar3;
      param_1[0xd] = uVar11;
      puVar7 = (uint *)((uint)!bVar21 * 7);
      puVar10 = puVar10 + (uint)bVar21 * 0xe;
      param_3 = param_3 + (uint)!bVar21 * 0xe;
    }
    if (param_3 == puVar5) {
      puVar7 = puVar18 + 0xe;
    }
    if (param_3 != puVar5 || puVar10 != puVar7) {
      FUN_00fb7254();
LAB_00b91c80:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb91c80);
      (*pcVar1)();
    }
  }
  return;
code_r0x00b915a4:
  puVar7 = puVar7 + -0xe;
  uVar11 = puVar18[1];
  uVar12 = puVar18[2];
  uVar17 = puVar18[3];
  puVar20 = puVar7 + param_2 * 0xe;
  puVar10 = puVar18 + 0xe;
  *puVar20 = *puVar18;
  puVar20[1] = uVar11;
  puVar20[2] = uVar12;
  puVar20[3] = uVar17;
  uVar11 = puVar18[5];
  uVar12 = puVar18[6];
  uVar17 = puVar18[7];
  uVar13 = puVar18[8];
  puVar20[4] = puVar18[4];
  puVar20[5] = uVar11;
  puVar20[6] = uVar12;
  puVar20[7] = uVar17;
  puVar20[8] = uVar13;
  uVar11 = puVar18[10];
  uVar12 = puVar18[0xb];
  uVar17 = puVar18[0xc];
  uVar13 = puVar18[0xd];
  puVar20[9] = puVar18[9];
  puVar20[10] = uVar11;
  puVar20[0xb] = uVar12;
  puVar20[0xc] = uVar17;
  puVar20[0xd] = uVar13;
  puVar20 = param_1 + uVar6 * 0xe;
  puVar18 = puVar10;
  uVar11 = uVar6;
  if (puVar10 < puVar20) goto LAB_00b91544;
  goto LAB_00b91590;
code_r0x00b9172c:
  puVar7 = param_3 + uVar2 * 0xe;
  uVar3 = puVar18[1];
  uVar11 = puVar18[2];
  uVar12 = puVar18[3];
  puVar10 = puVar18 + 0xe;
  uVar2 = uVar2 + 1;
  puVar20 = puVar20 + -0xe;
  *puVar7 = *puVar18;
  puVar7[1] = uVar3;
  puVar7[2] = uVar11;
  puVar7[3] = uVar12;
  uVar3 = puVar18[5];
  uVar11 = puVar18[6];
  uVar12 = puVar18[7];
  uVar17 = puVar18[8];
  puVar7[4] = puVar18[4];
  puVar7[5] = uVar3;
  puVar7[6] = uVar11;
  puVar7[7] = uVar12;
  puVar7[8] = uVar17;
  uVar3 = puVar18[10];
  uVar11 = puVar18[0xb];
  uVar12 = puVar18[0xc];
  uVar17 = puVar18[0xd];
  puVar7[9] = puVar18[9];
  puVar7[10] = uVar3;
  puVar7[0xb] = uVar11;
  puVar7[0xc] = uVar12;
  puVar7[0xd] = uVar17;
  puVar7 = param_1 + uVar6 * 0xe;
  puVar18 = puVar10;
  uVar3 = uVar6;
  if (puVar10 < puVar7) goto LAB_00b916d0;
  goto LAB_00b9171c;
}

