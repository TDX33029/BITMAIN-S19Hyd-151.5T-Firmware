// FUN_012d73c0 @ 012d73c0 size=88 calls_out=3 calls_in=1
// strings: 

void FUN_012d73c0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_012e310c(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x94) = 0;
  piVar2 = (int *)(param_1 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 2;
  FUN_009dd354();
  iVar3 = 0;
  do {
    FUN_019e03e8(param_1 + 8 + iVar3);
    iVar3 = iVar3 + 0x10;
  } while (iVar3 != 0x80);
  return;
}

