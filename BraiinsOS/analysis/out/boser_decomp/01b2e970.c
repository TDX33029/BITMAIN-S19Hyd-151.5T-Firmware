// FUN_01b2e970 @ 01b2e970 size=292 calls_out=8 calls_in=38
// strings: /aws-lc/crypto/fipsmodule/bn/ctx.c | /aws-lc/crypto/fipsmodule/bn/ctx.c

undefined4 FUN_01b2e970(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((char)param_1[5] != '\0') {
    if (*(char *)((int)param_1 + 0x15) == '\0') {
      return 0;
    }
    FUN_01b053d4(3,0,0x74,"/aws-lc/crypto/fipsmodule/bn/ctx.c",0x67);
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    return 0;
  }
  if (*param_1 == 0) {
    iVar1 = FUN_01b701dc();
    *param_1 = iVar1;
    if (iVar1 == 0) goto LAB_01b2ea08;
  }
  iVar3 = param_1[4];
  iVar1 = FUN_01b701f4();
  if ((iVar3 != iVar1) ||
     ((iVar1 = FUN_01b2adb8(), iVar1 != 0 && (iVar3 = FUN_01b70408(*param_1,iVar1), iVar3 != 0)))) {
    uVar2 = FUN_01b70208(*param_1,param_1[4]);
    FUN_01b2af70();
    param_1[4] = param_1[4] + 1;
    return uVar2;
  }
  FUN_01b053d4(3,0,0x74,"/aws-lc/crypto/fipsmodule/bn/ctx.c",0x78);
  FUN_01b1f904(iVar1);
LAB_01b2ea08:
  *(undefined1 *)(param_1 + 5) = 1;
  return 0;
}

