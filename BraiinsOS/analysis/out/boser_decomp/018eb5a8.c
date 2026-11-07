// FUN_018eb5a8 @ 018eb5a8 size=260 calls_out=3 calls_in=6
// strings: 

void FUN_018eb5a8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int local_58 [5];
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = param_2[2];
  iVar4 = param_2[1];
  uVar6 = *param_2;
  iVar3 = iVar4 + iVar1 * 0xc;
  iVar2 = iVar4;
  iVar5 = iVar4;
  if (iVar1 != 0) {
    iVar5 = 0;
    local_58[0] = iVar4;
    local_58[2] = uVar6;
    local_58[3] = iVar3;
    do {
      puVar7 = (undefined4 *)(iVar4 + iVar5);
      local_40 = *puVar7;
      uStack_3c = puVar7[1];
      uStack_38 = puVar7[2];
      local_58[4] = iVar4;
      local_44 = puVar7;
      FUN_01938e20(&local_30,&local_40);
      iVar5 = iVar5 + 0xc;
      *puVar7 = local_30;
      puVar7[1] = uStack_2c;
      puVar7[2] = uStack_28;
    } while (iVar1 * 0xc != iVar5);
    iVar5 = iVar4 + iVar5;
    iVar2 = iVar3;
  }
  local_58[3] = 4;
  local_58[1] = 4;
  local_58[0] = 4;
  local_58[2] = 0;
  FUN_01928cc4(iVar2,((uint)(iVar3 - iVar2) >> 2) * -0x55555555);
  *param_1 = uVar6;
  param_1[1] = iVar4;
  param_1[2] = ((uint)(iVar5 - iVar4) >> 2) * -0x55555555;
  FUN_0192f318(local_58);
  return;
}

