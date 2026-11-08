// FUN_013b64f8 @ 013b64f8 size=172 calls_out=1 calls_in=2
// strings: 

void FUN_013b64f8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x18);
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + param_5 * 4;
  if (iVar3 == *(int *)(param_2 + 0x10)) {
    FUN_013c40f0();
  }
  *(int *)(param_2 + 0x18) = iVar3 + 1;
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x14) + iVar3 * 0x10);
  *puVar1 = 6;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  if ((*(int *)(param_2 + 8) == 1) &&
     (uVar2 = *(uint *)(param_2 + 0xc),
     uVar2 < (uint)(*(int *)(param_2 + 0x34) + (iVar3 + 1) * 0x10))) {
    *param_1 = 0x27;
    param_1[1] = uVar2;
    return;
  }
  *param_1 = 0x2a;
  param_1[1] = iVar3;
  return;
}

