// FUN_01adacdc @ 01adacdc size=232 calls_out=9 calls_in=1
// strings: 

void FUN_01adacdc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x11c) != -0x7fffffff) {
    iVar1 = *(int *)(param_1 + 200);
    if (iVar1 != -0x80000000) {
      iVar3 = *(int *)(param_1 + 0xcc);
      puVar2 = (undefined4 *)(iVar3 + 4);
      for (iVar4 = *(int *)(param_1 + 0xd0); iVar4 != 0; iVar4 = iVar4 + -1) {
        FUN_0134bd64(puVar2[-1],*puVar2);
        puVar2 = puVar2 + 3;
      }
      FUN_0134aee0(iVar1,iVar3,4,0xc);
    }
    if (*(int *)(param_1 + 0xd4) != -0x80000000) {
      FUN_0134bd64(*(int *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8));
    }
    if (*(int *)(param_1 + 0xe0) != -0x80000000) {
      FUN_0134bd64(*(int *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4));
    }
    if (*(int *)(param_1 + 0xec) != -0x80000000) {
      FUN_0134bd64(*(int *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0));
    }
    FUN_01ad2c38(param_1 + 0x90);
    FUN_0096c2c4(param_1 + 0xf8);
    FUN_01ad2c80(param_1);
    FUN_01ad2cec(param_1 + 0x60);
    if (*(int *)(param_1 + 0x104) != -0x80000000) {
      FUN_0134bd64(*(int *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
    }
    FUN_01ad2d3c(param_1 + 0x110);
    FUN_00da99c8((int *)(param_1 + 0x11c));
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_01ada488((int *)(param_1 + 0x40));
      return;
    }
  }
  return;
}

