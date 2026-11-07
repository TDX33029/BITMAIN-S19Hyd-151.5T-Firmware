// FUN_00057ae4 @ 00057ae4  size=540  callers=6
// program: bmminer


undefined4 FUN_00057ae4(float param_1,undefined1 *param_2,undefined1 *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int param2;
  int param5;
  uint param4;
  uint param3;
  int param1;
  int iVar11;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar11 = 2;
  param2 = 0;
  param5 = 0;
  param4 = 0;
  iVar9 = 2;
  param3 = 0;
  param1 = 0;
  fVar15 = 10.0;
  while( true ) {
    uVar8 = 1;
    fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
    do {
      fVar14 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
      iVar6 = uVar8 * uVar8;
      uVar10 = uVar8;
      uVar12 = uVar8 & 0xff;
      do {
        fVar17 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
        iVar3 = (int)(longlong)((fVar17 * fVar14 * param_1 * fVar16) / 25.0 + 0.5);
        if (iVar3 - 0x10U < 0xeb) {
          fVar17 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          fVar17 = fVar17 * (25.0 / fVar16);
          if ((iVar9 != 1) ||
             (uVar1 = in_fpscr & 0xfffffff | (uint)(fVar17 < 3125.0) << 0x1f |
                      (uint)(fVar17 == 3125.0) << 0x1e, in_fpscr = uVar1 | (uint)NAN(fVar17) << 0x1c
             , bVar5 = (byte)(uVar1 >> 0x18),
             (bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
            uVar1 = in_fpscr & 0xfffffff;
            uVar2 = uVar1 | (uint)(fVar17 < 3200.0) << 0x1f | (uint)(fVar17 == 3200.0) << 0x1e;
            in_fpscr = uVar2 | (uint)NAN(fVar17) << 0x1c;
            bVar5 = (byte)(uVar2 >> 0x18);
            if (((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
               (in_fpscr = uVar1, 2000.0 <= fVar17)) {
              fVar13 = (float)VectorSignedToFloat(iVar6,(byte)(uVar1 >> 0x16) & 3);
              fVar17 = ABS(param_1 - fVar17 / fVar13);
              if (fVar17 < fVar15) {
                param5 = 1;
                param2 = iVar3;
                param4 = uVar8 & 0xff;
                param3 = uVar12;
                param1 = iVar9;
                fVar15 = fVar17;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + uVar8;
        uVar12 = uVar10 & 0xff;
      } while (uVar12 != 8);
      uVar8 = uVar8 + 1;
    } while (uVar8 != 8);
    iVar9 = 1;
    if (iVar11 == 1) break;
    iVar11 = 1;
  }
  if (param2 == 0) {
    puts("find div fail, use default value");
    uVar7 = 0xffffffff;
  }
  else {
    fVar14 = (float)VectorSignedToFloat(param1,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (float)VectorSignedToFloat(param2,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (float)VectorSignedToFloat(param5 * (int)(short)param3 * (int)(short)param4,
                                        (byte)(in_fpscr >> 0x16) & 3);
    fVar17 = ((25.0 / fVar14) * fVar16) / fVar17;
    if (param_4 != (float *)0x0) {
      *param_4 = fVar17;
    }
    printf("final refdiv: %d, fbdiv: %d, postdiv1: %d, postdiv2: %d, usr divider: %d, min diff value: %f\n"
           ,param1,param2,param3,param4,param5,(double)fVar15);
    printf("Want freq: %f, Real freq: %f\n",(double)param_1,(double)fVar17);
    uVar7 = 0;
    *param_2 = (char)param3;
    param_2[1] = (char)param4;
    param_2[2] = (char)param1;
    *(short *)(param_2 + 4) = (short)param2;
    uVar4 = (undefined1)param5;
    *param_3 = uVar4;
    param_3[1] = uVar4;
    param_3[2] = uVar4;
    param_3[3] = uVar4;
  }
  return uVar7;
}

