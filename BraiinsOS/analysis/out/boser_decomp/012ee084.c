// FUN_012ee084 @ 012ee084 size=172 calls_out=3 calls_in=0
// strings: 

void FUN_012ee084(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*param_2 == 0x50f052f7 && param_2[2] == -0x20684cdb) &&
      (param_2[1] == -0x66f64d5b && param_2[3] == -0x4aa34df2)) {
    if (*(int *)(param_1 + 4) == 2) {
      FUN_006676f8(param_1 + 8);
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    iVar1 = 0x38;
    iVar2 = 0x34;
  }
  else {
    iVar1 = 0x20;
    iVar2 = 0x1c;
    if (*(int *)(param_1 + 4) == 2) {
      FUN_006676f8(param_1 + 8);
    }
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar1));
  thunk_FUN_01be4678(param_1);
  return;
}

