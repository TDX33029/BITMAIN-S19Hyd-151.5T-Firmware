// FUN_00095974 @ 00095974  size=208  callers=6
// program: bmminer


undefined4 FUN_00095974(int param_1,undefined4 *param_2)

{
  uint extraout_r1;
  undefined4 uVar1;
  uint local_c;
  
  if (param_2[4] == 0) {
    FUN_0009863c(*param_2,*(undefined4 *)(param_1 + 8));
    local_c = extraout_r1;
    do {
      local_c = local_c + 1;
      if (*(uint *)(param_1 + 8) <= local_c) {
        return 0;
      }
    } while (*(int *)(*(int *)(param_1 + 4) + local_c * 4) == 0);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + local_c * 4);
  }
  else {
    uVar1 = param_2[4];
  }
  return uVar1;
}

