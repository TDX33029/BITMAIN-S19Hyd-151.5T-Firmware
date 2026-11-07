// FUN_0160566c @ 0160566c size=84 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_0160566c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
  iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,&DAT_00410e21,0xb);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x016056bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2," { .. }",7);
    return uVar2;
  }
  return 1;
}

