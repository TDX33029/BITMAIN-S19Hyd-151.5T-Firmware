// FUN_0102f900 @ 0102f900 size=32 calls_out=1 calls_in=2
// strings: 

void FUN_0102f900(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    FUN_0071227c();
    FUN_0102f93c(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x60);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  if (*(char *)(param_1 + 0x1a0) == '\x03') {
    FUN_0102fc0c(param_1 + 0x68);
    return;
  }
  return;
}

