// FUN_0160a4d0 @ 0160a4d0 size=1120 calls_out=11 calls_in=1
// strings: 

bool FUN_0160a4d0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  short *psVar10;
  undefined2 *puVar11;
  short *psVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  undefined2 *puVar16;
  short *psVar17;
  int iVar18;
  uint uVar19;
  short sVar20;
  uint uVar21;
  uint in_fpscr;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auStack_30 [12];
  
  iVar8 = param_1[10];
  if (*param_1 == 1 && param_1[1] == 0) {
    uVar6 = param_1[7];
    fVar22 = (float)VectorUnsignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
    fVar23 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    if (0.2 <= fVar22 / fVar23) {
      *param_1 = 0;
      param_1[1] = 0;
LAB_0160a68c:
      uVar6 = uVar6 * 2;
      if (uVar6 < 0x8001) {
        uVar19 = param_1[7];
        psVar17 = (short *)param_1[6];
        if (uVar19 != 0) {
          puVar9 = (ushort *)(psVar17 + 1);
          iVar8 = uVar19 << 2;
          uVar13 = 0;
          do {
            if ((puVar9[-1] != 0xffff) &&
               ((uVar13 - (*(ushort *)(param_1 + 0xe) & *puVar9) & (uint)*(ushort *)(param_1 + 0xe))
                == 0)) goto LAB_0160a904;
            uVar13 = uVar13 + 1;
            puVar9 = puVar9 + 2;
            iVar8 = iVar8 + -4;
          } while (iVar8 != 0);
        }
        uVar13 = 0;
LAB_0160a904:
        FUN_01412b3c(auStack_30,uVar6);
        uVar24 = FUN_01410d80(auStack_30);
        uVar7 = (uint)((ulonglong)uVar24 >> 0x20);
        iVar8 = (int)uVar24;
        uVar21 = uVar6 - 1;
        param_1[6] = iVar8;
        *(short *)(param_1 + 0xe) = (short)uVar21;
        param_1[7] = uVar7;
        if (uVar19 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar13,uVar19,uVar19,&DAT_01d2f43c);
        }
        if (uVar13 != uVar19) {
          psVar10 = psVar17 + uVar13 * 2;
          do {
            sVar20 = *psVar10;
            if (sVar20 != -1) {
              uVar4 = (ushort)psVar10[1] & uVar21;
              while( true ) {
                do {
                  uVar15 = uVar4;
                  uVar4 = 0;
                } while (uVar7 <= uVar15);
                psVar12 = (short *)(iVar8 + uVar15 * 4);
                if (*psVar12 == -1) break;
                uVar4 = uVar15 + 1;
              }
              psVar12[1] = psVar10[1];
              *psVar12 = sVar20;
            }
            psVar10 = psVar10 + 2;
          } while (psVar10 != psVar17 + uVar19 * 2);
        }
        if (uVar13 != 0) {
          psVar10 = psVar17;
          do {
            sVar20 = *psVar10;
            if (sVar20 != -1) {
              uVar4 = uVar21 & (ushort)psVar10[1];
              while( true ) {
                do {
                  uVar15 = uVar4;
                  uVar4 = 0;
                } while (uVar7 <= uVar15);
                psVar12 = (short *)(iVar8 + uVar15 * 4);
                if (*psVar12 == -1) break;
                uVar4 = uVar15 + 1;
              }
              psVar12[1] = psVar10[1];
              *psVar12 = sVar20;
            }
            psVar10 = psVar10 + 2;
          } while (psVar10 != psVar17 + uVar13 * 2);
        }
        FUN_0132b704(param_1 + 8,param_1[10],uVar7 - (param_1[10] + (uVar7 >> 2)),4,0x34);
        if (uVar19 != 0) {
          thunk_FUN_01be4678(psVar17);
        }
      }
      return 0x8000 < uVar6;
    }
    FUN_01414480(param_1);
    uVar6 = param_1[7];
    puVar16 = (undefined2 *)param_1[6];
    if (uVar6 != 0) {
      puVar11 = puVar16;
      do {
        puVar11[1] = 0;
        *puVar11 = 0xffff;
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar16 + uVar6 * 2);
    }
    if (param_1[10] != 0) {
      iVar18 = param_1[9];
      iVar8 = param_1[10] * 0x34 + iVar18;
      uVar1 = *(ushort *)(param_1 + 0xe);
      sVar20 = 0;
      do {
        uVar5 = FUN_0137e53c(param_1,iVar18 + 0x20);
        *(ushort *)(iVar18 + 0x30) = uVar5;
        iVar18 = iVar18 + 0x34;
        uVar13 = 0;
        uVar19 = (uint)(uVar1 & uVar5);
        while( true ) {
          do {
            uVar7 = uVar19;
            uVar19 = 0;
          } while (uVar6 <= uVar7);
          psVar17 = puVar16 + uVar7 * 2;
          if (*psVar17 == -1) {
            *psVar17 = sVar20;
            goto LAB_0160a640;
          }
          if ((uVar7 - (psVar17[1] & uVar1) & (uint)uVar1) < uVar13) break;
          uVar13 = uVar13 + 1;
          uVar19 = uVar7 + 1;
        }
        uVar19 = uVar7;
        sVar14 = sVar20;
        while( true ) {
          do {
            uVar7 = uVar19;
            uVar19 = 0;
          } while (uVar6 <= uVar7);
          psVar17 = puVar16 + uVar7 * 2;
          sVar2 = *psVar17;
          if (sVar2 == -1) break;
          uVar3 = psVar17[1];
          *psVar17 = sVar14;
          psVar17[1] = uVar5;
          uVar19 = uVar7 + 1;
          sVar14 = sVar2;
          uVar5 = uVar3;
        }
        *psVar17 = sVar14;
LAB_0160a640:
        puVar16[uVar7 * 2 + 1] = uVar5;
        sVar20 = sVar20 + 1;
      } while (iVar18 != iVar8);
    }
  }
  else {
    uVar6 = param_1[7];
    if (iVar8 == uVar6 - (uVar6 >> 2)) {
      if (iVar8 != 0) goto LAB_0160a68c;
      *(undefined2 *)(param_1 + 0xe) = 7;
      FUN_01412b3c(auStack_30,8);
      uVar24 = FUN_01410d80(auStack_30);
      if (uVar6 != 0) {
        thunk_FUN_01be4678(param_1[6]);
      }
      *(undefined8 *)(param_1 + 6) = uVar24;
      iVar8 = thunk_FUN_01be5118(0x138);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x138);
      }
      iVar18 = param_1[9];
      FUN_01410ec8(iVar18,0);
      FUN_0134aee0(param_1[8],iVar18,4,0x34);
      param_1[9] = iVar8;
      param_1[8] = 6;
      param_1[10] = 0;
    }
  }
  return false;
}

