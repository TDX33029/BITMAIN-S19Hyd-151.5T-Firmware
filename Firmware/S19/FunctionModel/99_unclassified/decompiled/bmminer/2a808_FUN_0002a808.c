// FUN_0002a808 @ 0002a808  size=400  callers=1
// program: bmminer


void FUN_0002a808(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_0048d398;
  iVar4 = 0;
  DAT_0048d3d4 = (((DAT_00087b80 * (DAT_0048d3d4 - DAT_00087b70)) / 100 + DAT_00087b70) / 10) * 10;
  DAT_0048d398 = ((DAT_00087b74 + (uint)(DAT_00087b80 * (DAT_0048d398 - DAT_00087b74)) / 100) / 5) *
                 5;
  do {
    iVar1 = FUN_000201d8(iVar4);
    if (iVar1 != 0) {
      FUN_0001e1dc(DAT_00087df4,iVar4,DAT_0048d39c,iVar2,DAT_0048d398,0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  iVar2 = FUN_0001cf54();
  uVar3 = DAT_0048d3d4 - iVar2;
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  if (uVar3 / 0x14 < 2) {
    iVar4 = 0;
  }
  else {
    uVar5 = 1;
    do {
      uVar6 = uVar5 + 1;
      iVar4 = uVar5 * -0x14;
      if (iVar2 < DAT_0048d3d4) {
        iVar4 = uVar5 * 0x14;
      }
      iVar4 = iVar2 + iVar4;
      FUN_0001cc60(iVar4);
      usleep(200000);
      uVar5 = uVar6;
    } while (uVar3 / 0x14 != uVar6);
  }
  if (DAT_0048d3d4 != iVar4) {
    FUN_0001cc60();
  }
  FUN_00020a54(0xf);
  return;
}

