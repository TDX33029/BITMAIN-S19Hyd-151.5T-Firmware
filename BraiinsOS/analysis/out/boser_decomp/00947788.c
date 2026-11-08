// FUN_00947788 @ 00947788 size=204 calls_out=4 calls_in=1
// strings: 

void FUN_00947788(undefined4 *param_1)

{
  undefined4 uVar1;
  byte local_1f0 [4];
  undefined4 local_1ec;
  undefined1 *local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  
  FUN_00963860(local_1f0);
  if (local_1f0[0] != 2) {
    if ((local_1f0[0] & 1) != 0) {
      FUN_009473f0(&local_1e8);
      if (local_1e8 == &DAT_80000005) {
        param_1[2] = local_1e4;
        uVar1 = 3;
      }
      else {
        param_1[2] = local_1e8;
        param_1[3] = local_1e4;
        param_1[4] = local_1e0;
        uVar1 = 2;
      }
      *param_1 = uVar1;
      param_1[1] = 0;
      return;
    }
    FUN_009db970(&local_1e8,local_1ec);
    if (local_1e8 != (undefined1 *)0x2 || local_1e4 != 0) {
      FUN_01bed4e2(param_1,&local_1e8,0x1d8);
      return;
    }
    local_1ec = local_1e0;
  }
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = local_1ec;
  return;
}

