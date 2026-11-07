// FUN_01224d78 @ 01224d78 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_01224d78(int *param_1,undefined4 *param_2)

{
  undefined4 local_18;
  int local_14;
  
  FUN_01965170(&local_18);
  if ((char)local_18 != '\x01') {
    if (local_18._1_1_ == '\0') {
      *param_1 = 2;
      return;
    }
    FUN_0123e1f4(&local_18,*param_2);
    if (local_18 != 2) goto LAB_01224da4;
  }
  local_18 = 3;
LAB_01224da4:
  *param_1 = local_18;
  param_1[1] = local_14;
  return;
}

