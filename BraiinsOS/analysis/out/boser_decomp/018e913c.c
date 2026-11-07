// FUN_018e913c @ 018e913c size=176 calls_out=2 calls_in=0
// strings: contents

void FUN_018e913c(int *param_1,undefined4 param_2)

{
  int *local_20;
  int *local_1c;
  
  local_20 = (int *)*param_1;
  if (*local_20 == -0x80000000) {
    local_1c = local_20 + 1;
    FUN_01303d90(param_2,&DAT_0052e437,7,&DAT_00520eda,7,local_20 + 4,&LAB_0190a958,"contents",8,
                 &local_1c,FUN_019354b4);
  }
  else {
    FUN_013032f4(param_2,&DAT_00522f9f,3,&local_20,FUN_018e8f14);
  }
  return;
}

