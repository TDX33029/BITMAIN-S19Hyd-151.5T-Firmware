// FUN_0004fff4 @ 0004fff4  size=448
// callers: [FUN_00050390]

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
      return (uint)(longlong)(DAT_00050350 - in_d0 * DAT_00050348);
    case 0x41:
    case 0x42:
      return (uint)(longlong)(DAT_00050330 - in_d0 * DAT_00050328);
    case 0x43:
      return (uint)(longlong)(DAT_00050360 - in_d0 * DAT_00050358);
    case 0x61:
      return (uint)(longlong)(DAT_00050370 - in_d0 * DAT_00050368);
    case 0x62:
    case 100:
    case 0x65:
    case 0x66:
      return (uint)(longlong)(DAT_00050378 - in_d0);
    case 0x71:
    case 0x72:
    case 0x75:
    case 0x77:
      return (uint)(longlong)(DAT_00050320 - in_d0 * DAT_00050318);
    case 0x73:
    case 0x78:
      return (uint)(longlong)(DAT_00050388 - in_d0 * DAT_00050380);
    case 0x74:
    case 0x76:
      return (uint)(longlong)(DAT_00050340 - in_d0 * DAT_00050338);
    }
  }
  else if (1 < DAT_0050fadc) {
    pdVar5 = (double *)&DAT_0050fb80;
    iVar2 = 0;
    do {
      dVar10 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      iVar4 = iVar2 + 1;
      dVar8 = dVar10 - DAT_00050310;
      in_fpscr = in_fpscr & 0xfffffff;
      uVar3 = in_fpscr | (uint)(in_d0 < dVar8) << 0x1f | (uint)(in_d0 == dVar8) << 0x1e;
      uVar6 = uVar3 | (uint)(NAN(in_d0) || NAN(dVar8)) << 0x1c;
      bVar1 = (byte)(uVar3 >> 0x18);
      if ((!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) &&
         (dVar8 = *pdVar5, uVar6 = in_fpscr, in_d0 < dVar8 + DAT_00050310)) {
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
      if (in_d0 < dVar10 + DAT_00050310) {
        dVar8 = *pdVar5;
        dVar7 = dVar8 - DAT_00050310;
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


