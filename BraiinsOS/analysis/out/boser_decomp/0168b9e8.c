// FUN_0168b9e8 @ 0168b9e8 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_0168b9e8(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  FUN_016c2978();
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,uVar1,uVar1,&DAT_01d078fc);
  }
  if (uVar1 - uVar2 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,4,uVar1 - uVar2,&DAT_01d099b8);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + uVar2) = param_2;
  return;
}

