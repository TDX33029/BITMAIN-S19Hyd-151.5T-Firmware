// FUN_01203994 @ 01203994 size=60 calls_out=1 calls_in=0
// strings: 

void FUN_01203994(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  
  FUN_01712d5c((int *)(param_1 + 8));
  bVar2 = *(int *)(param_1 + 8) != 0;
  puVar1 = (undefined4 *)0x0;
  if (bVar2) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
  }
  if (bVar2 && puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x012039cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}

