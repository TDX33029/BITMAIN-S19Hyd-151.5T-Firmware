// FUN_016f4e4c @ 016f4e4c size=144 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_016f4e4c(char *param_1,undefined4 *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_016f34f4(param_1 + 1);
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar3 = *param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar3,"..=",3);
    if (((iVar1 == 0) && (iVar1 = FUN_016f34f4(param_1 + 2,param_2), iVar1 == 0)) &&
       (uVar2 = 0, *param_1 == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x016f4ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3," (exhausted)",0xc);
      return uVar2;
    }
  }
  return uVar2;
}

