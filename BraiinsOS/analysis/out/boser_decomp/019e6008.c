// FUN_019e6008 @ 019e6008 size=168 calls_out=5 calls_in=3
// strings: expected `CurrentThread::Context`

void FUN_019e6008(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("expected `CurrentThread::Context`",0x43,&DAT_01d29224);
  }
  if (param_1[2] != 0) {
    FUN_01306fc8(&DAT_01d29234);
    param_1[2] = param_1[2] + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  iVar2 = param_1[3];
  iVar4 = 0;
  param_1[2] = -1;
  param_1[3] = 0;
  if (iVar2 != 0) {
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(param_1[8] + 0x10);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2;
    DataMemoryBarrier(0xb);
    FUN_019ea0f0(iVar4);
    FUN_019e0044(param_1[8]);
    iVar4 = param_1[2] + 1;
  }
  param_1[2] = iVar4;
  return;
}

