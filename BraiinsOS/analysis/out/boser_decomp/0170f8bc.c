// FUN_0170f8bc @ 0170f8bc size=104 calls_out=3 calls_in=0
// strings: 

void FUN_0170f8bc(int *param_1,undefined4 param_2)

{
  int local_20;
  undefined4 uStack_1c;
  undefined4 local_14 [3];
  
  if (*param_1 == -0x80000000) {
    local_14[0] = 0x80000000;
  }
  else {
    FUN_015e8ad4(local_14,param_1[1],param_1[2]);
  }
  FUN_017073e8(&local_20,param_2,local_14);
  if (local_20 < -0x7ffffffe) {
    return;
  }
  FUN_019bb7e0(local_20,uStack_1c);
  return;
}

