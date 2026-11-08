// FUN_014ae46c @ 014ae46c size=88 calls_out=2 calls_in=0
// strings: 

void FUN_014ae46c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  (**(code **)*param_1)(&local_20,param_1 + 3,param_1[1],param_1[2]);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar1 = local_20;
  puVar1[1] = uStack_1c;
  puVar1[2] = uStack_18;
  puVar1[3] = local_14;
  return;
}

