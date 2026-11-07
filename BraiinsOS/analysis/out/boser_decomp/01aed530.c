// FUN_01aed530 @ 01aed530 size=104 calls_out=1 calls_in=0
// strings: 

void FUN_01aed530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
                    /* WARNING: Could not recover jumptable at 0x01aed594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}

