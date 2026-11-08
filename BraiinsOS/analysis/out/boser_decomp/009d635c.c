// FUN_009d635c @ 009d635c size=160 calls_out=8 calls_in=3
// strings: 

void FUN_009d635c(int param_1)

{
  FUN_00b76614();
  FUN_014a887c(param_1 + 0x34);
  FUN_00929728(*(undefined4 *)(param_1 + 0xf8));
  FUN_009297a0(*(undefined4 *)(param_1 + 0xfc));
  FUN_00929818(param_1 + 0xe0);
  FUN_009d6488(param_1 + 0x78);
  if (*(int *)(param_1 + 0xbc) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0xb8));
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_00668c84();
  }
  if (*(int *)(param_1 + 0xd0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009d6458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xd0) + 0xc))(*(undefined4 *)(param_1 + 0xd4));
  return;
}

