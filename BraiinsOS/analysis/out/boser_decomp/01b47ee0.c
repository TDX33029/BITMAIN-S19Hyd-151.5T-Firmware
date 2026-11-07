// FUN_01b47ee0 @ 01b47ee0 size=272 calls_out=4 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp.c | /aws-lc/crypto/fipsmodule/evp/evp.c | /aws-lc/crypto/fipsmodule/evp/evp.c

ulonglong FUN_01b47ee0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_01b4777c(param_1,*(undefined4 *)(param_2 + 0xc));
LAB_01b47f14:
    iVar1 = FUN_01b47330(param_2);
    if (iVar1 != 0) {
      uVar5 = 0xc1;
      uVar3 = 0x76;
      goto LAB_01b47f5c;
    }
    iVar1 = FUN_01b47330(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_01b47e7c(param_1,param_2);
      uVar2 = 1;
      if (iVar1 == 1) goto LAB_01b47f6c;
      uVar5 = 0xca;
      uVar3 = 0x68;
      goto LAB_01b47f5c;
    }
    if ((*(int *)(param_2 + 0xc) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_2 + 0xc) + 0x50),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01b47fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar4;
    }
  }
  else {
    if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) goto LAB_01b47f14;
    uVar5 = 0xbc;
    uVar3 = 0x67;
LAB_01b47f5c:
    FUN_01b053d4(6,0,uVar3,"/aws-lc/crypto/fipsmodule/evp/evp.c",uVar5);
  }
  uVar2 = 0;
LAB_01b47f6c:
  return (ulonglong)uVar2;
}

