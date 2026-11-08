// FUN_00b7cba0 @ 00b7cba0 size=2728 calls_out=7 calls_in=2
// strings: 

void FUN_00b7cba0(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint *local_78;
  uint *local_64;
  int local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_78 = param_6;
    do {
      uVar10 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00b7c4ec(param_1,uVar10,param_3,param_4,1);
          return;
        }
        puVar9 = param_1 + (uVar10 >> 3) * 0x54;
        puVar7 = param_1 + (uVar10 >> 3) * 0x30;
        if (uVar10 < 0x40) {
          uVar5 = *puVar7;
          uVar6 = *param_1;
          puVar3 = puVar9;
          if (uVar6 < uVar5 == uVar5 < *puVar9) {
            puVar3 = puVar7;
          }
          if (uVar6 < uVar5 != uVar6 < *puVar9) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (uint *)FUN_00b7d674(param_1,puVar7,puVar9);
        }
        param_5 = param_5 + -1;
        uVar5 = ((uint)((int)puVar3 - (int)param_1) >> 4) * -0x55555555;
        local_58 = *puVar3;
        uStack_54 = puVar3[1];
        uStack_50 = puVar3[2];
        uStack_4c = puVar3[3];
        uStack_48 = puVar3[4];
        local_44 = puVar3[5];
        local_40 = puVar3[6];
        uStack_3c = puVar3[7];
        uStack_38 = puVar3[8];
        uStack_34 = puVar3[9];
        uStack_30 = puVar3[10];
        uStack_2c = puVar3[0xb];
        if ((local_78 != (uint *)0x0) && (*puVar3 <= *local_78)) break;
        if (param_4 < uVar10) goto LAB_00b7d630;
        param_2 = 0;
        puVar7 = param_3 + uVar10 * 0xc;
        puVar9 = param_1;
        uVar6 = uVar5;
        while( true ) {
          for (puVar16 = puVar9; puVar16 < param_1 + uVar6 * 0xc; puVar16 = puVar16 + 0xc) {
            puVar7 = puVar7 + -0xc;
            uVar18 = param_2;
            puVar9 = puVar7;
            if (*puVar16 < *puVar3) {
              uVar18 = param_2 + 1;
              puVar9 = param_3;
            }
            puVar9 = puVar9 + param_2 * 0xc;
            uVar8 = puVar16[1];
            uVar14 = puVar16[2];
            uVar19 = puVar16[3];
            uVar20 = puVar16[4];
            uVar13 = puVar16[5];
            *puVar9 = *puVar16;
            puVar9[1] = uVar8;
            puVar9[2] = uVar14;
            puVar9[3] = uVar19;
            puVar9[4] = uVar20;
            puVar9[5] = uVar13;
            uVar8 = puVar16[7];
            uVar14 = puVar16[8];
            uVar19 = puVar16[9];
            uVar20 = puVar16[10];
            uVar13 = puVar16[0xb];
            puVar9[6] = puVar16[6];
            puVar9[7] = uVar8;
            puVar9[8] = uVar14;
            puVar9[9] = uVar19;
            puVar9[10] = uVar20;
            puVar9[0xb] = uVar13;
            param_2 = uVar18;
          }
          if (uVar6 == uVar10) break;
          puVar7 = puVar7 + -0xc;
          puVar11 = puVar7 + param_2 * 0xc;
          uVar6 = puVar16[1];
          uVar18 = puVar16[2];
          uVar8 = puVar16[3];
          uVar14 = puVar16[4];
          uVar19 = puVar16[5];
          puVar9 = puVar16 + 0xc;
          *puVar11 = *puVar16;
          puVar11[1] = uVar6;
          puVar11[2] = uVar18;
          puVar11[3] = uVar8;
          puVar11[4] = uVar14;
          puVar11[5] = uVar19;
          uVar6 = puVar16[7];
          uVar18 = puVar16[8];
          uVar8 = puVar16[9];
          uVar14 = puVar16[10];
          uVar19 = puVar16[0xb];
          puVar11[6] = puVar16[6];
          puVar11[7] = uVar6;
          puVar11[8] = uVar18;
          puVar11[9] = uVar8;
          puVar11[10] = uVar14;
          puVar11[0xb] = uVar19;
          uVar6 = uVar10;
        }
        FUN_016dd1aa(param_1,param_3,param_2 * 0x30);
        iVar12 = uVar10 - param_2;
        if (iVar12 != 0) {
          puVar7 = param_3 + uVar10 * 0xc + -0xc;
          puVar9 = param_1 + param_2 * 0xc;
          iVar4 = iVar12;
          do {
            uVar6 = puVar7[1];
            uVar18 = puVar7[2];
            uVar8 = puVar7[3];
            uVar14 = puVar7[4];
            uVar19 = puVar7[5];
            iVar4 = iVar4 + -1;
            *puVar9 = *puVar7;
            puVar9[1] = uVar6;
            puVar9[2] = uVar18;
            puVar9[3] = uVar8;
            puVar9[4] = uVar14;
            puVar9[5] = uVar19;
            uVar6 = puVar7[7];
            uVar18 = puVar7[8];
            uVar8 = puVar7[9];
            uVar14 = puVar7[10];
            uVar19 = puVar7[0xb];
            puVar9[6] = puVar7[6];
            puVar9[7] = uVar6;
            puVar9[8] = uVar18;
            puVar9[9] = uVar8;
            puVar9[10] = uVar14;
            puVar9[0xb] = uVar19;
            puVar7 = puVar7 + -0xc;
            puVar9 = puVar9 + 0xc;
          } while (iVar4 != 0);
        }
        if (param_2 == 0) break;
        if (uVar10 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b7cba0(param_1 + param_2 * 0xc,iVar12,param_3,param_4,param_5,&local_58);
        uVar10 = param_2;
        if (param_2 < 0x21) goto LAB_00b7cbc4;
      }
      if (param_4 < uVar10) goto LAB_00b7d630;
      puVar7 = param_3 + uVar10 * 0xc;
      uVar6 = 0;
      puVar9 = param_1;
      while( true ) {
        uVar18 = uVar6;
        for (puVar16 = puVar9; puVar16 < param_1 + uVar5 * 0xc; puVar16 = puVar16 + 0xc) {
          puVar7 = puVar7 + -0xc;
          uVar6 = uVar18;
          puVar9 = puVar7;
          if (*puVar16 <= *puVar3) {
            uVar6 = uVar18 + 1;
            puVar9 = param_3;
          }
          puVar9 = puVar9 + uVar18 * 0xc;
          uVar18 = puVar16[1];
          uVar8 = puVar16[2];
          uVar14 = puVar16[3];
          uVar19 = puVar16[4];
          uVar20 = puVar16[5];
          *puVar9 = *puVar16;
          puVar9[1] = uVar18;
          puVar9[2] = uVar8;
          puVar9[3] = uVar14;
          puVar9[4] = uVar19;
          puVar9[5] = uVar20;
          uVar18 = puVar16[7];
          uVar8 = puVar16[8];
          uVar14 = puVar16[9];
          uVar19 = puVar16[10];
          uVar20 = puVar16[0xb];
          puVar9[6] = puVar16[6];
          puVar9[7] = uVar18;
          puVar9[8] = uVar8;
          puVar9[9] = uVar14;
          puVar9[10] = uVar19;
          puVar9[0xb] = uVar20;
          uVar18 = uVar6;
        }
        if (uVar5 == uVar10) break;
        puVar9 = puVar16 + 0xc;
        uVar6 = uVar18 + 1;
        puVar11 = param_3 + uVar18 * 0xc;
        uVar5 = puVar16[1];
        uVar18 = puVar16[2];
        uVar8 = puVar16[3];
        uVar14 = puVar16[4];
        uVar19 = puVar16[5];
        puVar7 = puVar7 + -0xc;
        *puVar11 = *puVar16;
        puVar11[1] = uVar5;
        puVar11[2] = uVar18;
        puVar11[3] = uVar8;
        puVar11[4] = uVar14;
        puVar11[5] = uVar19;
        uVar5 = puVar16[7];
        uVar18 = puVar16[8];
        uVar8 = puVar16[9];
        uVar14 = puVar16[10];
        uVar19 = puVar16[0xb];
        puVar11[6] = puVar16[6];
        puVar11[7] = uVar5;
        puVar11[8] = uVar18;
        puVar11[9] = uVar8;
        puVar11[10] = uVar14;
        puVar11[0xb] = uVar19;
        uVar5 = uVar10;
      }
      FUN_016dd1aa(param_1,param_3,uVar18 * 0x30);
      param_2 = uVar10 - uVar18;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar18 * 0xc;
      puVar7 = param_1;
      uVar5 = param_2;
      puVar9 = param_3 + uVar10 * 0xc + -0xc;
      do {
        uVar6 = puVar9[1];
        uVar8 = puVar9[2];
        uVar14 = puVar9[3];
        uVar19 = puVar9[4];
        uVar20 = puVar9[5];
        uVar5 = uVar5 - 1;
        *puVar7 = *puVar9;
        puVar7[1] = uVar6;
        puVar7[2] = uVar8;
        puVar7[3] = uVar14;
        puVar7[4] = uVar19;
        puVar7[5] = uVar20;
        uVar6 = puVar9[7];
        uVar8 = puVar9[8];
        uVar14 = puVar9[9];
        uVar19 = puVar9[10];
        uVar20 = puVar9[0xb];
        puVar7[6] = puVar9[6];
        puVar7[7] = uVar6;
        puVar7[8] = uVar8;
        puVar7[9] = uVar14;
        puVar7[10] = uVar19;
        puVar7[0xb] = uVar20;
        puVar7 = puVar7 + 0xc;
        puVar9 = puVar9 + -0xc;
      } while (uVar5 != 0);
      if (uVar10 < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar18,uVar10,uVar10,&DAT_018af348);
      }
      local_78 = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_00b7cbc4:
  uVar10 = param_2 >> 1;
  if (uVar10 != 0) {
    if (param_2 < 8) {
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar18 = param_1[3];
      uVar8 = param_1[4];
      uVar14 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar18;
      param_3[4] = uVar8;
      param_3[5] = uVar14;
      uVar5 = param_1[7];
      uVar6 = param_1[8];
      uVar18 = param_1[9];
      uVar8 = param_1[10];
      uVar14 = param_1[0xb];
      param_3[6] = param_1[6];
      param_3[7] = uVar5;
      param_3[8] = uVar6;
      param_3[9] = uVar18;
      param_3[10] = uVar8;
      param_3[0xb] = uVar14;
      puVar9 = param_1 + uVar10 * 0xc;
      puVar7 = param_3 + uVar10 * 0xc;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar18 = puVar9[3];
      uVar8 = puVar9[4];
      uVar14 = puVar9[5];
      *puVar7 = *puVar9;
      puVar7[1] = uVar5;
      puVar7[2] = uVar6;
      puVar7[3] = uVar18;
      puVar7[4] = uVar8;
      puVar7[5] = uVar14;
      uVar5 = puVar9[7];
      uVar6 = puVar9[8];
      uVar18 = puVar9[9];
      uVar8 = puVar9[10];
      uVar14 = puVar9[0xb];
      puVar7[6] = puVar9[6];
      puVar7[7] = uVar5;
      puVar7[8] = uVar6;
      puVar7[9] = uVar18;
      puVar7[10] = uVar8;
      puVar7[0xb] = uVar14;
      uVar5 = 1;
    }
    else {
      uVar6 = (uint)(*param_1 <= param_1[0xc]);
      uVar5 = (uint)(*param_1 > param_1[0xc]);
      iVar12 = 0x60;
      if (param_1[0x24] < param_1[0x18]) {
        iVar12 = 0x90;
      }
      iVar4 = 0x90;
      puVar7 = (uint *)((int)param_1 + iVar12);
      uVar18 = *puVar7;
      if (param_1[0x24] < param_1[0x18]) {
        iVar4 = 0x60;
      }
      puVar16 = (uint *)((int)param_1 + iVar4);
      puVar3 = param_1 + (uVar5 | uVar5 << 1) * 4;
      uVar5 = *puVar3;
      puVar11 = param_1 + (uVar6 | uVar6 << 1) * 4;
      puVar9 = puVar7;
      if (uVar18 < uVar5) {
        puVar9 = puVar11;
      }
      puVar17 = puVar11;
      puVar2 = puVar16;
      if (*puVar16 < *puVar11) {
        puVar17 = puVar7;
        puVar2 = puVar11;
        puVar9 = puVar16;
      }
      if (uVar18 < uVar5) {
        puVar17 = puVar3;
      }
      uVar6 = *puVar17;
      if (uVar18 < uVar5) {
        puVar3 = puVar7;
      }
      uVar5 = *puVar9;
      uVar18 = puVar3[1];
      uVar8 = puVar3[2];
      uVar14 = puVar3[3];
      uVar19 = puVar3[4];
      uVar20 = puVar3[5];
      *param_3 = *puVar3;
      param_3[1] = uVar18;
      param_3[2] = uVar8;
      param_3[3] = uVar14;
      param_3[4] = uVar19;
      param_3[5] = uVar20;
      uVar18 = puVar3[7];
      uVar8 = puVar3[8];
      uVar14 = puVar3[9];
      uVar19 = puVar3[10];
      uVar20 = puVar3[0xb];
      param_3[6] = puVar3[6];
      param_3[7] = uVar18;
      param_3[8] = uVar8;
      param_3[9] = uVar14;
      param_3[10] = uVar19;
      param_3[0xb] = uVar20;
      puVar7 = puVar17;
      if (uVar5 < uVar6) {
        puVar7 = puVar9;
      }
      uVar18 = puVar7[1];
      uVar8 = puVar7[2];
      uVar14 = puVar7[3];
      uVar19 = puVar7[4];
      uVar20 = puVar7[5];
      if (uVar5 >= uVar6) {
        puVar17 = puVar9;
      }
      param_3[0xc] = *puVar7;
      param_3[0xd] = uVar18;
      param_3[0xe] = uVar8;
      param_3[0xf] = uVar14;
      param_3[0x10] = uVar19;
      param_3[0x11] = uVar20;
      uVar5 = puVar7[7];
      uVar6 = puVar7[8];
      uVar18 = puVar7[9];
      uVar8 = puVar7[10];
      uVar14 = puVar7[0xb];
      param_3[0x12] = puVar7[6];
      param_3[0x13] = uVar5;
      param_3[0x14] = uVar6;
      param_3[0x15] = uVar18;
      param_3[0x16] = uVar8;
      param_3[0x17] = uVar14;
      uVar5 = puVar17[1];
      uVar6 = puVar17[2];
      uVar18 = puVar17[3];
      uVar8 = puVar17[4];
      uVar14 = puVar17[5];
      param_3[0x18] = *puVar17;
      param_3[0x19] = uVar5;
      param_3[0x1a] = uVar6;
      param_3[0x1b] = uVar18;
      param_3[0x1c] = uVar8;
      param_3[0x1d] = uVar14;
      uVar5 = puVar17[7];
      uVar6 = puVar17[8];
      uVar18 = puVar17[9];
      uVar8 = puVar17[10];
      uVar14 = puVar17[0xb];
      param_3[0x1e] = puVar17[6];
      param_3[0x1f] = uVar5;
      param_3[0x20] = uVar6;
      param_3[0x21] = uVar18;
      param_3[0x22] = uVar8;
      param_3[0x23] = uVar14;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar18 = puVar2[3];
      uVar8 = puVar2[4];
      uVar14 = puVar2[5];
      param_3[0x24] = *puVar2;
      param_3[0x25] = uVar5;
      param_3[0x26] = uVar6;
      param_3[0x27] = uVar18;
      param_3[0x28] = uVar8;
      param_3[0x29] = uVar14;
      uVar5 = puVar2[7];
      uVar6 = puVar2[8];
      uVar18 = puVar2[9];
      uVar8 = puVar2[10];
      uVar14 = puVar2[0xb];
      param_3[0x2a] = puVar2[6];
      param_3[0x2b] = uVar5;
      param_3[0x2c] = uVar6;
      param_3[0x2d] = uVar18;
      param_3[0x2e] = uVar8;
      param_3[0x2f] = uVar14;
      iVar12 = 0x60;
      puVar7 = param_1 + uVar10 * 0xc;
      uVar6 = (uint)(puVar7[0xc] < *puVar7);
      uVar5 = (uint)(puVar7[0xc] >= *puVar7);
      if (puVar7[0x24] < puVar7[0x18]) {
        iVar12 = 0x90;
      }
      iVar4 = 0x90;
      puVar9 = (uint *)((int)puVar7 + iVar12);
      if (puVar7[0x24] < puVar7[0x18]) {
        iVar4 = 0x60;
      }
      puVar16 = puVar7 + (uVar6 | uVar6 << 1) * 4;
      puVar11 = puVar7 + (uVar5 | uVar5 << 1) * 4;
      puVar7 = (uint *)((int)puVar7 + iVar4);
      puVar3 = puVar9;
      if (*puVar9 < *puVar16) {
        puVar3 = puVar11;
      }
      puVar17 = puVar11;
      puVar2 = puVar7;
      if (*puVar7 < *puVar11) {
        puVar17 = puVar9;
        puVar2 = puVar11;
        puVar3 = puVar7;
      }
      puVar7 = puVar16;
      if (*puVar9 < *puVar16) {
        puVar7 = puVar9;
        puVar17 = puVar16;
      }
      uVar5 = *puVar17;
      uVar6 = *puVar3;
      puVar9 = param_3 + uVar10 * 0xc;
      uVar18 = puVar7[1];
      uVar8 = puVar7[2];
      uVar14 = puVar7[3];
      uVar19 = puVar7[4];
      uVar20 = puVar7[5];
      *puVar9 = *puVar7;
      puVar9[1] = uVar18;
      puVar9[2] = uVar8;
      puVar9[3] = uVar14;
      puVar9[4] = uVar19;
      puVar9[5] = uVar20;
      uVar18 = puVar7[7];
      uVar8 = puVar7[8];
      uVar14 = puVar7[9];
      uVar19 = puVar7[10];
      uVar20 = puVar7[0xb];
      puVar9[6] = puVar7[6];
      puVar9[7] = uVar18;
      puVar9[8] = uVar8;
      puVar9[9] = uVar14;
      puVar9[10] = uVar19;
      puVar9[0xb] = uVar20;
      if (uVar6 < uVar5) {
        puVar7 = puVar17;
        puVar17 = puVar3;
      }
      else {
        puVar7 = puVar3;
      }
      uVar5 = puVar17[1];
      uVar6 = puVar17[2];
      uVar18 = puVar17[3];
      uVar8 = puVar17[4];
      uVar14 = puVar17[5];
      puVar9[0xc] = *puVar17;
      puVar9[0xd] = uVar5;
      puVar9[0xe] = uVar6;
      puVar9[0xf] = uVar18;
      puVar9[0x10] = uVar8;
      puVar9[0x11] = uVar14;
      uVar5 = puVar17[7];
      uVar6 = puVar17[8];
      uVar18 = puVar17[9];
      uVar8 = puVar17[10];
      uVar14 = puVar17[0xb];
      puVar9[0x12] = puVar17[6];
      puVar9[0x13] = uVar5;
      puVar9[0x14] = uVar6;
      puVar9[0x15] = uVar18;
      puVar9[0x16] = uVar8;
      puVar9[0x17] = uVar14;
      uVar5 = puVar7[1];
      uVar6 = puVar7[2];
      uVar18 = puVar7[3];
      uVar8 = puVar7[4];
      uVar14 = puVar7[5];
      puVar9[0x18] = *puVar7;
      puVar9[0x19] = uVar5;
      puVar9[0x1a] = uVar6;
      puVar9[0x1b] = uVar18;
      puVar9[0x1c] = uVar8;
      puVar9[0x1d] = uVar14;
      uVar5 = puVar7[7];
      uVar6 = puVar7[8];
      uVar18 = puVar7[9];
      uVar8 = puVar7[10];
      uVar14 = puVar7[0xb];
      puVar9[0x1e] = puVar7[6];
      puVar9[0x1f] = uVar5;
      puVar9[0x20] = uVar6;
      puVar9[0x21] = uVar18;
      puVar9[0x22] = uVar8;
      puVar9[0x23] = uVar14;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar18 = puVar2[3];
      uVar8 = puVar2[4];
      uVar14 = puVar2[5];
      puVar9[0x24] = *puVar2;
      puVar9[0x25] = uVar5;
      puVar9[0x26] = uVar6;
      puVar9[0x27] = uVar18;
      puVar9[0x28] = uVar8;
      puVar9[0x29] = uVar14;
      uVar5 = puVar2[7];
      uVar6 = puVar2[8];
      uVar18 = puVar2[9];
      uVar8 = puVar2[10];
      uVar14 = puVar2[0xb];
      puVar9[0x2a] = puVar2[6];
      puVar9[0x2b] = uVar5;
      puVar9[0x2c] = uVar6;
      puVar9[0x2d] = uVar18;
      puVar9[0x2e] = uVar8;
      puVar9[0x2f] = uVar14;
      uVar5 = 4;
    }
    if (uVar5 < uVar10) {
      iVar12 = uVar5 * 0x30;
      uVar6 = uVar5;
      do {
        puVar7 = param_1 + uVar6 * 0xc;
        puVar9 = param_3 + uVar6 * 0xc;
        uVar18 = puVar7[1];
        uVar8 = puVar7[2];
        uVar14 = puVar7[3];
        uVar19 = puVar7[4];
        uVar20 = puVar7[5];
        *puVar9 = *puVar7;
        puVar9[1] = uVar18;
        puVar9[2] = uVar8;
        puVar9[3] = uVar14;
        puVar9[4] = uVar19;
        puVar9[5] = uVar20;
        uVar18 = puVar7[7];
        uVar8 = puVar7[8];
        uVar14 = puVar7[9];
        uVar19 = puVar7[10];
        uVar20 = puVar7[0xb];
        puVar9[6] = puVar7[6];
        puVar9[7] = uVar18;
        puVar9[8] = uVar8;
        puVar9[9] = uVar14;
        puVar9[10] = uVar19;
        puVar9[0xb] = uVar20;
        uVar18 = param_3[uVar6 * 0xc];
        if (uVar18 < puVar9[-0xc]) {
          local_58 = puVar7[1];
          uStack_54 = puVar7[2];
          uStack_50 = puVar7[3];
          uStack_4c = puVar7[4];
          uStack_48 = puVar7[5];
          local_44 = puVar7[6];
          local_40 = puVar7[7];
          uStack_3c = puVar7[8];
          uStack_38 = puVar7[9];
          uStack_34 = puVar7[10];
          uStack_30 = puVar7[0xb];
          iVar4 = iVar12;
          do {
            puVar15 = (undefined4 *)((int)param_3 + iVar4);
            *puVar15 = puVar15[-0xc];
            puVar15[1] = puVar15[-0xb];
            puVar15[2] = puVar15[-10];
            puVar15[3] = puVar15[-9];
            puVar15[4] = puVar15[-8];
            puVar15[5] = puVar15[-7];
            puVar15[6] = puVar15[-6];
            puVar15[7] = puVar15[-5];
            puVar15[8] = puVar15[-4];
            puVar15[9] = puVar15[-3];
            puVar15[10] = puVar15[-2];
            puVar15[0xb] = puVar15[-1];
            if (iVar4 == 0x30) {
              puVar7 = param_3;
              goto LAB_00b7d278;
            }
            iVar4 = iVar4 + -0x30;
          } while (uVar18 < (uint)puVar15[-0x18]);
          puVar7 = (uint *)((int)param_3 + iVar4);
LAB_00b7d278:
          *puVar7 = uVar18;
          puVar7[1] = local_58;
          puVar7[2] = uStack_54;
          puVar7[3] = uStack_50;
          puVar7[4] = uStack_4c;
          puVar7[5] = uStack_48;
          puVar7[6] = local_44;
          puVar7[7] = local_40;
          puVar7[8] = uStack_3c;
          puVar7[9] = uStack_38;
          puVar7[10] = uStack_34;
          puVar7[0xb] = uStack_30;
        }
        iVar12 = iVar12 + 0x30;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar10);
    }
    puVar7 = param_3 + uVar10 * 0xc;
    if (uVar5 < param_2 - uVar10) {
      local_5c = 0x30;
      uVar6 = uVar5;
      local_64 = puVar7;
      do {
        puVar3 = param_1 + uVar10 * 0xc + uVar6 * 0xc;
        puVar9 = puVar7 + uVar6 * 0xc;
        uVar18 = puVar3[1];
        uVar8 = puVar3[2];
        uVar14 = puVar3[3];
        uVar19 = puVar3[4];
        uVar20 = puVar3[5];
        *puVar9 = *puVar3;
        puVar9[1] = uVar18;
        puVar9[2] = uVar8;
        puVar9[3] = uVar14;
        puVar9[4] = uVar19;
        puVar9[5] = uVar20;
        uVar18 = puVar3[7];
        uVar8 = puVar3[8];
        uVar14 = puVar3[9];
        uVar19 = puVar3[10];
        uVar20 = puVar3[0xb];
        puVar9[6] = puVar3[6];
        puVar9[7] = uVar18;
        puVar9[8] = uVar8;
        puVar9[9] = uVar14;
        puVar9[10] = uVar19;
        puVar9[0xb] = uVar20;
        uVar18 = puVar7[uVar6 * 0xc];
        if (uVar18 < puVar9[-0xc]) {
          local_58 = puVar3[1];
          uStack_54 = puVar3[2];
          uStack_50 = puVar3[3];
          uStack_4c = puVar3[4];
          uStack_48 = puVar3[5];
          local_44 = puVar3[6];
          local_40 = puVar3[7];
          uStack_3c = puVar3[8];
          uStack_38 = puVar3[9];
          uStack_34 = puVar3[10];
          uStack_30 = puVar3[0xb];
          iVar12 = local_5c;
          puVar9 = local_64;
          do {
            puVar3 = puVar9 + uVar5 * 0xc;
            *puVar3 = puVar3[-0xc];
            puVar3[1] = puVar3[-0xb];
            puVar3[2] = puVar3[-10];
            puVar3[3] = puVar3[-9];
            puVar3[4] = puVar3[-8];
            puVar3[5] = puVar3[-7];
            puVar3[6] = puVar3[-6];
            puVar3[7] = puVar3[-5];
            puVar3[8] = puVar3[-4];
            puVar3[9] = puVar3[-3];
            puVar3[10] = puVar3[-2];
            puVar3[0xb] = puVar3[-1];
            if (uVar5 * 0x30 == iVar12) {
              puVar9 = puVar7;
              goto LAB_00b7d3a0;
            }
            iVar12 = iVar12 + 0x30;
            puVar9 = puVar9 + -0xc;
          } while (uVar18 < puVar3[-0x18]);
          puVar9 = puVar9 + uVar5 * 0xc;
LAB_00b7d3a0:
          *puVar9 = uVar18;
          puVar9[1] = local_58;
          puVar9[2] = uStack_54;
          puVar9[3] = uStack_50;
          puVar9[4] = uStack_4c;
          puVar9[5] = uStack_48;
          puVar9[6] = local_44;
          puVar9[7] = local_40;
          puVar9[8] = uStack_3c;
          puVar9[9] = uStack_38;
          puVar9[10] = uStack_34;
          puVar9[0xb] = uStack_30;
        }
        local_5c = local_5c + -0x30;
        uVar6 = uVar6 + 1;
        local_64 = local_64 + 0xc;
      } while (uVar6 != param_2 - uVar10);
    }
    puVar9 = param_3 + param_2 * 0xc + -0xc;
    puVar3 = puVar7 + -0xc;
    iVar12 = 0;
    do {
      bVar21 = *puVar7 < *param_3;
      puVar16 = param_3;
      if (bVar21) {
        puVar16 = puVar7;
      }
      puVar11 = (uint *)((int)param_1 + iVar12);
      uVar5 = puVar16[1];
      uVar6 = puVar16[2];
      uVar18 = puVar16[3];
      uVar8 = puVar16[4];
      uVar14 = puVar16[5];
      *puVar11 = *puVar16;
      puVar11[1] = uVar5;
      puVar11[2] = uVar6;
      puVar11[3] = uVar18;
      puVar11[4] = uVar8;
      puVar11[5] = uVar14;
      uVar5 = puVar16[7];
      uVar6 = puVar16[8];
      uVar18 = puVar16[9];
      uVar8 = puVar16[10];
      uVar14 = puVar16[0xb];
      puVar11[6] = puVar16[6];
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      puVar11[9] = uVar18;
      puVar11[10] = uVar8;
      puVar11[0xb] = uVar14;
      puVar11 = (uint *)((int)param_1 + ((param_2 * 0x30 + -0x30) - iVar12));
      bVar22 = *puVar9 < *puVar3;
      puVar16 = puVar9;
      if (bVar22) {
        puVar16 = puVar3;
      }
      uVar5 = puVar16[1];
      uVar6 = puVar16[2];
      uVar18 = puVar16[3];
      uVar8 = puVar16[4];
      uVar14 = puVar16[5];
      *puVar11 = *puVar16;
      puVar11[1] = uVar5;
      puVar11[2] = uVar6;
      puVar11[3] = uVar18;
      puVar11[4] = uVar8;
      puVar11[5] = uVar14;
      uVar5 = puVar16[7];
      uVar6 = puVar16[8];
      uVar18 = puVar16[9];
      uVar8 = puVar16[10];
      uVar14 = puVar16[0xb];
      puVar11[6] = puVar16[6];
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      puVar11[9] = uVar18;
      puVar11[10] = uVar8;
      puVar11[0xb] = uVar14;
      param_3 = param_3 + ((uint)!bVar21 | (uint)!bVar21 << 1) * 4;
      iVar12 = iVar12 + 0x30;
      puVar7 = puVar7 + ((uint)bVar21 | (uint)bVar21 << 1) * 4;
      iVar4 = 0;
      if (bVar22) {
        iVar4 = -1;
      }
      puVar3 = puVar3 + iVar4 * 0xc;
      iVar4 = 0;
      if (!bVar22) {
        iVar4 = -1;
      }
      uVar10 = uVar10 - 1;
      puVar16 = (uint *)(iVar4 * 3);
      puVar9 = puVar9 + iVar4 * 0xc;
    } while (uVar10 != 0);
    puVar3 = puVar3 + 0xc;
    if ((param_2 & 1) != 0) {
      bVar21 = puVar3 <= param_3;
      puVar16 = puVar7;
      if (!bVar21) {
        puVar16 = param_3;
      }
      param_1 = (uint *)((int)param_1 + iVar12);
      uVar10 = puVar16[1];
      uVar5 = puVar16[2];
      uVar6 = puVar16[3];
      uVar18 = puVar16[4];
      uVar8 = puVar16[5];
      *param_1 = *puVar16;
      param_1[1] = uVar10;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar18;
      param_1[5] = uVar8;
      uVar10 = puVar16[7];
      uVar5 = puVar16[8];
      uVar6 = puVar16[9];
      uVar18 = puVar16[10];
      uVar8 = puVar16[0xb];
      param_1[6] = puVar16[6];
      param_1[7] = uVar10;
      param_1[8] = uVar5;
      param_1[9] = uVar6;
      param_1[10] = uVar18;
      param_1[0xb] = uVar8;
      puVar16 = (uint *)((uint)!bVar21 | (uint)!bVar21 << 1);
      puVar7 = puVar7 + ((uint)bVar21 | (uint)bVar21 << 1) * 4;
      param_3 = param_3 + (int)puVar16 * 4;
    }
    if (param_3 == puVar3) {
      puVar16 = puVar9 + 0xc;
    }
    if (param_3 != puVar3 || puVar7 != puVar16) {
      FUN_00fb7254();
LAB_00b7d630:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb7d630);
      (*pcVar1)();
    }
  }
  return;
}

