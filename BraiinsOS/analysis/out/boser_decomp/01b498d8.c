// FUN_01b498d8 @ 01b498d8 size=288 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c | /aws-lc/crypto/fipsmodule/evp/digestsign.c

ulonglong FUN_01b498d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 0x106;
    uVar4 = 0x43;
    uVar1 = 0xe;
LAB_01b49920:
    FUN_01b053d4(uVar1,0,uVar4,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",uVar6);
  }
  else {
    iVar3 = FUN_01b256ac(*(int *)(param_1 + 0xc),1);
    if ((iVar3 == 0) || (iVar3 = FUN_01b49618(param_1), iVar3 != 0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(param_1 + 0xc) + 0x28);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01b499f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)(*(int **)(param_1 + 0xc),param_2,param_3,param_4);
        return uVar5;
      }
      uVar6 = 0x114;
      uVar4 = 0x7d;
      uVar1 = 6;
      goto LAB_01b49920;
    }
    iVar3 = FUN_01b496f0(param_1,param_4,param_5);
    if (iVar3 != 0) {
      iVar3 = FUN_01b49794(param_1,param_2,param_3);
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = 1;
      }
      goto LAB_01b49988;
    }
  }
  uVar2 = 0;
LAB_01b49988:
  return (ulonglong)uVar2;
}

