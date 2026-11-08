// FUN_018ee158 @ 018ee158 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_018ee158(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 local_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if (*(int *)(param_2 + 4) == *(int *)(param_2 + 8)) {
    local_20 = 0x80000001;
  }
  else {
    local_10 = FUN_019311a8(param_2);
    local_14 = 0x80000000;
    FUN_01935918(&local_20,&local_14);
    param_2 = iStack_1c;
    param_3 = uStack_18;
  }
  param_1[1] = local_20;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = 0;
  return;
}

