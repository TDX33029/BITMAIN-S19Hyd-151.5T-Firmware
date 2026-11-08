// FUN_0174891c @ 0174891c size=472 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c

undefined4 FUN_0174891c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  iVar1 = FUN_016e1e1c(param_2);
  if (iVar1 != *(int *)(*param_1 + 0x1c)) {
    FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x5f);
    return 0;
  }
  iVar1 = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x10));
  iVar2 = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x14));
  iVar3 = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x1c));
  if (iVar2 != 0 && iVar1 != 0) {
    iVar6 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
      goto LAB_01748a68;
    }
    pcVar7 = *(code **)(*(int *)(*param_1 + 0x24) + 4);
    uVar4 = FUN_016e1e04(param_2);
    iVar5 = (*pcVar7)(iVar1,iVar2,uVar4);
    if (iVar5 == 0) {
      FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x6d);
      uVar4 = 0;
      goto LAB_01748a68;
    }
    iVar5 = FUN_016e2000(param_2,iVar3,*(undefined4 *)(*param_1 + 0x1c));
    if (iVar5 != 0) {
      FUN_0177aafc(param_1[1]);
      FUN_0177aafc(param_1[2]);
      FUN_0177aafc(param_1[3]);
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      uVar4 = 1;
      iVar1 = iVar6;
      iVar2 = iVar6;
      iVar3 = iVar6;
      goto LAB_01748a68;
    }
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x72);
  }
  uVar4 = 0;
LAB_01748a68:
  FUN_0177aafc(iVar1);
  FUN_0177aafc(iVar2);
  FUN_0177aafc(iVar3);
  return uVar4;
}

