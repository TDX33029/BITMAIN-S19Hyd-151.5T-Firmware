// FUN_01b524c8 @ 01b524c8 size=144 calls_out=2 calls_in=6
// strings: 

undefined4 FUN_01b524c8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_01b2b248(param_1,param_3[1]);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_01b52374(*param_1,param_2,*param_3,param_3[1],&DAT_0053a421), iVar1 == 0)) {
    return 0;
  }
  param_1[3] = 0;
  param_1[1] = param_3[1];
  return 1;
}

