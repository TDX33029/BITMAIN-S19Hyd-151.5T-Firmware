// FUN_00baa728 @ 00baa728 size=1340 calls_out=6 calls_in=3
// strings: BUG: impossible | BUG: impossible

void FUN_00baa728(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  double *pdVar7;
  undefined *puVar8;
  undefined *puVar9;
  double *pdVar10;
  uint uVar11;
  double *pdVar12;
  int *piVar13;
  double *pdVar14;
  undefined4 uVar15;
  int iVar16;
  double *pdVar17;
  uint uVar18;
  double **ppdVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint in_fpscr;
  double in_d1;
  double in_d2;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double local_c8 [2];
  double local_b8;
  double local_b0;
  uint local_a4;
  double *local_a0;
  code *local_9c;
  double *local_98;
  code *local_94;
  double *local_90;
  code *local_8c;
  uint *local_88;
  code *local_84;
  double local_80;
  undefined4 local_78;
  longlong lStack_74;
  undefined4 uStack_6c;
  
  iVar6 = param_4[0x76];
  piVar13 = (int *)param_4[0x81];
  local_c8[0] = (double)CONCAT44(param_2,param_1);
  if (*(int *)(iVar6 + 0xbc) != 0) {
    uVar15 = *(undefined4 *)(iVar6 + 0xb8);
    uVar11 = piVar13[0x11];
    dVar3 = (double)CONCAT44(param_2,param_1);
    uVar5 = FUN_018462e8(uVar15);
    uVar18 = piVar13[0x12];
    iVar20 = *param_4;
    dVar24 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar25 = (double)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
    dVar29 = (double)VectorUnsignedToFloat(uVar18,(byte)(in_fpscr >> 0x16) & 3);
    dVar31 = *(double *)(param_4 + 0x6e) * (double)(float)param_4[0x74] + 1.0;
    iVar16 = piVar13[0x2f];
    dVar28 = *(double *)(param_4 + 0x6c) + *(double *)(param_4 + 0x6a) * (dVar29 / 1000000.0);
    dVar30 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
    dVar27 = (in_d1 / dVar24) * (in_d1 / dVar24) * dVar30;
    local_a4 = (uint)((ulonglong)dVar31 >> 0x20) & 0xfffff;
    dVar29 = dVar31;
    if (((ulonglong)dVar31 & 0x7ff0000000000000) == 0) {
      dVar29 = 1.0;
    }
    dVar23 = dVar27 * dVar31 * dVar28;
    dVar25 = dVar27 * (*(double *)(param_4 + 0x6c) +
                      (dVar25 / 1000000.0) * *(double *)(param_4 + 0x6a)) * dVar31 * 1.1;
    if (SUB84(dVar31,0) != 0 || ((ulonglong)dVar31 & 0xfffff00000000) != 0) {
      dVar31 = dVar29;
    }
    dVar29 = *(double *)(param_4 + 2);
    dVar27 = *(double *)(param_4 + 4);
    local_b8 = dVar25;
    local_b0 = dVar23;
    while (local_80 = SQRT((dVar23 * (1.0 / dVar30)) / (dVar31 * dVar28)) * dVar24, iVar16 != 0) {
      local_a4 = uVar11;
      if (iVar20 == 0) {
        uVar5 = FUN_018462e8(piVar13[0x2e],iVar16);
        dVar26 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
        dVar26 = dVar27 + dVar29 * (local_80 / dVar26);
        local_a4 = (uint)(0.0 < dVar26) * (int)(longlong)dVar26;
        if (local_a4 < uVar11) {
          local_a4 = uVar11;
        }
      }
      in_fpscr = in_fpscr & 0xfffffff;
      if (!NAN(local_80)) {
        if (NAN(dVar3)) {
LAB_00baabd0:
          puVar8 = &DAT_01870e1c;
          local_90 = local_c8;
          local_98 = &local_b0;
          puVar9 = &DAT_0057744c;
          local_a0 = &local_80;
          local_9c = FUN_00f5cdb8;
          goto LAB_00baac18;
        }
        if (local_80 < dVar3) {
          in_fpscr = in_fpscr | (uint)(local_80 < dVar3) << 0x1f;
          if (SUB41(in_fpscr >> 0x1f,0) != (NAN(local_80) || NAN(dVar3))) goto LAB_00baabd0;
        }
        else {
          in_fpscr = in_fpscr | (uint)(local_80 < dVar3) << 0x1f;
          if (SUB41(in_fpscr >> 0x1f,0) != (NAN(local_80) || NAN(dVar3))) {
            puVar9 = &DAT_0187f934;
            goto LAB_00baac40;
          }
        }
      }
      in_fpscr = in_fpscr & 0xfffffff;
      if (!NAN(dVar23)) {
        if (NAN(dVar25)) {
LAB_00baab68:
          local_9c = FUN_00f5c774;
          puVar8 = &DAT_01870e2c;
          local_88 = &local_a4;
          local_90 = &local_80;
          local_98 = &local_b8;
          puVar9 = &DAT_00596cd5;
          local_a0 = &local_b0;
          local_84 = FUN_00f5c9c8;
LAB_00baac18:
          local_8c = FUN_00f5cdb8;
          local_94 = FUN_00f5c774;
          local_b0 = dVar23;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(puVar9,&local_a0,puVar8);
        }
        if (dVar23 < dVar25) {
          uVar22 = in_fpscr | (uint)(dVar23 < dVar25) << 0x1f;
          in_fpscr = uVar22 | (uint)(NAN(dVar23) || NAN(dVar25)) << 0x1c;
          if ((byte)(uVar22 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00baab68;
        }
        else {
          uVar22 = in_fpscr | (uint)(dVar23 < dVar25) << 0x1f;
          in_fpscr = uVar22 | (uint)(NAN(dVar23) || NAN(dVar25)) << 0x1c;
          if ((byte)(uVar22 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
            puVar9 = &DAT_0187f728;
LAB_00baac40:
            local_b0 = dVar23;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("BUG: impossible",0xf,puVar9);
          }
        }
      }
      if (local_a4 <= uVar18) {
        dVar24 = *(double *)(param_4 + 0x72) + *(double *)(param_4 + 0x70) * 100.0;
        dVar28 = (double)VectorUnsignedToFloat
                                   (*(undefined4 *)(iVar6 + 0xc4),(byte)(in_fpscr >> 0x16) & 3);
        in_fpscr = in_fpscr & 0xfffffff;
        dVar31 = dVar24 + dVar23 * 0.99 * dVar28;
        if (!NAN(in_d2)) {
          if (NAN(dVar31)) {
            dVar31 = in_d2;
          }
          else if (in_d2 < dVar31) {
            uVar22 = in_fpscr | (uint)(in_d2 < dVar31) << 0x1f;
            in_fpscr = uVar22 | (uint)(NAN(in_d2) || NAN(dVar31)) << 0x1c;
            if ((byte)(uVar22 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
              dVar31 = in_d2;
            }
          }
          else {
            uVar22 = in_fpscr | (uint)(in_d2 < dVar31) << 0x1f;
            in_fpscr = uVar22 | (uint)(NAN(in_d2) || NAN(dVar31)) << 0x1c;
            if ((byte)(uVar22 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
            }
          }
        }
        iVar6 = piVar13[0x2e];
        if (iVar20 == 0) {
          uVar5 = FUN_018462e8(iVar6,iVar16);
          dVar30 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
          dVar27 = dVar27 + dVar29 * (dVar3 / dVar30);
          uVar22 = (uint)(0.0 < dVar27) * (int)(longlong)dVar27;
          if (uVar22 < uVar11) {
            uVar22 = uVar11;
          }
        }
        else {
          uVar22 = uVar11;
        }
        uVar21 = piVar13[0x31];
        uVar11 = piVar13[0x1b] * iVar6;
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar18;
        uVar2 = (ulonglong)uVar21 * (uVar1 & 0xffffffff);
        local_78 = (undefined4)uVar2;
        local_a0 = (double *)0x4;
        lStack_74 = (ulonglong)uVar21 * (uVar1 >> 0x20) + (uVar2 >> 0x20);
        local_94 = (code *)0x7fefffff;
        local_98 = (double *)0xffffffff;
        uStack_6c = 0;
        local_9c = (code *)0x0;
        local_80 = 0.0;
        if ((double *)*piVar13 != (double *)0x5 || piVar13[1] != 0) {
          local_8c = (code *)piVar13[5];
          local_98 = (double *)piVar13[2];
          local_94 = (code *)piVar13[3];
          local_90 = (double *)piVar13[4];
          local_a0 = (double *)*piVar13;
          local_9c = (code *)piVar13[1];
        }
        cVar4 = FUN_010e1310(&local_a0,&local_80);
        ppdVar19 = (double **)&local_80;
        if (cVar4 < '\0') {
          ppdVar19 = &local_a0;
        }
        pdVar7 = ppdVar19[1];
        pdVar10 = ppdVar19[2];
        pdVar12 = ppdVar19[3];
        pdVar14 = ppdVar19[4];
        pdVar17 = ppdVar19[5];
        *(double **)(param_3 + 0x240) = *ppdVar19;
        *(double **)(param_3 + 0x244) = pdVar7;
        *(double **)(param_3 + 0x248) = pdVar10;
        *(double **)(param_3 + 0x24c) = pdVar12;
        *(double **)(param_3 + 0x250) = pdVar14;
        *(double **)(param_3 + 0x254) = pdVar17;
        FUN_016dd1aa(param_3,param_4,0x228);
        dVar29 = (double)VectorUnsignedToFloat(uVar22,(byte)(in_fpscr >> 0x16) & 3);
        uVar1 = (ulonglong)uVar11 *
                (ulonglong)((uint)(0.0 < dVar29 * 1.1) * (int)(longlong)(dVar29 * 1.1));
        *(double *)(param_3 + 600) = dVar3;
        *(double *)(param_3 + 0x260) = in_d1;
        uVar2 = (ulonglong)uVar21 * (uVar1 & 0xffffffff);
        *(double *)(param_3 + 0x268) = (dVar24 + dVar25 * dVar28) * 1.01;
        *(double *)(param_3 + 0x270) = dVar31 * 0.99;
        *(double *)(param_3 + 0x278) = dVar25;
        *(double *)(param_3 + 0x280) = dVar23 * 0.99;
        *(undefined4 *)(param_3 + 0x228) = 0;
        *(undefined4 *)(param_3 + 0x22c) = 0;
        *(int *)(param_3 + 0x230) = (int)uVar2;
        *(ulonglong *)(param_3 + 0x234) = (ulonglong)uVar21 * (uVar1 >> 0x20) + (uVar2 >> 0x20);
        *(undefined4 *)(param_3 + 0x23c) = 0;
        return;
      }
      dVar23 = dVar23 + -10.0;
    }
    local_b0 = dVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faf2a4(&DAT_01879bd0);
}

