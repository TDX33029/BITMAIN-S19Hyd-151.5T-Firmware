// FUN_0123de0c @ 0123de0c size=1644 calls_out=4 calls_in=2
// strings: 

void FUN_0123de0c(int param_1,uint param_2,int *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  undefined1 uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  int *piVar23;
  byte bVar24;
  undefined4 uVar25;
  int iVar26;
  uint uVar27;
  int *piVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  bool bVar35;
  ulonglong uVar36;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar36 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar36 & 0xffffffff);
  uVar4 = uVar36 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar36 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar36;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar19 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar19) + (param_2 >> iVar19) >> 1;
  }
  uVar33 = 0;
  uVar27 = 0;
  uVar31 = 1;
LAB_0123dee0:
  uVar11 = 0;
  uVar34 = 1;
  piVar7 = (int *)(param_1 + uVar33 * 0x10);
  if (uVar33 < param_2) {
    uVar34 = param_2 - uVar33;
    if (uVar6 <= uVar34) {
      if (1 < uVar34) {
        uVar17 = (undefined1)piVar7[5];
        iVar19 = piVar7[4];
        iVar22 = FUN_0123e488(iVar19,uVar17,*piVar7,(char)piVar7[1]);
        if (iVar22 == 0) {
          uVar11 = 2;
          if (uVar34 != 2) {
            iVar26 = 0;
            do {
              iVar5 = piVar7[iVar26 * 4 + 9];
              iVar20 = piVar7[iVar26 * 4 + 8];
              iVar19 = FUN_0123e488(iVar20,(char)iVar5,iVar19,uVar17);
              if (iVar19 != 0) goto LAB_0123e078;
              iVar26 = iVar26 + 1;
              iVar19 = iVar20;
              uVar17 = (char)iVar5;
            } while ((param_2 - 2) - uVar33 != iVar26);
            goto LAB_0123e06c;
          }
          goto LAB_0123e114;
        }
        if (uVar34 != 2) {
          iVar26 = 0;
          do {
            iVar5 = piVar7[iVar26 * 4 + 9];
            iVar20 = piVar7[iVar26 * 4 + 8];
            iVar19 = FUN_0123e488(iVar20,(char)iVar5,iVar19,uVar17);
            if (iVar19 == 0) goto LAB_0123e078;
            iVar26 = iVar26 + 1;
            iVar19 = iVar20;
            uVar17 = (char)iVar5;
          } while ((param_2 - 2) - uVar33 != iVar26);
LAB_0123e06c:
          uVar11 = uVar34;
          goto LAB_0123e080;
        }
        uVar11 = 2;
        uVar34 = 1;
        goto LAB_0123e0ac;
      }
      uVar11 = uVar34;
      goto LAB_0123e114;
    }
    goto LAB_0123df0c;
  }
  goto LAB_0123e164;
LAB_0123e078:
  uVar11 = iVar26 + 2;
LAB_0123e080:
  if (uVar11 < uVar6) {
LAB_0123df0c:
    if (param_5 == 0) {
      if (uVar6 <= uVar34) {
        uVar34 = uVar6;
      }
      uVar34 = uVar34 << 1;
    }
    else {
      if (0x1f < uVar34) {
        uVar34 = 0x20;
      }
      FUN_0123e4f4(piVar7,uVar34,param_3,param_4,0,0);
      uVar34 = uVar34 << 1 | 1;
    }
  }
  else {
    if (iVar22 != 0) {
      uVar34 = uVar11 >> 1;
      if (uVar34 == 0) {
        uVar11 = 1;
      }
      else {
LAB_0123e0ac:
        puVar14 = (undefined4 *)(param_1 + 8 + uVar33 * 0x10);
        puVar21 = (undefined4 *)(param_1 + -8 + uVar11 * 0x10 + uVar33 * 0x10);
        do {
          uVar25 = puVar14[-2];
          uVar34 = uVar34 - 1;
          puVar14[-2] = puVar21[-2];
          puVar21[-2] = uVar25;
          uVar25 = puVar21[-1];
          puVar21[-1] = puVar14[-1];
          puVar14[-1] = uVar25;
          uVar25 = *puVar14;
          *puVar14 = *puVar21;
          *puVar21 = uVar25;
          uVar25 = puVar21[1];
          puVar21[1] = puVar14[1];
          puVar21 = puVar21 + -4;
          puVar14[1] = uVar25;
          puVar14 = puVar14 + 4;
        } while (uVar34 != 0);
      }
    }
LAB_0123e114:
    uVar34 = uVar11 << 1 | 1;
  }
  uVar8 = uVar33 - (uVar31 >> 1);
  uVar9 = uVar8 + uVar33;
  lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar9;
  uVar15 = (uVar34 >> 1) + uVar33 * 2;
  lVar2 = (ulonglong)uVar15 * (uVar4 & 0xffffffff);
  uVar11 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
  uVar8 = iVar3 * uVar15 + (int)((ulonglong)lVar2 >> 0x20) ^
          (uint)CARRY4(uVar8,uVar33) * (int)uVar4 + uVar9 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
  if (uVar8 != 0) {
    uVar11 = LZCOUNT(uVar8);
  }
LAB_0123e164:
  if (1 < uVar27) {
    do {
      while( true ) {
        uVar8 = uVar27 - 1;
        if (abStack_67[uVar27] < uVar11) goto LAB_0123e414;
        uVar15 = local_170[uVar8];
        uVar9 = uVar15 >> 1;
        uVar32 = uVar9 + (uVar31 >> 1);
        uVar27 = uVar8;
        if ((param_4 < uVar32) || (((uVar15 | uVar31) & 1) != 0)) break;
        uVar31 = uVar32 * 2;
        if (uVar8 < 2) goto LAB_0123e408;
      }
      piVar23 = (int *)(param_1 + (uVar33 - uVar32) * 0x10);
      if ((uVar15 & 1) == 0) {
        FUN_0123e4f4(piVar23,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
      }
      if ((uVar31 & 1) == 0) {
        FUN_0123e4f4(piVar23 + uVar9 * 4,uVar31 >> 1,param_3,param_4,
                     LZCOUNT(uVar31 >> 1 | 1) << 1 ^ 0x3e,0);
      }
      uVar30 = uVar31 >> 1;
      if (1 < uVar15 && 1 < uVar31) {
        uVar31 = uVar9;
        if (uVar30 < uVar9) {
          uVar31 = uVar30;
        }
        if (uVar31 <= param_4) {
          piVar29 = piVar23 + uVar9 * 4;
          piVar12 = piVar23;
          if (uVar30 < uVar9) {
            piVar12 = piVar29;
          }
          FUN_016dd1aa(param_3,piVar12,uVar31 << 4);
          piVar10 = param_3 + uVar31 * 4;
          piVar12 = param_3;
          if (uVar30 < uVar9) {
            piVar13 = (int *)(param_1 + -0x10 + uVar33 * 0x10);
            piVar16 = piVar29;
            do {
              bVar18 = 0x50;
              piVar29 = piVar10 + -4;
              bVar24 = 0x50;
              if (*piVar29 == 0) {
                bVar24 = (&DAT_0042054c)[*(byte *)(piVar10 + -3)];
              }
              piVar28 = piVar16 + -4;
              if (*piVar28 == 0) {
                bVar18 = (&DAT_00420576)[*(byte *)(piVar16 + -3)];
              }
              bVar35 = bVar24 < bVar18;
              piVar10 = piVar29;
              if (bVar35) {
                piVar10 = piVar28;
              }
              iVar19 = *piVar10;
              iVar26 = piVar10[1];
              iVar22 = piVar10[2];
              piVar13[3] = piVar10[3];
              *piVar13 = iVar19;
              piVar13[1] = iVar26;
              piVar10 = piVar29 + (uint)bVar35 * 4;
              piVar13[2] = iVar22;
              piVar16 = piVar28 + (uint)!bVar35 * 4;
              if (piVar16 != piVar23) {
                piVar13 = piVar13 + -4;
              }
            } while (piVar16 != piVar23 && piVar10 != param_3);
          }
          else {
            do {
              bVar18 = 0x50;
              bVar24 = 0x50;
              if (*piVar29 == 0) {
                bVar24 = (&DAT_004205a0)[*(byte *)(piVar29 + 1)];
              }
              if (*piVar12 == 0) {
                bVar18 = (&DAT_004205ca)[*(byte *)(piVar12 + 1)];
              }
              bVar35 = bVar18 <= bVar24;
              piVar16 = piVar12;
              if (!bVar35) {
                piVar16 = piVar29;
              }
              iVar26 = piVar16[1];
              iVar22 = piVar16[2];
              iVar19 = piVar16[3];
              *piVar23 = *piVar16;
              piVar23[1] = iVar26;
              piVar23[3] = iVar19;
              piVar23[2] = iVar22;
              piVar12 = piVar12 + (uint)bVar35 * 4;
              piVar16 = piVar23 + 4;
              if (piVar12 == piVar10) break;
              piVar29 = piVar29 + (uint)!bVar35 * 4;
              piVar23 = piVar16;
            } while (piVar29 != piVar7);
          }
          FUN_016dd1aa(piVar16,piVar12,(int)piVar10 - (int)piVar12);
        }
      }
      uVar31 = uVar32 * 2 | 1;
    } while (1 < uVar8);
LAB_0123e408:
    uVar27 = 1;
  }
LAB_0123e414:
  abStack_67[uVar27 + 1] = (byte)uVar11;
  local_170[uVar27] = uVar31;
  if (param_2 <= uVar33) {
    if ((uVar31 & 1) == 0) {
      FUN_0123e4f4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar27 = uVar27 + 1;
  uVar33 = uVar33 + (uVar34 >> 1);
  uVar31 = uVar34;
  goto LAB_0123dee0;
}

