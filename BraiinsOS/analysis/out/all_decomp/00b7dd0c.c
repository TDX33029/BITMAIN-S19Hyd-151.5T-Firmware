// FUN_00b7dd0c @ 00b7dd0c size=2592 calls_out=7 calls_in=2
// strings: 

void FUN_00b7dd0c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  bool bVar23;
  uint *local_60;
  uint *local_54;
  int local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (&DAT_00000020 < param_2) {
    local_60 = param_6;
    do {
      puVar7 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00b7d724(param_1,puVar7,param_3,param_4,1);
          return;
        }
        puVar4 = param_1 + ((uint)puVar7 >> 3) * 0x20;
        if (&DAT_0000003f < puVar7) {
          puVar4 = (uint *)FUN_00b7e754(param_1,puVar4);
        }
        else {
          uVar21 = param_1[(((uint)puVar7 >> 3) * 8 - ((uint)puVar7 >> 3)) * 8];
          uVar2 = *puVar4;
          uVar12 = *param_1;
          if (uVar12 < uVar2 != uVar2 < uVar21) {
            puVar4 = param_1 + (((uint)puVar7 >> 3) * 8 - ((uint)puVar7 >> 3)) * 8;
          }
          if (uVar12 < uVar2 != uVar12 < uVar21) {
            puVar4 = param_1;
          }
        }
        local_48 = *puVar4;
        uStack_44 = puVar4[1];
        uStack_40 = puVar4[2];
        local_3c = puVar4[3];
        param_5 = param_5 + -1;
        local_38 = puVar4[4];
        uStack_34 = puVar4[5];
        uStack_30 = puVar4[6];
        uStack_2c = puVar4[7];
        puVar3 = (uint *)((uint)((int)puVar4 - (int)param_1) >> 5);
        if ((local_60 != (uint *)0x0) && (*puVar4 <= *local_60)) break;
        if (param_4 < puVar7) goto LAB_00b7e710;
        puVar5 = param_3 + (int)puVar7 * 8;
        param_2 = (uint *)0x0;
        puVar22 = param_1 + (int)puVar3 * 8;
        puVar20 = param_1;
        puVar14 = param_1;
        puVar6 = puVar3;
        if (puVar22 <= param_1) goto LAB_00b7e120;
LAB_00b7e0e0:
        do {
          puVar14 = puVar20 + 8;
          puVar5 = puVar5 + -8;
          uVar21 = puVar20[1];
          uVar2 = puVar20[2];
          uVar12 = puVar20[3];
          puVar11 = puVar5;
          if (*puVar20 < *puVar4) {
            puVar11 = param_3;
          }
          puVar11 = puVar11 + (int)param_2 * 8;
          if (*puVar20 < *puVar4) {
            param_2 = (uint *)((int)param_2 + 1);
          }
          *puVar11 = *puVar20;
          puVar11[1] = uVar21;
          puVar11[2] = uVar2;
          puVar11[3] = uVar12;
          uVar21 = puVar20[5];
          uVar2 = puVar20[6];
          uVar12 = puVar20[7];
          puVar11[4] = puVar20[4];
          puVar11[5] = uVar21;
          puVar11[6] = uVar2;
          puVar11[7] = uVar12;
          puVar20 = puVar14;
        } while (puVar14 < puVar22);
LAB_00b7e120:
        if (puVar6 != puVar7) goto code_r0x00b7e128;
        FUN_016dd1aa(param_1,param_3,(int)param_2 << 5);
        iVar18 = (int)puVar7 - (int)param_2;
        if (iVar18 != 0) {
          puVar20 = param_1 + (int)param_2 * 8;
          iVar8 = iVar18;
          puVar14 = param_3 + (int)puVar7 * 8 + -8;
          do {
            uVar21 = puVar14[1];
            uVar2 = puVar14[2];
            uVar12 = puVar14[3];
            iVar8 = iVar8 + -1;
            *puVar20 = *puVar14;
            puVar20[1] = uVar21;
            puVar20[2] = uVar2;
            puVar20[3] = uVar12;
            uVar21 = puVar14[5];
            uVar2 = puVar14[6];
            uVar12 = puVar14[7];
            puVar20[4] = puVar14[4];
            puVar20[5] = uVar21;
            puVar20[6] = uVar2;
            puVar20[7] = uVar12;
            puVar20 = puVar20 + 8;
            puVar14 = puVar14 + -8;
          } while (iVar8 != 0);
        }
        if (param_2 == (uint *)0x0) break;
        if (puVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b7dd0c(param_1 + (int)param_2 * 8,iVar18,param_3,param_4,param_5,&local_48);
        puVar7 = param_2;
        if (param_2 < &DAT_00000021) goto LAB_00b7dd30;
      }
      if (param_4 < puVar7) goto LAB_00b7e710;
      puVar20 = param_3 + (int)puVar7 * 8;
      puVar14 = (uint *)0x0;
      puVar6 = param_1;
      while( true ) {
        for (puVar5 = puVar6; puVar5 < param_1 + (int)puVar3 * 8; puVar5 = puVar5 + 8) {
          puVar20 = puVar20 + -8;
          uVar9 = *puVar5;
          uVar2 = *puVar4;
          uVar21 = puVar5[1];
          uVar12 = puVar5[2];
          uVar15 = puVar5[3];
          puVar6 = puVar20;
          if (uVar9 <= uVar2) {
            puVar6 = param_3;
          }
          puVar6 = puVar6 + (int)puVar14 * 8;
          *puVar6 = *puVar5;
          puVar6[1] = uVar21;
          puVar6[2] = uVar12;
          puVar6[3] = uVar15;
          if (uVar9 <= uVar2) {
            puVar14 = (uint *)((int)puVar14 + 1);
          }
          uVar21 = puVar5[5];
          uVar2 = puVar5[6];
          uVar12 = puVar5[7];
          puVar6[4] = puVar5[4];
          puVar6[5] = uVar21;
          puVar6[6] = uVar2;
          puVar6[7] = uVar12;
        }
        if (puVar3 == puVar7) break;
        uVar21 = puVar5[1];
        uVar2 = puVar5[2];
        uVar12 = puVar5[3];
        puVar6 = puVar5 + 8;
        puVar3 = param_3 + (int)puVar14 * 8;
        puVar14 = (uint *)((int)puVar14 + 1);
        *puVar3 = *puVar5;
        puVar3[1] = uVar21;
        puVar3[2] = uVar2;
        puVar3[3] = uVar12;
        puVar20 = puVar20 + -8;
        uVar21 = puVar5[5];
        uVar2 = puVar5[6];
        uVar12 = puVar5[7];
        puVar3[4] = puVar5[4];
        puVar3[5] = uVar21;
        puVar3[6] = uVar2;
        puVar3[7] = uVar12;
        puVar3 = puVar7;
      }
      FUN_016dd1aa(param_1,param_3,(int)puVar14 << 5);
      param_2 = (uint *)((int)puVar7 - (int)puVar14);
      if (param_2 == (uint *)0x0) {
        return;
      }
      param_1 = param_1 + (int)puVar14 * 8;
      puVar4 = param_3 + (int)puVar7 * 8 + -8;
      puVar3 = param_1;
      puVar20 = param_2;
      do {
        uVar21 = puVar4[1];
        uVar2 = puVar4[2];
        uVar12 = puVar4[3];
        puVar20 = (uint *)((int)puVar20 + -1);
        *puVar3 = *puVar4;
        puVar3[1] = uVar21;
        puVar3[2] = uVar2;
        puVar3[3] = uVar12;
        uVar21 = puVar4[5];
        uVar2 = puVar4[6];
        uVar12 = puVar4[7];
        puVar3[4] = puVar4[4];
        puVar3[5] = uVar21;
        puVar3[6] = uVar2;
        puVar3[7] = uVar12;
        puVar4 = puVar4 + -8;
        puVar3 = puVar3 + 8;
      } while (puVar20 != (uint *)0x0);
      if (puVar7 < puVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(puVar14,puVar7,puVar7,&DAT_018af348);
      }
      local_60 = (uint *)0x0;
    } while (&DAT_00000020 < param_2);
  }
LAB_00b7dd30:
  uVar21 = (uint)param_2 >> 1;
  if (uVar21 != 0) {
    if (param_2 < &DAT_00000008) {
      uVar2 = param_1[1];
      uVar12 = param_1[2];
      uVar9 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar2;
      param_3[2] = uVar12;
      param_3[3] = uVar9;
      uVar2 = param_1[5];
      uVar12 = param_1[6];
      uVar9 = param_1[7];
      param_3[4] = param_1[4];
      param_3[5] = uVar2;
      param_3[6] = uVar12;
      param_3[7] = uVar9;
      puVar7 = param_1 + uVar21 * 8;
      puVar4 = param_3 + uVar21 * 8;
      uVar2 = puVar7[1];
      uVar12 = puVar7[2];
      uVar9 = puVar7[3];
      *puVar4 = *puVar7;
      puVar4[1] = uVar2;
      puVar4[2] = uVar12;
      puVar4[3] = uVar9;
      uVar2 = puVar7[5];
      uVar12 = puVar7[6];
      uVar9 = puVar7[7];
      puVar4[4] = puVar7[4];
      puVar4[5] = uVar2;
      puVar4[6] = uVar12;
      puVar4[7] = uVar9;
      uVar2 = 1;
    }
    else {
      uVar9 = (uint)(*param_1 <= param_1[8]);
      uVar15 = (uint)(*param_1 > param_1[8]);
      uVar12 = 3;
      uVar2 = 2;
      if (param_1[0x18] < param_1[0x10]) {
        uVar12 = 2;
      }
      puVar7 = param_1 + uVar12 * 8;
      if (param_1[0x18] < param_1[0x10]) {
        uVar2 = 3;
      }
      puVar14 = param_1 + uVar15 * 8;
      uVar13 = *puVar14;
      uVar19 = 2;
      puVar20 = param_1 + uVar2 * 8;
      uVar10 = *puVar20;
      puVar4 = param_1 + uVar9 * 8;
      puVar3 = puVar20;
      uVar17 = uVar2;
      if (uVar10 < uVar13) {
        puVar3 = puVar4;
        uVar17 = uVar9;
      }
      puVar6 = puVar20;
      if (*puVar4 <= *puVar7) {
        uVar2 = uVar9;
        puVar6 = puVar4;
        puVar4 = puVar7;
        puVar7 = puVar3;
        uVar12 = uVar17;
      }
      if (uVar10 < uVar13) {
        uVar2 = uVar15;
      }
      else {
        puVar20 = puVar14;
      }
      uVar2 = param_1[uVar2 * 8];
      if (uVar10 < uVar13) {
        puVar6 = puVar14;
      }
      uVar12 = param_1[uVar12 * 8];
      uVar9 = puVar20[1];
      uVar15 = puVar20[2];
      uVar17 = puVar20[3];
      *param_3 = *puVar20;
      param_3[1] = uVar9;
      param_3[2] = uVar15;
      param_3[3] = uVar17;
      uVar9 = puVar20[5];
      uVar15 = puVar20[6];
      uVar17 = puVar20[7];
      param_3[4] = puVar20[4];
      param_3[5] = uVar9;
      param_3[6] = uVar15;
      param_3[7] = uVar17;
      puVar3 = puVar6;
      if (uVar12 < uVar2) {
        puVar3 = puVar7;
      }
      uVar9 = puVar3[1];
      uVar15 = puVar3[2];
      uVar17 = puVar3[3];
      if (uVar12 >= uVar2) {
        puVar6 = puVar7;
      }
      param_3[8] = *puVar3;
      param_3[9] = uVar9;
      param_3[10] = uVar15;
      param_3[0xb] = uVar17;
      uVar2 = puVar3[5];
      uVar12 = puVar3[6];
      uVar9 = puVar3[7];
      param_3[0xc] = puVar3[4];
      param_3[0xd] = uVar2;
      param_3[0xe] = uVar12;
      param_3[0xf] = uVar9;
      uVar2 = puVar6[1];
      uVar12 = puVar6[2];
      uVar9 = puVar6[3];
      param_3[0x10] = *puVar6;
      param_3[0x11] = uVar2;
      param_3[0x12] = uVar12;
      param_3[0x13] = uVar9;
      uVar2 = puVar6[5];
      uVar12 = puVar6[6];
      uVar9 = puVar6[7];
      param_3[0x14] = puVar6[4];
      param_3[0x15] = uVar2;
      param_3[0x16] = uVar12;
      param_3[0x17] = uVar9;
      uVar2 = puVar4[1];
      uVar12 = puVar4[2];
      uVar9 = puVar4[3];
      param_3[0x18] = *puVar4;
      param_3[0x19] = uVar2;
      param_3[0x1a] = uVar12;
      param_3[0x1b] = uVar9;
      uVar2 = puVar4[5];
      uVar12 = puVar4[6];
      uVar9 = puVar4[7];
      param_3[0x1c] = puVar4[4];
      param_3[0x1d] = uVar2;
      param_3[0x1e] = uVar12;
      param_3[0x1f] = uVar9;
      puVar4 = param_1 + uVar21 * 8;
      uVar12 = (uint)(puVar4[8] < *puVar4);
      uVar15 = (uint)(puVar4[8] >= *puVar4);
      puVar7 = puVar4 + uVar12 * 8;
      uVar9 = *puVar7;
      uVar2 = 3;
      if (puVar4[0x18] < puVar4[0x10]) {
        uVar2 = 2;
      }
      puVar3 = puVar4 + uVar2 * 8;
      if (puVar4[0x18] < puVar4[0x10]) {
        uVar19 = 3;
      }
      puVar6 = puVar4 + uVar19 * 8;
      uVar10 = *puVar6;
      puVar14 = puVar4 + uVar15 * 8;
      uVar17 = uVar19;
      puVar20 = puVar6;
      if (uVar10 < uVar9) {
        uVar17 = uVar15;
        puVar20 = puVar14;
      }
      puVar5 = puVar6;
      if (*puVar14 <= *puVar3) {
        uVar19 = uVar15;
        puVar5 = puVar14;
        puVar14 = puVar3;
        puVar3 = puVar20;
        uVar2 = uVar17;
      }
      if (uVar9 > uVar10) {
        uVar19 = uVar12;
      }
      uVar12 = puVar4[uVar19 * 8];
      uVar2 = puVar4[uVar2 * 8];
      if (uVar9 <= uVar10) {
        puVar6 = puVar7;
      }
      else {
        puVar5 = puVar7;
      }
      uVar9 = puVar6[1];
      uVar15 = puVar6[2];
      uVar17 = puVar6[3];
      puVar7 = param_3 + uVar21 * 8;
      *puVar7 = *puVar6;
      puVar7[1] = uVar9;
      puVar7[2] = uVar15;
      puVar7[3] = uVar17;
      uVar9 = puVar6[5];
      uVar15 = puVar6[6];
      uVar17 = puVar6[7];
      puVar7[4] = puVar6[4];
      puVar7[5] = uVar9;
      puVar7[6] = uVar15;
      puVar7[7] = uVar17;
      if (uVar2 < uVar12) {
        puVar4 = puVar5;
        puVar5 = puVar3;
      }
      else {
        puVar4 = puVar3;
      }
      uVar2 = puVar5[1];
      uVar12 = puVar5[2];
      uVar9 = puVar5[3];
      puVar7[8] = *puVar5;
      puVar7[9] = uVar2;
      puVar7[10] = uVar12;
      puVar7[0xb] = uVar9;
      uVar2 = puVar5[5];
      uVar12 = puVar5[6];
      uVar9 = puVar5[7];
      puVar7[0xc] = puVar5[4];
      puVar7[0xd] = uVar2;
      puVar7[0xe] = uVar12;
      puVar7[0xf] = uVar9;
      uVar2 = puVar4[1];
      uVar12 = puVar4[2];
      uVar9 = puVar4[3];
      puVar7[0x10] = *puVar4;
      puVar7[0x11] = uVar2;
      puVar7[0x12] = uVar12;
      puVar7[0x13] = uVar9;
      uVar2 = puVar4[5];
      uVar12 = puVar4[6];
      uVar9 = puVar4[7];
      puVar7[0x14] = puVar4[4];
      puVar7[0x15] = uVar2;
      puVar7[0x16] = uVar12;
      puVar7[0x17] = uVar9;
      uVar2 = puVar14[1];
      uVar12 = puVar14[2];
      uVar9 = puVar14[3];
      puVar7[0x18] = *puVar14;
      puVar7[0x19] = uVar2;
      puVar7[0x1a] = uVar12;
      puVar7[0x1b] = uVar9;
      uVar2 = puVar14[5];
      uVar12 = puVar14[6];
      uVar9 = puVar14[7];
      puVar7[0x1c] = puVar14[4];
      puVar7[0x1d] = uVar2;
      puVar7[0x1e] = uVar12;
      puVar7[0x1f] = uVar9;
      uVar2 = 4;
    }
    if (uVar2 < uVar21) {
      iVar18 = uVar2 << 5;
      uVar12 = uVar2;
      do {
        puVar4 = param_1 + uVar12 * 8;
        puVar7 = param_3 + uVar12 * 8;
        uVar9 = puVar4[1];
        uVar15 = puVar4[2];
        uVar17 = puVar4[3];
        *puVar7 = *puVar4;
        puVar7[1] = uVar9;
        puVar7[2] = uVar15;
        puVar7[3] = uVar17;
        uVar9 = puVar4[5];
        uVar15 = puVar4[6];
        uVar17 = puVar4[7];
        puVar7[4] = puVar4[4];
        puVar7[5] = uVar9;
        puVar7[6] = uVar15;
        puVar7[7] = uVar17;
        uVar9 = param_3[uVar12 * 8];
        if (uVar9 < puVar7[-8]) {
          local_48 = puVar4[1];
          uStack_44 = puVar4[2];
          uStack_40 = puVar4[3];
          local_3c = puVar4[4];
          local_38 = puVar4[5];
          uStack_34 = puVar4[6];
          uStack_30 = puVar4[7];
          iVar8 = iVar18;
          do {
            puVar16 = (undefined4 *)((int)param_3 + iVar8);
            *puVar16 = puVar16[-8];
            puVar16[1] = puVar16[-7];
            puVar16[2] = puVar16[-6];
            puVar16[3] = puVar16[-5];
            puVar16[4] = puVar16[-4];
            puVar16[5] = puVar16[-3];
            puVar16[6] = puVar16[-2];
            puVar16[7] = puVar16[-1];
            if (iVar8 == 0x20) {
              puVar7 = param_3;
              goto LAB_00b7e3d0;
            }
            iVar8 = iVar8 + -0x20;
          } while (uVar9 < (uint)puVar16[-0x10]);
          puVar7 = (uint *)((int)param_3 + iVar8);
LAB_00b7e3d0:
          *puVar7 = uVar9;
          puVar7[1] = local_48;
          puVar7[2] = uStack_44;
          puVar7[3] = uStack_40;
          puVar7[4] = local_3c;
          puVar7[5] = local_38;
          puVar7[6] = uStack_34;
          puVar7[7] = uStack_30;
        }
        uVar12 = uVar12 + 1;
        iVar18 = iVar18 + 0x20;
      } while (uVar12 != uVar21);
    }
    puVar7 = param_3 + uVar21 * 8;
    if (uVar2 < (int)param_2 - uVar21) {
      local_4c = 0x20;
      uVar12 = uVar2;
      local_54 = puVar7;
      do {
        puVar3 = puVar7 + uVar12 * 8;
        puVar4 = param_1 + uVar21 * 8 + uVar12 * 8;
        uVar9 = puVar4[1];
        uVar15 = puVar4[2];
        uVar17 = puVar4[3];
        *puVar3 = *puVar4;
        puVar3[1] = uVar9;
        puVar3[2] = uVar15;
        puVar3[3] = uVar17;
        uVar9 = puVar4[5];
        uVar15 = puVar4[6];
        uVar17 = puVar4[7];
        puVar3[4] = puVar4[4];
        puVar3[5] = uVar9;
        puVar3[6] = uVar15;
        puVar3[7] = uVar17;
        uVar9 = puVar7[uVar12 * 8];
        if (uVar9 < puVar3[-8]) {
          local_48 = puVar4[1];
          uStack_44 = puVar4[2];
          uStack_40 = puVar4[3];
          local_3c = puVar4[4];
          local_38 = puVar4[5];
          uStack_34 = puVar4[6];
          uStack_30 = puVar4[7];
          puVar4 = local_54;
          iVar18 = local_4c;
          do {
            puVar3 = puVar4 + uVar2 * 8;
            *puVar3 = puVar3[-8];
            puVar3[1] = puVar3[-7];
            puVar3[2] = puVar3[-6];
            puVar3[3] = puVar3[-5];
            puVar3[4] = puVar3[-4];
            puVar3[5] = puVar3[-3];
            puVar3[6] = puVar3[-2];
            puVar3[7] = puVar3[-1];
            if (uVar2 * 0x20 == iVar18) {
              puVar4 = puVar7;
              goto LAB_00b7e4cc;
            }
            iVar18 = iVar18 + 0x20;
            puVar4 = puVar4 + -8;
          } while (uVar9 < puVar3[-0x10]);
          puVar4 = puVar4 + uVar2 * 8;
LAB_00b7e4cc:
          *puVar4 = uVar9;
          puVar4[1] = local_48;
          puVar4[2] = uStack_44;
          puVar4[3] = uStack_40;
          puVar4[4] = local_3c;
          puVar4[5] = local_38;
          puVar4[6] = uStack_34;
          puVar4[7] = uStack_30;
        }
        uVar12 = uVar12 + 1;
        local_4c = local_4c + -0x20;
        local_54 = local_54 + 8;
      } while (uVar12 != (int)param_2 - uVar21);
    }
    puVar4 = puVar7 + -8;
    iVar18 = 0;
    puVar3 = param_3 + (int)param_2 * 8 + -8;
    do {
      bVar23 = *puVar7 < *param_3;
      puVar20 = param_3;
      if (bVar23) {
        puVar20 = puVar7;
      }
      puVar14 = (uint *)((int)param_1 + iVar18);
      uVar2 = puVar20[1];
      uVar12 = puVar20[2];
      uVar9 = puVar20[3];
      *puVar14 = *puVar20;
      puVar14[1] = uVar2;
      puVar14[2] = uVar12;
      puVar14[3] = uVar9;
      uVar2 = puVar20[5];
      uVar12 = puVar20[6];
      uVar9 = puVar20[7];
      puVar14[4] = puVar20[4];
      puVar14[5] = uVar2;
      puVar14[6] = uVar12;
      puVar14[7] = uVar9;
      param_3 = param_3 + (uint)!bVar23 * 8;
      puVar7 = puVar7 + (uint)bVar23 * 8;
      bVar23 = *puVar3 < *puVar4;
      puVar20 = puVar3;
      if (bVar23) {
        puVar20 = puVar4;
      }
      puVar14 = (uint *)((int)param_1 + (((int)param_2 * 0x20 + -0x20) - iVar18));
      uVar2 = puVar20[1];
      uVar12 = puVar20[2];
      uVar9 = puVar20[3];
      iVar18 = iVar18 + 0x20;
      *puVar14 = *puVar20;
      puVar14[1] = uVar2;
      puVar14[2] = uVar12;
      puVar14[3] = uVar9;
      uVar2 = puVar20[5];
      uVar12 = puVar20[6];
      uVar9 = puVar20[7];
      puVar14[4] = puVar20[4];
      puVar14[5] = uVar2;
      puVar14[6] = uVar12;
      puVar14[7] = uVar9;
      iVar8 = 0;
      if (bVar23) {
        iVar8 = -1;
      }
      puVar4 = puVar4 + iVar8 * 8;
      iVar8 = 0;
      if (!bVar23) {
        iVar8 = -1;
      }
      uVar21 = uVar21 - 1;
      puVar3 = puVar3 + iVar8 * 8;
    } while (uVar21 != 0);
    puVar4 = puVar4 + 8;
    if (((uint)param_2 & 1) != 0) {
      bVar23 = puVar4 <= param_3;
      puVar20 = puVar7;
      if (!bVar23) {
        puVar20 = param_3;
      }
      uVar21 = puVar20[1];
      uVar2 = puVar20[2];
      uVar12 = puVar20[3];
      param_1 = (uint *)((int)param_1 + iVar18);
      *param_1 = *puVar20;
      param_1[1] = uVar21;
      param_1[2] = uVar2;
      param_1[3] = uVar12;
      uVar21 = puVar20[5];
      uVar2 = puVar20[6];
      uVar12 = puVar20[7];
      puVar7 = puVar7 + (uint)bVar23 * 8;
      param_1[4] = puVar20[4];
      param_1[5] = uVar21;
      param_1[6] = uVar2;
      param_1[7] = uVar12;
      param_2 = (uint *)(uint)!bVar23;
      param_3 = param_3 + (int)param_2 * 8;
    }
    if (param_3 == puVar4) {
      param_2 = puVar3 + 8;
    }
    if (param_3 != puVar4 || puVar7 != param_2) {
      FUN_00fb7254();
LAB_00b7e710:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb7e710);
      (*pcVar1)();
    }
  }
  return;
code_r0x00b7e128:
  puVar5 = puVar5 + -8;
  uVar21 = puVar14[1];
  uVar2 = puVar14[2];
  uVar12 = puVar14[3];
  puVar6 = puVar5 + (int)param_2 * 8;
  puVar20 = puVar14 + 8;
  *puVar6 = *puVar14;
  puVar6[1] = uVar21;
  puVar6[2] = uVar2;
  puVar6[3] = uVar12;
  uVar21 = puVar14[5];
  uVar2 = puVar14[6];
  uVar12 = puVar14[7];
  puVar6[4] = puVar14[4];
  puVar6[5] = uVar21;
  puVar6[6] = uVar2;
  puVar6[7] = uVar12;
  puVar22 = param_1 + (int)puVar7 * 8;
  puVar14 = puVar20;
  puVar6 = puVar7;
  if (puVar20 < puVar22) goto LAB_00b7e0e0;
  goto LAB_00b7e120;
}

