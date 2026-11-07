// FUN_01b2b33c @ 01b2b33c size=116 calls_out=2 calls_in=25
// strings: 

undefined4 * FUN_01b2b33c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 != param_1) {
    iVar1 = FUN_01b2b248(param_1,param_2[1]);
    if (iVar1 == 0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      FUN_01b26974(*param_1,*param_2,param_2[1] << 2);
      param_1[1] = param_2[1];
      param_1[3] = param_2[3];
    }
  }
  return param_1;
}

