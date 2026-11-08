// FUN_01914fcc @ 01914fcc size=148 calls_out=1 calls_in=2
// strings: 

void FUN_01914fcc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar5 = *(int *)(param_1 + 0x18) + param_2;
  *(uint *)(param_1 + 0x18) = uVar5;
  if (iVar1 != 0) {
    uVar7 = *(uint *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    uVar6 = *(uint *)(param_1 + 0x10);
    do {
      iVar1 = iVar1 + -1;
      uVar2 = uVar6 - uVar7;
      if (uVar6 < uVar7) {
        uVar2 = uVar6;
      }
      uVar2 = *(uint *)(iVar8 + uVar2 * 0xc + 8);
      if (uVar5 < uVar2) {
        return;
      }
      uVar5 = uVar5 - uVar2;
      uVar2 = uVar6 + 1;
      *(int *)(param_1 + 0x14) = iVar1;
      piVar4 = (int *)(iVar8 + uVar6 * 0xc);
      iVar3 = *piVar4;
      *(uint *)(param_1 + 0x18) = uVar5;
      uVar6 = uVar2 - uVar7;
      if (uVar2 < uVar7) {
        uVar6 = uVar2;
      }
      if (iVar3 != -0x80000000) {
        piVar4 = (int *)piVar4[1];
      }
      *(uint *)(param_1 + 0x10) = uVar6;
      if (iVar3 != -0x80000000) {
        FUN_0134bd64(iVar3,piVar4);
      }
    } while (iVar1 != 0);
  }
  return;
}

