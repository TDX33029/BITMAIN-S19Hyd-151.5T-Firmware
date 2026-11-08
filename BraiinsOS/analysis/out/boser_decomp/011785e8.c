// FUN_011785e8 @ 011785e8 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_011785e8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (**(code **)*param_1)(&local_28,param_1 + 3,param_1[1],param_1[2]);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = uStack_1c;
  return;
}

