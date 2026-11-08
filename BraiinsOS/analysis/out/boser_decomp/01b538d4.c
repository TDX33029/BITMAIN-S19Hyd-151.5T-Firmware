// FUN_01b538d4 @ 01b538d4 size=900 calls_out=22 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c

bool FUN_01b538d4(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  int local_30;
  
  iVar1 = FUN_01b44b4c(param_1,*param_2,0);
  if (iVar1 != 0) {
    uVar8 = 0xf9;
    uVar6 = 0x6a;
LAB_01b53928:
    FUN_01b053d4(0xf,0,uVar6,"/aws-lc/crypto/fipsmodule/ec/oct.c",uVar8);
    return false;
  }
  iVar1 = FUN_01b2b230(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_01b2be38(param_3,param_1 + 0x118), -1 < iVar1)) {
    uVar8 = 0xff;
    uVar6 = 0x6b;
    goto LAB_01b53928;
  }
  FUN_01b0535c();
  if (param_5 == 0) {
    param_5 = FUN_01b2e788();
    if (param_5 == 0) {
      return false;
    }
    local_30 = param_5;
  }
  else {
    local_30 = 0;
  }
  FUN_01b2e894(param_5);
  uVar6 = FUN_01b2e970(param_5);
  uVar8 = FUN_01b2e970(param_5);
  uVar2 = FUN_01b2e970(param_5);
  uVar3 = FUN_01b2e970(param_5);
  iVar1 = FUN_01b2e970(param_5);
  bVar7 = false;
  if ((((iVar1 == 0) || (iVar4 = FUN_01b423c8(param_1,0,uVar2,uVar3,param_5), iVar4 == 0)) ||
      (iVar4 = FUN_01b3430c(uVar8,param_3,param_1 + 0x118,param_5), iVar4 == 0)) ||
     (iVar4 = FUN_01b34254(uVar6,uVar8,param_3,param_1 + 0x118,param_5), iVar4 == 0))
  goto LAB_01b53c2c;
  if (*(int *)(param_1 + 0x1d0) == 0) {
    iVar4 = FUN_01b34254(uVar8,uVar2,param_3,param_1 + 0x118,param_5);
    if (iVar4 == 0) goto LAB_01b53c2c;
    iVar4 = FUN_01b30dc8(uVar6,uVar6,uVar8,param_1 + 0x118,param_5);
  }
  else {
    iVar4 = FUN_01b30ed4(uVar8,param_3,param_1 + 0x118,param_5);
    if ((iVar4 == 0) ||
       (iVar4 = FUN_01b30dc8(uVar8,uVar8,param_3,param_1 + 0x118,param_5), iVar4 == 0))
    goto LAB_01b53c2c;
    iVar4 = FUN_01b313b0(uVar6,uVar6,uVar8,param_1 + 0x118,param_5);
  }
  if ((iVar4 == 0) || (iVar4 = FUN_01b30dc8(uVar6,uVar6,uVar3,param_1 + 0x118,param_5), iVar4 == 0))
  goto LAB_01b53c2c;
  iVar4 = FUN_01b530f4(iVar1,uVar6,param_1 + 0x118,param_5);
  if (iVar4 == 0) {
    uVar5 = FUN_01b0530c();
    if ((uVar5 & 0xff000fff) == 0x300006e) {
      FUN_01b0535c();
      uVar8 = 0x13e;
      uVar6 = 0x6b;
    }
    else {
      uVar8 = 0x140;
      uVar6 = 3;
    }
  }
  else {
    uVar5 = FUN_01b2e5fc(iVar1);
    if (uVar5 != (param_4 != 0)) {
      iVar4 = FUN_01b2e300(iVar1);
      if (iVar4 != 0) {
        uVar8 = 0x147;
        uVar6 = 0x6c;
        goto LAB_01b53b34;
      }
      iVar4 = FUN_01b307c8(iVar1,param_1 + 0x118,iVar1);
      if (iVar4 == 0) goto LAB_01b53c2c;
    }
    uVar5 = FUN_01b2e5fc(iVar1);
    if (uVar5 == (param_4 != 0)) {
      iVar1 = FUN_01b45038(param_1,param_2,param_3,iVar1,param_5);
      bVar7 = iVar1 != 0;
      goto LAB_01b53c2c;
    }
    uVar8 = 0x14f;
    uVar6 = 0x44;
  }
LAB_01b53b34:
  FUN_01b053d4(0xf,0,uVar6,"/aws-lc/crypto/fipsmodule/ec/oct.c",uVar8);
LAB_01b53c2c:
  FUN_01b2ebbc(param_5);
  FUN_01b2e7c8(local_30);
  return bVar7;
}

