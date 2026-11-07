// FUN_013fbb90 @ 013fbb90 size=172 calls_out=1 calls_in=2
// strings: 

void FUN_013fbb90(int *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int local_30;
  int local_2c;
  int local_28;
  
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (param_3 != 0) {
    FUN_01401968(&local_30,0,param_3,1,1);
    do {
      iVar1 = local_28;
      if (local_28 == local_30) {
        FUN_01401968(&local_30,local_28,1,1,1);
      }
      param_3 = param_3 + -1;
      *(undefined1 *)(local_2c + local_28) = param_2;
      local_28 = iVar1 + 1;
    } while (param_3 != 0);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

