// FUN_01beecd4 @ 01beecd4 size=72 calls_out=2 calls_in=5
// strings: 

undefined4 FUN_01beecd4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_14 [2];
  
  piVar2 = (int *)(param_1 + 0x18);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    if (iVar3 != 2) goto LAB_01beecf4;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 3;
LAB_01beecf4:
  DataMemoryBarrier(0x1b);
  if (iVar3 != 2) {
    FUN_01bef8fc(1,local_14);
    FUN_01beee2a(param_1,0);
    FUN_01bef8fc(local_14[0],0);
  }
  return 0;
}

