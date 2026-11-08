// FUN_00e7c554 @ 00e7c554 size=96 calls_out=3 calls_in=1
// strings: inconsistent in drop

void FUN_00e7c554(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  while (uVar4 = FUN_00e7c5b8(param_1), (int)uVar4 == 0) {
    piVar2 = (int *)((int)((ulonglong)uVar4 >> 0x20) + -8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0118016c();
    }
  }
  if ((int)uVar4 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_013498b4("inconsistent in drop",0x14);
  }
  return;
}

