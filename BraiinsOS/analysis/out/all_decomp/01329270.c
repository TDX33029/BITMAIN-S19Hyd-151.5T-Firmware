// FUN_01329270 @ 01329270 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_01329270(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_01328ef8(&local_20,param_2,param_3 << 3);
  if ((local_20 == 4) && (FUN_0132901c(&local_20,param_2,param_5,param_6), local_20 == 4)) {
    *param_1 = 4;
    return;
  }
  *param_1 = local_20;
  param_1[1] = iStack_1c;
  param_1[2] = iStack_18;
  return;
}

