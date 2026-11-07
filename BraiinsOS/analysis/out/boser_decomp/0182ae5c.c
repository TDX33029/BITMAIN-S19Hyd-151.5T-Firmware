// FUN_0182ae5c @ 0182ae5c size=64 calls_out=2 calls_in=0
// strings: 

void FUN_0182ae5c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(param_1[1] + 0x14))(*param_1);
  puVar1 = (undefined8 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = uVar2;
  return;
}

