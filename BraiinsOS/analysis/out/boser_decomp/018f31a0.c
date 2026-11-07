// FUN_018f31a0 @ 018f31a0 size=124 calls_out=1 calls_in=2
// strings: 

void FUN_018f31a0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_3;
  iVar2 = 0xb;
  if (0x80000012 < uVar1) {
    iVar2 = uVar1 + 0x7fffffed;
  }
  if (iVar2 == 0xb) {
    uVar3 = 0xe;
    if ((int)uVar1 < 0) {
      uVar3 = uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x018f31fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_018f3200 + *(int *)(&DAT_018f3200 + uVar3 * 4)))(param_3 + 2);
    return;
  }
  uVar4 = 6;
  if (iVar2 == 9) {
    uVar4 = 0xd;
  }
  FUN_018f1f40(param_1,param_2,uVar4,param_3);
  return;
}

