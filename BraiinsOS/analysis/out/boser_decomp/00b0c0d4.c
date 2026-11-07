// FUN_00b0c0d4 @ 00b0c0d4 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_00b0c0d4(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_019b06e8();
  }
  (*(code *)*puVar1)(&local_20);
  *puVar1 = local_20;
  puVar1[1] = uStack_1c;
  puVar1[2] = uStack_18;
  puVar1[3] = uStack_14;
  return;
}

