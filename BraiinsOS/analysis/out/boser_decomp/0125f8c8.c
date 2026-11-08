// FUN_0125f8c8 @ 0125f8c8 size=136 calls_out=0 calls_in=0
// strings: 

int FUN_0125f8c8(int param_1,int *param_2)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
      (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
    param_1 = param_1 + 0x1c;
  }
  else {
    local_20 = *param_2;
    iStack_1c = param_2[1];
    iStack_18 = param_2[2];
    iStack_14 = param_2[3];
    param_1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))(*(int **)(param_1 + 0x24),&local_20);
  }
  return param_1;
}

