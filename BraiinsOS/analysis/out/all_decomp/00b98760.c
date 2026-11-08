// FUN_00b98760 @ 00b98760 size=2860 calls_out=7 calls_in=2
// strings: 

void FUN_00b98760(int *param_1,uint param_2,int *param_3,uint param_4,int param_5,int *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  bool bVar22;
  int *local_64;
  int *local_58;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (0x20 < param_2) {
    local_64 = param_6;
    do {
      uVar21 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00b98188(param_1,uVar21,param_3,param_4,1);
          return;
        }
        if (uVar21 < 0x40) {
          iVar11 = param_1[(uVar21 >> 3) * 0x20];
          bVar22 = param_1[((uVar21 >> 3) * 8 - (uVar21 >> 3)) * 8] == 4;
          piVar4 = param_1 + (uVar21 >> 3) * 0x20;
          if ((*param_1 != 4 && iVar11 == 4) != (iVar11 != 4 && bVar22)) {
            piVar4 = param_1 + ((uVar21 >> 3) * 8 - (uVar21 >> 3)) * 8;
          }
          piVar5 = piVar4;
          if ((iVar11 == 4) != bVar22) {
            piVar5 = param_1;
          }
          if (*param_1 == 4) {
            piVar5 = piVar4;
          }
        }
        else {
          piVar5 = (int *)FUN_00b992b4(param_1);
        }
        param_5 = param_5 + -1;
        local_48 = *piVar5;
        iStack_44 = piVar5[1];
        iStack_40 = piVar5[2];
        local_3c = piVar5[3];
        local_38 = piVar5[4];
        iStack_34 = piVar5[5];
        iStack_30 = piVar5[6];
        iStack_2c = piVar5[7];
        uVar3 = (uint)((int)piVar5 - (int)param_1) >> 5;
        if ((local_64 != (int *)0x0) && ((*local_64 == 4 || (*piVar5 != 4)))) break;
        if (param_4 < uVar21) goto LAB_00b99274;
        piVar4 = param_3 + uVar21 * 8;
        param_2 = 0;
        piVar6 = param_1;
        uVar16 = uVar3;
        while( true ) {
          for (piVar8 = piVar6; piVar8 < param_1 + uVar16 * 8; piVar8 = piVar8 + 8) {
            piVar4 = piVar4 + -8;
            uVar9 = (uint)(*piVar8 != 4 && *piVar5 == 4);
            iVar11 = piVar8[1];
            iVar12 = piVar8[2];
            iVar14 = piVar8[3];
            piVar6 = piVar4;
            if (uVar9 != 0) {
              piVar6 = param_3;
            }
            piVar6 = piVar6 + param_2 * 8;
            param_2 = param_2 + uVar9;
            *piVar6 = *piVar8;
            piVar6[1] = iVar11;
            piVar6[2] = iVar12;
            piVar6[3] = iVar14;
            iVar11 = piVar8[5];
            iVar12 = piVar8[6];
            iVar14 = piVar8[7];
            piVar6[4] = piVar8[4];
            piVar6[5] = iVar11;
            piVar6[6] = iVar12;
            piVar6[7] = iVar14;
          }
          if (uVar16 == uVar21) break;
          piVar4 = piVar4 + -8;
          iVar11 = piVar8[1];
          iVar12 = piVar8[2];
          iVar14 = piVar8[3];
          piVar13 = piVar4 + param_2 * 8;
          piVar6 = piVar8 + 8;
          *piVar13 = *piVar8;
          piVar13[1] = iVar11;
          piVar13[2] = iVar12;
          piVar13[3] = iVar14;
          iVar11 = piVar8[5];
          iVar12 = piVar8[6];
          iVar14 = piVar8[7];
          piVar13[4] = piVar8[4];
          piVar13[5] = iVar11;
          piVar13[6] = iVar12;
          piVar13[7] = iVar14;
          uVar16 = uVar21;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 5);
        iVar11 = uVar21 - param_2;
        if (iVar11 != 0) {
          piVar4 = param_1 + param_2 * 8;
          iVar12 = iVar11;
          piVar6 = param_3 + uVar21 * 8 + -8;
          do {
            iVar14 = piVar6[1];
            iVar17 = piVar6[2];
            iVar19 = piVar6[3];
            iVar12 = iVar12 + -1;
            *piVar4 = *piVar6;
            piVar4[1] = iVar14;
            piVar4[2] = iVar17;
            piVar4[3] = iVar19;
            iVar14 = piVar6[5];
            iVar17 = piVar6[6];
            iVar19 = piVar6[7];
            piVar4[4] = piVar6[4];
            piVar4[5] = iVar14;
            piVar4[6] = iVar17;
            piVar4[7] = iVar19;
            piVar4 = piVar4 + 8;
            piVar6 = piVar6 + -8;
          } while (iVar12 != 0);
        }
        if (param_2 == 0) break;
        if (uVar21 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b98760(param_1 + param_2 * 8,iVar11,param_3,param_4,param_5,&local_48);
        uVar21 = param_2;
        if (param_2 < 0x21) goto LAB_00b98784;
      }
      if (param_4 < uVar21) goto LAB_00b99274;
      piVar8 = param_3 + uVar21 * 8;
      uVar16 = 0;
      piVar13 = param_1 + uVar3 * 8;
      piVar4 = param_1;
      piVar6 = param_1;
      if (piVar13 <= param_1) goto LAB_00b98dd4;
LAB_00b98d80:
      do {
        piVar6 = piVar4 + 8;
        piVar8 = piVar8 + -8;
        uVar9 = (uint)(*piVar4 != 4 || *piVar5 == 4);
        iVar11 = piVar4[1];
        iVar12 = piVar4[2];
        iVar14 = piVar4[3];
        piVar7 = piVar8;
        if (uVar9 != 0) {
          piVar7 = param_3;
        }
        piVar7 = piVar7 + uVar16 * 8;
        uVar16 = uVar16 + uVar9;
        *piVar7 = *piVar4;
        piVar7[1] = iVar11;
        piVar7[2] = iVar12;
        piVar7[3] = iVar14;
        iVar11 = piVar4[5];
        iVar12 = piVar4[6];
        iVar14 = piVar4[7];
        piVar7[4] = piVar4[4];
        piVar7[5] = iVar11;
        piVar7[6] = iVar12;
        piVar7[7] = iVar14;
        piVar4 = piVar6;
      } while (piVar6 < piVar13);
LAB_00b98dd4:
      if (uVar3 != uVar21) goto code_r0x00b98de0;
      FUN_016dd1aa(param_1,param_3,uVar16 << 5);
      param_2 = uVar21 - uVar16;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar16 * 8;
      piVar5 = param_3 + uVar21 * 8 + -8;
      piVar4 = param_1;
      uVar3 = param_2;
      do {
        iVar11 = piVar5[1];
        iVar12 = piVar5[2];
        iVar14 = piVar5[3];
        uVar3 = uVar3 - 1;
        *piVar4 = *piVar5;
        piVar4[1] = iVar11;
        piVar4[2] = iVar12;
        piVar4[3] = iVar14;
        iVar11 = piVar5[5];
        iVar12 = piVar5[6];
        iVar14 = piVar5[7];
        piVar4[4] = piVar5[4];
        piVar4[5] = iVar11;
        piVar4[6] = iVar12;
        piVar4[7] = iVar14;
        piVar5 = piVar5 + -8;
        piVar4 = piVar4 + 8;
      } while (uVar3 != 0);
      if (uVar21 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar16,uVar21,uVar21,&DAT_018af348);
      }
      local_64 = (int *)0x0;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_00b98784:
  uVar21 = param_2 >> 1;
  if (uVar21 != 0) {
    if (param_2 < 8) {
      iVar11 = param_1[1];
      iVar12 = param_1[2];
      iVar14 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = iVar11;
      param_3[2] = iVar12;
      param_3[3] = iVar14;
      iVar11 = param_1[5];
      iVar12 = param_1[6];
      iVar14 = param_1[7];
      piVar5 = param_1 + uVar21 * 8;
      param_3[4] = param_1[4];
      param_3[5] = iVar11;
      param_3[6] = iVar12;
      param_3[7] = iVar14;
      piVar4 = param_3 + uVar21 * 8;
      iVar11 = piVar5[1];
      iVar12 = piVar5[2];
      iVar14 = piVar5[3];
      *piVar4 = *piVar5;
      piVar4[1] = iVar11;
      piVar4[2] = iVar12;
      piVar4[3] = iVar14;
      iVar11 = piVar5[5];
      iVar12 = piVar5[6];
      iVar14 = piVar5[7];
      uVar3 = 1;
      piVar4[4] = piVar5[4];
      piVar4[5] = iVar11;
      piVar4[6] = iVar12;
      piVar4[7] = iVar14;
    }
    else {
      uVar16 = (uint)(param_1[8] != 4 && *param_1 == 4);
      uVar10 = uVar16 ^ 1;
      uVar3 = 3;
      uVar9 = 2;
      if (param_1[0x18] != 4 && param_1[0x10] == 4) {
        uVar3 = 2;
        uVar9 = 3;
      }
      piVar6 = param_1 + uVar3 * 8;
      piVar13 = param_1 + uVar16 * 8;
      piVar5 = param_1 + uVar9 * 8;
      piVar4 = param_1 + uVar10 * 8;
      piVar8 = piVar5;
      uVar2 = uVar9;
      if (*piVar5 != 4 && *piVar13 == 4) {
        piVar8 = piVar4;
        uVar2 = uVar10;
      }
      piVar7 = piVar5;
      if (*piVar6 == 4 || *piVar4 != 4) {
        uVar9 = uVar10;
        uVar3 = uVar2;
        piVar7 = piVar4;
        piVar4 = piVar6;
        piVar6 = piVar8;
      }
      iVar11 = param_1[uVar3 * 8];
      if (*piVar5 != 4 && *piVar13 == 4) {
        piVar7 = piVar13;
      }
      else {
        uVar16 = uVar9;
        piVar5 = piVar13;
      }
      iVar19 = param_1[uVar16 * 8];
      iVar12 = piVar5[1];
      iVar14 = piVar5[2];
      iVar17 = piVar5[3];
      *param_3 = *piVar5;
      param_3[1] = iVar12;
      param_3[2] = iVar14;
      param_3[3] = iVar17;
      iVar12 = piVar5[5];
      iVar14 = piVar5[6];
      iVar17 = piVar5[7];
      param_3[4] = piVar5[4];
      param_3[5] = iVar12;
      param_3[6] = iVar14;
      param_3[7] = iVar17;
      if (iVar11 == 4 || iVar19 != 4) {
        piVar5 = piVar6;
      }
      else {
        piVar5 = piVar7;
        piVar7 = piVar6;
      }
      iVar11 = piVar7[1];
      iVar12 = piVar7[2];
      iVar14 = piVar7[3];
      param_3[8] = *piVar7;
      param_3[9] = iVar11;
      param_3[10] = iVar12;
      param_3[0xb] = iVar14;
      iVar11 = piVar7[5];
      iVar12 = piVar7[6];
      iVar14 = piVar7[7];
      param_3[0xc] = piVar7[4];
      param_3[0xd] = iVar11;
      param_3[0xe] = iVar12;
      param_3[0xf] = iVar14;
      iVar11 = piVar5[1];
      iVar12 = piVar5[2];
      iVar14 = piVar5[3];
      param_3[0x10] = *piVar5;
      param_3[0x11] = iVar11;
      param_3[0x12] = iVar12;
      param_3[0x13] = iVar14;
      iVar11 = piVar5[5];
      iVar12 = piVar5[6];
      iVar14 = piVar5[7];
      piVar6 = param_3 + uVar21 * 8;
      param_3[0x14] = piVar5[4];
      param_3[0x15] = iVar11;
      param_3[0x16] = iVar12;
      param_3[0x17] = iVar14;
      iVar11 = piVar4[1];
      iVar12 = piVar4[2];
      iVar14 = piVar4[3];
      param_3[0x18] = *piVar4;
      param_3[0x19] = iVar11;
      param_3[0x1a] = iVar12;
      param_3[0x1b] = iVar14;
      iVar11 = piVar4[5];
      iVar12 = piVar4[6];
      iVar14 = piVar4[7];
      param_3[0x1c] = piVar4[4];
      param_3[0x1d] = iVar11;
      param_3[0x1e] = iVar12;
      param_3[0x1f] = iVar14;
      piVar5 = param_1 + uVar21 * 8;
      uVar16 = (uint)(piVar5[8] != 4 && *piVar5 == 4);
      uVar3 = 2;
      bVar22 = piVar5[0x18] != 4 && piVar5[0x10] == 4;
      if (bVar22) {
        uVar3 = 3;
      }
      uVar9 = uVar16 ^ 1;
      piVar8 = piVar5 + uVar16 * 8;
      piVar4 = piVar5 + uVar3 * 8;
      uVar10 = 3;
      if (bVar22) {
        uVar10 = 2;
      }
      piVar20 = piVar5 + uVar10 * 8;
      piVar13 = piVar5 + uVar9 * 8;
      piVar7 = piVar4;
      uVar2 = uVar3;
      if (*piVar4 != 4 && *piVar8 == 4) {
        piVar7 = piVar13;
        uVar2 = uVar9;
      }
      if (*piVar20 == 4 || *piVar13 != 4) {
        piVar18 = piVar13;
        piVar13 = piVar20;
      }
      else {
        uVar9 = uVar3;
        uVar2 = uVar10;
        piVar18 = piVar4;
        piVar7 = piVar20;
      }
      bVar22 = *piVar4 != 4 && *piVar8 == 4;
      iVar11 = piVar5[uVar2 * 8];
      if (bVar22) {
        uVar9 = uVar16;
      }
      else {
        piVar4 = piVar8;
      }
      iVar12 = piVar5[uVar9 * 8];
      iVar14 = piVar4[1];
      iVar17 = piVar4[2];
      iVar19 = piVar4[3];
      *piVar6 = *piVar4;
      piVar6[1] = iVar14;
      piVar6[2] = iVar17;
      piVar6[3] = iVar19;
      iVar14 = piVar4[5];
      iVar17 = piVar4[6];
      iVar19 = piVar4[7];
      piVar6[4] = piVar4[4];
      piVar6[5] = iVar14;
      piVar6[6] = iVar17;
      piVar6[7] = iVar19;
      if (bVar22) {
        piVar18 = piVar8;
      }
      if (iVar11 == 4 || iVar12 != 4) {
        piVar5 = piVar7;
      }
      else {
        piVar5 = piVar18;
        piVar18 = piVar7;
      }
      iVar11 = piVar18[1];
      iVar12 = piVar18[2];
      iVar14 = piVar18[3];
      piVar6[8] = *piVar18;
      piVar6[9] = iVar11;
      piVar6[10] = iVar12;
      piVar6[0xb] = iVar14;
      iVar11 = piVar18[5];
      iVar12 = piVar18[6];
      iVar14 = piVar18[7];
      piVar6[0xc] = piVar18[4];
      piVar6[0xd] = iVar11;
      piVar6[0xe] = iVar12;
      piVar6[0xf] = iVar14;
      iVar11 = piVar5[1];
      iVar12 = piVar5[2];
      iVar14 = piVar5[3];
      piVar6[0x10] = *piVar5;
      piVar6[0x11] = iVar11;
      piVar6[0x12] = iVar12;
      piVar6[0x13] = iVar14;
      iVar11 = piVar5[5];
      iVar12 = piVar5[6];
      iVar14 = piVar5[7];
      piVar6[0x14] = piVar5[4];
      piVar6[0x15] = iVar11;
      piVar6[0x16] = iVar12;
      piVar6[0x17] = iVar14;
      iVar11 = piVar13[1];
      iVar12 = piVar13[2];
      iVar14 = piVar13[3];
      piVar6[0x18] = *piVar13;
      piVar6[0x19] = iVar11;
      piVar6[0x1a] = iVar12;
      piVar6[0x1b] = iVar14;
      iVar11 = piVar13[5];
      iVar12 = piVar13[6];
      iVar14 = piVar13[7];
      piVar6[0x1c] = piVar13[4];
      piVar6[0x1d] = iVar11;
      piVar6[0x1e] = iVar12;
      piVar6[0x1f] = iVar14;
      uVar3 = 4;
    }
    if (uVar3 < uVar21) {
      iVar11 = uVar3 * 0x20;
      uVar16 = uVar3;
      do {
        piVar5 = param_1 + uVar16 * 8;
        piVar4 = param_3 + uVar16 * 8;
        iVar12 = piVar5[1];
        iVar14 = piVar5[2];
        iVar17 = piVar5[3];
        *piVar4 = *piVar5;
        piVar4[1] = iVar12;
        piVar4[2] = iVar14;
        piVar4[3] = iVar17;
        iVar12 = piVar5[5];
        iVar14 = piVar5[6];
        iVar17 = piVar5[7];
        piVar4[4] = piVar5[4];
        piVar4[5] = iVar12;
        piVar4[6] = iVar14;
        piVar4[7] = iVar17;
        iVar12 = param_3[uVar16 * 8];
        if ((iVar12 != 4) && (piVar4[-8] == 4)) {
          local_48 = piVar5[1];
          iStack_44 = piVar5[2];
          iStack_40 = piVar5[3];
          local_3c = piVar5[4];
          local_38 = piVar5[5];
          iStack_34 = piVar5[6];
          iStack_30 = piVar5[7];
          iVar14 = iVar11;
          do {
            puVar15 = (undefined4 *)((int)param_3 + iVar14);
            *puVar15 = puVar15[-8];
            puVar15[1] = puVar15[-7];
            puVar15[2] = puVar15[-6];
            puVar15[3] = puVar15[-5];
            puVar15[4] = puVar15[-4];
            puVar15[5] = puVar15[-3];
            puVar15[6] = puVar15[-2];
            puVar15[7] = puVar15[-1];
            if (iVar14 == 0x20) {
              piVar5 = param_3;
              goto LAB_00b98f34;
            }
            iVar14 = iVar14 + -0x20;
          } while (puVar15[-0x10] == 4);
          piVar5 = (int *)((int)param_3 + iVar14);
LAB_00b98f34:
          *piVar5 = iVar12;
          piVar5[1] = local_48;
          piVar5[2] = iStack_44;
          piVar5[3] = iStack_40;
          piVar5[4] = local_3c;
          piVar5[5] = local_38;
          piVar5[6] = iStack_34;
          piVar5[7] = iStack_30;
        }
        uVar16 = uVar16 + 1;
        iVar11 = iVar11 + 0x20;
      } while (uVar16 != uVar21);
    }
    piVar5 = param_3 + uVar21 * 8;
    if (uVar3 < param_2 - uVar21) {
      local_4c = 0x20;
      uVar16 = uVar3;
      local_58 = piVar5;
      do {
        piVar6 = piVar5 + uVar16 * 8;
        piVar4 = param_1 + uVar21 * 8 + uVar16 * 8;
        iVar11 = piVar4[1];
        iVar12 = piVar4[2];
        iVar14 = piVar4[3];
        *piVar6 = *piVar4;
        piVar6[1] = iVar11;
        piVar6[2] = iVar12;
        piVar6[3] = iVar14;
        iVar11 = piVar4[5];
        iVar12 = piVar4[6];
        iVar14 = piVar4[7];
        piVar6[4] = piVar4[4];
        piVar6[5] = iVar11;
        piVar6[6] = iVar12;
        piVar6[7] = iVar14;
        iVar11 = piVar5[uVar16 * 8];
        if ((iVar11 != 4) && (piVar6[-8] == 4)) {
          local_48 = piVar4[1];
          iStack_44 = piVar4[2];
          iStack_40 = piVar4[3];
          local_3c = piVar4[4];
          local_38 = piVar4[5];
          iStack_34 = piVar4[6];
          iStack_30 = piVar4[7];
          piVar4 = local_58;
          iVar12 = local_4c;
          do {
            piVar6 = piVar4 + uVar3 * 8;
            *piVar6 = piVar6[-8];
            piVar6[1] = piVar6[-7];
            piVar6[2] = piVar6[-6];
            piVar6[3] = piVar6[-5];
            piVar6[4] = piVar6[-4];
            piVar6[5] = piVar6[-3];
            piVar6[6] = piVar6[-2];
            piVar6[7] = piVar6[-1];
            if (uVar3 * 0x20 == iVar12) {
              piVar4 = piVar5;
              goto LAB_00b9903c;
            }
            iVar12 = iVar12 + 0x20;
            piVar4 = piVar4 + -8;
          } while (piVar6[-0x10] == 4);
          piVar4 = piVar4 + uVar3 * 8;
LAB_00b9903c:
          *piVar4 = iVar11;
          piVar4[1] = local_48;
          piVar4[2] = iStack_44;
          piVar4[3] = iStack_40;
          piVar4[4] = local_3c;
          piVar4[5] = local_38;
          piVar4[6] = iStack_34;
          piVar4[7] = iStack_30;
        }
        uVar16 = uVar16 + 1;
        local_4c = local_4c + -0x20;
        local_58 = local_58 + 8;
      } while (uVar16 != param_2 - uVar21);
    }
    piVar6 = piVar5 + -8;
    iVar11 = 0;
    piVar4 = param_3 + param_2 * 8;
    do {
      piVar4 = piVar4 + -8;
      uVar3 = (uint)(*piVar5 != 4 && *param_3 == 4);
      piVar8 = param_3;
      if (uVar3 != 0) {
        piVar8 = piVar5;
      }
      iVar12 = piVar8[1];
      iVar14 = piVar8[2];
      iVar17 = piVar8[3];
      piVar13 = (int *)((int)param_1 + iVar11);
      *piVar13 = *piVar8;
      piVar13[1] = iVar12;
      piVar13[2] = iVar14;
      piVar13[3] = iVar17;
      iVar12 = piVar8[5];
      iVar14 = piVar8[6];
      iVar17 = piVar8[7];
      piVar13[4] = piVar8[4];
      piVar13[5] = iVar12;
      piVar13[6] = iVar14;
      piVar13[7] = iVar17;
      piVar13 = (int *)((int)param_1 + ((param_2 * 0x20 + -0x20) - iVar11));
      uVar16 = (uint)(*piVar4 != 4 && *piVar6 == 4);
      iVar11 = iVar11 + 0x20;
      piVar8 = piVar4;
      if (uVar16 != 0) {
        piVar8 = piVar6;
      }
      piVar6 = piVar6 + uVar16 * -8;
      iVar12 = piVar8[1];
      iVar14 = piVar8[2];
      iVar17 = piVar8[3];
      uVar21 = uVar21 - 1;
      *piVar13 = *piVar8;
      piVar13[1] = iVar12;
      piVar13[2] = iVar14;
      piVar13[3] = iVar17;
      iVar12 = piVar8[5];
      iVar14 = piVar8[6];
      iVar17 = piVar8[7];
      piVar13[4] = piVar8[4];
      piVar13[5] = iVar12;
      piVar13[6] = iVar14;
      piVar13[7] = iVar17;
      piVar5 = piVar5 + uVar3 * 8;
      param_3 = param_3 + (uVar3 ^ 1) * 8;
      piVar4 = piVar4 + uVar16 * 8;
    } while (uVar21 != 0);
    piVar6 = piVar6 + 8;
    piVar8 = piVar4;
    if ((param_2 & 1) != 0) {
      bVar22 = piVar6 <= param_3;
      piVar8 = piVar5;
      if (!bVar22) {
        piVar8 = param_3;
      }
      iVar12 = piVar8[1];
      iVar14 = piVar8[2];
      iVar17 = piVar8[3];
      param_1 = (int *)((int)param_1 + iVar11);
      *param_1 = *piVar8;
      param_1[1] = iVar12;
      param_1[2] = iVar14;
      param_1[3] = iVar17;
      iVar11 = piVar8[5];
      iVar12 = piVar8[6];
      iVar14 = piVar8[7];
      piVar5 = piVar5 + (uint)bVar22 * 8;
      param_1[4] = piVar8[4];
      param_1[5] = iVar11;
      param_1[6] = iVar12;
      param_1[7] = iVar14;
      piVar8 = (int *)(uint)!bVar22;
      param_3 = param_3 + (int)piVar8 * 8;
    }
    if (param_3 == piVar6) {
      piVar8 = piVar4;
    }
    if (param_3 != piVar6 || piVar5 != piVar8) {
      FUN_00fb7254();
LAB_00b99274:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb99274);
      (*pcVar1)();
    }
  }
  return;
code_r0x00b98de0:
  piVar13 = param_3 + uVar16 * 8;
  iVar11 = piVar6[1];
  iVar12 = piVar6[2];
  iVar14 = piVar6[3];
  piVar4 = piVar6 + 8;
  uVar16 = uVar16 + 1;
  piVar8 = piVar8 + -8;
  *piVar13 = *piVar6;
  piVar13[1] = iVar11;
  piVar13[2] = iVar12;
  piVar13[3] = iVar14;
  iVar11 = piVar6[5];
  iVar12 = piVar6[6];
  iVar14 = piVar6[7];
  piVar13[4] = piVar6[4];
  piVar13[5] = iVar11;
  piVar13[6] = iVar12;
  piVar13[7] = iVar14;
  piVar13 = param_1 + uVar21 * 8;
  piVar6 = piVar4;
  uVar3 = uVar21;
  if (piVar4 < piVar13) goto LAB_00b98d80;
  goto LAB_00b98dd4;
}

