// FUN_0069ab10 @ 0069ab10 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_0069ab10(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 *local_18;
  undefined2 *local_14;
  int *local_10;
  undefined2 *local_c;
  
  if (param_2 == 0 || param_4 == 0) {
    *param_1 = 0x80000000;
    return;
  }
  local_18 = (undefined1 *)&local_28;
  uStack_1c = param_5;
  local_10 = &iStack_20;
  local_c = &DAT_0132b6a0;
  local_14 = &DAT_0132b6a0;
  local_28 = param_2;
  uStack_24 = param_3;
  iStack_20 = param_4;
  FUN_00664898(param_1,&DAT_0057d5fc,&local_18);
  return;
}

