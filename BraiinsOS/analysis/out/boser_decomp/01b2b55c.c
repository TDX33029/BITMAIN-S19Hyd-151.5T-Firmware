// FUN_01b2b55c @ 01b2b55c size=124 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_01b2b55c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_01b2b248(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_01b265f4(*param_1,param_2,param_3 << 2,0);
  param_1[1] = param_3;
  param_1[3] = 0;
  return 1;
}

