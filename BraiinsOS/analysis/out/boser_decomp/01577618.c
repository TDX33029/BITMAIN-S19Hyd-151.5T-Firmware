// FUN_01577618 @ 01577618 size=220 calls_out=0 calls_in=65
// strings: 

uint FUN_01577618(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  uVar3 = 1;
  if ((int)*(uint *)(iVar1 + 8) < 0) {
    uVar3 = *(uint *)(iVar1 + 8) ^ 0x80000000;
  }
  if (uVar3 == 0) {
    return (uint)(*(int *)(iVar1 + 0xc) == 0);
  }
  if (uVar3 == 1) {
    puVar4 = *(undefined4 **)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x01577668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
      return uVar3;
    }
    iVar1 = *(int *)(iVar1 + 0x10) << 5;
    do {
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
      iVar1 = iVar1 + -0x20;
      puVar4 = puVar4 + 8;
    } while (iVar2 != 0);
  }
  else {
    puVar4 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    do {
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
      iVar1 = iVar1 + -0x20;
      puVar4 = puVar4 + 8;
    } while (iVar2 != 0);
  }
  return 0;
}

