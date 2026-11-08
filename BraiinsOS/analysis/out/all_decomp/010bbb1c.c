// FUN_010bbb1c @ 010bbb1c size=108 calls_out=0 calls_in=2
// strings: 

void FUN_010bbb1c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while (param_2 != iVar1) {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 0x1c) != 0) {
      (**(code **)(*(int *)(param_1 + 0x1c) + 0x10))
                (param_1 + 0x28,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    }
    (**(code **)(*(int *)(param_1 + 0xc) + 0x10))
              (param_1 + 0x18,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    param_1 = param_1 + 0x30;
  }
  return;
}

