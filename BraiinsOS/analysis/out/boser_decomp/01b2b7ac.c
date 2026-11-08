// FUN_01b2b7ac @ 01b2b7ac size=128 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01b2b7ac(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar1 = FUN_01b2b3b0(param_2);
    if ((iVar1 == 0) || (iVar2 = FUN_01b2b700(iVar1,param_3), iVar2 == 0)) {
      FUN_01b1f904(iVar1);
      return 0;
    }
    *param_1 = iVar1;
  }
  return 1;
}

