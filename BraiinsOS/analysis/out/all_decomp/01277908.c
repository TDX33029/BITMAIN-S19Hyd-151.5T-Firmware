// FUN_01277908 @ 01277908 size=120 calls_out=1 calls_in=7
// strings: 

void FUN_01277908(uint *param_1,char param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == '\x01') {
    param_2 = '\x01';
    param_3[2] = 0;
    if (3 < *param_3) {
      thunk_FUN_016d3fb4(param_3[1]);
      param_2 = '\x01';
      *param_3 = 0;
      param_3[1] = 4;
    }
  }
  else if (param_3[2] == 0) {
    param_2 = '\x01';
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  *(char *)(param_1 + 3) = param_2;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  return;
}

