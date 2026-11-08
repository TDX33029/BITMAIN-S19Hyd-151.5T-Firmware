// FUN_00abca24 @ 00abca24 size=112 calls_out=4 calls_in=1
// strings: 

void FUN_00abca24(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 9) {
    return;
  }
  FUN_019bb7e0(param_1[0x6c],param_1[0x6d]);
  if (param_1[0x6f] != -0x80000000) {
    FUN_019bb7e0(param_1[0x6f],param_1[0x70]);
  }
  if (iVar1 != 8) {
    FUN_00abaea0(param_1);
  }
  if ((char)param_1[0x5e] != '\x06') {
    FUN_00db4764();
  }
  if (param_1[100] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 100);
  return;
}

