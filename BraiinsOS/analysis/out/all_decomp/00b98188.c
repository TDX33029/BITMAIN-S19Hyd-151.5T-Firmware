// FUN_00b98188 @ 00b98188 size=1496 calls_out=3 calls_in=2
// strings: 

void FUN_00b98188(int param_1,uint param_2,int *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar29 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar29 & 0xffffffff);
  uVar4 = uVar29 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar29 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar29;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar10 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar10) + (param_2 >> iVar10) >> 1;
  }
  uVar20 = 1;
  uVar14 = 0;
  uVar12 = 0;
  do {
    uVar7 = 0;
    bVar6 = 0;
    uVar17 = 1;
    piVar26 = (int *)(param_1 + uVar14 * 0x20);
    if (uVar14 < param_2) {
      uVar17 = param_2 - uVar14;
      if (uVar17 < uVar5) {
LAB_00b98290:
        if (param_5 == 0) {
          if (uVar5 <= uVar17) {
            uVar17 = uVar5;
          }
          uVar17 = uVar17 << 1;
        }
        else {
          if (0x1f < uVar17) {
            uVar17 = 0x20;
          }
          FUN_00b98760(piVar26,uVar17,param_3,param_4,0,0);
          uVar17 = uVar17 << 1 | 1;
        }
      }
      else {
        if (uVar17 < 2) {
          uVar7 = uVar17;
        }
        else if ((piVar26[8] == 4) || (*piVar26 != 4)) {
          uVar7 = 2;
          iVar10 = piVar26[8];
          if (uVar17 != 2) {
            do {
              iVar13 = uVar7 * 8;
              if ((piVar26[iVar13] != 4) && (uVar24 = uVar7, iVar10 == 4)) break;
              uVar7 = uVar7 + 1;
              iVar10 = piVar26[iVar13];
              uVar24 = uVar17;
            } while (uVar17 != uVar7);
            uVar7 = uVar24;
            if (uVar7 < uVar5) goto LAB_00b98290;
          }
        }
        else {
          if (2 < uVar5) goto LAB_00b98290;
          iVar16 = piVar26[1];
          iVar28 = piVar26[2];
          iVar10 = piVar26[8];
          piVar26[8] = *piVar26;
          iVar27 = piVar26[0xb];
          *piVar26 = iVar10;
          iVar13 = piVar26[4];
          piVar26[1] = piVar26[9];
          piVar26[9] = iVar16;
          piVar26[2] = piVar26[10];
          piVar26[10] = iVar28;
          piVar26[0xb] = piVar26[3];
          piVar26[4] = piVar26[0xc];
          iVar10 = piVar26[0xd];
          piVar26[0xd] = piVar26[5];
          piVar26[5] = iVar10;
          iVar10 = piVar26[0xe];
          piVar26[0xe] = piVar26[6];
          piVar26[6] = iVar10;
          iVar10 = piVar26[0xf];
          piVar26[0xf] = piVar26[7];
          uVar7 = 2;
          piVar26[3] = iVar27;
          piVar26[0xc] = iVar13;
          piVar26[7] = iVar10;
        }
        uVar17 = uVar7 << 1 | 1;
      }
      uVar24 = uVar14 - (uVar20 >> 1);
      uVar9 = uVar24 + uVar14;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar9;
      uVar19 = (uVar17 >> 1) + uVar14 * 2;
      lVar2 = (ulonglong)uVar19 * (uVar4 & 0xffffffff);
      uVar7 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar24 = iVar3 * uVar19 + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)CARRY4(uVar24,uVar14) * (int)uVar4 +
               uVar9 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar24 != 0) {
        uVar7 = LZCOUNT(uVar24);
      }
      bVar6 = (byte)uVar7;
      if (1 < uVar12) goto LAB_00b98358;
LAB_00b9826c:
      abStack_67[uVar12 + 1] = bVar6;
      local_170[uVar12] = uVar20;
      uVar7 = uVar20;
    }
    else {
      if (uVar12 < 2) goto LAB_00b9826c;
LAB_00b98358:
      do {
        while( true ) {
          uVar24 = uVar12 - 1;
          if (abStack_67[uVar12] < uVar7) goto LAB_00b985bc;
          uVar19 = local_170[uVar24];
          uVar9 = uVar19 >> 1;
          uVar23 = uVar9 + (uVar20 >> 1);
          uVar12 = uVar24;
          if ((param_4 < uVar23) || (((uVar19 | uVar20) & 1) != 0)) break;
          uVar20 = uVar23 * 2;
          if (uVar24 < 2) goto LAB_00b985b8;
        }
        piVar25 = (int *)(param_1 + (uVar14 - uVar23) * 0x20);
        if ((uVar19 & 1) == 0) {
          FUN_00b98760(piVar25,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar20 & 1) == 0) {
          FUN_00b98760(piVar25 + uVar9 * 8,uVar20 >> 1,param_3,param_4,
                       LZCOUNT(uVar20 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar15 = uVar20 >> 1;
        if (1 < uVar19 && 1 < uVar20) {
          uVar20 = uVar9;
          if (uVar15 < uVar9) {
            uVar20 = uVar15;
          }
          if (uVar20 <= param_4) {
            piVar18 = piVar25 + uVar9 * 8;
            piVar8 = piVar25;
            if (uVar15 < uVar9) {
              piVar8 = piVar18;
            }
            FUN_016dd1aa(param_3,piVar8,uVar20 << 5);
            piVar22 = param_3 + uVar20 * 8;
            piVar8 = param_3;
            if (uVar15 < uVar9) {
              piVar11 = (int *)(param_1 + -0x20 + uVar14 * 0x20);
              do {
                piVar18 = piVar18 + -8;
                piVar21 = piVar22 + -8;
                uVar20 = (uint)(*piVar21 != 4 && *piVar18 == 4);
                piVar22 = piVar21 + uVar20 * 8;
                if (uVar20 != 0) {
                  piVar21 = piVar18;
                }
                iVar10 = piVar21[1];
                iVar13 = piVar21[2];
                iVar16 = piVar21[3];
                piVar18 = piVar18 + (uVar20 ^ 1) * 8;
                *piVar11 = *piVar21;
                piVar11[1] = iVar10;
                piVar11[2] = iVar13;
                piVar11[3] = iVar16;
                iVar10 = piVar21[5];
                iVar13 = piVar21[6];
                iVar16 = piVar21[7];
                piVar11[4] = piVar21[4];
                piVar11[5] = iVar10;
                piVar11[6] = iVar13;
                piVar11[7] = iVar16;
                piVar21 = piVar18;
              } while ((piVar18 != piVar25) && (piVar11 = piVar11 + -8, piVar22 != param_3));
            }
            else {
              do {
                piVar21 = piVar25 + 8;
                uVar20 = (uint)(*piVar18 != 4 && *piVar8 == 4);
                piVar11 = piVar8;
                if (uVar20 != 0) {
                  piVar11 = piVar18;
                }
                iVar10 = piVar11[1];
                iVar13 = piVar11[2];
                iVar16 = piVar11[3];
                *piVar25 = *piVar11;
                piVar25[1] = iVar10;
                piVar25[2] = iVar13;
                piVar25[3] = iVar16;
                iVar10 = piVar11[5];
                iVar13 = piVar11[6];
                iVar16 = piVar11[7];
                piVar25[4] = piVar11[4];
                piVar25[5] = iVar10;
                piVar25[6] = iVar13;
                piVar25[7] = iVar16;
                piVar8 = piVar8 + (uVar20 ^ 1) * 8;
                if (piVar8 == piVar22) break;
                piVar18 = piVar18 + uVar20 * 8;
                piVar25 = piVar21;
              } while (piVar18 != piVar26);
            }
            FUN_016dd1aa(piVar21,piVar8,(int)piVar22 - (int)piVar8);
          }
        }
        uVar20 = uVar23 * 2 | 1;
      } while (1 < uVar24);
LAB_00b985b8:
      uVar12 = 1;
LAB_00b985bc:
      abStack_67[uVar12 + 1] = (byte)uVar7;
      local_170[uVar12] = uVar20;
      uVar7 = uVar20;
    }
    uVar20 = uVar17;
    if (param_2 <= uVar14) {
      if ((uVar7 & 1) == 0) {
        FUN_00b98760(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + (uVar20 >> 1);
    uVar12 = uVar12 + 1;
  } while( true );
}

