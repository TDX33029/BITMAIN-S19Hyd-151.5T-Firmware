// FUN_012bbc48 @ 012bbc48 size=264 calls_out=6 calls_in=2
// strings: 

void FUN_012bbc48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6)

{
  int **ppiVar1;
  undefined *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int **local_2c;
  undefined *local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  
  local_28 = &DAT_012b59c8;
  local_2c = &local_20;
  local_30 = 0;
  local_38 = 0;
  uStack_34 = 1;
  local_20 = &local_1c;
  local_1c = param_4 + 0xe;
  FUN_012fa178(&local_38,&DAT_01ce25b4,&DAT_00420077,&local_2c);
  FUN_012b2fd4(&local_38,param_2,param_3);
  if (param_6 != 0) {
    FUN_012b2fd4(&local_38,&DAT_00420454,2);
    FUN_012b255c(&local_38,*(undefined4 *)(param_6 + 4),*(undefined4 *)(param_6 + 8));
  }
  if (param_5 != 0) {
    FUN_012bbad0(&local_2c);
    ppiVar1 = local_2c;
    puVar2 = (undefined *)0x0;
    if (local_2c != (int **)&DAT_80000001) {
      puVar2 = local_28;
    }
    FUN_012bb784(&local_38,param_4,puVar2,local_24);
    if (-0x7fffffff < (int)ppiVar1) {
      FUN_0134bd64(ppiVar1,local_28);
    }
  }
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = local_30;
  return;
}

