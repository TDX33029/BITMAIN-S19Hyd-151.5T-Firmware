// FUN_01aade1c @ 01aade1c size=52 calls_out=0 calls_in=0
// strings: 

void FUN_01aade1c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1[10] + 0x58);
  bVar2 = *(int *)(param_2 + 8) == iVar1;
  if (bVar2) {
    param_2 = *(int *)(param_2 + 0x10);
    iVar1 = *(int *)(param_1[10] + 0x60);
  }
  if (bVar2 && param_2 == iVar1) {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = param_3;
    param_1[3] = param_4;
  }
  return;
}

