// FUN_01aef23c @ 01aef23c size=96 calls_out=1 calls_in=1
// strings: 

void FUN_01aef23c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 4;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  if (uVar1 == 0xf) {
    uVar1 = 0x8000000e;
  }
  else if (uVar1 == 0x2a) {
    uVar1 = 0x80000029;
  }
  else {
    if (uVar1 != 0x2c) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      uVar1 = param_2[5];
      uVar2 = param_2[6];
      uVar3 = param_2[7];
      param_1[4] = param_2[4];
      param_1[5] = uVar1;
      param_1[6] = uVar2;
      param_1[7] = uVar3;
      return;
    }
    uVar1 = 0x8000002b;
  }
  *param_1 = uVar1;
  FUN_01aeb5f4(param_2);
  return;
}

