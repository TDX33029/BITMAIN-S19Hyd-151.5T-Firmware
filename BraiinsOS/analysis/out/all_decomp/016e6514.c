// FUN_016e6514 @ 016e6514 size=180 calls_out=6 calls_in=1
// strings: 

undefined8 FUN_016e6514(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_0177ea78(param_1 + 0xf,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_016f19e8(&DAT_018de61c,param_1,param_1 + 0x10);
  FUN_0171423c(*param_1);
  FUN_0171423c(param_1[1]);
  FUN_0171423c(param_1[2]);
  FUN_0171423c(param_1[3]);
  FUN_0171423c(param_1[4]);
  FUN_0171c904(param_1[0xd]);
  FUN_0171c904(param_1[0xe]);
  FUN_01781f20(param_1 + 5);
  uVar2 = FUN_0177aafc(param_1);
  return uVar2;
}

