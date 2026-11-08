// FUN_00a8fbb8 @ 00a8fbb8 size=56 calls_out=1 calls_in=0
// strings: 

void FUN_00a8fbb8(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 8) != 0;
  if (bVar1) {
    param_2 = *(int *)(param_1 + 0x14);
  }
  if (bVar1 && param_2 != 0) {
    FUN_00a8e218();
  }
                    /* WARNING: Could not recover jumptable at 0x00a8fbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(*(undefined4 *)(param_1 + 0x30));
  return;
}

