// FUN_0155d758 @ 0155d758 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_0155d758(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_0155b374(iVar1 + 0x150);
  FUN_0155d584(iVar1);
  if (*(int *)(iVar1 + 0x70) != 2) {
    FUN_0155d584();
  }
  if (*(int *)(iVar1 + 0xe0) != 2) {
    FUN_0155d584();
  }
  thunk_FUN_01be4678(iVar1);
  return;
}

