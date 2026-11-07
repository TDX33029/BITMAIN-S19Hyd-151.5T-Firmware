// FUN_01b35374 @ 01b35374 size=128 calls_out=3 calls_in=4
// strings: 

undefined8 FUN_01b35374(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b2b248(param_1,param_2[1]);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_01b34468(*param_1,*param_2,param_2[1],0);
  param_1[1] = param_2[1];
  param_1[3] = param_2[3];
  FUN_01b2b964(param_1);
  return 1;
}

