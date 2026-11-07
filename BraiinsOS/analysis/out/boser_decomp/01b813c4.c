// FUN_01b813c4 @ 01b813c4 size=52 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_01b813c4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1[2] - ((uint)param_1[1] >> 3));
  param_1[1] = param_1[1] & 7;
  param_1[2] = puVar1;
  *param_1 = *puVar1;
  return 0;
}

