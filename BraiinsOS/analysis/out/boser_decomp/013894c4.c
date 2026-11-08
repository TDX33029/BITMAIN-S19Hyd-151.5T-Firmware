// FUN_013894c4 @ 013894c4 size=180 calls_out=2 calls_in=1
// strings: 

void FUN_013894c4(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  *(int *)(param_1 + 0x28) = param_2;
  if (param_2 != 0) {
    FUN_0138920c(param_1,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = *(int *)(param_1 + 8) * 0xc;
    puVar1 = *(undefined4 **)(param_1 + 4);
    do {
      *puVar1 = 0;
      iVar4 = iVar4 + -0xc;
      puVar1 = puVar1 + 3;
    } while (iVar4 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar5 = *(uint *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar6 = uVar5 - uVar2;
    if (uVar5 < uVar2) {
      uVar6 = uVar5;
    }
    uVar2 = uVar2 - uVar6;
    iVar7 = uVar3 - uVar2;
    if (uVar3 < uVar2) {
      iVar7 = 0;
    }
    if (uVar2 < uVar3) {
      uVar3 = uVar2;
    }
    FUN_013ab130(iVar4 + uVar6 * 0x30,uVar3);
    FUN_013ab130(iVar4,iVar7);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

