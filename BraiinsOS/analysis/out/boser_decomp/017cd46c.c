// FUN_017cd46c @ 017cd46c size=72 calls_out=4 calls_in=1
// strings: 

void FUN_017cd46c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    FUN_017cc82c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x130) == '\x03') {
    FUN_017cd4c8(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 200);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  return;
}

