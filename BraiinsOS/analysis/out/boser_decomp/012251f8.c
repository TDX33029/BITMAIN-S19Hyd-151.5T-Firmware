// FUN_012251f8 @ 012251f8 size=148 calls_out=2 calls_in=1
// strings: 

void FUN_012251f8(int *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  
  FUN_01965170(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    FUN_0123ec50(&local_20,*param_2);
    if (local_20 != 2 || local_1c != 0) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_14,local_18);
      return;
    }
    local_1c = local_18;
  }
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = local_1c;
  return;
}

