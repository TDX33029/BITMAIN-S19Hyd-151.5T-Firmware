// FUN_00fbaaf8 @ 00fbaaf8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00fbaaf8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)*param_1;
  *(int *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  puVar1 = (undefined4 *)*puVar1;
  uVar2 = FUN_00fbab70();
  *puVar1 = uVar2;
  return;
}

