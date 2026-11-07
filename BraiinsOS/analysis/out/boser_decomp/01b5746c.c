// FUN_01b5746c @ 01b5746c size=532 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4
FUN_01b5746c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  if ((*(int *)(param_6 + 4) == 0) || (*(int *)(param_6 + 8) == 0)) {
    uVar4 = 0x37f;
    uVar3 = 0x90;
LAB_01b572c0:
    FUN_01b053d4(4,0,uVar3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar4);
  }
  else {
    uVar3 = FUN_01b565f4(param_6);
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    if (param_3 != 0x24 && param_1 == 0x72) {
      uVar4 = 0x38b;
      uVar3 = 0x7d;
      goto LAB_01b572c0;
    }
    iVar1 = FUN_01b6ad8c();
    if (iVar1 != 0) {
      uVar4 = 1;
      iVar2 = FUN_01b56f18(param_6,&local_34,iVar1,uVar3,param_4,param_5,1);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_01b557ac(&local_3c,&local_38,&local_30,param_1,param_2,param_3), iVar2 == 0))
      {
LAB_01b573e0:
        uVar4 = 0;
      }
      else {
        if (local_34 != local_38) {
          uVar4 = 0x39e;
          uVar3 = 0x69;
LAB_01b573d4:
          FUN_01b053d4(4,0,uVar3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar4);
          goto LAB_01b573e0;
        }
        iVar2 = FUN_01b20118(iVar1,local_3c);
        if (iVar2 != 0) {
          uVar4 = 0x3a4;
          uVar3 = 0xf8;
          goto LAB_01b573d4;
        }
      }
      FUN_01b6b1c4(iVar1);
      if (local_30 != 0) {
        FUN_01b6b1c4(local_3c);
      }
      goto LAB_01b572cc;
    }
  }
  uVar4 = 0;
LAB_01b572cc:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar4;
}

