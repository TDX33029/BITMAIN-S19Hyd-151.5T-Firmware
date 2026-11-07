// FUN_01b5255c @ 01b5255c size=372 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/bn/gcd.c

undefined4
FUN_01b5255c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_01d53560;
  *param_2 = 0;
  iVar1 = FUN_01b2b230(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_01b2be38(param_3,param_4 + 0x14), iVar1 < 0)) {
    FUN_01b2ae48(auStack_40);
    iVar1 = FUN_01b524c8(auStack_40,1,param_4 + 0x14);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_01b33010(param_1,auStack_40,param_3,param_4,param_5);
      if (iVar1 != 0) {
        iVar1 = FUN_01b370f0(param_1,param_2,param_1,param_4 + 0x14,param_5);
        if (iVar1 != 0) {
          iVar1 = FUN_01b33010(param_1,auStack_40,param_1,param_4,param_5);
          uVar2 = 0;
          if (iVar1 != 0) {
            uVar2 = 1;
          }
        }
      }
    }
    FUN_01b1f904(auStack_40);
  }
  else {
    uVar2 = 0;
    FUN_01b053d4(3,0,0x6b,"/aws-lc/crypto/fipsmodule/bn/gcd.c",0xe6);
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar2;
}

