// FUN_00c003fc @ 00c003fc size=100 calls_out=2 calls_in=0
// strings: 

void FUN_00c003fc(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
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
  (*(code *)*puVar1)(&local_30);
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  puVar1[4] = local_20;
  puVar1[5] = uStack_1c;
  puVar1[6] = uStack_18;
  puVar1[7] = uStack_14;
  return;
}

