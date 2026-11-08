// FUN_012edd74 @ 012edd74 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_012edd74(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar1 = 4;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 == 1) {
    FUN_0069603c(param_1 + 0x20);
    return;
  }
  if (uVar1 == 4) {
    FUN_019bb7e0(uVar2,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

