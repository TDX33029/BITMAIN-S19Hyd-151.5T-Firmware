// FUN_01b473c0 @ 01b473c0 size=100 calls_out=2 calls_in=4
// strings: 

bool FUN_01b473c0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_01b47374(*(undefined4 *)(param_2 + 8));
    iVar1 = FUN_01b6ad8c();
    *(int *)(param_1 + 0x1c) = iVar1;
    return iVar1 != 0;
  }
  return true;
}

