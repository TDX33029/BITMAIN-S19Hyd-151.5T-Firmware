// FUN_00de4068 @ 00de4068 size=68 calls_out=3 calls_in=2
// strings: 

void FUN_00de4068(int param_1)

{
  FUN_00de40f8(param_1 + 0x50);
  FUN_00a07b4c(param_1);
  FUN_0163bdc0(param_1 + 0x414);
  if (*(int *)(param_1 + 0x424) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00de40a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x424) + 0xc))(*(undefined4 *)(param_1 + 0x428));
  return;
}

