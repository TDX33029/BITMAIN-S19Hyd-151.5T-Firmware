// FUN_00e76ed4 @ 00e76ed4 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_00e76ed4(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_015f8320();
  }
  (*(code *)*puVar1)(&local_18);
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  puVar1[2] = uStack_10;
  puVar1[3] = uStack_c;
  return;
}

