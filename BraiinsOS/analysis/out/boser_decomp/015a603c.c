// FUN_015a603c @ 015a603c size=176 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_015a603c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  
  uVar4 = param_2 - *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) + -1 < 0 == uVar4 < param_2) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc) & 0x1ffffff0;
  puVar7 = (uint *)(iVar3 + uVar2 * 4);
  do {
    if (uVar2 == 0) {
      iVar3 = (*(uint *)(param_1 + 0xc) & 0xf) << 2;
      do {
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = *puVar7;
        iVar3 = iVar3 + -4;
        puVar7 = puVar7 + 1;
      } while (uVar2 != uVar4);
      return 1;
    }
    iVar6 = 0;
    bVar5 = false;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      bVar5 = (bool)(bVar5 | *(uint *)(iVar3 + iVar1) == uVar4);
    } while (iVar6 != 0x10);
    uVar2 = uVar2 - 0x10;
    iVar3 = iVar3 + 0x40;
  } while (!bVar5);
  return 1;
}

