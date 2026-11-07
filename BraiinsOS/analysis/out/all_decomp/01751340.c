// FUN_01751340 @ 01751340 size=560 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4
FUN_01751340(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if ((*(int *)(param_6 + 4) == 0) || (*(int *)(param_6 + 8) == 0)) {
    FUN_016e9cd0(4,0,0x90,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x37f);
  }
  else {
    uVar1 = FUN_0175009c(param_6,&PTR_018bc3f4,0);
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    if (param_3 == 0x24 || param_1 != 0x72) {
      iVar2 = FUN_0177a6c0();
      if (iVar2 != 0) {
        uVar4 = 1;
        iVar3 = FUN_01750d34(param_6,&local_34,iVar2,uVar1,param_4,param_5,1);
        if ((iVar3 == 0) ||
           (iVar3 = FUN_0174ed30(&local_3c,&local_38,&local_30,param_1,param_2,param_3), iVar3 == 0)
           ) {
LAB_017511dc:
          uVar4 = 0;
        }
        else {
          if (local_34 != local_38) {
            FUN_016e9cd0(4,0,0x69,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x39e);
            goto LAB_017511dc;
          }
          if ((local_34 != 0) && (iVar3 = FUN_016dd50a(iVar2,local_3c), iVar3 != 0)) {
            FUN_016e9cd0(4,0,0xf8,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x3a4);
            goto LAB_017511dc;
          }
        }
        FUN_0177aafc(iVar2);
        if (local_30 != 0) {
          FUN_0177aafc(local_3c);
        }
        goto LAB_01751220;
      }
    }
    else {
      FUN_016e9cd0(4,0,0x7d,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x38b);
    }
  }
  uVar4 = 0;
LAB_01751220:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar4;
}

