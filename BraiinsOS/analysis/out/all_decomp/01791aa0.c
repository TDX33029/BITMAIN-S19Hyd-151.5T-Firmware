// FUN_01791aa0 @ 01791aa0 size=416 calls_out=4 calls_in=3
// strings: 

undefined8 FUN_01791aa0(int param_1,int param_2,uint param_3)

{
  int extraout_r1;
  uint uVar1;
  uint local_1c;
  int local_18;
  
  FUN_0184606c(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  *(uint *)(param_1 + 200) = *(int *)(param_1 + 200) + param_3;
  local_1c = param_3;
  local_18 = param_2;
  if (extraout_r1 != 0) {
    uVar1 = *(int *)(param_1 + 0xcc) - extraout_r1;
    if (param_3 < uVar1) {
      FUN_016dd1aa(param_1 + 0xd8 + extraout_r1,param_2,param_3);
      return 0;
    }
    FUN_016dd1aa(param_1 + 0xd8 + extraout_r1,param_2,uVar1);
    local_1c = param_3 - uVar1;
    local_18 = param_2 + uVar1;
    FUN_017919ec(param_1,param_1 + 0xd8);
    FUN_01791880(param_1);
  }
  for (; *(uint *)(param_1 + 0xcc) <= local_1c; local_1c = local_1c - *(int *)(param_1 + 0xcc)) {
    FUN_017919ec(param_1,local_18);
    FUN_01791880(param_1);
    local_18 = local_18 + *(int *)(param_1 + 0xcc);
  }
  FUN_016dd1aa(param_1 + 0xd8,local_18,local_1c);
  return 0;
}

