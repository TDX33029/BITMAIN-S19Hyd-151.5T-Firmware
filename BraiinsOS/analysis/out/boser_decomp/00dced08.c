// FUN_00dced08 @ 00dced08 size=40 calls_out=2 calls_in=1
// strings: 

void FUN_00dced08(undefined4 *param_1)

{
  if ((undefined1 *)*param_1 != &DAT_80000016) {
    FUN_00dc8870();
    return;
  }
  if (param_1[1] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

