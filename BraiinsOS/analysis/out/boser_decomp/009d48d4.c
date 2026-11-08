// FUN_009d48d4 @ 009d48d4 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_009d48d4(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    piVar2 = (int *)(param_1 + iVar4 * 0x18 + 0x14);
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a95ae4(*piVar2);
      }
    }
    iVar4 = iVar5;
  } while (iVar5 != param_2);
  thunk_FUN_01be4678(param_1);
  return;
}

