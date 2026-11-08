// FUN_01a84a20 @ 01a84a20 size=116 calls_out=0 calls_in=2
// strings: 

bool FUN_01a84a20(uint param_1,undefined4 param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_5 == 0) {
    uVar3 = param_5[3];
  }
  else {
    uVar3 = 0;
    if (*param_5 == 1) {
      uVar3 = param_5[3] - param_5[4];
      if ((uint)param_5[3] < (uint)param_5[4]) {
        uVar3 = 0;
      }
      if (param_5[5] != 0) {
        uVar3 = 0;
      }
    }
  }
  uVar1 = param_1 - param_3;
  if (param_1 < param_3) {
    uVar1 = 0;
  }
  if ((uint)param_5[6] < uVar3) {
    uVar3 = param_5[6];
  }
  uVar2 = uVar1 + uVar3;
  if (CARRY4(uVar1,uVar3)) {
    uVar2 = 0xffffffff;
  }
  if (param_4 != 0) {
    uVar2 = uVar3;
  }
  return uVar2 != 0;
}

