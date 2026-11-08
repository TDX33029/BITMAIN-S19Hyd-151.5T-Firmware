// FUN_00ce17a4 @ 00ce17a4 size=156 calls_out=2 calls_in=12
// strings: 

void FUN_00ce17a4(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      puVar4 = (undefined4 *)(param_1 + iVar5 * 8);
      piVar2 = (int *)*puVar4;
      iVar5 = iVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078e66c(*puVar4);
      }
      piVar2 = (int *)puVar4[1];
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aa7b14(puVar4[1]);
        }
      }
    } while (iVar5 != param_2);
  }
  return;
}

