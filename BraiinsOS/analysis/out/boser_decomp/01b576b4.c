// FUN_01b576b4 @ 01b576b4 size=380 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4
FUN_01b576b4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01b3b6b4(param_4,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == param_3) {
    local_28 = FUN_01b565f4(param_1);
    iVar1 = FUN_01b6ad8c();
    if (iVar1 != 0) {
      iVar2 = FUN_01b57480(param_1,&local_28,iVar1,local_28,param_7,param_8,3);
      if (iVar2 == 0) {
LAB_01b577d8:
        uVar3 = 0;
      }
      else {
        iVar2 = FUN_01b565f4(param_1);
        if (iVar2 != local_28) {
          FUN_01b053d4(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x3dc);
          goto LAB_01b577d8;
        }
        uVar3 = FUN_01b567f8(param_1,param_2,param_4,param_5,iVar1,param_6);
      }
      FUN_01b6b1c4(iVar1);
      goto LAB_01b57734;
    }
  }
  else {
    FUN_01b053d4(4,0,0x7d,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x3cc);
  }
  uVar3 = 0;
LAB_01b57734:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}

