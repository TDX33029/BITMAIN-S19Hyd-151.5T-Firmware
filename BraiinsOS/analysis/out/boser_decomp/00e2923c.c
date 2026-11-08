// FUN_00e2923c @ 00e2923c size=176 calls_out=2 calls_in=1
// strings: 

void FUN_00e2923c(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  double in_d0;
  double in_d1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [12];
  undefined4 *local_28;
  undefined2 *local_24;
  undefined4 *local_20;
  undefined2 *local_1c;
  
  local_40 = param_8;
  local_44 = param_7;
  local_38 = param_10;
  local_3c = param_9;
  if (((param_5 & param_3) == 0 && (param_6 & param_4) == 0) || (in_d0 <= in_d1)) {
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    local_20 = &local_3c;
    local_1c = &DAT_0132b6a0;
    local_24 = &DAT_0132b6a0;
    local_28 = &local_44;
    FUN_00664898(auStack_34,&DAT_00589540,&local_28);
    FUN_01a70fd4(param_1,3,auStack_34);
  }
  return;
}

