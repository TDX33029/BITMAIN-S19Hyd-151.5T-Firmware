// FUN_00b06554 @ 00b06554 size=72 calls_out=2 calls_in=0
// strings: 

void FUN_00b06554(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = *(undefined4 **)*param_1;
  *(int *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  FUN_00977380(&local_30);
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  puVar1[4] = uStack_20;
  puVar1[5] = uStack_1c;
  return;
}

