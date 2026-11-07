// FUN_00048ae0 @ 00048ae0  size=100  callers=0
// program: bmminer


void FUN_00048ae0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_1c [2];
  
  piVar2 = *(int **)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14);
  if (*(int *)(*piVar2 + 0x20) != 0) {
    FUN_000498b4(uVar1,local_1c);
    (**(code **)(*piVar2 + 0x20))(local_1c[0]);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14);
  }
  FUN_000498f4(uVar1,param_2,param_3);
  return;
}

