// FUN_01820df0 @ 01820df0 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_01820df0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  puVar1[3] = param_2;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = param_1;
  return;
}

