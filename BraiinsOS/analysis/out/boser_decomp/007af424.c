// FUN_007af424 @ 007af424 size=104 calls_out=3 calls_in=0
// strings: 

void FUN_007af424(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar1 = 1;
  if (0x80000000 < uVar2) {
    iVar1 = uVar2 + 0x7fffffff;
  }
  if (iVar1 == 0) {
    FUN_0069603c(param_1 + 0x20);
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  if (uVar2 == 0x80000000) {
    return;
  }
  FUN_019bb7e0(uVar2,*(undefined4 *)(param_1 + 0x20));
  return;
}

