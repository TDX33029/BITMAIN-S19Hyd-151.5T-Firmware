// FUN_0001e1dc @ 0001e1dc  size=540  callers=4
// program: bmminer


void FUN_0001e1dc(float param_1,int param_2,undefined4 param_3,char *param_4,char *param_5,
                 char param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char *param7;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  double dVar6;
  float fVar7;
  uint uVar9;
  longlong lVar8;
  float fVar10;
  char *local_850;
  undefined1 local_844 [4];
  undefined4 local_840;
  undefined1 uStack_83a;
  char acStack_838 [2052];
  
  local_850 = param_5;
  if (DAT_00087bbc < 5) {
    local_850 = acStack_838;
  }
  if (4 < DAT_00087bbc) {
    local_850 = acStack_838;
    param7 = "false";
    if (param_6 != '\0') {
      param7 = "true";
    }
    snprintf(local_850,0x800,
             "fixed step chain = %d, freq_start = %d, freq_end = %d, freq_step = %.2f, is_higher_voltage = %s\n"
             ,param_2,(int)param_4,(int)param_5,(double)param_1,param7);
    FUN_00032218(4,local_850,0);
  }
  FUN_00021060(param_2,1,0,param_3);
  local_850[-0xffffffff00000004] = '\0';
  local_850[-0xffffffff00000003] = '\0';
  local_850[-0xffffffff00000002] = '\0';
  local_850[-0xffffffff00000001] = '\0';
  local_840 = 0;
  if (param_4 < param_5) {
    iVar4 = (int)param_5 - (int)param_4;
  }
  else {
    iVar4 = (int)param_4 - (int)param_5;
  }
  fVar7 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  dVar6 = ((double)(fVar7 + param_1) - 0.01) / (double)param_1;
  uVar2 = (uint)(0.0 < dVar6) * (int)(longlong)dVar6;
  if (uVar2 != 0) {
    uVar9 = VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    lVar8 = (ulonglong)uVar9 << 0x20;
    fVar7 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = 1;
    do {
      fVar5 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = (float)((ulonglong)lVar8 >> 0x20);
      if (param_4 < param_5) {
        fVar5 = fVar5 * param_1 + fVar7;
        lVar8 = CONCAT44(fVar10,fVar5);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < fVar10) << 0x1f |
                (uint)(fVar5 == fVar10) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar5) || NAN(fVar10)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          lVar8 = CONCAT44(fVar10,fVar10);
        }
      }
      else {
        fVar5 = fVar7 - fVar5 * param_1;
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar5 < fVar10) {
          fVar5 = fVar10;
        }
        lVar8 = CONCAT44(fVar10,fVar5);
      }
      FUN_00057ae4((float)lVar8,local_850 + -8,local_844,0);
      uVar9 = uVar9 + 1;
      uStack_83a = local_844[0];
      FUN_000210e4(param_2,1,0,param_3,*(undefined4 *)(local_850 + -8));
      if (4 < DAT_00087bbc) {
        snprintf(local_850,0x800,"chain = %d set freq to %.2f",param_2,(double)(float)lVar8);
        FUN_00032218(4,local_850,0);
      }
      usleep(100000);
    } while (uVar9 <= uVar2);
  }
  (&DAT_000891dc)[param_2] = param_5;
  (&DAT_000891f8)[param_2] = param_5;
  return;
}

