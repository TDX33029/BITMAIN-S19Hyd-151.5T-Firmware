// FUN_010bd3d8 @ 010bd3d8 size=116 calls_out=3 calls_in=1
// strings: 

void FUN_010bd3d8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    iVar2 = param_1[2];
    puVar1 = (undefined4 *)(iVar2 + 4);
    for (iVar3 = param_1[3]; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar1[-1] != -0x80000000) {
        FUN_0134bd64(puVar1[-1],*puVar1);
      }
      puVar1 = puVar1 + 3;
    }
    FUN_0134aee0(param_1[1],iVar2,4,0xc);
    return;
  }
  if (param_1[1] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

