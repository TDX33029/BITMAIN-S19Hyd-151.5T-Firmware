// FUN_00a214b0 @ 00a214b0 size=156 calls_out=3 calls_in=2
// strings: 

void FUN_00a214b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char local_31;
  undefined4 local_30;
  undefined1 auStack_2c [12];
  undefined4 *local_20;
  undefined2 *local_1c;
  undefined4 *local_18;
  undefined2 *local_14;
  
  uStack_38 = param_5;
  uStack_44 = param_2;
  uStack_40 = param_3;
  uStack_3c = param_4;
  FUN_01304e7c(&local_31,param_4,param_5);
  if (local_31 == '\x01') {
    local_18 = &uStack_3c;
    local_14 = &DAT_0132b6a0;
    local_1c = &DAT_0132b6a0;
    local_20 = &uStack_44;
    FUN_00664898(auStack_2c,&DAT_0059bb25,&local_20);
    FUN_01a70fd4(param_1,3,auStack_2c);
  }
  else {
    param_1[1] = 0;
    *param_1 = 3;
    param_1[2] = local_30;
  }
  return;
}

