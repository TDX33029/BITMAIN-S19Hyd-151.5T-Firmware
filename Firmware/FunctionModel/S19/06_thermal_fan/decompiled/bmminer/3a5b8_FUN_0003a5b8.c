// FUN_0003a5b8 @ 0003a5b8  size=1064  callers=0
// program: bmminer


void FUN_0003a5b8(void)

{
  int iVar1;
  int param3;
  int param6;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int param4;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  char acStack_820 [2052];
  
  if ((((byte)DAT_00b2d204 & 2) != 0) && (DAT_00b2d208._2_1_ < 0x65)) {
    pcVar4 = (char *)FUN_0001fffc();
    iVar1 = strcmp(pcVar4,"HHB28601");
    if (iVar1 != 0) {
      pcVar4 = (char *)FUN_0001fffc();
      iVar1 = strcmp(pcVar4,"HHB28602");
      if (iVar1 != 0) {
        FUN_00015968(DAT_00b2d208._2_1_);
      }
    }
    if (DAT_0048d3e4 != 0) {
      return;
    }
    if (3 < DAT_00087bbc) {
      snprintf(acStack_820,0x800,"fan_etf: Set fixed fan speed=%d\n",(uint)DAT_00b2d208._2_1_);
      FUN_00032218(3,acStack_820,0);
    }
    DAT_0048d3e4 = 1;
    return;
  }
  iVar1 = FUN_00018cb8();
  param3 = FUN_00018a88(0);
  param6 = FUN_00018b68(0);
  iVar2 = FUN_00018cb8();
  uVar3 = param3 - iVar2;
  if (DAT_00087e50 != 0xff) {
    iVar2 = DAT_00087e50 - iVar1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (4 < iVar2) {
      uVar5 = DAT_0048d3e8 + 1;
      if (1 < (int)uVar5) {
        uVar5 = 2;
      }
      bVar6 = (int)DAT_0048d3e8 < 1;
      DAT_0048d3e8 = uVar5;
      goto LAB_0003a660;
    }
  }
  bVar6 = (int)DAT_0048d3e8 < 2;
  DAT_0048d3e8 = DAT_0048d3e8 - 1 & ~((int)(DAT_0048d3e8 - 1) >> 0x1f);
LAB_0003a660:
  DAT_0048d3ec = (uint)!bVar6;
  DAT_00087e50 = iVar1;
  if (param3 < 0x49) {
    param4 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    bVar7 = SBORROW4(param4,0x20);
    iVar2 = param4 + -0x20;
    bVar6 = param4 == 0x20;
    if (param4 < 0x21) {
      bVar7 = SBORROW4(iVar1,0x32);
      iVar2 = iVar1 + -0x32;
      bVar6 = iVar1 == 0x32;
    }
    if ((bVar6 || iVar2 < 0 != bVar7) && (DAT_0048d3ec == 0)) {
      DAT_0048d3e4 = DAT_0048d3ec;
      if (param4 < 0x1c) {
        if (0x16 < param4) {
          if (DAT_00087bbc < 5) {
            return;
          }
          iVar1 = FUN_000203ec();
          snprintf(acStack_820,0x800,"max temp = %04d, diff = %04d, = pwm %04d\n",param3,param4,
                   iVar1);
          FUN_00032218(4,acStack_820,0);
          return;
        }
        iVar1 = FUN_000203ec();
        fVar8 = (float)VectorSignedToFloat(param4,(byte)(in_fpscr >> 0x16) & 3);
        fVar8 = ((25.0 - fVar8) / 25.0) * 10.0;
        uVar3 = (uint)(0.0 < fVar8) * (int)fVar8 & 0xff;
        if ((int)(iVar1 - uVar3) < 0x28) {
          uVar3 = 0x28;
        }
        else {
          iVar1 = FUN_000203ec();
          uVar3 = iVar1 - uVar3 & 0xff;
        }
        if (4 < DAT_00087bbc) {
          iVar1 = FUN_000203ec();
          snprintf(acStack_820,0x800,"max temp = %04d, diff = %04d, - pwm form %04d to %04d\n",
                   param3,param4,iVar1,uVar3);
          FUN_00032218(4,acStack_820,0);
        }
        if (0x43 < param3) {
          return;
        }
      }
      else {
        iVar1 = FUN_000203ec();
        fVar8 = (float)VectorSignedToFloat(param4,(byte)(in_fpscr >> 0x16) & 3);
        fVar8 = ((fVar8 - 25.0) / 25.0) * 10.0;
        uVar3 = (uint)(0.0 < fVar8) * (int)fVar8 & 0xff;
        if ((int)(uVar3 + iVar1) < 100) {
          iVar1 = FUN_000203ec();
          uVar3 = uVar3 + iVar1 & 0xff;
        }
        else {
          uVar3 = 100;
        }
        if (4 < DAT_00087bbc) {
          iVar1 = FUN_000203ec();
          snprintf(acStack_820,0x800,"max temp = %04d, diff = %04d, + pwm form %04d to %04d\n",
                   param3,param4,iVar1,uVar3);
          FUN_00032218(4,acStack_820,0);
        }
      }
      pcVar4 = (char *)FUN_0001fffc();
      iVar1 = strcmp(pcVar4,"HHB28601");
      if (iVar1 == 0) {
        return;
      }
      pcVar4 = (char *)FUN_0001fffc();
      iVar1 = strcmp(pcVar4,"HHB28602");
      if (iVar1 == 0) {
        return;
      }
      FUN_00015968(uVar3);
      return;
    }
  }
  if (DAT_0048d3e4 == 0) {
    if (4 < DAT_00087bbc) {
      snprintf(acStack_820,0x800,
               "min pic temp = %d max pic temp = %d pic diff = %d, max chip temp = %d, last diff continuous_time = %d"
               ,iVar1,param3,uVar3,param6,DAT_0048d3e8);
      FUN_00032218(4,acStack_820,0);
    }
    DAT_0048d3e4 = 1;
  }
  pcVar4 = (char *)FUN_0001fffc();
  iVar1 = strcmp(pcVar4,"HHB28601");
  if (iVar1 != 0) {
    pcVar4 = (char *)FUN_0001fffc();
    iVar1 = strcmp(pcVar4,"HHB28602");
    if (iVar1 != 0) {
      FUN_00015968(100);
    }
  }
  return;
}

