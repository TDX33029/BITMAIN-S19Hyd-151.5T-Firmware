// FUN_00b89a34 @ 00b89a34 size=2832 calls_out=8 calls_in=2
// strings: 

void FUN_00b89a34(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  uint *local_48;
  int local_40;
  uint local_38 [2];
  undefined8 local_30;
  
  if (0x20 < param_2) {
    local_48 = param_6;
    uVar11 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_00b894a0(param_1,uVar11,param_3,param_4,1);
          return;
        }
        puVar4 = param_1 + (uVar11 >> 3) * 0x10;
        if (uVar11 < 0x40) {
          uVar3 = param_1[((uVar11 >> 3) * 8 - (uVar11 >> 3)) * 4];
          uVar16 = *puVar4;
          uVar14 = *param_1;
          if (uVar14 < uVar16 != uVar16 < uVar3) {
            puVar4 = param_1 + ((uVar11 >> 3) * 8 - (uVar11 >> 3)) * 4;
          }
          if (uVar14 < uVar16 != uVar14 < uVar3) {
            puVar4 = param_1;
          }
        }
        else {
          puVar4 = (uint *)FUN_00b8aa14(param_1,puVar4);
        }
        local_38[0] = *puVar4;
        local_30 = *(undefined8 *)(puVar4 + 2);
        param_5 = param_5 + -1;
        uVar3 = (uint)((int)puVar4 - (int)param_1) >> 4;
        if ((local_48 == (uint *)0x0) || (*local_48 < local_38[0])) break;
LAB_00b89d98:
        if (param_4 < uVar11) goto LAB_00b8a52c;
        puVar5 = param_3 + uVar11 * 4;
        uVar16 = 0;
        puVar8 = param_1;
        while( true ) {
          iVar15 = uVar3 - 3;
          if (uVar3 < 3) {
            iVar15 = 0;
          }
          while (puVar8 < param_1 + iVar15 * 4) {
            uVar18 = *puVar8;
            uVar20 = puVar8[1];
            uVar14 = *puVar4;
            uVar19 = puVar8[2];
            puVar6 = param_3;
            if (uVar14 < uVar18) {
              puVar6 = puVar5 + -4;
            }
            uVar17 = puVar8[3];
            puVar6 = puVar6 + uVar16 * 4;
            *puVar6 = uVar18;
            if (uVar14 >= uVar18) {
              uVar16 = uVar16 + 1;
            }
            uVar18 = puVar8[5];
            puVar6[1] = uVar20;
            puVar6[2] = uVar19;
            puVar6[3] = uVar17;
            uVar14 = puVar8[4];
            uVar19 = *puVar4;
            uVar20 = puVar8[7];
            puVar6 = param_3;
            if (uVar19 < uVar14) {
              puVar6 = puVar5 + -8;
            }
            uVar17 = puVar8[6];
            puVar6 = puVar6 + uVar16 * 4;
            *puVar6 = puVar8[4];
            if (uVar19 >= uVar14) {
              uVar16 = uVar16 + 1;
            }
            puVar6[1] = uVar18;
            puVar6[2] = uVar17;
            puVar6[3] = uVar20;
            uVar14 = puVar8[8];
            uVar18 = puVar8[9];
            uVar19 = *puVar4;
            uVar20 = puVar8[0xb];
            puVar6 = param_3;
            if (uVar19 < uVar14) {
              puVar6 = puVar5 + -0xc;
            }
            uVar17 = puVar8[10];
            puVar5 = puVar5 + -0x10;
            puVar6 = puVar6 + uVar16 * 4;
            *puVar6 = puVar8[8];
            if (uVar19 >= uVar14) {
              uVar16 = uVar16 + 1;
            }
            puVar6[1] = uVar18;
            puVar6[2] = uVar17;
            puVar6[3] = uVar20;
            uVar14 = puVar8[0xc];
            uVar18 = *puVar4;
            uVar19 = puVar8[0xd];
            puVar6 = puVar5;
            if (uVar14 <= uVar18) {
              puVar6 = param_3;
            }
            puVar7 = puVar8 + 0xc;
            uVar17 = puVar8[0xe];
            uVar20 = puVar8[0xf];
            puVar8 = puVar8 + 0x10;
            puVar6 = puVar6 + uVar16 * 4;
            *puVar6 = *puVar7;
            if (uVar14 <= uVar18) {
              uVar16 = uVar16 + 1;
            }
            puVar6[1] = uVar19;
            puVar6[2] = uVar17;
            puVar6[3] = uVar20;
          }
          for (; puVar8 < param_1 + uVar3 * 4; puVar8 = puVar8 + 4) {
            uVar18 = *puVar8;
            uVar20 = puVar8[1];
            puVar5 = puVar5 + -4;
            uVar14 = *puVar4;
            uVar19 = puVar8[2];
            puVar6 = puVar5;
            if (uVar18 <= uVar14) {
              puVar6 = param_3;
            }
            uVar17 = puVar8[3];
            puVar6 = puVar6 + uVar16 * 4;
            *puVar6 = uVar18;
            if (uVar18 <= uVar14) {
              uVar16 = uVar16 + 1;
            }
            puVar6[1] = uVar20;
            puVar6[2] = uVar19;
            puVar6[3] = uVar17;
          }
          if (uVar3 == uVar11) break;
          uVar3 = *puVar8;
          uVar14 = puVar8[1];
          uVar19 = puVar8[2];
          puVar5 = puVar5 + -4;
          uVar18 = puVar8[3];
          puVar8 = puVar8 + 4;
          puVar6 = param_3 + uVar16 * 4;
          *puVar6 = uVar3;
          uVar16 = uVar16 + 1;
          puVar6[1] = uVar14;
          puVar6[2] = uVar19;
          puVar6[3] = uVar18;
          uVar3 = uVar11;
        }
        FUN_016dd1aa(param_1,param_3,uVar16 << 4);
        param_2 = uVar11 - uVar16;
        if (param_2 == 0) {
          return;
        }
        param_1 = param_1 + uVar16 * 4;
        puVar5 = param_3 + uVar11 * 4 + -4;
        puVar4 = param_1;
        uVar3 = param_2;
        do {
          uVar20 = *puVar5;
          uVar3 = uVar3 - 1;
          uVar18 = puVar5[1];
          uVar14 = puVar5[2];
          uVar19 = puVar5[3];
          puVar5 = puVar5 + -4;
          *puVar4 = uVar20;
          puVar4[1] = uVar18;
          puVar4[2] = uVar14;
          puVar4[3] = uVar19;
          puVar4 = puVar4 + 4;
        } while (uVar3 != 0);
        if (uVar11 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar16,uVar11,uVar11,&DAT_018af348);
        }
        local_48 = (uint *)0x0;
        uVar11 = param_2;
        if (param_2 < 0x21) goto LAB_00b89a54;
      }
      if (param_4 < uVar11) goto LAB_00b8a52c;
      puVar5 = param_3 + uVar11 * 4;
      param_2 = 0;
      puVar8 = param_1;
      uVar16 = uVar3;
      while( true ) {
        iVar15 = uVar16 - 3;
        if (uVar16 < 3) {
          iVar15 = 0;
        }
        for (puVar6 = puVar8; puVar6 < param_1 + iVar15 * 4; puVar6 = puVar6 + 0x10) {
          uVar19 = *puVar6;
          uVar20 = *puVar4;
          uVar14 = puVar6[1];
          uVar18 = puVar6[2];
          puVar8 = param_3;
          if (uVar20 <= uVar19) {
            puVar8 = puVar5 + -4;
          }
          uVar17 = puVar6[3];
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = uVar19;
          if (uVar20 > uVar19) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar14;
          puVar8[2] = uVar18;
          uVar14 = puVar6[4];
          uVar18 = *puVar4;
          puVar8[3] = uVar17;
          puVar8 = param_3;
          if (uVar18 <= uVar14) {
            puVar8 = puVar5 + -8;
          }
          uVar19 = puVar6[5];
          uVar20 = puVar6[7];
          uVar17 = puVar6[6];
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = puVar6[4];
          if (uVar18 > uVar14) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar19;
          puVar8[2] = uVar17;
          puVar8[3] = uVar20;
          uVar14 = puVar6[8];
          uVar18 = puVar6[9];
          uVar20 = *puVar4;
          uVar19 = puVar6[0xb];
          puVar8 = param_3;
          if (uVar20 <= uVar14) {
            puVar8 = puVar5 + -0xc;
          }
          uVar17 = puVar6[10];
          puVar5 = puVar5 + -0x10;
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = puVar6[8];
          if (uVar20 > uVar14) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar18;
          puVar8[2] = uVar17;
          puVar8[3] = uVar19;
          uVar18 = puVar6[0xc];
          uVar14 = *puVar4;
          puVar8 = puVar5;
          if (uVar18 < uVar14) {
            puVar8 = param_3;
          }
          uVar19 = puVar6[0xd];
          uVar20 = puVar6[0xe];
          uVar17 = puVar6[0xf];
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = puVar6[0xc];
          if (uVar18 < uVar14) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar19;
          puVar8[2] = uVar20;
          puVar8[3] = uVar17;
        }
        for (; puVar6 < param_1 + uVar16 * 4; puVar6 = puVar6 + 4) {
          uVar14 = *puVar6;
          uVar20 = puVar6[1];
          puVar5 = puVar5 + -4;
          uVar18 = *puVar4;
          uVar19 = puVar6[2];
          puVar8 = puVar5;
          if (uVar14 < uVar18) {
            puVar8 = param_3;
          }
          uVar17 = puVar6[3];
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = uVar14;
          if (uVar14 < uVar18) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar20;
          puVar8[2] = uVar19;
          puVar8[3] = uVar17;
        }
        if (uVar16 == uVar11) break;
        puVar5 = puVar5 + -4;
        uVar16 = puVar6[1];
        uVar18 = puVar6[2];
        uVar14 = puVar6[3];
        puVar8 = puVar6 + 4;
        puVar7 = puVar5 + param_2 * 4;
        *puVar7 = *puVar6;
        puVar7[1] = uVar16;
        puVar7[2] = uVar18;
        puVar7[3] = uVar14;
        uVar16 = uVar11;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 4);
      iVar15 = uVar11 - param_2;
      if (iVar15 != 0) {
        puVar8 = param_1 + param_2 * 4;
        puVar5 = param_3 + uVar11 * 4 + -4;
        iVar9 = iVar15;
        do {
          uVar18 = *puVar5;
          iVar9 = iVar9 + -1;
          uVar14 = puVar5[1];
          uVar16 = puVar5[2];
          uVar19 = puVar5[3];
          puVar5 = puVar5 + -4;
          *puVar8 = uVar18;
          puVar8[1] = uVar14;
          puVar8[2] = uVar16;
          puVar8[3] = uVar19;
          puVar8 = puVar8 + 4;
        } while (iVar9 != 0);
      }
      if (param_2 == 0) goto LAB_00b89d98;
      if (uVar11 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_00b89a34(param_1 + param_2 * 4,iVar15,param_3,param_4,param_5,local_38);
      uVar11 = param_2;
    } while (0x20 < param_2);
  }
LAB_00b89a54:
  uVar11 = param_2 >> 1;
  if (uVar11 != 0) {
    puVar4 = param_3 + param_2 * 4;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar3 = param_1[1];
        uVar16 = param_1[2];
        uVar18 = param_1[3];
        *param_3 = *param_1;
        param_3[2] = uVar16;
        puVar5 = param_1 + uVar11 * 4;
        uVar14 = *puVar5;
        param_3[3] = uVar18;
        param_3[1] = uVar3;
        uVar16 = puVar5[1];
        uVar18 = puVar5[2];
        uVar3 = puVar5[3];
        puVar5 = param_3 + uVar11 * 4;
        *puVar5 = uVar14;
        puVar5[1] = uVar16;
        puVar5[2] = uVar18;
        puVar5[3] = uVar3;
        uVar3 = 1;
      }
      else {
        uVar3 = (uint)(param_1[4] < *param_1);
        puVar5 = param_1 + uVar3 * 4;
        uVar14 = (uint)(param_1[4] >= *param_1);
        uVar16 = 3;
        if (param_1[0xc] < param_1[8]) {
          uVar16 = 2;
        }
        uVar18 = 2;
        puVar8 = param_1 + uVar16 * 4;
        if (param_1[0xc] < param_1[8]) {
          uVar18 = 3;
        }
        puVar7 = param_1 + uVar18 * 4;
        puVar6 = param_1 + uVar14 * 4;
        puVar10 = puVar7;
        uVar19 = uVar18;
        if (*puVar7 < *puVar5) {
          puVar10 = puVar6;
          uVar19 = uVar14;
        }
        puVar12 = puVar7;
        if (*puVar6 <= *puVar8) {
          uVar18 = uVar14;
          puVar12 = puVar6;
          puVar6 = puVar8;
          puVar8 = puVar10;
          uVar16 = uVar19;
        }
        if (*puVar7 < *puVar5) {
          puVar12 = puVar5;
        }
        else {
          puVar7 = puVar5;
          uVar3 = uVar18;
        }
        uVar14 = puVar7[2];
        uVar19 = *puVar7;
        uVar18 = puVar7[1];
        uVar3 = param_1[uVar3 * 4];
        param_3[3] = puVar7[3];
        uVar16 = param_1[uVar16 * 4];
        param_3[2] = uVar14;
        *param_3 = uVar19;
        if (uVar16 < uVar3) {
          puVar5 = puVar12;
          puVar12 = puVar8;
        }
        else {
          puVar5 = puVar8;
        }
        uVar3 = *puVar12;
        uVar16 = puVar12[1];
        uVar14 = puVar12[2];
        param_3[7] = puVar12[3];
        param_3[4] = uVar3;
        param_3[5] = uVar16;
        param_3[6] = uVar14;
        uVar3 = *puVar5;
        uVar16 = puVar5[1];
        uVar14 = puVar5[2];
        uVar19 = puVar5[3];
        param_3[1] = uVar18;
        param_3[8] = uVar3;
        param_3[9] = uVar16;
        param_3[10] = uVar14;
        param_3[0xb] = uVar19;
        uVar3 = puVar6[1];
        uVar16 = puVar6[2];
        uVar14 = puVar6[3];
        param_3[0xc] = *puVar6;
        param_3[0xd] = uVar3;
        param_3[0xe] = uVar16;
        param_3[0xf] = uVar14;
        uVar16 = 2;
        puVar8 = param_1 + uVar11 * 4;
        uVar14 = (uint)(puVar8[4] < *puVar8);
        uVar19 = (uint)(puVar8[4] >= *puVar8);
        puVar5 = puVar8 + uVar14 * 4;
        uVar18 = *puVar5;
        uVar3 = 3;
        if (puVar8[0xc] < puVar8[8]) {
          uVar3 = 2;
          uVar16 = 3;
        }
        puVar6 = puVar8 + uVar16 * 4;
        uVar17 = *puVar6;
        puVar7 = puVar8 + uVar3 * 4;
        uVar20 = uVar16;
        if (uVar17 < uVar18) {
          uVar20 = uVar19;
        }
        puVar10 = puVar8 + uVar19 * 4;
        puVar12 = puVar6;
        if (uVar17 < uVar18) {
          puVar12 = puVar10;
        }
        if (*puVar7 < *puVar10) {
          puVar13 = puVar6;
        }
        else {
          puVar13 = puVar10;
          uVar16 = uVar19;
          uVar3 = uVar20;
          puVar10 = puVar7;
          puVar7 = puVar12;
        }
        uVar3 = puVar8[uVar3 * 4];
        if (uVar17 < uVar18) {
          puVar13 = puVar5;
        }
        else {
          uVar14 = uVar16;
          puVar6 = puVar5;
        }
        uVar18 = puVar8[uVar14 * 4];
        uVar16 = puVar6[1];
        uVar14 = puVar6[2];
        uVar19 = puVar6[3];
        puVar8 = param_3 + uVar11 * 4;
        *puVar8 = *puVar6;
        puVar8[1] = uVar16;
        puVar8[2] = uVar14;
        puVar8[3] = uVar19;
        puVar5 = puVar13;
        if (uVar3 < uVar18) {
          puVar5 = puVar7;
        }
        uVar16 = puVar5[1];
        uVar14 = puVar5[2];
        if (uVar3 >= uVar18) {
          puVar13 = puVar7;
        }
        uVar3 = puVar5[3];
        puVar8[4] = *puVar5;
        puVar8[5] = uVar16;
        puVar8[6] = uVar14;
        puVar8[7] = uVar3;
        uVar3 = puVar13[1];
        uVar16 = puVar13[2];
        uVar14 = puVar13[3];
        puVar8[8] = *puVar13;
        puVar8[9] = uVar3;
        puVar8[10] = uVar16;
        puVar8[0xb] = uVar14;
        uVar3 = puVar10[1];
        uVar16 = puVar10[2];
        uVar14 = puVar10[3];
        puVar8[0xc] = *puVar10;
        puVar8[0xd] = uVar3;
        puVar8[0xe] = uVar16;
        puVar8[0xf] = uVar14;
        uVar3 = 4;
      }
    }
    else {
      FUN_00b8a56c(param_1,param_3,puVar4);
      FUN_00b8a56c(param_1 + uVar11 * 4,param_3 + uVar11 * 4,puVar4 + 0x20);
      uVar3 = 8;
    }
    if (uVar3 < uVar11) {
      iVar15 = uVar3 << 4;
      uVar16 = uVar3;
      do {
        puVar5 = param_1 + uVar16 * 4;
        uVar18 = *puVar5;
        uVar14 = puVar5[1];
        uVar20 = puVar5[2];
        uVar19 = puVar5[3];
        puVar5 = param_3 + uVar16 * 4;
        *puVar5 = uVar18;
        puVar5[1] = uVar14;
        puVar5[2] = uVar20;
        puVar5[3] = uVar19;
        if (uVar18 < puVar5[-4]) {
          uVar22 = *(undefined8 *)(puVar5 + 2);
          iVar9 = iVar15;
          do {
            *(undefined4 *)((int)param_3 + iVar9) = *(undefined4 *)((int)param_3 + iVar9 + -0x10);
            *(undefined4 *)((int)param_3 + iVar9 + 4) = *(undefined4 *)((int)param_3 + iVar9 + -0xc)
            ;
            *(undefined4 *)((int)param_3 + iVar9 + 8) = *(undefined4 *)((int)param_3 + iVar9 + -8);
            *(undefined4 *)((int)param_3 + iVar9 + 0xc) = *(undefined4 *)((int)param_3 + iVar9 + -4)
            ;
            if (iVar9 == 0x10) {
              puVar5 = param_3;
              goto LAB_00b8a288;
            }
            iVar2 = iVar9 + -0x20;
            iVar9 = iVar9 + -0x10;
          } while (uVar18 < *(uint *)((int)param_3 + iVar2));
          puVar5 = (uint *)((int)param_3 + iVar9);
LAB_00b8a288:
          *(undefined8 *)(puVar5 + 2) = uVar22;
          *puVar5 = uVar18;
        }
        uVar16 = uVar16 + 1;
        iVar15 = iVar15 + 0x10;
      } while (uVar16 != uVar11);
    }
    puVar5 = param_3 + uVar11 * 4;
    if (uVar3 < param_2 - uVar11) {
      local_40 = 0x10;
      uVar16 = uVar3;
      puVar8 = puVar5;
      do {
        puVar6 = param_1 + uVar11 * 4 + uVar16 * 4;
        uVar19 = *puVar6;
        uVar18 = puVar6[1];
        uVar20 = puVar6[2];
        uVar14 = puVar6[3];
        puVar6 = puVar5 + uVar16 * 4;
        *puVar6 = uVar19;
        puVar6[1] = uVar18;
        puVar6[2] = uVar20;
        puVar6[3] = uVar14;
        if (uVar19 < puVar6[-4]) {
          uVar22 = *(undefined8 *)(puVar6 + 2);
          iVar15 = local_40;
          puVar6 = puVar8;
          do {
            uVar20 = puVar6[uVar3 * 4 + -1];
            uVar18 = puVar6[uVar3 * 4 + -2];
            uVar14 = puVar6[uVar3 * 4 + -3];
            puVar6[uVar3 * 4] = puVar6[uVar3 * 4 + -4];
            puVar6[uVar3 * 4 + 1] = uVar14;
            puVar6[uVar3 * 4 + 2] = uVar18;
            puVar6[uVar3 * 4 + 3] = uVar20;
            if (uVar3 * 0x10 == iVar15) {
              puVar6 = puVar5;
              goto LAB_00b8a344;
            }
            puVar7 = puVar6 + uVar3 * 4 + -8;
            iVar15 = iVar15 + 0x10;
            puVar6 = puVar6 + -4;
          } while (uVar19 < *puVar7);
          puVar6 = puVar6 + uVar3 * 4;
LAB_00b8a344:
          *(undefined8 *)(puVar6 + 2) = uVar22;
          *puVar6 = uVar19;
        }
        puVar8 = puVar8 + 4;
        uVar16 = uVar16 + 1;
        local_40 = local_40 + -0x10;
      } while (uVar16 != param_2 - uVar11);
    }
    puVar8 = puVar5 + -4;
    iVar15 = 0;
    puVar4 = puVar4 + -4;
    do {
      bVar21 = *param_3 <= *puVar5;
      puVar6 = param_3;
      if (!bVar21) {
        puVar6 = puVar5;
      }
      uVar3 = puVar6[1];
      uVar16 = puVar6[2];
      uVar14 = puVar6[3];
      puVar7 = (uint *)((int)param_1 + iVar15);
      *puVar7 = *puVar6;
      puVar7[1] = uVar3;
      puVar7[2] = uVar16;
      puVar7[3] = uVar14;
      uVar3 = *puVar8;
      param_3 = param_3 + (uint)bVar21 * 4;
      iVar9 = 0;
      puVar6 = puVar4;
      if (*puVar4 < uVar3) {
        iVar9 = -1;
        puVar6 = puVar8;
      }
      puVar8 = puVar8 + iVar9 * 4;
      puVar7 = (uint *)0x0;
      if (*puVar4 >= uVar3) {
        puVar7 = (uint *)0xffffffff;
      }
      uVar16 = puVar6[2];
      puVar5 = puVar5 + (uint)!bVar21 * 4;
      puVar10 = (uint *)((int)param_1 + ((param_2 * 0x10 + -0x10) - iVar15));
      *puVar10 = *puVar6;
      iVar15 = iVar15 + 0x10;
      puVar4 = puVar4 + (int)puVar7 * 4;
      uVar11 = uVar11 - 1;
      uVar3 = puVar6[3];
      puVar10[1] = puVar6[1];
      puVar10[2] = uVar16;
      puVar10[3] = uVar3;
    } while (uVar11 != 0);
    puVar8 = puVar8 + 4;
    if ((param_2 & 1) != 0) {
      bVar21 = puVar8 <= param_3;
      puVar6 = puVar5;
      if (!bVar21) {
        puVar6 = param_3;
      }
      param_1 = (uint *)((int)param_1 + iVar15);
      uVar11 = *puVar6;
      uVar3 = puVar6[1];
      uVar16 = puVar6[2];
      param_1[3] = puVar6[3];
      *param_1 = uVar11;
      param_1[1] = uVar3;
      param_1[2] = uVar16;
      puVar7 = (uint *)(uint)!bVar21;
      puVar5 = puVar5 + (uint)bVar21 * 4;
      param_3 = param_3 + (int)puVar7 * 4;
    }
    if (param_3 == puVar8) {
      puVar7 = puVar4 + 4;
    }
    if (param_3 != puVar8 || puVar5 != puVar7) {
      FUN_00fb7254();
LAB_00b8a52c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb8a52c);
      (*pcVar1)();
    }
  }
  return;
}

