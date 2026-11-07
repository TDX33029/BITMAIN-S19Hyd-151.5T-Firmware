// FUN_007e1b4c @ 007e1b4c size=2848 calls_out=8 calls_in=2
// strings: 

void FUN_007e1b4c(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  uint *local_48;
  uint *local_44;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_48 = param_6;
    uVar20 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_008255a4(param_1,uVar20,param_3,param_4,1);
          return;
        }
        puVar5 = param_1 + (uVar20 >> 3) * 0x10;
        if (uVar20 < 0x40) {
          uVar4 = param_1[((uVar20 >> 3) * 8 - (uVar20 >> 3)) * 4];
          uVar11 = *puVar5;
          uVar13 = *param_1;
          if (uVar13 < uVar11 != uVar11 < uVar4) {
            puVar5 = param_1 + ((uVar20 >> 3) * 8 - (uVar20 >> 3)) * 4;
          }
          if (uVar13 < uVar11 != uVar13 < uVar4) {
            puVar5 = param_1;
          }
        }
        else {
          puVar5 = (uint *)FUN_008742a0(param_1,puVar5);
        }
        local_38 = *puVar5;
        local_34 = puVar5[1];
        local_30 = puVar5[2];
        uStack_2c = puVar5[3];
        param_5 = param_5 + -1;
        uVar4 = (uint)((int)puVar5 - (int)param_1) >> 4;
        if ((local_48 == (uint *)0x0) || (*local_48 < *puVar5)) break;
LAB_007e1e94:
        if (param_4 < uVar20) goto LAB_007e2654;
        puVar6 = param_3 + uVar20 * 4;
        uVar11 = 0;
        puVar8 = param_1;
        while( true ) {
          iVar14 = uVar4 - 3;
          if (uVar4 < 3) {
            iVar14 = 0;
          }
          while (puVar8 < param_1 + iVar14 * 4) {
            uVar17 = *puVar8;
            uVar19 = puVar8[1];
            uVar13 = *puVar5;
            uVar18 = puVar8[2];
            puVar7 = param_3;
            if (uVar13 < uVar17) {
              puVar7 = puVar6 + -4;
            }
            uVar10 = puVar8[3];
            puVar7 = puVar7 + uVar11 * 4;
            *puVar7 = uVar17;
            if (uVar13 >= uVar17) {
              uVar11 = uVar11 + 1;
            }
            puVar7[1] = uVar19;
            puVar7[2] = uVar18;
            puVar7[3] = uVar10;
            uVar13 = puVar8[4];
            uVar17 = puVar8[5];
            uVar10 = puVar8[6];
            uVar18 = *puVar5;
            uVar19 = puVar8[7];
            puVar7 = param_3;
            if (uVar18 < uVar13) {
              puVar7 = puVar6 + -8;
            }
            puVar7 = puVar7 + uVar11 * 4;
            *puVar7 = uVar13;
            if (uVar18 >= uVar13) {
              uVar11 = uVar11 + 1;
            }
            puVar7[1] = uVar17;
            puVar7[2] = uVar10;
            puVar7[3] = uVar19;
            uVar13 = puVar8[8];
            uVar17 = puVar8[9];
            uVar10 = puVar8[10];
            uVar18 = *puVar5;
            uVar19 = puVar8[0xb];
            puVar7 = param_3;
            if (uVar18 < uVar13) {
              puVar7 = puVar6 + -0xc;
            }
            puVar6 = puVar6 + -0x10;
            puVar7 = puVar7 + uVar11 * 4;
            *puVar7 = uVar13;
            if (uVar18 >= uVar13) {
              uVar11 = uVar11 + 1;
            }
            puVar7[1] = uVar17;
            puVar7[2] = uVar10;
            uVar13 = *puVar5;
            uVar17 = puVar8[0xc];
            puVar7[3] = uVar19;
            puVar7 = puVar6;
            if (uVar17 <= uVar13) {
              puVar7 = param_3;
            }
            uVar10 = puVar8[0xd];
            uVar19 = puVar8[0xe];
            uVar18 = puVar8[0xf];
            puVar8 = puVar8 + 0x10;
            puVar7 = puVar7 + uVar11 * 4;
            *puVar7 = uVar17;
            if (uVar17 <= uVar13) {
              uVar11 = uVar11 + 1;
            }
            puVar7[1] = uVar10;
            puVar7[2] = uVar19;
            puVar7[3] = uVar18;
          }
          for (; puVar8 < param_1 + uVar4 * 4; puVar8 = puVar8 + 4) {
            uVar17 = *puVar8;
            uVar19 = puVar8[1];
            puVar6 = puVar6 + -4;
            uVar13 = *puVar5;
            uVar18 = puVar8[2];
            puVar7 = puVar6;
            if (uVar17 <= uVar13) {
              puVar7 = param_3;
            }
            uVar10 = puVar8[3];
            puVar7 = puVar7 + uVar11 * 4;
            *puVar7 = uVar17;
            if (uVar17 <= uVar13) {
              uVar11 = uVar11 + 1;
            }
            puVar7[1] = uVar19;
            puVar7[2] = uVar18;
            puVar7[3] = uVar10;
          }
          if (uVar4 == uVar20) break;
          uVar4 = *puVar8;
          uVar13 = puVar8[1];
          uVar18 = puVar8[2];
          puVar6 = puVar6 + -4;
          uVar17 = puVar8[3];
          puVar8 = puVar8 + 4;
          puVar7 = param_3 + uVar11 * 4;
          *puVar7 = uVar4;
          uVar11 = uVar11 + 1;
          puVar7[1] = uVar13;
          puVar7[2] = uVar18;
          puVar7[3] = uVar17;
          uVar4 = uVar20;
        }
        FUN_016dd1aa(param_1,param_3,uVar11 << 4);
        param_2 = uVar20 - uVar11;
        if (param_2 == 0) {
          return;
        }
        param_1 = param_1 + uVar11 * 4;
        puVar6 = param_3 + uVar20 * 4 + -4;
        puVar5 = param_1;
        uVar4 = param_2;
        do {
          uVar19 = *puVar6;
          uVar4 = uVar4 - 1;
          uVar17 = puVar6[1];
          uVar13 = puVar6[2];
          uVar18 = puVar6[3];
          puVar6 = puVar6 + -4;
          *puVar5 = uVar19;
          puVar5[1] = uVar17;
          puVar5[2] = uVar13;
          puVar5[3] = uVar18;
          puVar5 = puVar5 + 4;
        } while (uVar4 != 0);
        if (uVar20 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar11,uVar20,uVar20,&DAT_018af348);
        }
        local_48 = (uint *)0x0;
        uVar20 = param_2;
        if (param_2 < 0x21) goto LAB_007e1b6c;
      }
      if (param_4 < uVar20) goto LAB_007e2654;
      puVar6 = param_3 + uVar20 * 4;
      param_2 = 0;
      puVar8 = param_1;
      uVar11 = uVar4;
      while( true ) {
        iVar14 = uVar11 - 3;
        if (uVar11 < 3) {
          iVar14 = 0;
        }
        for (puVar7 = puVar8; puVar7 < param_1 + iVar14 * 4; puVar7 = puVar7 + 0x10) {
          uVar18 = *puVar7;
          uVar19 = *puVar5;
          uVar13 = puVar7[1];
          uVar17 = puVar7[2];
          puVar8 = param_3;
          if (uVar19 <= uVar18) {
            puVar8 = puVar6 + -4;
          }
          uVar10 = puVar7[3];
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = uVar18;
          puVar8[1] = uVar13;
          puVar8[2] = uVar17;
          if (uVar19 > uVar18) {
            param_2 = param_2 + 1;
          }
          puVar8[3] = uVar10;
          uVar13 = puVar7[4];
          uVar17 = puVar7[5];
          uVar18 = puVar7[6];
          uVar19 = puVar7[7];
          uVar10 = *puVar5;
          puVar8 = param_3;
          if (uVar10 <= uVar13) {
            puVar8 = puVar6 + -8;
          }
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = uVar13;
          if (uVar10 > uVar13) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar17;
          puVar8[2] = uVar18;
          puVar8[3] = uVar19;
          uVar13 = puVar7[8];
          uVar17 = puVar7[9];
          uVar18 = puVar7[10];
          uVar19 = puVar7[0xb];
          uVar10 = *puVar5;
          puVar8 = param_3;
          if (uVar10 <= uVar13) {
            puVar8 = puVar6 + -0xc;
          }
          puVar6 = puVar6 + -0x10;
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = uVar13;
          if (uVar10 > uVar13) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar17;
          puVar8[2] = uVar18;
          puVar8[3] = uVar19;
          uVar13 = *puVar5;
          uVar17 = puVar7[0xc];
          uVar18 = puVar7[0xd];
          uVar19 = puVar7[0xe];
          uVar10 = puVar7[0xf];
          puVar8 = puVar6;
          if (uVar17 < uVar13) {
            puVar8 = param_3;
          }
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = uVar17;
          if (uVar17 < uVar13) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar18;
          puVar8[2] = uVar19;
          puVar8[3] = uVar10;
        }
        for (; puVar7 < param_1 + uVar11 * 4; puVar7 = puVar7 + 4) {
          uVar13 = *puVar7;
          uVar19 = puVar7[1];
          puVar6 = puVar6 + -4;
          uVar17 = *puVar5;
          uVar18 = puVar7[2];
          puVar8 = puVar6;
          if (uVar13 < uVar17) {
            puVar8 = param_3;
          }
          uVar10 = puVar7[3];
          puVar8 = puVar8 + param_2 * 4;
          *puVar8 = uVar13;
          if (uVar13 < uVar17) {
            param_2 = param_2 + 1;
          }
          puVar8[1] = uVar19;
          puVar8[2] = uVar18;
          puVar8[3] = uVar10;
        }
        if (uVar11 == uVar20) break;
        puVar6 = puVar6 + -4;
        uVar11 = puVar7[1];
        uVar17 = puVar7[2];
        uVar13 = puVar7[3];
        puVar8 = puVar7 + 4;
        puVar15 = puVar6 + param_2 * 4;
        *puVar15 = *puVar7;
        puVar15[1] = uVar11;
        puVar15[2] = uVar17;
        puVar15[3] = uVar13;
        uVar11 = uVar20;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 4);
      iVar14 = uVar20 - param_2;
      if (iVar14 != 0) {
        puVar8 = param_1 + param_2 * 4;
        puVar6 = param_3 + uVar20 * 4 + -4;
        iVar9 = iVar14;
        do {
          uVar17 = *puVar6;
          iVar9 = iVar9 + -1;
          uVar13 = puVar6[1];
          uVar11 = puVar6[2];
          uVar18 = puVar6[3];
          puVar6 = puVar6 + -4;
          *puVar8 = uVar17;
          puVar8[1] = uVar13;
          puVar8[2] = uVar11;
          puVar8[3] = uVar18;
          puVar8 = puVar8 + 4;
        } while (iVar9 != 0);
      }
      if (param_2 == 0) goto LAB_007e1e94;
      if (uVar20 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_007e1b4c(param_1 + param_2 * 4,iVar14,param_3,param_4,param_5,&local_38);
      uVar20 = param_2;
    } while (0x20 < param_2);
  }
LAB_007e1b6c:
  uVar20 = param_2 >> 1;
  if (uVar20 != 0) {
    puVar5 = param_3 + param_2 * 4;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar4 = param_1[1];
        uVar11 = param_1[2];
        uVar13 = param_1[3];
        *param_3 = *param_1;
        param_3[1] = uVar4;
        param_3[2] = uVar11;
        param_3[3] = uVar13;
        puVar8 = param_1 + uVar20 * 4;
        uVar11 = puVar8[1];
        uVar13 = puVar8[2];
        uVar4 = puVar8[3];
        puVar6 = param_3 + uVar20 * 4;
        *puVar6 = *puVar8;
        puVar6[1] = uVar11;
        puVar6[2] = uVar13;
        puVar6[3] = uVar4;
        uVar4 = 1;
      }
      else {
        uVar11 = (uint)(param_1[4] < *param_1);
        puVar6 = param_1 + uVar11 * 4;
        uVar17 = *puVar6;
        uVar18 = (uint)(param_1[4] >= *param_1);
        uVar4 = 3;
        uVar13 = 2;
        if (param_1[0xc] < param_1[8]) {
          uVar4 = 2;
          uVar13 = 3;
        }
        puVar16 = param_1 + uVar4 * 4;
        puVar7 = param_1 + uVar13 * 4;
        uVar10 = *puVar7;
        puVar8 = param_1 + uVar18 * 4;
        uVar19 = uVar13;
        puVar15 = puVar7;
        if (uVar10 < uVar17) {
          uVar19 = uVar18;
          puVar15 = puVar8;
        }
        puVar12 = puVar7;
        if (*puVar8 <= *puVar16) {
          uVar13 = uVar18;
          puVar12 = puVar8;
          puVar8 = puVar16;
          puVar16 = puVar15;
          uVar4 = uVar19;
        }
        uVar4 = param_1[uVar4 * 4];
        if (uVar17 <= uVar10) {
          uVar11 = uVar13;
          puVar7 = puVar6;
        }
        uVar13 = puVar7[1];
        if (uVar17 > uVar10) {
          puVar12 = puVar6;
        }
        uVar11 = param_1[uVar11 * 4];
        *param_3 = *puVar7;
        param_3[1] = uVar13;
        uVar13 = puVar7[2];
        puVar6 = puVar12;
        if (uVar4 < uVar11) {
          puVar6 = puVar16;
        }
        param_3[3] = puVar7[3];
        if (uVar4 >= uVar11) {
          puVar12 = puVar16;
        }
        uVar4 = *puVar6;
        uVar11 = puVar6[1];
        uVar17 = puVar6[2];
        param_3[7] = puVar6[3];
        param_3[4] = uVar4;
        param_3[5] = uVar11;
        param_3[6] = uVar17;
        uVar4 = *puVar12;
        uVar11 = puVar12[1];
        uVar17 = puVar12[2];
        uVar18 = puVar12[3];
        param_3[2] = uVar13;
        param_3[8] = uVar4;
        param_3[9] = uVar11;
        param_3[10] = uVar17;
        param_3[0xb] = uVar18;
        uVar4 = puVar8[1];
        uVar11 = puVar8[2];
        uVar13 = puVar8[3];
        param_3[0xc] = *puVar8;
        param_3[0xd] = uVar4;
        param_3[0xe] = uVar11;
        param_3[0xf] = uVar13;
        uVar18 = 2;
        puVar6 = param_1 + uVar20 * 4;
        uVar11 = (uint)(*puVar6 <= puVar6[4]);
        uVar13 = (uint)(*puVar6 > puVar6[4]);
        puVar8 = puVar6 + uVar13 * 4;
        uVar17 = *puVar8;
        uVar4 = 3;
        if (puVar6[0xc] < puVar6[8]) {
          uVar4 = 2;
          uVar18 = 3;
        }
        puVar7 = puVar6 + uVar18 * 4;
        uVar10 = *puVar7;
        puVar15 = puVar6 + uVar4 * 4;
        uVar19 = uVar18;
        if (uVar10 < uVar17) {
          uVar19 = uVar11;
        }
        puVar12 = puVar6 + uVar11 * 4;
        puVar16 = puVar7;
        if (uVar10 < uVar17) {
          puVar16 = puVar12;
        }
        puVar2 = puVar15;
        if (*puVar15 < *puVar12) {
          uVar19 = uVar4;
          puVar2 = puVar12;
          puVar16 = puVar15;
        }
        uVar4 = puVar6[uVar19 * 4];
        if (*puVar15 < *puVar12) {
          uVar11 = uVar18;
          puVar12 = puVar7;
        }
        if (uVar17 <= uVar10) {
          puVar7 = puVar8;
        }
        else {
          puVar12 = puVar8;
        }
        if (uVar17 > uVar10) {
          uVar11 = uVar13;
        }
        uVar17 = puVar7[1];
        uVar18 = puVar7[2];
        uVar13 = puVar7[3];
        uVar11 = puVar6[uVar11 * 4];
        puVar6 = param_3 + uVar20 * 4;
        *puVar6 = *puVar7;
        puVar6[3] = uVar13;
        if (uVar4 < uVar11) {
          puVar8 = puVar12;
          puVar12 = puVar16;
        }
        else {
          puVar8 = puVar16;
        }
        uVar10 = *puVar12;
        uVar11 = puVar12[1];
        uVar4 = puVar12[2];
        puVar6[7] = puVar12[3];
        puVar6[6] = uVar4;
        puVar6[5] = uVar11;
        uVar4 = *puVar8;
        uVar11 = puVar8[1];
        uVar13 = puVar8[2];
        uVar19 = puVar8[3];
        puVar6[4] = uVar10;
        puVar6[8] = uVar4;
        puVar6[9] = uVar11;
        puVar6[10] = uVar13;
        puVar6[0xb] = uVar19;
        uVar4 = *puVar2;
        uVar11 = puVar2[1];
        uVar13 = puVar2[2];
        uVar19 = puVar2[3];
        puVar6[1] = uVar17;
        puVar6[2] = uVar18;
        puVar6[0xc] = uVar4;
        puVar6[0xd] = uVar11;
        puVar6[0xe] = uVar13;
        puVar6[0xf] = uVar19;
        uVar4 = 4;
      }
    }
    else {
      FUN_007f4380(param_1,param_3,puVar5);
      FUN_007f4380(param_1 + uVar20 * 4,param_3 + uVar20 * 4,puVar5 + 0x20);
      uVar4 = 8;
    }
    if (uVar4 < uVar20) {
      iVar14 = uVar4 << 4;
      uVar11 = uVar4;
      do {
        puVar6 = param_1 + uVar11 * 4;
        uVar17 = *puVar6;
        uVar13 = puVar6[1];
        uVar19 = puVar6[2];
        uVar18 = puVar6[3];
        puVar8 = param_3 + uVar11 * 4;
        *puVar8 = uVar17;
        puVar8[1] = uVar13;
        puVar8[2] = uVar19;
        puVar8[3] = uVar18;
        if (uVar17 < puVar8[-4]) {
          local_38 = puVar6[1];
          local_34 = puVar6[2];
          local_30 = puVar6[3];
          iVar9 = iVar14;
          do {
            *(undefined4 *)((int)param_3 + iVar9) = *(undefined4 *)((int)param_3 + iVar9 + -0x10);
            *(undefined4 *)((int)param_3 + iVar9 + 4) = *(undefined4 *)((int)param_3 + iVar9 + -0xc)
            ;
            *(undefined4 *)((int)param_3 + iVar9 + 8) = *(undefined4 *)((int)param_3 + iVar9 + -8);
            *(undefined4 *)((int)param_3 + iVar9 + 0xc) = *(undefined4 *)((int)param_3 + iVar9 + -4)
            ;
            if (iVar9 == 0x10) {
              puVar6 = param_3;
              goto LAB_007e2378;
            }
            iVar3 = iVar9 + -0x20;
            iVar9 = iVar9 + -0x10;
          } while (uVar17 < *(uint *)((int)param_3 + iVar3));
          puVar6 = (uint *)((int)param_3 + iVar9);
LAB_007e2378:
          *puVar6 = uVar17;
          puVar6[1] = local_38;
          puVar6[2] = local_34;
          puVar6[3] = local_30;
        }
        uVar11 = uVar11 + 1;
        iVar14 = iVar14 + 0x10;
      } while (uVar11 != uVar20);
    }
    puVar6 = param_3 + uVar20 * 4;
    if (uVar4 < param_2 - uVar20) {
      local_3c = 0x10;
      uVar11 = uVar4;
      local_44 = puVar6;
      do {
        puVar7 = param_1 + uVar20 * 4 + uVar11 * 4;
        uVar19 = *puVar7;
        uVar17 = puVar7[1];
        uVar18 = puVar7[2];
        uVar13 = puVar7[3];
        puVar8 = puVar6 + uVar11 * 4;
        *puVar8 = uVar19;
        puVar8[1] = uVar17;
        puVar8[2] = uVar18;
        puVar8[3] = uVar13;
        if (uVar19 < puVar8[-4]) {
          local_38 = puVar7[1];
          local_34 = puVar7[2];
          local_30 = puVar7[3];
          iVar14 = local_3c;
          puVar8 = local_44;
          do {
            uVar18 = puVar8[uVar4 * 4 + -1];
            uVar17 = puVar8[uVar4 * 4 + -2];
            uVar13 = puVar8[uVar4 * 4 + -3];
            puVar8[uVar4 * 4] = puVar8[uVar4 * 4 + -4];
            puVar8[uVar4 * 4 + 1] = uVar13;
            puVar8[uVar4 * 4 + 2] = uVar17;
            puVar8[uVar4 * 4 + 3] = uVar18;
            if (uVar4 * 0x10 == iVar14) {
              puVar8 = puVar6;
              goto LAB_007e2458;
            }
            puVar7 = puVar8 + uVar4 * 4 + -8;
            iVar14 = iVar14 + 0x10;
            puVar8 = puVar8 + -4;
          } while (uVar19 < *puVar7);
          puVar8 = puVar8 + uVar4 * 4;
LAB_007e2458:
          *puVar8 = uVar19;
          puVar8[1] = local_38;
          puVar8[2] = local_34;
          puVar8[3] = local_30;
        }
        uVar11 = uVar11 + 1;
        local_3c = local_3c + -0x10;
        local_44 = local_44 + 4;
      } while (uVar11 != param_2 - uVar20);
    }
    puVar8 = puVar6 + -4;
    iVar14 = 0;
    puVar5 = puVar5 + -4;
    do {
      bVar21 = *puVar6 < *param_3;
      puVar7 = param_3;
      if (bVar21) {
        puVar7 = puVar6;
      }
      uVar4 = puVar7[1];
      uVar11 = puVar7[2];
      uVar13 = puVar7[3];
      puVar15 = (uint *)((int)param_1 + iVar14);
      *puVar15 = *puVar7;
      puVar15[1] = uVar4;
      puVar15[2] = uVar11;
      puVar15[3] = uVar13;
      uVar4 = *puVar8;
      param_3 = param_3 + (uint)!bVar21 * 4;
      iVar9 = 0;
      puVar6 = puVar6 + (uint)bVar21 * 4;
      puVar7 = puVar5;
      if (*puVar5 < uVar4) {
        iVar9 = -1;
        puVar7 = puVar8;
      }
      uVar13 = puVar7[1];
      puVar8 = puVar8 + iVar9 * 4;
      puVar15 = (uint *)0x0;
      uVar11 = puVar7[2];
      if (*puVar5 >= uVar4) {
        puVar15 = (uint *)0xffffffff;
      }
      uVar4 = puVar7[3];
      uVar20 = uVar20 - 1;
      puVar16 = (uint *)((int)param_1 + ((param_2 * 0x10 + -0x10) - iVar14));
      *puVar16 = *puVar7;
      iVar14 = iVar14 + 0x10;
      puVar16[2] = uVar11;
      puVar16[1] = uVar13;
      puVar16[3] = uVar4;
      puVar5 = puVar5 + (int)puVar15 * 4;
    } while (uVar20 != 0);
    puVar8 = puVar8 + 4;
    if ((param_2 & 1) != 0) {
      bVar21 = puVar8 <= param_3;
      puVar7 = puVar6;
      if (!bVar21) {
        puVar7 = param_3;
      }
      param_1 = (uint *)((int)param_1 + iVar14);
      uVar20 = *puVar7;
      uVar4 = puVar7[1];
      uVar11 = puVar7[2];
      param_1[3] = puVar7[3];
      *param_1 = uVar20;
      param_1[1] = uVar4;
      param_1[2] = uVar11;
      puVar15 = (uint *)(uint)!bVar21;
      puVar6 = puVar6 + (uint)bVar21 * 4;
      param_3 = param_3 + (int)puVar15 * 4;
    }
    if (param_3 == puVar8) {
      puVar15 = puVar5 + 4;
    }
    if (param_3 != puVar8 || puVar6 != puVar15) {
      FUN_00fb7254();
LAB_007e2654:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x7e2654);
      (*pcVar1)();
    }
  }
  return;
}

