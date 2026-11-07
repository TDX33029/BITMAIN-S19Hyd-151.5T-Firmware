// FUN_01b56f18 @ 01b56f18 size=792 calls_out=16 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c | /aws-lc/crypto/fipsmodule/rsa/rsa_impl.c

int FUN_01b56f18(int *param_1,uint *param_2,int param_3,uint param_4,undefined4 param_5,uint param_6
                ,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  
  if ((*param_1 != 0) && (pcVar8 = *(code **)(*param_1 + 0x18), pcVar8 != (code *)0x0)) {
    if ((int)param_4 < 0) {
      FUN_01b053d4(4,0,0x45,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x16c);
    }
    else {
      uVar1 = (*pcVar8)(param_4,param_5,param_3,param_1,param_7);
      if (-1 < (int)uVar1) {
        *param_2 = uVar1;
        return 1;
      }
    }
    *param_2 = 0;
    return 0;
  }
  if ((param_1[1] == 0) || (param_1[2] == 0)) {
    uVar9 = 0x181;
    uVar6 = 0x90;
LAB_01b57008:
    FUN_01b053d4(4,0,uVar6,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar9);
    return 0;
  }
  iVar2 = FUN_01b55940(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_01b565f4(param_1);
  if (param_4 < uVar1) {
    uVar9 = 0x18d;
    uVar6 = 0x87;
    goto LAB_01b57008;
  }
  if (uVar1 != param_6) {
    uVar9 = 0x192;
    uVar6 = 0x70;
    goto LAB_01b57008;
  }
  iVar2 = FUN_01b2e788();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_01b2e894();
  iVar3 = FUN_01b2e970(iVar2);
  iVar4 = FUN_01b2e970(iVar2);
  if (iVar4 == 0 || iVar3 == 0) {
LAB_01b570a4:
    iVar7 = 0;
  }
  else {
    if (param_7 == 3) {
      iVar7 = param_3;
    }
    else {
      iVar7 = FUN_01b6ad8c(param_6);
      if (iVar7 == 0) goto LAB_01b570a4;
    }
    iVar5 = FUN_01b2ba40(param_5,param_6,iVar3);
    if (iVar5 != 0) {
      iVar5 = FUN_01b2be1c(iVar3,param_1[1]);
      if (iVar5 < 0) {
        iVar5 = FUN_01b355d8(param_1 + 0x15,param_1 + 0xd,param_1[1],iVar2);
        if ((iVar5 == 0) ||
           (iVar3 = FUN_01b35f88(iVar4,iVar3,param_1[2],param_1[0x15] + 0x14,iVar2,param_1[0x15]),
           iVar3 == 0)) goto LAB_01b570a8;
        iVar3 = FUN_01b2bdb4(iVar7,param_6,iVar4);
        if (iVar3 == 0) {
          uVar9 = 0x1be;
          uVar6 = 0x44;
        }
        else {
          if (param_7 == 1) {
            iVar3 = FUN_01b5538c(param_3,param_2,param_6,iVar7,param_6);
            if (iVar3 == 0) {
              FUN_01b053d4(4,0,0x88,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",0x1d1);
            }
            goto LAB_01b570ac;
          }
          if (param_7 == 3) {
            *param_2 = param_6;
            iVar3 = 1;
            goto LAB_01b570ac;
          }
          uVar9 = 0x1cc;
          uVar6 = 0x8f;
        }
      }
      else {
        uVar9 = 0x1b4;
        uVar6 = 0x73;
      }
      FUN_01b053d4(4,0,uVar6,"/aws-lc/crypto/fipsmodule/rsa/rsa_impl.c",uVar9);
    }
  }
LAB_01b570a8:
  iVar3 = 0;
LAB_01b570ac:
  FUN_01b2ebbc(iVar2);
  FUN_01b2e7c8(iVar2);
  if (iVar7 == param_3) {
    return iVar3;
  }
  FUN_01b6b1c4(iVar7);
  return iVar3;
}

