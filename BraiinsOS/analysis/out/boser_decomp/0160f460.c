// FUN_0160f460 @ 0160f460 size=120 calls_out=1 calls_in=5
// strings: 

void FUN_0160f460(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined4 local_20;
  int local_1c;
  undefined1 *local_18;
  code *local_14;
  int *local_10;
  code *local_c;
  
  local_18 = (undefined1 *)&local_20;
  if (param_3 != 8) {
    local_c = FUN_012fd02c;
    local_20 = 8;
    local_10 = &local_1c;
    local_14 = FUN_012fd02c;
    local_1c = param_3;
    FUN_00664898(param_1 + 1,&DAT_00576af8,&local_18);
  }
  else {
    uVar1 = param_2[1];
    param_1[2] = *param_2;
    param_1[3] = uVar1;
  }
  *param_1 = (uint)(param_3 != 8);
  return;
}

