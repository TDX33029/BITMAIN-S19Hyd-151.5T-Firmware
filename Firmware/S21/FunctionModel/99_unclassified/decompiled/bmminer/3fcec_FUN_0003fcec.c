// FUN_0003fcec @ 0003fcec  size=420  callers=0
// program: bmminer


void FUN_0003fcec(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_008c7040;
  iVar4 = 0;
  DAT_008c706c = (((DAT_000be60c * (DAT_008c706c - DAT_000be5fc)) / 100 + DAT_000be5fc) / 10) * 10;
  DAT_008c7040 = ((DAT_000be600 + (uint)(DAT_000be60c * (DAT_008c7040 - DAT_000be600)) / 100) / 5) *
                 5;
  do {
    iVar1 = FUN_0002a6f0(iVar4);
    if (iVar1 != 0) {
      FUN_0002683c(DAT_000be8f0,iVar4,DAT_008c7044,iVar2,DAT_008c7040,0,100);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  iVar2 = FUN_00024c74();
  uVar3 = DAT_008c706c - iVar2;
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  if (uVar3 / 10 < 2) {
    iVar4 = 0;
  }
  else {
    iVar1 = iVar2 + 10;
    do {
      iVar4 = iVar2 * 2 - iVar1;
      if (iVar2 < DAT_008c706c) {
        iVar4 = iVar1;
      }
      FUN_000246cc(iVar4,3);
      iVar1 = iVar1 + 10;
      usleep(200000);
    } while (iVar1 != iVar2 + (uVar3 / 10) * 10);
  }
  if (DAT_008c706c != iVar4) {
    FUN_000246cc(DAT_008c706c,3);
  }
  FUN_0002c7e8(0xf);
  return;
}

