// FUN_01afd780 @ 01afd780 size=96 calls_out=0 calls_in=9
// strings: 

undefined8 FUN_01afd780(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  if (param_1[1] == 0) {
    return 0;
  }
  puVar1 = (undefined1 *)*param_1;
  param_1[1] = param_1[1] + -1;
  *param_1 = puVar1 + 1;
  *param_2 = *puVar1;
  return 1;
}

