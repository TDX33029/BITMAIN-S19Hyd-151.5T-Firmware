// FUN_012bc70c @ 012bc70c size=2000 calls_out=7 calls_in=2
// strings: 

void FUN_012bc70c(undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *extraout_r2;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined4 *local_58;
  int local_54;
  undefined4 *local_44;
  undefined1 auStack_40 [28];
  
  if (0x10 < param_2) {
    do {
      uVar14 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_012bb690(param_1,uVar14,param_3,param_4);
          return;
        }
        uVar22 = uVar14 >> 3;
        puVar7 = param_1 + uVar22 * 0x46;
        puVar19 = param_1 + uVar22 * 0x28;
        if (uVar14 < 0x40) {
          cVar2 = *(char *)(param_1 + 3);
          uVar23 = 0;
          cVar3 = *(char *)(puVar19 + 3);
          uVar12 = 1;
          uVar5 = 0;
          puVar17 = (undefined4 *)(uVar22 * 5);
          if (cVar2 == '\x01') {
            puVar17 = param_1;
          }
          uVar16 = 1;
          if (cVar2 == '\x01') {
            uVar12 = puVar17[1];
            uVar23 = puVar17[2];
          }
          if (cVar3 == '\x01') {
            uVar5 = puVar19[2];
            uVar16 = puVar19[1];
          }
          uVar22 = uVar5;
          if (uVar23 < uVar5) {
            uVar22 = uVar23;
          }
          iVar20 = FUN_016dd50a(uVar12,uVar16,uVar22);
          if (iVar20 == 0) {
            iVar20 = uVar23 - uVar5;
          }
          cVar4 = *(char *)(puVar7 + 3);
          uVar22 = 0;
          puVar17 = extraout_r2;
          if (cVar2 != '\0') {
            puVar17 = param_1;
          }
          uVar12 = 1;
          uVar23 = 0;
          uVar16 = 1;
          uVar5 = (uint)(0 < iVar20) - (uint)(iVar20 < 0);
          if (cVar2 != '\0') {
            uVar12 = puVar17[1];
            uVar22 = puVar17[2];
          }
          if (cVar4 == '\x01') {
            uVar16 = puVar7[1];
            uVar23 = puVar7[2];
          }
          uVar15 = uVar23;
          if (uVar22 < uVar23) {
            uVar15 = uVar22;
          }
          iVar20 = FUN_016dd50a(uVar12,uVar16,uVar15);
          if (iVar20 == 0) {
            iVar20 = uVar22 - uVar23;
          }
          local_44 = param_1;
          if (-1 < (int)((uint)(0 < iVar20) - (uint)(iVar20 < 0) ^ uVar5)) {
            uVar22 = 0;
            uVar12 = 1;
            uVar16 = 1;
            uVar23 = 0;
            if (cVar3 != '\0') {
              uVar12 = puVar19[1];
              uVar22 = puVar19[2];
            }
            if (cVar4 != '\0') {
              uVar16 = puVar7[1];
              uVar23 = puVar7[2];
            }
            uVar15 = uVar23;
            if (uVar22 < uVar23) {
              uVar15 = uVar22;
            }
            iVar20 = FUN_016dd50a(uVar12,uVar16,uVar15);
            if (iVar20 == 0) {
              iVar20 = uVar22 - uVar23;
            }
            local_44 = puVar19;
            if ((int)((uint)(0 < iVar20) - (uint)(iVar20 < 0) ^ uVar5) < 0) {
              local_44 = puVar7;
            }
          }
        }
        else {
          local_44 = (undefined4 *)FUN_012bcee8(param_1,puVar19,puVar7);
        }
        if (param_4 < uVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x12bcea8);
          (*pcVar1)();
        }
        param_2 = 0;
        param_5 = param_5 + -1;
        uVar22 = ((uint)((int)local_44 - (int)param_1) >> 3) * -0x33333333;
        iVar20 = param_3 + uVar14 * 0x28;
        local_58 = (undefined4 *)0x0;
        uVar5 = uVar22;
        puVar19 = param_1;
        local_54 = iVar20;
        while( true ) {
          puVar7 = puVar19;
          if (puVar19 < param_1 + uVar5 * 10) {
            iVar24 = 0;
            iVar21 = 0;
            uVar23 = param_2;
            do {
              puVar7 = (undefined4 *)((int)puVar19 - iVar21);
              uVar18 = 0;
              uVar16 = 1;
              uVar15 = 0;
              uVar12 = 1;
              if (*(char *)(puVar7 + 3) == '\x01') {
                uVar12 = puVar7[1];
                uVar18 = puVar7[2];
              }
              if (*(char *)(local_44 + 3) == '\x01') {
                uVar15 = local_44[2];
                uVar16 = local_44[1];
              }
              uVar10 = uVar15;
              if (uVar18 < uVar15) {
                uVar10 = uVar18;
              }
              iVar6 = FUN_016dd50a(uVar12,uVar16,uVar10);
              if (iVar6 == 0) {
                iVar6 = uVar18 - uVar15;
              }
              iVar24 = iVar24 + 0x28;
              iVar11 = param_3;
              if (-1 < iVar6) {
                iVar11 = local_54 + -0x28 + iVar21;
              }
              param_2 = uVar23 - (iVar6 >> 0x1f);
              puVar17 = (undefined4 *)(iVar11 + uVar23 * 0x28);
              uVar12 = puVar7[1];
              uVar16 = puVar7[2];
              uVar13 = puVar7[3];
              uVar9 = puVar7[4];
              iVar21 = iVar21 + -0x28;
              *puVar17 = *puVar7;
              puVar17[1] = uVar12;
              puVar17[2] = uVar16;
              puVar17[3] = uVar13;
              puVar17[4] = uVar9;
              uVar12 = puVar7[6];
              uVar16 = puVar7[7];
              uVar13 = puVar7[8];
              uVar9 = puVar7[9];
              puVar17[5] = puVar7[5];
              puVar17[6] = uVar12;
              puVar17[7] = uVar16;
              puVar17[8] = uVar13;
              puVar17[9] = uVar9;
              uVar23 = param_2;
            } while ((undefined4 *)((int)puVar19 + iVar24) < param_1 + uVar5 * 10);
            local_54 = local_54 + iVar21;
            puVar7 = (undefined4 *)((int)puVar19 + iVar24);
          }
          if (uVar5 == uVar14) break;
          local_54 = local_54 + -0x28;
          local_58 = (undefined4 *)(local_54 + param_2 * 0x28);
          puVar19 = puVar7 + 10;
          uVar12 = puVar7[1];
          uVar16 = puVar7[2];
          uVar13 = puVar7[3];
          uVar9 = puVar7[4];
          *local_58 = *puVar7;
          local_58[1] = uVar12;
          local_58[2] = uVar16;
          local_58[3] = uVar13;
          local_58[4] = uVar9;
          uVar12 = puVar7[6];
          uVar16 = puVar7[7];
          uVar13 = puVar7[8];
          uVar9 = puVar7[9];
          local_58[5] = puVar7[5];
          local_58[6] = uVar12;
          local_58[7] = uVar16;
          local_58[8] = uVar13;
          local_58[9] = uVar9;
          uVar5 = uVar14;
        }
        uVar12 = local_44[1];
        uVar16 = local_44[2];
        uVar13 = local_44[3];
        uVar9 = local_44[4];
        *local_58 = *local_44;
        local_58[1] = uVar12;
        local_58[2] = uVar16;
        local_58[3] = uVar13;
        local_58[4] = uVar9;
        uVar12 = local_44[6];
        uVar16 = local_44[7];
        uVar13 = local_44[8];
        uVar9 = local_44[9];
        local_58[5] = local_44[5];
        local_58[6] = uVar12;
        local_58[7] = uVar16;
        local_58[8] = uVar13;
        local_58[9] = uVar9;
        FUN_016dd1aa(param_1,param_3,param_2 * 0x28);
        iVar21 = uVar14 - param_2;
        if (iVar21 != 0) {
          puVar19 = param_1 + param_2 * 10;
          iVar24 = iVar21;
          puVar7 = (undefined4 *)(param_3 + -0x28 + uVar14 * 0x28);
          do {
            uVar12 = puVar7[1];
            uVar16 = puVar7[2];
            uVar13 = puVar7[3];
            uVar9 = puVar7[4];
            iVar24 = iVar24 + -1;
            *puVar19 = *puVar7;
            puVar19[1] = uVar12;
            puVar19[2] = uVar16;
            puVar19[3] = uVar13;
            puVar19[4] = uVar9;
            uVar12 = puVar7[6];
            uVar16 = puVar7[7];
            uVar13 = puVar7[8];
            uVar9 = puVar7[9];
            puVar19[5] = puVar7[5];
            puVar19[6] = uVar12;
            puVar19[7] = uVar16;
            puVar19[8] = uVar13;
            puVar19[9] = uVar9;
            puVar19 = puVar19 + 10;
            puVar7 = puVar7 + -10;
          } while (iVar24 != 0);
        }
        if (param_2 == 0) break;
        if (uVar14 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_012bc70c(param_1 + param_2 * 10,iVar21,param_3,param_4,param_5);
        uVar14 = param_2;
        if (param_2 < 0x11) goto LAB_012bc728;
      }
      uVar5 = 0;
      puVar7 = (undefined4 *)0x0;
      puVar19 = param_1;
      while( true ) {
        puVar17 = puVar19;
        if (puVar19 < param_1 + uVar22 * 10) {
          iVar24 = 0;
          iVar21 = 0;
          uVar23 = uVar5;
          do {
            puVar17 = (undefined4 *)((int)puVar19 - iVar21);
            uVar5 = 0;
            uVar16 = 1;
            uVar15 = 0;
            uVar12 = 1;
            if (*(char *)(local_44 + 3) == '\x01') {
              uVar5 = local_44[2];
              uVar12 = local_44[1];
            }
            if (*(char *)(puVar17 + 3) == '\x01') {
              uVar16 = puVar17[1];
              uVar15 = puVar17[2];
            }
            uVar18 = uVar15;
            if (uVar5 < uVar15) {
              uVar18 = uVar5;
            }
            uVar18 = FUN_016dd50a(uVar12,uVar16,uVar18);
            if (uVar18 == 0) {
              uVar18 = uVar5 - uVar15;
            }
            iVar24 = iVar24 + 0x28;
            if (uVar18 < 0x80000000) {
              uVar5 = uVar23 + 1;
              iVar6 = param_3;
            }
            else {
              uVar5 = uVar23;
              iVar6 = iVar20 + -0x28 + iVar21;
            }
            iVar21 = iVar21 + -0x28;
            puVar8 = (undefined4 *)(iVar6 + uVar23 * 0x28);
            uVar12 = puVar17[1];
            uVar16 = puVar17[2];
            uVar13 = puVar17[3];
            uVar9 = puVar17[4];
            *puVar8 = *puVar17;
            puVar8[1] = uVar12;
            puVar8[2] = uVar16;
            puVar8[3] = uVar13;
            puVar8[4] = uVar9;
            uVar12 = puVar17[6];
            uVar16 = puVar17[7];
            uVar13 = puVar17[8];
            uVar9 = puVar17[9];
            puVar8[5] = puVar17[5];
            puVar8[6] = uVar12;
            puVar8[7] = uVar16;
            puVar8[8] = uVar13;
            puVar8[9] = uVar9;
            uVar23 = uVar5;
          } while ((undefined4 *)((int)puVar19 + iVar24) < param_1 + uVar22 * 10);
          iVar20 = iVar20 + iVar21;
          puVar17 = (undefined4 *)((int)puVar19 + iVar24);
        }
        if (uVar22 == uVar14) break;
        puVar7 = (undefined4 *)(param_3 + uVar5 * 0x28);
        uVar12 = puVar17[1];
        uVar16 = puVar17[2];
        uVar13 = puVar17[3];
        uVar9 = puVar17[4];
        puVar19 = puVar17 + 10;
        uVar5 = uVar5 + 1;
        *puVar7 = *puVar17;
        puVar7[1] = uVar12;
        puVar7[2] = uVar16;
        puVar7[3] = uVar13;
        puVar7[4] = uVar9;
        iVar20 = iVar20 + -0x28;
        uVar12 = puVar17[6];
        uVar16 = puVar17[7];
        uVar13 = puVar17[8];
        uVar9 = puVar17[9];
        puVar7[5] = puVar17[5];
        puVar7[6] = uVar12;
        puVar7[7] = uVar16;
        puVar7[8] = uVar13;
        puVar7[9] = uVar9;
        uVar22 = uVar14;
      }
      uVar12 = local_44[1];
      uVar16 = local_44[2];
      uVar13 = local_44[3];
      uVar9 = local_44[4];
      *puVar7 = *local_44;
      puVar7[1] = uVar12;
      puVar7[2] = uVar16;
      puVar7[3] = uVar13;
      puVar7[4] = uVar9;
      uVar12 = local_44[6];
      uVar16 = local_44[7];
      uVar13 = local_44[8];
      uVar9 = local_44[9];
      puVar7[5] = local_44[5];
      puVar7[6] = uVar12;
      puVar7[7] = uVar16;
      puVar7[8] = uVar13;
      puVar7[9] = uVar9;
      FUN_016dd1aa(param_1,param_3,uVar5 * 0x28);
      param_2 = uVar14 - uVar5;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar5 * 10;
      puVar19 = param_1;
      uVar22 = param_2;
      puVar7 = (undefined4 *)(param_3 + -0x28 + uVar14 * 0x28);
      do {
        uVar12 = puVar7[1];
        uVar16 = puVar7[2];
        uVar13 = puVar7[3];
        uVar9 = puVar7[4];
        uVar22 = uVar22 - 1;
        *puVar19 = *puVar7;
        puVar19[1] = uVar12;
        puVar19[2] = uVar16;
        puVar19[3] = uVar13;
        puVar19[4] = uVar9;
        uVar12 = puVar7[6];
        uVar16 = puVar7[7];
        uVar13 = puVar7[8];
        uVar9 = puVar7[9];
        puVar19[5] = puVar7[5];
        puVar19[6] = uVar12;
        puVar19[7] = uVar16;
        puVar19[8] = uVar13;
        puVar19[9] = uVar9;
        puVar19 = puVar19 + 10;
        puVar7 = puVar7 + -10;
      } while (uVar22 != 0);
      if (uVar14 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar5,uVar14,uVar14,&DAT_018af348);
      }
    } while (0x10 < param_2);
  }
LAB_012bc728:
  if (1 < param_2) {
    iVar20 = 0;
    puVar19 = param_1 + 10;
    do {
      cVar2 = *(char *)(puVar19 + 3);
      uVar14 = 0;
      uVar12 = 1;
      if (cVar2 == '\x01') {
        uVar12 = puVar19[1];
        uVar14 = puVar19[2];
      }
      if (*(char *)(puVar19 + -7) == '\x01') {
        uVar16 = puVar19[-9];
        uVar22 = puVar19[-8];
      }
      else {
        uVar16 = 1;
        uVar22 = 0;
      }
      uVar5 = uVar22;
      if (uVar14 < uVar22) {
        uVar5 = uVar14;
      }
      uVar5 = FUN_016dd50a(uVar12,uVar16,uVar5);
      if (uVar5 == 0) {
        uVar5 = uVar14 - uVar22;
      }
      if (0x7fffffff < uVar5) {
        uVar16 = *puVar19;
        uVar13 = puVar19[1];
        uVar22 = puVar19[2];
        FUN_016dd1aa(auStack_40,(int)puVar19 + 0xd,0x1b);
        iVar21 = iVar20;
        uVar12 = 1;
        uVar14 = 0;
        if (cVar2 != '\0') {
          uVar12 = uVar13;
          uVar14 = uVar22;
        }
        do {
          iVar24 = iVar21;
          puVar7 = (undefined4 *)((int)param_1 + iVar24);
          puVar7[10] = *puVar7;
          puVar7[0xb] = puVar7[1];
          puVar7[0xc] = puVar7[2];
          puVar7[0xd] = puVar7[3];
          puVar7[0xe] = puVar7[4];
          puVar7[0xf] = puVar7[5];
          puVar7[0x10] = puVar7[6];
          puVar7[0x11] = puVar7[7];
          puVar7[0x12] = puVar7[8];
          puVar7[0x13] = puVar7[9];
          if (iVar24 == 0) {
            puVar7 = param_1;
            goto LAB_012bc758;
          }
          if (*(char *)(puVar7 + -7) == '\x01') {
            uVar9 = puVar7[-9];
            uVar5 = puVar7[-8];
          }
          else {
            uVar9 = 1;
            uVar5 = 0;
          }
          uVar23 = uVar5;
          if (uVar14 < uVar5) {
            uVar23 = uVar14;
          }
          iVar6 = FUN_016dd50a(uVar12,uVar9,uVar23);
          if (iVar6 == 0) {
            iVar6 = uVar14 - uVar5;
          }
          iVar21 = iVar24 + -0x28;
        } while (iVar6 < 0);
        puVar7 = (undefined4 *)((int)param_1 + iVar24);
LAB_012bc758:
        *(char *)(puVar7 + 3) = cVar2;
        puVar7[1] = uVar13;
        *puVar7 = uVar16;
        puVar7[2] = uVar22;
        FUN_016dd1aa((int)puVar7 + 0xd,auStack_40,0x1b);
      }
      puVar19 = puVar19 + 10;
      iVar20 = iVar20 + 0x28;
    } while (puVar19 != param_1 + param_2 * 10);
  }
  return;
}

