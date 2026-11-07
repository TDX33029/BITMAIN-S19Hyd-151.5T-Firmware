// FUN_011d2110 @ 011d2110 size=272 calls_out=1 calls_in=0
// strings: 

undefined4
FUN_011d2110(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = *param_1;
  uVar4 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar4 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar4 == 0) {
    if (*(int *)(iVar1 + 0xc) == 0) goto LAB_011d2200;
  }
  else {
    if (uVar4 == 1) {
      puVar6 = *(undefined4 **)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 1) {
        iVar1 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else if (iVar1 != 0) {
        puVar5 = puVar6 + iVar1 * 8;
        do {
          iVar1 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
          if (iVar1 == 0) {
            return 0;
          }
          puVar6 = puVar6 + 8;
        } while (puVar6 != puVar5);
      }
LAB_011d2200:
      uVar3 = FUN_011d018c(param_1 + 5,param_2,param_3,param_4);
      return uVar3;
    }
    puVar6 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    do {
      if (iVar1 == 0) goto LAB_011d2200;
      iVar2 = (**(code **)(puVar6[1] + 0x10))(*puVar6,param_2,param_5);
      iVar1 = iVar1 + -0x20;
      puVar6 = puVar6 + 8;
    } while (iVar2 != 0);
  }
  return 0;
}

