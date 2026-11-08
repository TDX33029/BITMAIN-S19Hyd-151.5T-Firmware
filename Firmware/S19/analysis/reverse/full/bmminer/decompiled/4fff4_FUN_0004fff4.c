// FUN_0004fff4 @ 0004fff4  size=448  callers=1
// program: bmminer


uint FUN_0004fff4(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  uint in_fpscr;
  uint uVar6;
  double in_d0;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if ((DAT_0050fac4 == '\0') || (DAT_0050fc40 == '\0')) {
    switch(DAT_0050fac0) {
    case 0x22:
      return (uint)(longlong)(1215.89444 - in_d0 * 59.931507);
    case 0x41:
    case 0x42:
      return (uint)(longlong)(765.411764 - in_d0 * 35.833333);
    case 0x43:
      return (uint)(longlong)(933.240365 - in_d0 * 59.806034);
    case 0x61:
      return (uint)(longlong)(1144.502262 - in_d0 * 52.243589);
    case 0x62:
    case 100:
    case 0x65:
    case 0x66:
      return (uint)(longlong)(0.0 - in_d0);
    case 0x71:
    case 0x72:
    case 0x75:
    case 0x77:
      return (uint)(longlong)(1190.935338 - in_d0 * 78.742588);
    case 0x73:
    case 0x78:
      return (uint)(longlong)(1280.577821 - in_d0 * 73.979365);
    case 0x74:
    case 0x76:
      return (uint)(longlong)(1156.107585 - in_d0 * 76.090494);
    }
  }
  else if (1 < DAT_0050fadc) {
    pdVar5 = (double *)&DAT_0050fb80;
    iVar2 = 0;
    do {
      dVar10 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      iVar4 = iVar2 + 1;
      dVar8 = dVar10 - 0.001;
      in_fpscr = in_fpscr & 0xfffffff;
      uVar3 = in_fpscr | (uint)(in_d0 < dVar8) << 0x1f | (uint)(in_d0 == dVar8) << 0x1e;
      uVar6 = uVar3 | (uint)(NAN(in_d0) || NAN(dVar8)) << 0x1c;
      bVar1 = (byte)(uVar3 >> 0x18);
      if ((!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) &&
         (dVar8 = *pdVar5, uVar6 = in_fpscr, in_d0 < dVar8 + 0.001)) {
LAB_000502c0:
        dVar7 = (double)VectorSignedToFloat((uint)*(byte *)((int)&DAT_0050fae0 + iVar2),
                                            (byte)(in_fpscr >> 0x16) & 3);
        dVar9 = (double)VectorSignedToFloat((uint)*(byte *)((int)&DAT_0050fae0 + iVar2 + 1) -
                                            (uint)*(byte *)((int)&DAT_0050fae0 + iVar2),
                                            (byte)(in_fpscr >> 0x16) & 3);
        dVar8 = round(dVar7 + (dVar9 / (dVar8 - dVar10)) * (in_d0 - dVar10));
        uVar3 = (uint)(longlong)dVar8;
        if (0xff < uVar3) {
          uVar3 = 0xffffffff;
        }
        return uVar3;
      }
      in_fpscr = uVar6 & 0xfffffff;
      if (in_d0 < dVar10 + 0.001) {
        dVar8 = *pdVar5;
        dVar7 = dVar8 - 0.001;
        uVar3 = in_fpscr | (uint)(in_d0 < dVar7) << 0x1f | (uint)(in_d0 == dVar7) << 0x1e;
        in_fpscr = uVar3 | (uint)(NAN(in_d0) || NAN(dVar7)) << 0x1c;
        bVar1 = (byte)(uVar3 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_000502c0;
      }
      iVar2 = iVar4;
    } while (DAT_0050fadc + -1 != iVar4);
  }
  return 0xffffffff;
}

