// FUN_0174b860 @ 0174b860 size=576 calls_out=12 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/dh/dh.c

undefined4 FUN_0174b860(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = FUN_01729e04();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_017184a8();
  if (iVar2 == 0) {
LAB_0174b9f8:
    iVar3 = 0;
    iVar6 = 0;
    iVar7 = 0;
  }
  else {
    iVar6 = param_1[4];
    if (iVar6 == 0) {
      iVar6 = FUN_017141d0();
      if (iVar6 == 0) goto LAB_0174b9f8;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar7 = param_1[3];
    if ((iVar7 == 0) && (iVar7 = FUN_017141d0(), iVar7 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_017205f4(param_1 + 0xe,param_1 + 6,*param_1,iVar2);
      if (iVar3 == 0) goto LAB_0174b988;
      if (bVar1) {
        if (param_1[2] != 0) {
          iVar3 = FUN_0174b144(iVar6,1);
          if (iVar3 == 0) goto LAB_0174b988;
          goto LAB_0174b8f8;
        }
        iVar3 = FUN_017141d0();
        if (iVar3 == 0) {
LAB_0174b988:
          iVar3 = 0;
          goto LAB_0174b98c;
        }
        uVar8 = param_1[5];
        if ((uVar8 == 0) || (iVar4 = FUN_01714eb4(*param_1), iVar4 - 1U <= uVar8)) {
          iVar4 = FUN_0172030c(iVar3,*param_1);
          if (iVar4 != 0) goto LAB_0174ba6c;
          goto LAB_0174b98c;
        }
        iVar4 = FUN_0172038c(iVar3,param_1[5]);
        if (iVar4 == 0) goto LAB_0174b98c;
LAB_0174ba6c:
        iVar4 = FUN_0174b144(iVar6,1,iVar3);
        if (iVar4 == 0) goto LAB_0174b98c;
      }
      else {
LAB_0174b8f8:
        iVar3 = 0;
      }
      iVar4 = FUN_01721bd8(iVar7,param_1[1],iVar6,*param_1,iVar2,param_1[0xe]);
      if (iVar4 != 0) {
        uVar5 = 1;
        param_1[3] = iVar7;
        param_1[4] = iVar6;
        goto LAB_0174b930;
      }
    }
  }
LAB_0174b98c:
  FUN_016e9cd0(5,0,3,"/aws-lc/crypto/fipsmodule/dh/dh.c",0x114);
  if (param_1[3] == 0) {
    FUN_017046e0(iVar7);
  }
  if (param_1[4] == 0) {
    FUN_017046e0(iVar6);
  }
  uVar5 = 0;
LAB_0174b930:
  FUN_017046e0(iVar3);
  FUN_017184e8(iVar2);
  return uVar5;
}

