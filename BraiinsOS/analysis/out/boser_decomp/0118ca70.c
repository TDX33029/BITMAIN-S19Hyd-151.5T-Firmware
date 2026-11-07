// FUN_0118ca70 @ 0118ca70 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_0118ca70(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) goto LAB_0118cad4;
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
  }
  if (puVar2[1] != 0) {
    thunk_FUN_01be4678(uVar1);
  }
LAB_0118cad4:
  FUN_012d40d0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  return;
}

