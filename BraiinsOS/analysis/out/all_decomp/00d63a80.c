// FUN_00d63a80 @ 00d63a80 size=1788 calls_out=6 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00d63b58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00d63a80(undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  double *pdVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  uint in_fpscr;
  uint uVar25;
  float fVar26;
  double in_d0;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined4 local_dc;
  float local_d8;
  int local_d0;
  float local_80;
  float local_7c;
  float *local_78;
  undefined1 *local_74;
  float *local_70;
  undefined1 *local_6c;
  
  puVar9 = (undefined4 *)*param_2;
  pfVar13 = *(float **)puVar9[1];
  if (pfVar13 != (float *)0x0) {
    param_3 = (int *)*puVar9;
    param_4 = *param_3;
  }
  if (pfVar13 != (float *)0x0 && param_4 != 0) {
    uVar22 = in_fpscr & 0xfffffff;
    in_fpscr = uVar22 | (uint)(*(double *)(param_3 + 2) < 1.0) << 0x1f;
    if (!SUB41(in_fpscr >> 0x1f,0)) {
      fVar31 = (*pfVar13 + *pfVar13) - pfVar13[1];
      in_fpscr = uVar22 | (uint)(ABS(pfVar13[2] - fVar31) < 0.01) << 0x1f;
      if (!SUB41(in_fpscr >> 0x1f,0)) {
        local_80 = (float)VectorUnsignedToFloat(pfVar13[4],(byte)(in_fpscr >> 0x16) & 3);
        local_7c = (float)VectorUnsignedToFloat(pfVar13[5],(byte)(in_fpscr >> 0x16) & 3);
        uVar25 = uVar22 | (uint)(local_80 == local_7c) << 0x1e |
                 (uint)(local_7c <= local_80) << 0x1d;
        bVar8 = (byte)(uVar25 >> 0x18);
        if ((bool)(bVar8 >> 5 & 1) && !(bool)(bVar8 >> 6)) {
          local_70 = &local_7c;
          local_6c = &LAB_00fb097c;
          local_74 = &LAB_00fb097c;
          local_78 = &local_80;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0056f0ba,&local_78,&DAT_01878110);
        }
        fVar29 = (float)VectorUnsignedToFloat(pfVar13[3],(byte)(uVar25 >> 0x16) & 3);
        fVar29 = ((pfVar13[1] - fVar31) / (float)*(double *)(param_3 + 2)) * (float)in_d0 * fVar29;
        fVar30 = fVar29 / (pfVar13[2] - fVar31);
        if (fVar30 < local_80) {
          fVar30 = local_80;
        }
        if (local_7c < fVar30) {
          fVar30 = local_7c;
        }
        in_fpscr = uVar22 | (uint)(fVar30 < 0.01) << 0x1f;
        if (!SUB41(in_fpscr >> 0x1f,0)) {
          iVar15 = 1;
          local_d8 = fVar31 + fVar29 / fVar30;
          fVar29 = (local_d8 + (fVar31 + local_d8) * 0.5) * 0.5;
          local_d0 = (uint)(0.0 < fVar30) * (int)fVar30;
          uVar10 = 1;
          local_dc = 1;
          goto LAB_00d63ae8;
        }
      }
    }
  }
  puVar9 = (undefined4 *)puVar9[2];
  local_d0 = puVar9[6];
  local_dc = puVar9[2];
  local_d8 = (float)puVar9[1];
  fVar29 = (float)puVar9[5];
  iVar15 = puVar9[4];
  fVar31 = (float)puVar9[3];
  uVar10 = *puVar9;
LAB_00d63ae8:
  iVar16 = *(int *)(param_2[1] + 8);
  dVar27 = in_d0;
  if (iVar16 == 0) {
    dVar38 = 0.0;
    dVar32 = dVar38;
    dVar36 = dVar38;
    dVar39 = dVar38;
  }
  else {
    iVar20 = ((undefined4 *)param_2[2])[1];
    dVar38 = 0.0;
    dVar33 = **(double **)param_2[2];
    pdVar18 = (double *)(*(int *)(param_2[1] + 4) + 0x10);
    dVar32 = dVar38;
    dVar36 = dVar38;
    dVar39 = dVar38;
    do {
      dVar34 = *pdVar18;
      if (iVar15 == 0) {
        fVar30 = *(float *)(iVar20 + 0x1d0);
      }
      else {
        fVar30 = fVar29;
        if (iVar15 != 1) {
          fVar30 = 60.0;
        }
      }
      fVar26 = SUB84(dVar27,0);
      dVar27 = dVar33 * ABS(in_d0 - dVar34);
      FUN_016d5578(SUB84(dVar27,0),(int)((ulonglong)dVar27 >> 0x20),
                   SUB84(ABS((double)fVar30 - (double)fVar26),0));
      iVar16 = iVar16 + -1;
      dVar40 = 1.0 / ((dVar27 + 0.01) * (dVar27 + 0.01));
      pdVar3 = pdVar18 + 1;
      pdVar4 = pdVar18 + 2;
      pdVar2 = pdVar18 + -1;
      pdVar18 = pdVar18 + 5;
      dVar32 = dVar32 + (dVar34 - *pdVar3) * dVar40;
      dVar38 = dVar38 + *pdVar4 * dVar40;
      dVar36 = dVar36 + *pdVar2 * dVar40;
      dVar39 = dVar39 + dVar40;
    } while (iVar16 != 0);
  }
  iVar16 = *(int *)param_2[4];
  if (iVar16 != 0) {
    iVar20 = param_2[3];
    dVar33 = *(double *)(iVar20 + 600);
    dVar34 = *(double *)(iVar20 + 0x260);
    dVar47 = in_d0 - dVar32 / dVar39;
    dVar40 = dVar33 * 1.001;
    uVar22 = in_fpscr & 0xfffffff | (uint)(dVar34 < dVar40) << 0x1f |
             (uint)(dVar34 == dVar40) << 0x1e;
    uVar25 = uVar22 | (uint)(NAN(dVar34) || NAN(dVar40)) << 0x1c;
    bVar8 = (byte)(uVar22 >> 0x18);
    if ((bool)(bVar8 >> 6 & 1) || bVar8 >> 7 != ((byte)(uVar25 >> 0x1c) & 1)) {
      uVar22 = 0;
      dVar35 = (dVar33 + dVar34) * 0.5;
      dVar45 = dVar47;
    }
    else {
      dVar28 = (double)SUB84(dVar27,0);
      uVar41 = *(undefined8 *)(iVar20 + 0x1e8);
      dVar42 = *(double *)(iVar20 + 0x1f0);
      FUN_016d5bf8(SUB84(dVar28,0),(int)((ulonglong)dVar28 >> 0x20),
                   (int)*(undefined8 *)(iVar20 + 0x1f8));
      iVar23 = *(int *)(iVar20 + 0x204);
      iVar19 = *(int *)(iVar23 + 0xbc);
      dVar43 = (double)VectorUnsignedToFloat(local_d0,(byte)(uVar25 >> 0x16) & 3);
      dVar44 = (double)VectorUnsignedToFloat(iVar16,(byte)(uVar25 >> 0x16) & 3);
      uVar17 = 0;
      dVar37 = dVar34;
      do {
        if (iVar19 == 0) goto LAB_00d6405c;
        dVar35 = (dVar37 + dVar33) * 0.5;
        uVar11 = FUN_018462e8(*(undefined4 *)(iVar23 + 0xb8),iVar19);
        dVar27 = (double)VectorUnsignedToFloat(uVar11,(byte)(uVar25 >> 0x16) & 3);
        dVar27 = dVar42 + dVar35 / dVar27;
        uVar11 = (undefined4)((ulonglong)dVar27 >> 0x20);
        FUN_016d5578(SUB84(dVar27,0),uVar11,0xeb1c432d);
        FUN_016d5bf8(SUB84(dVar27,0),uVar11,(int)uVar41);
        if (iVar15 == 0) {
          fVar30 = *(float *)(iVar20 + 0x1d0);
          iVar12 = *(int *)(iVar20 + 0x1d8);
          iVar14 = *(int *)(iVar12 + 0xbc);
        }
        else {
          fVar30 = fVar29;
          if (iVar15 != 1) {
            fVar30 = 60.0;
          }
          iVar12 = *(int *)(iVar20 + 0x1d8);
          iVar14 = *(int *)(iVar12 + 0xbc);
        }
        if (iVar14 == 0) goto LAB_00d6405c;
        uVar21 = *(undefined4 *)(iVar12 + 0xb8);
        dVar45 = ((dVar28 * dVar27) / (dVar38 / dVar39)) * 1000000.0;
        uVar22 = (uint)(0.0 < dVar45) * (int)(longlong)dVar45;
        uVar11 = FUN_018462e8(uVar21);
        dVar46 = (double)VectorUnsignedToFloat(uVar22,(byte)(uVar25 >> 0x16) & 3);
        dVar45 = (double)VectorUnsignedToFloat(uVar11,(byte)(uVar25 >> 0x16) & 3);
        dVar48 = (double)VectorUnsignedToFloat(uVar21,(byte)(uVar25 >> 0x16) & 3);
        dVar45 = *(double *)(iVar20 + 0x1c8) + *(double *)(iVar20 + 0x1c0) * dVar43 +
                 (dVar35 / dVar45) * (dVar35 / dVar45) * dVar48 *
                 (*(double *)(iVar20 + 0x1b0) + (dVar46 / 1000000.0) * *(double *)(iVar20 + 0x1a8))
                 * (*(double *)(iVar20 + 0x1b8) * (double)fVar30 + 1.0) * dVar44;
        dVar46 = dVar35;
        if (1.0 < dVar45 / dVar47) {
          dVar46 = dVar33;
        }
        dVar33 = dVar46;
        dVar46 = dVar33 * 1.001;
        if (1.0 < dVar45 / dVar47) {
          dVar37 = dVar35;
        }
        uVar1 = uVar25 & 0xfffffff | (uint)(dVar37 < dVar46) << 0x1f |
                (uint)(dVar37 == dVar46) << 0x1e;
        uVar25 = uVar1 | (uint)(NAN(dVar37) || NAN(dVar46)) << 0x1c;
        bVar8 = (byte)(uVar1 >> 0x18);
      } while ((!(bool)(bVar8 >> 6 & 1) && bVar8 >> 7 == ((byte)(uVar25 >> 0x1c) & 1)) &&
              (bVar24 = uVar17 < 99, uVar17 = uVar17 + 1, bVar24));
    }
    if (dVar35 <= dVar34 / 1.001) {
      uVar25 = uVar25 & 0xfffffff | (uint)(dVar35 < dVar40) << 0x1f;
      if (SUB41(uVar25 >> 0x1f,0)) {
        if (iVar15 == 2) {
          fVar30 = 60.0;
          iVar19 = *(int *)(iVar20 + 0x1d8);
          iVar23 = *(int *)(iVar19 + 0xbc);
        }
        else {
          fVar30 = fVar29;
          if (iVar15 != 1) {
            fVar30 = *(float *)(iVar20 + 0x1d0);
          }
          iVar19 = *(int *)(iVar20 + 0x1d8);
          iVar23 = *(int *)(iVar19 + 0xbc);
        }
        if (iVar23 == 0) {
LAB_00d6405c:
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_01879bd0);
        }
        uVar21 = *(undefined4 *)(iVar19 + 0xb8);
        dVar34 = (double)VectorUnsignedToFloat(iVar16,(byte)(uVar25 >> 0x16) & 3);
        uVar11 = FUN_018462e8(uVar21);
        dVar38 = (double)VectorUnsignedToFloat(uVar11,(byte)(uVar25 >> 0x16) & 3);
        dVar45 = (dVar35 / dVar38) * (dVar35 / dVar38);
        dVar40 = (double)VectorUnsignedToFloat(uVar21,(byte)(uVar25 >> 0x16) & 3);
        dVar38 = dVar45 * (*(double *)(iVar20 + 0x1b8) * (double)fVar30 + 1.0);
        dVar33 = dVar38;
        if (((ulonglong)dVar38 & 0x7ff0000000000000) == 0) {
          dVar33 = dVar45;
        }
        if (SUB84(dVar38,0) != 0 || ((ulonglong)dVar38 & 0xfffff00000000) != 0) {
          dVar38 = dVar33;
        }
        dVar38 = (1.0 / *(double *)(iVar20 + 0x1a8)) *
                 (((dVar47 / dVar34) * (1.0 / dVar40)) / dVar38 - *(double *)(iVar20 + 0x1b0)) *
                 1000000.0;
        uVar17 = (uint)(0.0 < dVar38) * (int)(longlong)dVar38;
        if (uVar17 < uVar22) {
          uVar22 = uVar17;
        }
        if (iVar15 == 0) {
          fVar29 = *(float *)(iVar20 + 0x1d0);
        }
        else if (iVar15 != 1) {
          fVar29 = 60.0;
        }
        dVar33 = (double)VectorUnsignedToFloat(uVar22,(byte)(uVar25 >> 0x16) & 3);
        dVar38 = (double)VectorUnsignedToFloat(local_d0,(byte)(uVar25 >> 0x16) & 3);
        dVar45 = *(double *)(iVar20 + 0x1c8) + *(double *)(iVar20 + 0x1c0) * dVar38 +
                 dVar45 * dVar40 *
                 (*(double *)(iVar20 + 0x1b0) + (dVar33 / 1000000.0) * *(double *)(iVar20 + 0x1a8))
                 * (*(double *)(iVar20 + 0x1b8) * (double)fVar29 + 1.0) * dVar34;
      }
      iVar15 = *(int *)(iVar20 + 0x204);
      uVar6 = (ulonglong)uVar22 *
              (ulonglong)(uint)(*(int *)(iVar15 + 0xb8) * *(int *)(iVar15 + 0x6c));
      uVar7 = (ulonglong)*(uint *)(iVar15 + 0xc4) * (uVar6 & 0xffffffff);
      lVar5 = (ulonglong)*(uint *)(iVar15 + 0xc4) * (uVar6 >> 0x20) + (uVar7 >> 0x20);
      FUN_0184590c((int)uVar7,(int)lVar5,(int)((ulonglong)lVar5 >> 0x20),0);
      puVar9 = (undefined4 *)param_2[5];
      param_1[8] = local_dc;
      uVar11 = *puVar9;
      param_1[6] = uVar10;
      *param_1 = 4;
      param_1[1] = 0;
      param_1[0x10] = uVar11;
      param_1[0x11] = local_d0;
      param_1[0x12] = uVar22;
      param_1[9] = fVar31;
      *(double *)(param_1 + 10) = in_d0;
      param_1[7] = local_d8;
      *(double *)(param_1 + 0xc) = dVar32 / dVar39 + dVar45;
      *(double *)(param_1 + 0xe) = dVar35;
      *(double *)(param_1 + 2) = (dVar36 / dVar39) * dVar27 * 1e-12;
      return;
    }
  }
  *param_1 = 5;
  param_1[1] = 0;
  return;
}

