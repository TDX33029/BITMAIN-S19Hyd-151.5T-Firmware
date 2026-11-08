// FUN_0183295c @ 0183295c size=164 calls_out=3 calls_in=1
// strings: 

undefined4 * FUN_0183295c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  FUN_018326f0();
  iVar1 = FUN_01832864(param_2);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  param_1[0x28] = FUN_015786e4;
  param_1[0x29] = 0;
  param_1[0x2a] = FUN_01578670;
  param_1[0x2b] = 0;
  FUN_01832150(param_1);
  *param_1 = 1;
  param_1[0x2c] = (param_2 & 0x7ff) >> 10;
  return param_1;
}

