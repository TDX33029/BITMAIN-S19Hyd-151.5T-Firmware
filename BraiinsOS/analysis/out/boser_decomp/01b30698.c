// FUN_01b30698 @ 01b30698 size=296 calls_out=5 calls_in=5
// strings: /aws-lc/crypto/fipsmodule/bn/add.c | /aws-lc/crypto/fipsmodule/bn/add.c

undefined4 FUN_01b30698(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = param_2[1];
  iVar1 = param_3[1];
  if (iVar3 < (int)param_3[1]) {
    iVar1 = FUN_01b2b09c(param_3);
    if (iVar1 == 0) {
      uVar5 = 0xb0;
      goto LAB_01b306f8;
    }
    iVar3 = param_2[1];
    iVar1 = iVar3;
  }
  iVar3 = FUN_01b2b248(param_1,iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = FUN_01b30578(*param_1,*param_2,*param_3,iVar1);
  for (; iVar3 = param_2[1], iVar1 < iVar3; iVar1 = iVar1 + 1) {
    if (1 < uVar2) {
      uVar2 = FUN_01b209c0();
    }
    uVar4 = *(uint *)(*param_2 + iVar1 * 4);
    *(uint *)(*param_1 + iVar1 * 4) = uVar4 - uVar2;
    uVar2 = (uint)(uVar4 < uVar2);
  }
  if (uVar2 == 0) {
    param_1[3] = 0;
    param_1[1] = iVar3;
    return 1;
  }
  uVar5 = 0xc0;
LAB_01b306f8:
  FUN_01b053d4(3,0,100,"/aws-lc/crypto/fipsmodule/bn/add.c",uVar5);
  return 0;
}

