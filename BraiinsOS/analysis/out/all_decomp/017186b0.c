// FUN_017186b0 @ 017186b0 size=344 calls_out=8 calls_in=42
// strings: /aws-lc/crypto/fipsmodule/bn/ctx.c | /aws-lc/crypto/fipsmodule/bn/ctx.c

undefined4 FUN_017186b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((char)param_1[5] == '\0') {
    if (*param_1 == 0) {
      iVar1 = FUN_017818d8();
      *param_1 = iVar1;
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 5) = 1;
        return 0;
      }
    }
    iVar3 = param_1[4];
    iVar1 = FUN_017818f0();
    if ((iVar3 != iVar1) ||
       ((iVar1 = FUN_017141d0(), iVar1 != 0 && (iVar3 = FUN_01781b84(*param_1,iVar1), iVar3 != 0))))
    {
      uVar2 = FUN_0178190c(*param_1,param_1[4]);
      FUN_01714350();
      param_1[4] = param_1[4] + 1;
      return uVar2;
    }
    FUN_016e9cd0(3,0,0x74,"/aws-lc/crypto/fipsmodule/bn/ctx.c",0x78);
    FUN_017046e0(iVar1);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)((int)param_1 + 0x15) != '\0') {
    FUN_016e9cd0(3,0,0x74,"/aws-lc/crypto/fipsmodule/bn/ctx.c",0x67);
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  return 0;
}

