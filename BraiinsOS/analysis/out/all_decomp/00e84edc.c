// FUN_00e84edc @ 00e84edc size=96 calls_out=3 calls_in=0
// strings: 

void FUN_00e84edc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_006c1fc0(&uStack_38,param_2,param_3,*param_1);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x24);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  puVar1[4] = local_30;
  puVar1[5] = uStack_2c;
  puVar1[6] = uStack_28;
  puVar1[7] = uStack_24;
  puVar1[8] = uStack_20;
  return;
}

