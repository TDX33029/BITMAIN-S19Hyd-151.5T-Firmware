// FUN_01805860 @ 01805860 size=288 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01805860(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    if (param_2 == 0) goto LAB_01805914;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18) + 1;
    uVar1 = 0x1f - LZCOUNT(iVar3);
    iVar2 = uVar1 * 0x100;
    if (param_2 == 0) {
      *(int *)(param_1 + 0x28) = iVar2;
LAB_01805914:
      *(int *)(param_1 + 0x2c) = (0x1f - LZCOUNT(*(int *)(param_1 + 0x1c) + 1)) * 0x100;
      *(int *)(param_1 + 0x30) = (0x1f - LZCOUNT(*(int *)(param_1 + 0x20) + 1)) * 0x100;
      *(int *)(param_1 + 0x34) = (0x1f - LZCOUNT(*(int *)(param_1 + 0x24) + 1)) * 0x100;
      return 0;
    }
    *(uint *)(param_1 + 0x28) = iVar2 + ((uint)(iVar3 * 0x100) >> (uVar1 & 0xff));
  }
  iVar3 = *(int *)(param_1 + 0x20) + 1;
  iVar2 = *(int *)(param_1 + 0x1c) + 1;
  uVar1 = 0x1f - LZCOUNT(iVar2);
  uVar6 = 0x1f - LZCOUNT(iVar3);
  iVar4 = *(int *)(param_1 + 0x24) + 1;
  uVar5 = 0x1f - LZCOUNT(iVar4);
  *(uint *)(param_1 + 0x2c) = uVar1 * 0x100 + ((uint)(iVar2 * 0x100) >> (uVar1 & 0xff));
  *(uint *)(param_1 + 0x30) = uVar6 * 0x100 + ((uint)(iVar3 * 0x100) >> (uVar6 & 0xff));
  *(uint *)(param_1 + 0x34) = uVar5 * 0x100 + ((uint)(iVar4 * 0x100) >> (uVar5 & 0xff));
  return 0;
}

