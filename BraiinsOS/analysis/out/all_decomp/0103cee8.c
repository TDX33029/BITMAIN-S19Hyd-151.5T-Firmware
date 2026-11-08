// FUN_0103cee8 @ 0103cee8 size=108 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0103cee8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  iVar3 = param_2[1];
  UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
  iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_003839e2,6);
  if ((iVar1 == 0) && (iVar1 = FUN_0103cb2c(param_1,uVar2,iVar3), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0103cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,&UNK_003839e8,2);
    return uVar2;
  }
  return 1;
}

