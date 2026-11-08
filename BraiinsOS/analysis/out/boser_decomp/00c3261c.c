// FUN_00c3261c @ 00c3261c size=76 calls_out=5 calls_in=1
// strings: 

void FUN_00c3261c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    FUN_0071227c();
    FUN_00c32798(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x60);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  if (*(char *)(param_1 + 0x1a0) == '\x03') {
    FUN_00c32690(param_1 + 0x68);
    return;
  }
  return;
}

