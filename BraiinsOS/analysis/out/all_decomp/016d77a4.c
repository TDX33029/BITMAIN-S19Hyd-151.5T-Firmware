// FUN_016d77a4 @ 016d77a4 size=20 calls_out=1 calls_in=1
// strings: 

void FUN_016d77a4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    thunk_FUN_016d3fb4(param_1);
    param_1 = puVar1;
  }
  return;
}

