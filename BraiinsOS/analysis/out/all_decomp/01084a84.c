// FUN_01084a84 @ 01084a84 size=108 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01084a84(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  uVar2 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
  iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar3,&DAT_003839e2,6);
  if ((iVar1 == 0) && (iVar1 = FUN_0103cb2c(uVar2,uVar3,iVar4), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x01084aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3,&UNK_003839e8,2);
    return uVar2;
  }
  return 1;
}

