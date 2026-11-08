// FUN_0174b1f0 @ 0174b1f0 size=388 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/gcd.c

bool FUN_0174b1f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  *param_2 = 0;
  iVar1 = FUN_0171462c(param_3,0);
  if ((iVar1 == 0) && (iVar1 = FUN_01715760(param_3,param_4 + 0x14), iVar1 < 0)) {
    FUN_01714208(auStack_40);
    iVar1 = FUN_0174b144(auStack_40,1,param_4 + 0x14);
    bVar2 = false;
    if (((iVar1 != 0) &&
        (iVar1 = FUN_0171dce4(param_1,auStack_40,param_3,param_4,param_5), iVar1 != 0)) &&
       (iVar1 = FUN_01722774(param_1,param_2,param_1,param_4 + 0x14,param_5), iVar1 != 0)) {
      iVar1 = FUN_0171dce4(param_1,auStack_40,param_1,param_4,param_5);
      bVar2 = iVar1 != 0;
    }
    FUN_017046e0(auStack_40);
  }
  else {
    bVar2 = false;
    FUN_016e9cd0(3,0,0x6b,"/aws-lc/crypto/fipsmodule/bn/gcd.c",0xe6);
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return bVar2;
}

