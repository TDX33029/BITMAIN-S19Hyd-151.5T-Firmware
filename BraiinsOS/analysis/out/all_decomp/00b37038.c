// FUN_00b37038 @ 00b37038 size=928 calls_out=7 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00b372b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00b37038(int *param_1,int param_2,int *param_3,uint *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  double *pdVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  uint in_fpscr;
  double dVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  longlong lVar30;
  
  puVar18 = (uint *)0x0;
  iVar15 = 0;
  if ((uint)(*param_4 < 2) <= -param_4[1]) {
    iVar15 = *param_4 - 1;
  }
  if (iVar15 != 0) {
    uVar16 = param_4[0x15];
    if (iVar15 != 1) {
      puVar18 = param_4 + 0x18;
    }
    if (uVar16 != 0) {
      uVar9 = param_4[0x14];
      fVar24 = (float)param_3[1];
      dVar23 = -0.0;
      iVar15 = *param_3;
      uVar11 = 0;
      do {
        iVar4 = uVar9 + uVar11 * 0x48;
        iVar20 = *(int *)(iVar4 + 0x40);
        if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac08);
        }
        iVar4 = *(int *)(iVar4 + 0x3c);
        iVar21 = 0;
        lVar1 = 0;
        do {
          iVar5 = iVar4 + iVar21 * 0x18;
          iVar12 = *(int *)(iVar5 + 0x14);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0034ae25,0x39,&DAT_0186aba8);
          }
          iVar19 = iVar12 << 2;
          iVar10 = 0;
          puVar17 = *(uint **)(iVar5 + 0x10);
          uVar6 = 0;
          do {
            if (*(uint *)(iVar5 + 8) <= *puVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
            }
            uVar14 = *(uint *)(*(int *)(iVar5 + 4) + *puVar17 * 4);
            puVar17 = puVar17 + 1;
            bVar22 = CARRY4(uVar6,uVar14);
            uVar6 = uVar6 + uVar14;
            iVar10 = iVar10 + (uint)bVar22;
            iVar19 = iVar19 + -4;
          } while (iVar19 != 0);
          lVar30 = FUN_01846088(uVar6,iVar10,iVar12,0);
          lVar1 = lVar30 + lVar1;
          iVar21 = iVar21 + 1;
        } while (iVar21 != iVar20);
        uVar7 = FUN_01846088((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar20,0);
        dVar27 = (double)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
        uVar11 = uVar11 + 1;
        dVar23 = dVar23 + dVar27 / 1000000.0;
      } while (uVar11 != uVar16);
      pdVar8 = (double *)(uVar9 + 0x30);
      dVar27 = -0.0;
      uVar9 = uVar16;
      do {
        dVar29 = *pdVar8;
        pdVar8 = pdVar8 + 9;
        uVar9 = uVar9 - 1;
        dVar27 = dVar27 + dVar29;
      } while (uVar9 != 0);
      if ((param_4[0x10] & 1) == 0) {
        if ((iVar15 != 2) && (iVar15 != 1)) {
          iVar15 = 0;
        }
      }
      else {
        iVar15 = 1;
        fVar24 = ((float)param_4[0x12] + (float)param_4[0x11]) * 0.5;
      }
      iVar4 = *(int *)(param_2 + 0x204);
      if (*(int *)(iVar4 + 0xbc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_01879bd0);
      }
      iVar20 = *(int *)(iVar4 + 0xb8);
      dVar29 = (double)VectorUnsignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
      uVar25 = *(undefined8 *)(param_4 + 0xc);
      uVar26 = *(undefined8 *)(param_4 + 0xe);
      uVar7 = FUN_018462e8(iVar20);
      dVar28 = (double)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
      dVar27 = *(double *)(param_2 + 0x1f0) + (dVar27 / dVar29) / dVar28;
      uVar16 = FUN_016d5578(SUB84(dVar27,0),(int)((ulonglong)dVar27 >> 0x20),0xeb1c432d);
      if (puVar18 != (uint *)0x0) {
        uVar16 = puVar18[2];
      }
      if (puVar18 != (uint *)0x0 && uVar16 != 0) {
        pdVar8 = (double *)puVar18[1];
        dVar23 = -0.0;
        pdVar13 = pdVar8 + 1;
        uVar9 = uVar16;
        do {
          dVar27 = *pdVar13;
          pdVar13 = pdVar13 + 3;
          uVar9 = uVar9 - 1;
          dVar23 = dVar23 + dVar27;
        } while (uVar9 != 0);
        dVar27 = -0.0;
        uVar9 = uVar16;
        do {
          dVar29 = *pdVar8;
          pdVar8 = pdVar8 + 3;
          uVar9 = uVar9 - 1;
          dVar27 = dVar27 + dVar29;
        } while (uVar9 != 0);
        dVar29 = (double)VectorUnsignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
        *(double *)(param_1 + 2) = dVar23 / dVar29;
        *(undefined8 *)(param_1 + 4) = uVar25;
        *(undefined8 *)(param_1 + 6) = uVar26;
        *(double *)(param_1 + 8) = dVar27 / dVar29;
        param_1[1] = (int)fVar24;
        *param_1 = iVar15;
        return;
      }
      dVar23 = (dVar23 / dVar29) * 1000000.0;
      uVar2 = (ulonglong)((uint)(0.0 < dVar23) * (int)(longlong)dVar23) *
              (ulonglong)(uint)(*(int *)(iVar4 + 0x6c) * iVar20);
      uVar3 = (ulonglong)*(uint *)(iVar4 + 0xc4) * (uVar2 & 0xffffffff);
      lVar1 = (ulonglong)*(uint *)(iVar4 + 0xc4) * (uVar2 >> 0x20) + (uVar3 >> 0x20);
      FUN_0184590c((int)uVar3,(int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0);
                    /* WARNING: Could not recover jumptable at 0x00b37334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00b37338 + *(int *)(&DAT_00b37338 + param_4[2] * 4)))(param_4[4],param_4[5]);
      return;
    }
  }
  *param_1 = 3;
  return;
}

