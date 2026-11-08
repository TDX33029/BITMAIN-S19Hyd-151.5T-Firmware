// FUN_00ada568 @ 00ada568 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_00ada568(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + iVar2 * 0xc);
    piVar4 = (int *)*puVar1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar5);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*puVar1,puVar1[1]);
    }
    bVar5 = iVar2 != 1;
    iVar2 = 1;
  } while (bVar5);
  return;
}

