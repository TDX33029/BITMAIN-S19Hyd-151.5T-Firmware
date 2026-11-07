// FUN_0138a944 @ 0138a944 size=172 calls_out=1 calls_in=4
// strings: 

int * FUN_0138a944(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined **local_18;
  undefined2 *local_14;
  undefined1 *local_10;
  undefined2 *local_c;
  
  local_10 = (undefined1 *)&local_28;
  if (param_2 != 0) {
    uVar1 = 1;
    if ((char)param_1[1] == '\0') {
      if (*(char *)((int)param_1 + 5) == '\0') {
        *(undefined1 *)((int)param_1 + 5) = 1;
        local_1c = 2;
        local_20 = (undefined *)((int)&DAT_005312da + 3);
      }
      else {
        local_1c = 3;
        local_20 = &DAT_0053147c;
      }
      local_18 = &local_20;
      local_c = &DAT_0132b6a0;
      local_14 = &DAT_0132b6a0;
      local_28 = param_3;
      uStack_24 = param_4;
      uVar1 = FUN_012fa178(*(undefined4 *)*param_1,((undefined4 *)*param_1)[1],&DAT_0059d815,
                           &local_18);
    }
    *(undefined1 *)(param_1 + 1) = uVar1;
  }
  return param_1;
}

