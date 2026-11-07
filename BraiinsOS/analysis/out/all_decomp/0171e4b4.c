// FUN_0171e4b4 @ 0171e4b4 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_0171e4b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0171e49c(param_3);
  *(undefined4 *)(iVar1 + 0x20) = param_1;
  *(undefined4 *)(iVar1 + 0x24) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0171e4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x1c))();
  return;
}

