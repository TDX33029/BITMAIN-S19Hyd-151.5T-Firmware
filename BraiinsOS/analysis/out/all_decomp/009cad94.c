// FUN_009cad94 @ 009cad94 size=788 calls_out=2 calls_in=2
// strings: 

void FUN_009cad94(float param_1,undefined4 param_2,float param_3,undefined4 param_4,float param_5,
                 uint *param_6,uint *param_7,uint *param_8)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float extraout_s2;
  float extraout_s2_00;
  float fVar14;
  float extraout_s4;
  float extraout_s4_00;
  float fVar15;
  float fVar16;
  
  if (1 < param_7[2]) {
    if (param_7[2] < 0x15) {
      param_1 = (float)FUN_009ce204();
      param_3 = extraout_s2;
      param_5 = extraout_s4;
    }
    else {
      param_1 = (float)FUN_009b6818(param_7[1]);
      param_3 = extraout_s2_00;
      param_5 = extraout_s4_00;
    }
  }
  uVar11 = param_8[2];
  if (uVar11 != 0) {
    fVar13 = -0.0;
    uVar3 = 0;
    uVar9 = param_8[1];
    param_3 = fVar13;
    do {
      iVar1 = uVar9 + uVar3 * 0x18;
      iVar5 = *(int *)(iVar1 + 8);
      fVar14 = fVar13;
      if (iVar5 != 0) {
        pfVar6 = *(float **)(iVar1 + 4);
        iVar1 = iVar5;
        do {
          fVar15 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          iVar1 = iVar1 + -1;
          fVar14 = fVar14 + fVar15;
        } while (iVar1 != 0);
      }
      uVar3 = uVar3 + 1;
      fVar15 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      param_3 = param_3 + fVar14 / fVar15;
    } while (uVar3 != uVar11);
    pfVar6 = *(float **)(uVar9 + 4);
    iVar1 = *(int *)(uVar9 + 8);
    fVar13 = -0.0;
    if (iVar1 != 0) {
      pfVar2 = pfVar6;
      iVar5 = iVar1;
      do {
        fVar14 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        iVar5 = iVar5 + -1;
        fVar13 = fVar13 + fVar14;
      } while (iVar5 != 0);
    }
    fVar14 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    param_1 = fVar13 / fVar14 + *(float *)(uVar9 + 0x14);
    if (uVar11 != 1) {
      iVar5 = 0;
      do {
        iVar4 = uVar9 + 0x18 + iVar5 * 0x18;
        iVar10 = *(int *)(iVar4 + 8);
        fVar13 = -0.0;
        if (iVar10 != 0) {
          pfVar2 = *(float **)(iVar4 + 4);
          iVar8 = iVar10;
          do {
            fVar15 = *pfVar2;
            pfVar2 = pfVar2 + 1;
            iVar8 = iVar8 + -1;
            fVar13 = fVar13 + fVar15;
          } while (iVar8 != 0);
        }
        iVar5 = iVar5 + 1;
        fVar15 = (float)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
        fVar13 = fVar13 / fVar15 + *(float *)(iVar4 + 0x14);
        if ((int)((uint)fVar13 ^ (uint)((int)fVar13 >> 0x1f) >> 1) <
            (int)((uint)param_1 ^ (uint)((int)param_1 >> 0x1f) >> 1)) {
          param_1 = fVar13;
        }
      } while (iVar5 != (uVar11 * 0x18 - 0x18 >> 3) * -0x55555555);
    }
    fVar15 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = -0.0;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      fVar16 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar13 = fVar13 + fVar16;
    }
    param_3 = param_3 / fVar15;
    param_5 = fVar13 / fVar14 + *(float *)(uVar9 + 0x14);
    if (uVar11 != 1) {
      iVar1 = 0;
      do {
        iVar10 = uVar9 + 0x18 + iVar1 * 0x18;
        iVar5 = *(int *)(iVar10 + 8);
        fVar13 = -0.0;
        if (iVar5 != 0) {
          pfVar6 = *(float **)(iVar10 + 4);
          iVar4 = iVar5;
          do {
            fVar14 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            iVar4 = iVar4 + -1;
            fVar13 = fVar13 + fVar14;
          } while (iVar4 != 0);
        }
        iVar1 = iVar1 + 1;
        fVar14 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
        fVar13 = fVar13 / fVar14 + *(float *)(iVar10 + 0x14);
        if ((int)((uint)fVar13 ^ (uint)((int)fVar13 >> 0x1f) >> 1) <
            (int)((uint)param_5 ^ (uint)((int)param_5 >> 0x1f) >> 1)) {
          fVar13 = param_5;
        }
        param_5 = fVar13;
      } while (iVar1 != (uVar11 * 0x18 - 0x18 >> 3) * -0x55555555);
    }
  }
  uVar3 = *param_8;
  uVar9 = param_8[1];
  uVar7 = param_8[2];
  param_6[8] = param_7[2];
  param_6[9] = uVar3;
  param_6[10] = uVar9;
  param_6[0xb] = uVar7;
  bVar12 = uVar11 != 0;
  uVar3 = *param_7;
  uVar11 = param_7[1];
  param_6[5] = (uint)param_5;
  param_6[3] = (uint)param_1;
  param_6[1] = (uint)param_3;
  param_6[6] = uVar3;
  param_6[7] = uVar11;
  param_6[4] = (uint)(bVar12 && (uint)ABS(param_5) < 0x7f800000);
  param_6[2] = (uint)(bVar12 && (uint)ABS(param_1) < 0x7f800000);
  *param_6 = (uint)(bVar12 && (uint)ABS(param_3) < 0x7f800000);
  return;
}

