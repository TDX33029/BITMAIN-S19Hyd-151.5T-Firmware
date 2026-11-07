// FUN_0145990c @ 0145990c size=172 calls_out=3 calls_in=1
// strings: 

void FUN_0145990c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0145d5e0(param_1 + 0x1c);
  uVar1 = param_1[0x16];
  uVar2 = 2;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      (**(code **)(param_1[0x17] + 0x10))(param_1 + 0x1a,param_1[0x18],param_1[0x19]);
    }
    else {
      if (uVar1 != 0) {
        thunk_FUN_016d3fb4(param_1[0x17]);
      }
      if (param_1[0x19] != 0) {
        thunk_FUN_016d3fb4(param_1[0x1a]);
      }
    }
  }
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_00a517d8(param_1);
  return;
}

