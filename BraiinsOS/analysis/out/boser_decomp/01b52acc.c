// FUN_01b52acc @ 01b52acc size=500 calls_out=12 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/dh/dh.c

undefined4 FUN_01b52acc(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar2 = FUN_01b3acd4();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_01b2e788();
  if (iVar2 == 0) {
LAB_01b52b20:
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    iVar5 = param_1[4];
    if (iVar5 == 0) {
      iVar5 = FUN_01b2adb8();
      if (iVar5 == 0) goto LAB_01b52b20;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar6 = param_1[3];
    if ((iVar6 == 0) && (iVar6 = FUN_01b2adb8(), iVar6 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_01b355d8(param_1 + 0xe,param_1 + 6,*param_1,iVar2);
      if (iVar4 == 0) goto LAB_01b52c08;
      if (bVar1) {
        if (param_1[2] != 0) {
          iVar4 = FUN_01b524c8(iVar5,1);
          if (iVar4 == 0) goto LAB_01b52c08;
          goto LAB_01b52b6c;
        }
        iVar4 = FUN_01b2adb8();
        if (iVar4 == 0) {
LAB_01b52c08:
          iVar4 = 0;
          goto LAB_01b52c0c;
        }
        uVar8 = param_1[5];
        if ((uVar8 == 0) || (iVar3 = FUN_01b2b8d0(*param_1), iVar3 - 1U <= uVar8)) {
          iVar3 = FUN_01b35374(iVar4,*param_1);
        }
        else {
          iVar3 = FUN_01b353f4(iVar4,param_1[5]);
        }
        if ((iVar3 == 0) || (iVar3 = FUN_01b524c8(iVar5,1,iVar4), iVar3 == 0)) goto LAB_01b52c0c;
      }
      else {
LAB_01b52b6c:
        iVar4 = 0;
      }
      iVar3 = FUN_01b36698(iVar6,param_1[1],iVar5,*param_1,iVar2,param_1[0xe]);
      if (iVar3 != 0) {
        param_1[3] = iVar6;
        uVar7 = 1;
        param_1[4] = iVar5;
        goto LAB_01b52ba4;
      }
    }
  }
LAB_01b52c0c:
  FUN_01b053d4(5,0,3,"/aws-lc/crypto/fipsmodule/dh/dh.c",0x114);
  if (param_1[3] == 0) {
    FUN_01b1f904(iVar6);
  }
  uVar7 = 0;
LAB_01b52ba4:
  if (param_1[4] == 0) {
    FUN_01b1f904(iVar5);
  }
  FUN_01b1f904(iVar4);
  FUN_01b2e7c8(iVar2);
  return uVar7;
}

