// FUN_01b80120 @ 01b80120 size=416 calls_out=4 calls_in=3
// strings: 

undefined8 FUN_01b80120(int param_1,int param_2,uint param_3)

{
  int extraout_r1;
  uint uVar1;
  uint local_1c;
  int local_18;
  
  FUN_01bf0fd4(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  *(uint *)(param_1 + 200) = *(int *)(param_1 + 200) + param_3;
  local_1c = param_3;
  local_18 = param_2;
  if (extraout_r1 != 0) {
    uVar1 = *(int *)(param_1 + 0xcc) - extraout_r1;
    if (param_3 < uVar1) {
      FUN_01bed4e2(param_1 + 0xd8 + extraout_r1,param_2,param_3);
      return 0;
    }
    FUN_01bed4e2(param_1 + 0xd8 + extraout_r1,param_2,uVar1);
    local_1c = param_3 - uVar1;
    local_18 = param_2 + uVar1;
    FUN_01b8006c(param_1,param_1 + 0xd8);
    FUN_01b7ff00(param_1);
  }
  for (; *(uint *)(param_1 + 0xcc) <= local_1c; local_1c = local_1c - *(int *)(param_1 + 0xcc)) {
    FUN_01b8006c(param_1,local_18);
    FUN_01b7ff00(param_1);
    local_18 = local_18 + *(int *)(param_1 + 0xcc);
  }
  FUN_01bed4e2(param_1 + 0xd8,local_18,local_1c);
  return 0;
}

