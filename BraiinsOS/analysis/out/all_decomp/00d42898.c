// FUN_00d42898 @ 00d42898 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_00d42898(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_140 [144];
  int local_b0;
  int local_ac;
  undefined1 auStack_a8 [144];
  
  if (*(int *)*param_2 == 0) {
    *param_1 = 8;
    param_1[1] = 0;
    return;
  }
  FUN_00ce85a8(&local_b0);
  if (local_b0 == 3 && local_ac == 0) {
    local_ac = 0;
    local_b0 = 7;
  }
  else {
    FUN_016dd1aa(auStack_140,auStack_a8,0x90);
  }
  *param_1 = local_b0;
  param_1[1] = local_ac;
  FUN_016dd1aa(param_1 + 2,auStack_140,0x90);
  return;
}

