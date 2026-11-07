// FUN_0173b180 @ 0173b180 size=316 calls_out=4 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp.c | /aws-lc/crypto/fipsmodule/evp/evp.c | /aws-lc/crypto/fipsmodule/evp/evp.c

ulonglong FUN_0173b180(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0173a734(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = FUN_0173a2f4(param_2);
    if (iVar1 == 0) goto LAB_0173b1c8;
LAB_0173b260:
    FUN_016e9cd0(6,0,0x76,"/aws-lc/crypto/fipsmodule/evp/evp.c",0xc1);
  }
  else if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    iVar1 = FUN_0173a2f4(param_2);
    if (iVar1 != 0) goto LAB_0173b260;
LAB_0173b1c8:
    iVar1 = FUN_0173a2f4(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0173b11c(param_1,param_2);
      uVar2 = 1;
      if (iVar1 == 1) goto LAB_0173b22c;
      FUN_016e9cd0(6,0,0x68,"/aws-lc/crypto/fipsmodule/evp/evp.c",0xca);
    }
    else if ((*(int *)(param_2 + 0xc) != 0) &&
            (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_2 + 0xc) + 0x50),
            UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0173b204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar3;
    }
  }
  else {
    FUN_016e9cd0(6,0,0x67,"/aws-lc/crypto/fipsmodule/evp/evp.c",0xbc);
  }
  uVar2 = 0;
LAB_0173b22c:
  return (ulonglong)uVar2;
}

