// FUN_00027f90 @ 00027f90  size=584  callers=0
// program: bmminer


void FUN_00027f90(void)

{
  byte bVar1;
  int iVar2;
  char *param3;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 extraout_s1;
  double dVar6;
  double dVar7;
  double param4;
  double dVar8;
  int local_850 [4];
  char acStack_840 [2052];
  
  local_850[0] = 0;
  local_850[1] = 0;
  local_850[2] = 0;
  local_850[3] = 0;
  prctl(0xf,"heart_beat",0,0,0);
  dVar8 = -1.0;
  do {
    iVar4 = 0;
    param4 = 0.0;
    uVar3 = 0;
    pthread_setcancelstate(1,(int *)0x0);
    do {
      iVar2 = FUN_000201d8(uVar3);
      if (iVar2 != 0) {
        FUN_00034a5c(10);
        iVar2 = FUN_0001c8a8(uVar3 & 0xff);
        if (iVar2 == 0) {
          iVar2 = local_850[uVar3];
          local_850[uVar3] = iVar2 + 1;
          if (1 < DAT_00087bbc) {
            snprintf(acStack_840,0x800,"chain[%d] heart beat fail %d times.\n",uVar3,iVar2 + 1);
            FUN_00032218(1,acStack_840,0);
          }
        }
        else {
          local_850[uVar3] = 0;
        }
        iVar4 = iVar4 + 1;
        FUN_00034a5c(10);
        uVar5 = FUN_0001c978(uVar3);
        param4 = param4 + (double)CONCAT44(extraout_s1,uVar5);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 4);
    in_fpscr = in_fpscr & 0xfffffff;
    if (iVar4 != 0) {
      dVar7 = (double)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      param4 = param4 / dVar7;
    }
    if (dVar8 < -0.1) {
      dVar8 = param4;
    }
    if (4 < DAT_00087bbc) {
      snprintf(acStack_840,0x800,"last avg = %.2f, current voltage = %.2f",dVar8,param4);
      FUN_00032218(4,acStack_840,0);
    }
    dVar7 = (double)VectorSignedToFloat(DAT_0048d3d4 / 100,(byte)(in_fpscr >> 0x16) & 3);
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar8 <= dVar7 * 0.75) {
LAB_00028184:
      in_fpscr = in_fpscr & 0xfffffff;
      if (dVar7 * 0.75 < param4) {
        dVar7 = param4 * 0.75;
        uVar3 = in_fpscr | (uint)(dVar7 < dVar8) << 0x1f | (uint)(dVar7 == dVar8) << 0x1e;
        in_fpscr = uVar3 | (uint)(NAN(dVar7) || NAN(dVar8)) << 0x1c;
        bVar1 = (byte)(uVar3 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_00028094;
      }
    }
    else {
      dVar6 = dVar8 * 0.75;
      uVar3 = in_fpscr | (uint)(dVar6 < param4) << 0x1f | (uint)(dVar6 == param4) << 0x1e;
      in_fpscr = uVar3 | (uint)(NAN(dVar6) || NAN(param4)) << 0x1c;
      bVar1 = (byte)(uVar3 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00028184;
LAB_00028094:
      if (3 < DAT_00087bbc) {
        dVar8 = param4 - dVar8;
        param3 = "drop";
        uVar3 = in_fpscr & 0xfffffff | (uint)(dVar8 < 0.0) << 0x1f | (uint)(dVar8 == 0.0) << 0x1e;
        in_fpscr = uVar3 | (uint)NAN(dVar8) << 0x1c;
        bVar1 = (byte)(uVar3 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          param3 = "rise";
        }
        snprintf(acStack_840,0x800,"chain avg vol %s to %.2f",param3,param4);
        FUN_00032218(3,acStack_840,0);
      }
    }
    pthread_setcancelstate(0,(int *)0x0);
    pthread_testcancel();
    sleep(10);
    dVar8 = param4;
  } while( true );
}

