// FUN_01be7a78 @ 01be7a78 size=20 calls_out=1 calls_in=4
// strings: 

void FUN_01be7a78(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    thunk_FUN_01be4678(param_1);
    param_1 = puVar1;
  }
  return;
}

