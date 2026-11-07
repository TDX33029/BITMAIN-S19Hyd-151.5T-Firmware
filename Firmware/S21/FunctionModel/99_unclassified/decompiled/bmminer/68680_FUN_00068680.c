// FUN_00068680 @ 00068680  size=148  callers=0
// program: bmminer


void FUN_00068680(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  int *local_c;
  
  local_c = *(int **)(param_1 + 0xc);
  if (*(int *)(*local_c + 0x20) != 0) {
    FUN_00069eec(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),&local_10);
    (**(code **)(*local_c + 0x20))(local_10);
  }
  FUN_00069f68(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),param_2,param_3);
  return;
}

