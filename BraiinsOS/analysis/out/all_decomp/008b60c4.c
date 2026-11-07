// FUN_008b60c4 @ 008b60c4 size=96 calls_out=0 calls_in=0
// strings: 

void FUN_008b60c4(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 8) != 0;
  puVar1 = (undefined4 *)0x0;
  if (bVar2) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
  }
  if (bVar2 && puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008b611c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x20) + 0xc))(*(undefined4 *)(param_1 + 0x24));
  return;
}

