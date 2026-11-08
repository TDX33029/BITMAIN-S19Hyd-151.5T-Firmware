// FUN_0125f950 @ 0125f950 size=216 calls_out=3 calls_in=0
// strings: 

void FUN_0125f950(int param_1,int *param_2)

{
  int *piVar1;
  
  if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
      (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
    if (*(int *)(param_1 + 4) == 2) {
      FUN_006676f8(param_1 + 8);
    }
    (**(code **)**(undefined4 **)(param_1 + 0x24))();
    thunk_FUN_01be4678(param_1);
    return;
  }
  piVar1 = *(int **)(param_1 + 0x24);
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  thunk_FUN_01be4678(param_1);
  (**(code **)(*piVar1 + 0x14))(piVar1);
  return;
}

