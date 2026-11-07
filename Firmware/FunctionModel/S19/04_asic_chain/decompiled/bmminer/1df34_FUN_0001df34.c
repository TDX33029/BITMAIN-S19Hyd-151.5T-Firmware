// FUN_0001df34 @ 0001df34  size=668  callers=1
// program: bmminer


void FUN_0001df34(float param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  double dVar6;
  float fVar7;
  float fVar8;
  uint uVar10;
  float fVar11;
  longlong lVar9;
  undefined1 local_844 [4];
  undefined4 local_840;
  undefined4 local_83c;
  char acStack_838 [2052];
  
  if (4 < DAT_00087bbc) {
    snprintf(acStack_838,0x800,"fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n",
             param_3,param_4,(double)param_1);
    FUN_00032218(4,acStack_838,0);
  }
  iVar4 = 0;
  do {
    iVar3 = FUN_000201d8(iVar4);
    if (iVar3 != 0) {
      FUN_00021060(iVar4,1,0,param_2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (param_3 < param_4) {
    iVar4 = param_4 - param_3;
  }
  else {
    iVar4 = param_3 - param_4;
  }
  fVar7 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  dVar6 = ((double)(fVar7 + param_1) - 0.01) / (double)param_1;
  uVar1 = (uint)(0.0 < dVar6) * (int)(longlong)dVar6;
  if (uVar1 != 0) {
    uVar5 = 1;
    fVar7 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar10 = VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    lVar9 = (ulonglong)uVar10 << 0x20;
    do {
      fVar11 = (float)((ulonglong)lVar9 >> 0x20);
      fVar8 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      local_840 = 0;
      local_83c = 0;
      if (param_3 < param_4) {
        fVar8 = fVar7 + fVar8 * param_1;
        lVar9 = CONCAT44(fVar11,fVar8);
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar11 < fVar8) {
          lVar9 = CONCAT44(fVar11,fVar11);
        }
      }
      else {
        fVar8 = fVar7 - fVar8 * param_1;
        uVar10 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar8) << 0x1f |
                 (uint)(fVar11 == fVar8) << 0x1e;
        in_fpscr = uVar10 | (uint)(NAN(fVar11) || NAN(fVar8)) << 0x1c;
        bVar2 = (byte)(uVar10 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar8 = fVar11;
        }
        lVar9 = CONCAT44(fVar11,fVar8);
      }
      iVar4 = 0;
      do {
        iVar3 = FUN_000201d8(iVar4);
        if (iVar3 != 0) {
          fVar8 = (float)lVar9;
          FUN_00057ae4(fVar8,&local_840,local_844,0);
          local_83c._0_3_ = CONCAT12(local_844[0],(undefined2)local_83c);
          FUN_000210e4(iVar4,1,0,param_2,local_840);
          if (3 < DAT_00087bbc) {
            snprintf(acStack_838,0x800,"chain = %d set freq to %.2f",iVar4,(double)fVar8);
            FUN_00032218(3,acStack_838,0);
          }
          (&DAT_000891dc)[iVar4] = (int)fVar8;
          (&DAT_000891f8)[iVar4] = (int)fVar8;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
      iVar4 = FUN_000366fc();
      if (iVar4 == 0) {
        usleep(100000);
      }
      else {
        sleep(5);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= uVar1);
  }
  iVar4 = 0;
  do {
    iVar3 = FUN_000201d8(iVar4);
    if (iVar3 != 0) {
      (&DAT_000891dc)[iVar4] = param_4;
      (&DAT_000891f8)[iVar4] = param_4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  iVar4 = FUN_000366fc();
  if (iVar4 != 0) {
    FUN_000374e4();
  }
  DAT_00089208 = 1;
  return;
}

