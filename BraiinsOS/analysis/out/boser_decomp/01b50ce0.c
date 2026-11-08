// FUN_01b50ce0 @ 01b50ce0 size=316 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c

undefined4 FUN_01b50ce0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_01afd684(param_2);
  if (iVar1 != *(int *)(*param_1 + 0x14)) {
    FUN_01b053d4(6,0,0x89,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x8c);
    return 0;
  }
  uVar2 = FUN_01afd674(param_2);
  iVar3 = FUN_01b6bc20(uVar2,*(undefined4 *)(*param_1 + 0x14));
  iVar1 = FUN_01b6ad8c(*(undefined4 *)(*param_1 + 0x10));
  if (iVar1 != 0 && iVar3 != 0) {
    iVar5 = 0;
    iVar4 = (**(code **)(*(int *)(*param_1 + 0x24) + 0x18))(iVar1,iVar3);
    if (iVar4 != 0) {
      FUN_01b6b1c4(param_1[1]);
      FUN_01b6b1c4(param_1[2]);
      FUN_01b6b1c4(param_1[3]);
      param_1[1] = iVar1;
      param_1[2] = iVar3;
      param_1[3] = 0;
      uVar2 = 1;
      iVar1 = iVar5;
      goto LAB_01b50dd4;
    }
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x98);
  }
  uVar2 = 0;
  iVar5 = iVar3;
LAB_01b50dd4:
  FUN_01b6b1c4(iVar1);
  FUN_01b6b1c4(iVar5);
  return uVar2;
}

