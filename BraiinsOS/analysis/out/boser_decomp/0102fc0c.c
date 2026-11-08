// FUN_0102fc0c @ 0102fc0c size=116 calls_out=5 calls_in=2
// strings: 

void FUN_0102fc0c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    FUN_0071227c();
    FUN_0102f93c(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x60);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  if (*(char *)(param_1 + 0x130) == '\x03') {
    FUN_0102fb60(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 200);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  return;
}

