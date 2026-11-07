// FUN_0070d4b4 @ 0070d4b4 size=200 calls_out=2 calls_in=1
// strings: 

void FUN_0070d4b4(undefined4 *param_1,int param_2,int param_3,char *param_4,int param_5)

{
  char cVar1;
  int local_38;
  int iStack_34;
  char *pcStack_30;
  int iStack_2c;
  undefined8 local_28;
  int *local_20;
  undefined2 *local_1c;
  char **local_18;
  undefined2 *local_14;
  
  cVar1 = *(char *)(param_2 + param_3 + -1);
  iStack_2c = param_5;
  local_38 = param_2;
  iStack_34 = param_3;
  pcStack_30 = param_4;
  if (cVar1 == '/') {
    local_28 = FUN_01ad01f0(param_4,param_5,0x2f);
    local_18 = (char **)&local_28;
  }
  else {
    if (param_5 == 1) {
      cVar1 = *param_4;
    }
    if (param_5 == 1 && cVar1 == '/') {
      *param_1 = 0x80000000;
      param_1[1] = param_2;
      param_1[2] = param_3;
      return;
    }
    local_18 = &pcStack_30;
  }
  local_14 = &DAT_0132b6a0;
  local_1c = &DAT_0132b6a0;
  local_20 = &local_38;
  FUN_00664898(param_1,&DAT_0059d815,&local_20);
  return;
}

