// FUN_000345c0 @ 000345c0  size=124  callers=1
// program: cgminer


int FUN_000345c0(int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x164);
  if (local_c == 0) {
    return 0;
  }
  iVar1 = FUN_00033d64(local_c);
  if (iVar1 == 0) {
    FUN_0002bc14(param_1,local_c);
  }
  else {
    FUN_0002aa68(&local_c,"cgminer.c","__get_queued",0x251b);
    FUN_0002d5a8();
  }
  *(undefined4 *)(param_1 + 0x164) = 0;
  return local_c;
}

