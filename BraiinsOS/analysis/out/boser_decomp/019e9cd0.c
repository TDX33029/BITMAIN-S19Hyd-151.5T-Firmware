// FUN_019e9cd0 @ 019e9cd0 size=72 calls_out=2 calls_in=0
// strings: 

void FUN_019e9cd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = *(undefined4 **)*param_1;
  *(int *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  FUN_019e18f0(&local_20);
  *puVar1 = local_20;
  puVar1[1] = uStack_1c;
  puVar1[2] = uStack_18;
  puVar1[3] = uStack_14;
  return;
}

