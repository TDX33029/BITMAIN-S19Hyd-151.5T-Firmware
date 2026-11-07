// FUN_01b50b28 @ 01b50b28 size=428 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c

undefined4 FUN_01b50b28(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  
  iVar1 = FUN_01afd684(param_2);
  if (iVar1 != *(int *)(*param_1 + 0x1c)) {
    FUN_01b053d4(6,0,0x89,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x5f);
    return 0;
  }
  iVar2 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x10));
  iVar1 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x14));
  iVar3 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x1c));
  if (iVar1 != 0 && iVar2 != 0) {
    iVar7 = 0;
    if (iVar3 == 0) {
      uVar5 = 0;
      iVar7 = iVar3;
      goto LAB_01b50be8;
    }
    pcVar6 = *(code **)(*(int *)(*param_1 + 0x24) + 4);
    uVar5 = FUN_01afd674(param_2);
    iVar4 = (*pcVar6)(iVar2,iVar1,uVar5);
    if (iVar4 == 0) {
      FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x6d);
      uVar5 = 0;
      iVar7 = iVar3;
      goto LAB_01b50be8;
    }
    iVar4 = FUN_01afda54(param_2,iVar3,*(undefined4 *)(*param_1 + 0x1c));
    if (iVar4 != 0) {
      uVar5 = 1;
      FUN_01b6b1c4(param_1[1]);
      FUN_01b6b1c4(param_1[2]);
      FUN_01b6b1c4(param_1[3]);
      param_1[1] = iVar2;
      param_1[2] = iVar1;
      param_1[3] = iVar3;
      iVar1 = iVar7;
      iVar2 = iVar7;
      goto LAB_01b50be8;
    }
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x72);
  }
  uVar5 = 0;
  iVar7 = iVar3;
LAB_01b50be8:
  FUN_01b6b1c4(iVar2);
  FUN_01b6b1c4(iVar1);
  FUN_01b6b1c4(iVar7);
  return uVar5;
}

