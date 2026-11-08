// FUN_00a4dde8 @ 00a4dde8 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_00a4dde8(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined4 extraout_r1;
  short local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_009c98e8(&local_18);
  if (local_18 != 1) {
    FUN_00736b58(&local_20,extraout_r1,local_10,local_c);
    if (local_20 != 1) {
      param_1[1] = local_1e;
      uVar1 = 0;
      goto LAB_00a4de48;
    }
    local_14 = local_1c;
  }
  *(undefined4 *)(param_1 + 2) = local_14;
  uVar1 = 1;
LAB_00a4de48:
  *param_1 = uVar1;
  return;
}

