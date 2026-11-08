// FUN_019daae0 @ 019daae0 size=220 calls_out=6 calls_in=2
// strings: 

void FUN_019daae0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == -1) {
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db20c(param_1[1]);
    }
  }
  else {
    FUN_01bf01d6();
    iVar3 = param_1[5];
    FUN_019eb7b4(iVar3,param_1[6]);
    FUN_0134c054(param_1[4],iVar3,4,4);
    FUN_01bf01d6(param_1[1]);
  }
  if (1 < param_1[0x1a] + 1U) {
    piVar2 = (int *)(param_1[0x1a] + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
    }
  }
  if ((undefined1 *)param_1[0x18] == &DAT_3b9aca00) {
    return;
  }
  thunk_FUN_01be4678(param_1[0x12]);
  return;
}

