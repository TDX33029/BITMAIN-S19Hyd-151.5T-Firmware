// FUN_00081ee8 @ 00081ee8  size=464  callers=11
// program: bmminer


undefined4 FUN_00081ee8(float param_1,undefined1 *param_2,undefined1 *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_30;
  
  iVar8 = 0;
  iVar12 = 2;
  iVar16 = 2;
  iVar10 = 0;
  uVar14 = 0;
  uVar13 = 0;
  fVar18 = 10.0;
  local_30 = 0;
  while( true ) {
    uVar15 = 1;
    fVar20 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
    do {
      fVar19 = (float)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
      iVar9 = uVar15 * uVar15;
      uVar6 = uVar15;
      uVar11 = uVar15 & 0xff;
      do {
        fVar21 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
        iVar3 = (int)(longlong)((fVar21 * fVar19 * param_1 * fVar20) / 25.0 + 0.5);
        if (iVar3 - 0x10U < 0xeb) {
          fVar21 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          fVar21 = fVar21 * (25.0 / fVar20);
          if ((iVar16 != 1) ||
             (uVar1 = in_fpscr & 0xfffffff | (uint)(fVar21 < 3125.0) << 0x1f |
                      (uint)(fVar21 == 3125.0) << 0x1e, in_fpscr = uVar1 | (uint)NAN(fVar21) << 0x1c
             , bVar5 = (byte)(uVar1 >> 0x18),
             (bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
            uVar1 = in_fpscr & 0xfffffff;
            uVar2 = uVar1 | (uint)(fVar21 < 3200.0) << 0x1f | (uint)(fVar21 == 3200.0) << 0x1e;
            in_fpscr = uVar2 | (uint)NAN(fVar21) << 0x1c;
            bVar5 = (byte)(uVar2 >> 0x18);
            if (((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
               (in_fpscr = uVar1, 2000.0 <= fVar21)) {
              fVar17 = (float)VectorSignedToFloat(iVar9,(byte)(uVar1 >> 0x16) & 3);
              fVar21 = ABS(param_1 - fVar21 / fVar17);
              if (fVar21 < fVar18) {
                iVar10 = 1;
                iVar8 = iVar3;
                uVar13 = uVar11;
                uVar14 = uVar15 & 0xff;
                fVar18 = fVar21;
                local_30 = iVar16;
              }
            }
          }
        }
        uVar6 = uVar6 + 1;
        iVar9 = iVar9 + uVar15;
        uVar11 = uVar6 & 0xff;
      } while (uVar11 != 8);
      uVar15 = uVar15 + 1;
    } while (uVar15 != 8);
    iVar16 = 1;
    if (iVar12 == 1) break;
    iVar12 = 1;
  }
  if (iVar8 == 0) {
    puts("find div fail, use default value");
    uVar7 = 0xffffffff;
  }
  else {
    if (param_4 != (float *)0x0) {
      fVar20 = (float)VectorSignedToFloat(local_30,(byte)(in_fpscr >> 0x16) & 3);
      fVar18 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
      fVar19 = (float)VectorSignedToFloat(iVar10 * (int)(short)uVar13 * (int)(short)uVar14,
                                          (byte)(in_fpscr >> 0x16) & 3);
      *param_4 = ((25.0 / fVar20) * fVar18) / fVar19;
    }
    uVar7 = 0;
    *param_2 = (char)uVar13;
    param_2[1] = (char)uVar14;
    param_2[2] = (undefined1)local_30;
    *(short *)(param_2 + 4) = (short)iVar8;
    uVar4 = (undefined1)iVar10;
    *param_3 = uVar4;
    param_3[1] = uVar4;
    param_3[2] = uVar4;
    param_3[3] = uVar4;
  }
  return uVar7;
}

