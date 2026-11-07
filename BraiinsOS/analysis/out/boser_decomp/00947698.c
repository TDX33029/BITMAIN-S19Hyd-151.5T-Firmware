// FUN_00947698 @ 00947698 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_00947698(undefined4 *param_1)

{
  byte local_28 [4];
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  FUN_00963860(local_28);
  if (local_28[0] != 2) {
    if ((local_28[0] & 1) == 0) {
      *param_1 = &DAT_80000005;
      return;
    }
    FUN_009473f0(&local_20,local_24);
    if (local_20 != &DAT_80000005) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = uStack_18;
      return;
    }
    local_24 = local_1c;
  }
  *param_1 = 0x80000006;
  param_1[1] = local_24;
  return;
}

