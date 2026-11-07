// FUN_017339d4 @ 017339d4 size=312 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

undefined4
FUN_017339d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  local_2c = 0;
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e83f0(param_4,param_5,&PTR_018bc3f4,0);
  if (iVar1 != 0) {
    iVar2 = FUN_016e85e8(&local_2c,&local_28,iVar1);
    if (iVar2 != 0) {
      if ((local_28 == param_5) &&
         ((local_28 == 0 || (iVar2 = FUN_016dd50a(param_4,local_2c), iVar2 == 0)))) {
        uVar3 = FUN_017339c0(param_2,param_3,iVar1,param_6);
        goto LAB_01733a7c;
      }
    }
    FUN_016e9cd0(0x1a,0,0x44,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x17c);
  }
  uVar3 = 0;
LAB_01733a7c:
  FUN_0177aafc(local_2c);
  FUN_0172bf9c(iVar1);
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar3;
}

