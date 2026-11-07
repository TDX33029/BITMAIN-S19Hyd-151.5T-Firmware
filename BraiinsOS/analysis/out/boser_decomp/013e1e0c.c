// FUN_013e1e0c @ 013e1e0c size=64 calls_out=1 calls_in=0
// strings: 

void FUN_013e1e0c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = FUN_013d79b4(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar2,param_2,
                       param_3);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x14) = iVar2 + param_3;
  }
  return;
}

