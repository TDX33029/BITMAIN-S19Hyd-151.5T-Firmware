// FUN_007567ac @ 007567ac size=148 calls_out=3 calls_in=3
// strings: 

void FUN_007567ac(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
  }
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  FUN_0149814c(uVar2,*(undefined4 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  iVar3 = *(int *)(param_1 + 0x34) + 1;
  piVar1 = (int *)(*(int *)(param_1 + 0x30) + 0x10);
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    piVar1 = piVar1 + 9;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
  }
  FUN_01404298(param_1 + 0x40);
  return;
}

