// FUN_013f396c @ 013f396c size=128 calls_out=3 calls_in=2
// strings: 

void FUN_013f396c(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_88 [120];
  
  if (*(int *)(param_1 + 0x1a0) == 0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(param_2);
      return;
    }
  }
  else {
    FUN_013f1684(auStack_88,param_3 + 8);
    FUN_0140163c((int *)(param_1 + 0x1a0),param_2,auStack_88,param_4);
  }
  return;
}

