// FUN_0182adf0 @ 0182adf0 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_0182adf0(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(param_1[1] + 0x10))(*param_1);
  puVar1 = (undefined8 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = uVar2;
  return;
}

