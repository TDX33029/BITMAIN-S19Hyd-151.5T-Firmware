// FUN_01750d34 @ 01750d34 size=948 calls_out=16 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c

int FUN_01750d34(int *param_1,uint *param_2,int param_3,uint param_4,undefined4 param_5,uint param_6
                ,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  if ((*param_1 != 0) && (pcVar7 = *(code **)(*param_1 + 0x18), pcVar7 != (code *)0x0)) {
    if ((int)param_4 < 0) {
      FUN_016e9cd0(4,0,0x45,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x16c);
      *param_2 = 0;
      return 0;
    }
    uVar1 = (*pcVar7)(param_4,param_5,param_3,param_1,param_7);
    if ((int)uVar1 < 0) {
      *param_2 = 0;
      return 0;
    }
    *param_2 = uVar1;
    return 1;
  }
  if ((param_1[1] == 0) || (param_1[2] == 0)) {
    FUN_016e9cd0(4,0,0x90,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x181);
    return 0;
  }
  iVar2 = FUN_0174f108(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_0175009c(param_1);
  if (param_4 < uVar1) {
    FUN_016e9cd0(4,0,0x87,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x18d);
    return 0;
  }
  if (uVar1 != param_6) {
    FUN_016e9cd0(4,0,0x70,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x192);
    return 0;
  }
  iVar2 = FUN_017184a8();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_017185b4();
  iVar3 = FUN_017186b0(iVar2);
  iVar4 = FUN_017186b0(iVar2);
  if (iVar4 == 0 || iVar3 == 0) {
LAB_01751014:
    iVar5 = 0;
    iVar3 = 0;
  }
  else {
    if (param_7 == 3) {
      iVar6 = FUN_017150f4(param_5,param_6,iVar3);
      iVar5 = param_3;
      if (iVar6 == 0) {
        FUN_01718904(iVar2);
        FUN_017184e8(iVar2);
        return 0;
      }
LAB_01750f24:
      iVar6 = FUN_01715744(iVar3,param_1[1]);
      if (-1 < iVar6) {
        iVar3 = 0;
        FUN_016e9cd0(4,0,0x73,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x1b4);
        goto LAB_01750fcc;
      }
      iVar6 = FUN_017205f4(param_1 + 0x15,param_1 + 0xd,param_1[1],iVar2);
      if ((iVar6 != 0) &&
         (iVar3 = FUN_01721398(iVar4,iVar3,param_1[2],param_1[0x15] + 0x14,iVar2,param_1[0x15]),
         iVar3 != 0)) {
        iVar3 = FUN_01715614(iVar5,param_6,iVar4);
        if (iVar3 == 0) {
          FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x1be);
        }
        else {
          if (param_7 == 1) {
            iVar3 = FUN_0174e7c8(param_3,param_2,param_6,iVar5,param_6);
            if (iVar3 == 0) {
              FUN_016e9cd0(4,0,0x88,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x1d1);
            }
            goto LAB_01750fcc;
          }
          if (param_7 == 3) {
            iVar3 = 1;
            *param_2 = param_6;
            goto LAB_01750fcc;
          }
          FUN_016e9cd0(4,0,0x8f,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x1cc);
        }
      }
    }
    else {
      iVar5 = FUN_0177a6c0(param_6);
      if (iVar5 == 0) goto LAB_01751014;
      iVar6 = FUN_017150f4(param_5,param_6,iVar3);
      if (iVar6 != 0) goto LAB_01750f24;
    }
    iVar3 = 0;
  }
LAB_01750fcc:
  FUN_01718904(iVar2);
  FUN_017184e8(iVar2);
  if (iVar5 != param_3) {
    FUN_0177aafc(iVar5);
  }
  return iVar3;
}

