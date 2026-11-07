// FUN_017515f4 @ 017515f4 size=396 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4
FUN_017515f4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_28;
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_0172a898(param_4,&PTR_018bc3f4,param_3,0);
  if (iVar1 == param_3) {
    local_28 = FUN_0175009c(param_1);
    iVar1 = FUN_0177a6c0();
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar3 = FUN_01751354(param_1,&local_28,iVar1,local_28,param_7,param_8,3);
      if (iVar3 == 0) {
LAB_01751708:
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_0175009c(param_1);
        if (iVar3 != local_28) {
          FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x3dc);
          goto LAB_01751708;
        }
        uVar4 = FUN_017502ac(param_1,param_2,param_4,param_5,iVar1,param_6);
      }
      uVar2 = FUN_0177aafc(iVar1);
      goto LAB_01751678;
    }
  }
  else {
    uVar2 = FUN_016e9cd0(4,0,0x7d,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x3cc);
  }
  uVar4 = 0;
LAB_01751678:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,local_24 ^ DAT_018ddaf8,0);
  }
  return uVar4;
}

