// FUN_0174b144 @ 0174b144 size=168 calls_out=2 calls_in=6
// strings: 

undefined8 FUN_0174b144(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0171464c(param_1,param_3[1]);
  if (iVar1 != 0) {
    iVar1 = FUN_0174afc4(*param_1,param_2,*param_3,param_3[1],&DAT_004287bc);
    if (iVar1 != 0) {
      param_1[1] = param_3[1];
      param_1[3] = 0;
      return 1;
    }
  }
  return 0;
}

