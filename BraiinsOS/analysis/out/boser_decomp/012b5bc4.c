// FUN_012b5bc4 @ 012b5bc4 size=148 calls_out=2 calls_in=2
// strings: 

void FUN_012b5bc4(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    uVar1 = param_1[9] - param_1[7];
    if (uVar1 != 0) {
      puVar3 = (undefined4 *)(param_1[7] + 4);
      uVar1 = uVar1 / 0xc;
      do {
        if (puVar3[-1] != -0x80000000) {
          FUN_0134bd64(puVar3[-1],*puVar3);
        }
        puVar3 = puVar3 + 3;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    FUN_0134aee0(param_1[8],iVar2,4,0xc);
  }
  if (-0x7fffffff < *param_1) {
    FUN_0134bd64(*param_1,param_1[1]);
  }
  if (param_1[3] < -0x7ffffffe) {
    return;
  }
  FUN_0134bd64(param_1[3],param_1[4]);
  return;
}

