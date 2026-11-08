// FUN_01244d74 @ 01244d74 size=220 calls_out=0 calls_in=0
// strings: 

uint FUN_01244d74(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
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
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x01244dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
      return uVar3;
    }
    if (iVar1 != 0) {
      puVar5 = puVar4 + iVar1 * 8;
      do {
        uVar3 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
        if (uVar3 != 0) {
          puVar4 = puVar4 + 8;
        }
      } while (uVar3 != 0 && puVar4 != puVar5);
      return uVar3;
    }
  }
  else {
    puVar4 = *(undefined4 **)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0x14) << 5;
    while (iVar1 != 0) {
      iVar2 = (**(code **)(puVar4[1] + 0x10))(*puVar4,param_2,param_3);
      iVar1 = iVar1 + -0x20;
      puVar4 = puVar4 + 8;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

