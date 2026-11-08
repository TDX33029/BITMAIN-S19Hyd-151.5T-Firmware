// FUN_01b586cc @ 01b586cc size=508 calls_out=7 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4
FUN_01b586cc(int *param_1,uint *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  if ((*param_1 != 0) && (pcVar5 = *(code **)(*param_1 + 0x14), pcVar5 != (code *)0x0)) {
    if ((int)param_4 < 0) {
      FUN_01b053d4(4,0,0x45,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x229);
    }
    else {
      uVar3 = (*pcVar5)(param_4,param_5,param_3,param_1,param_7);
      if (-1 < (int)uVar3) {
        *param_2 = uVar3;
        return 1;
      }
    }
    *param_2 = 0;
    return 0;
  }
  uVar3 = FUN_01b565f4();
  if (param_4 < uVar3) {
    FUN_01b053d4(4,0,0x87,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x13d);
    return 0;
  }
  iVar1 = FUN_01b6ad8c();
  if (iVar1 != 0) {
    if (param_7 == 1) {
      iVar2 = FUN_01b552b4(iVar1,uVar3,param_5,param_6);
    }
    else {
      if (param_7 != 3) {
        FUN_01b053d4(4,0,0x8f,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x14e);
        goto LAB_01b58660;
      }
      iVar2 = FUN_01b554f4(iVar1,uVar3,param_5,param_6);
    }
    if ((0 < iVar2) && (iVar2 = FUN_01b58534(param_1,param_3,iVar1,uVar3), iVar2 != 0)) {
      *param_2 = uVar3;
      uVar4 = 1;
      goto LAB_01b58664;
    }
  }
LAB_01b58660:
  uVar4 = 0;
LAB_01b58664:
  FUN_01b6b1c4(iVar1);
  return uVar4;
}

