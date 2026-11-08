// FUN_0172a31c @ 0172a31c size=136 calls_out=5 calls_in=4
// strings: 

undefined4 FUN_0172a31c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_0177ea78(param_1 + 0x10);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0171c904(param_1[0xe]);
  FUN_0171423c(*param_1);
  FUN_0171423c(param_1[1]);
  FUN_0171423c(param_1[2]);
  FUN_0171423c(param_1[3]);
  FUN_0171423c(param_1[4]);
  FUN_01781f20(param_1 + 6);
  uVar2 = FUN_0177aafc(param_1);
  return uVar2;
}

