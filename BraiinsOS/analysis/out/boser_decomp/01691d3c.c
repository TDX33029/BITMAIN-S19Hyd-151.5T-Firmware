// FUN_01691d3c @ 01691d3c size=180 calls_out=1 calls_in=11
// strings: 

void FUN_01691d3c(undefined4 *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_2 + 0x18);
  iVar7 = 3;
  iVar2 = 0;
  if ((1 << (*param_3 & 0xff) & 0x33bU) == 0) {
    if ((1 << (*param_3 & 0xff) & 0xc0U) != 0) {
      iVar7 = 2;
    }
    iVar2 = param_3[3] << iVar7;
  }
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + iVar2;
  if (iVar6 == *(int *)(param_2 + 0x10)) {
    FUN_018fa978(param_2 + 0x10);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (uint *)(*(int *)(param_2 + 0x14) + iVar6 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(int *)(param_2 + 0x18) = iVar6 + 1;
  if ((*(int *)(param_2 + 8) == 1) &&
     (uVar3 = *(uint *)(param_2 + 0xc),
     uVar3 < (uint)(*(int *)(param_2 + 0x34) + (iVar6 + 1) * 0x10))) {
    *param_1 = 0x27;
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0x2a;
  param_1[1] = iVar6;
  return;
}

