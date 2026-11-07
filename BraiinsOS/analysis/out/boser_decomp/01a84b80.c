// FUN_01a84b80 @ 01a84b80 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_01a84b80(int param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_1 + 0x10);
  uVar4 = *puVar1;
  uVar3 = *(uint *)(param_1 + 4);
  uVar2 = uVar3 - uVar4;
  if (uVar3 < uVar4) {
    uVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x14) == 0) && (uVar4 < uVar3)) {
    if (param_3 <= uVar2) {
      *puVar1 = uVar4 + param_3;
      *(uint *)(param_1 + 0x14) = (uint)CARRY4(uVar4,param_3);
      return;
    }
    param_3 = param_3 - uVar2;
    *puVar1 = uVar4 + uVar2;
    *(uint *)(param_1 + 0x14) = (uint)CARRY4(uVar4,uVar2);
  }
  FUN_01a6a1f8(param_2,param_3);
  return;
}

