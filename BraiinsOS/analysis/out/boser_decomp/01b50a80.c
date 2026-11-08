// FUN_01b50a80 @ 01b50a80 size=164 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c

bool FUN_01b50a80(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = FUN_01afd684(param_2);
  if (iVar1 == *(int *)(*param_1 + 0x10)) {
    FUN_01b6b1c4(param_1[1]);
    uVar2 = FUN_01afd674(param_2);
    iVar1 = FUN_01b6bc20(uVar2,*(undefined4 *)(*param_1 + 0x10));
    param_1[1] = iVar1;
    bVar3 = iVar1 != 0;
  }
  else {
    FUN_01b053d4(6,0,0x89,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x4f);
    bVar3 = false;
  }
  return bVar3;
}

