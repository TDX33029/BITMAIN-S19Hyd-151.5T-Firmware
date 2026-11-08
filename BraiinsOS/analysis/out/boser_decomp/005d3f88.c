// FUN_005d3f88 @ 005d3f88 size=416 calls_out=9 calls_in=1
// strings: 

uint * FUN_005d3f88(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  int *piVar8;
  undefined1 auStack_1c4 [116];
  undefined1 auStack_150 [248];
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  uint local_3c [3];
  undefined1 *local_30;
  undefined *local_2c;
  uint local_28;
  
  FUN_0120d7dc(auStack_1c4);
  FUN_012a48d4(auStack_1c4,0);
  FUN_012a48d4(auStack_1c4,0);
  local_2c = (undefined *)FUN_012b9138(auStack_150);
  local_28 = 0;
  if (local_2c == (undefined *)0x0) {
    local_2c = &DAT_00420598;
  }
  local_30 = auStack_1c4;
  FUN_012b5c88(&local_58,&local_30,4,0);
  if (*param_1 == 2) {
    FUN_012bc780(param_1,auStack_1c4);
    if (local_58 != -0x80000000) {
      FUN_019bb7e0(local_58,local_54);
    }
  }
  else {
    local_48 = local_58;
    local_44 = local_54;
    uStack_40 = uStack_50;
    if ((*param_1 & 1) == 0) {
      local_3c[1] = 1;
      local_3c[2] = 0;
      local_3c[0] = 0;
      iVar3 = 0;
      do {
        uVar6 = local_3c[iVar3];
        local_3c[iVar3] = param_1[iVar3 + 1];
        uVar2 = local_3c[2];
        uVar1 = local_3c[1];
        iVar4 = iVar3 + 1;
        param_1[iVar3 + 1] = uVar6;
        iVar3 = iVar4;
      } while (iVar4 != 3);
      puVar5 = (undefined *)FUN_012b9138(auStack_150);
      local_58 = local_48;
      piVar8 = (int *)0x0;
      if (local_48 != -0x80000000) {
        piVar8 = &local_48;
      }
      puVar7 = &DAT_00420598;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
      FUN_012bbc48(&local_30,uVar1,uVar2,puVar7,auStack_1c4,piVar8);
      FUN_0134bd64(param_1[1],param_1[2]);
      *param_1 = 1;
      param_1[1] = (uint)local_30;
      param_1[2] = (uint)local_2c;
      param_1[3] = local_28;
      FUN_0134bd64(local_3c[0],uVar1);
    }
    if (local_58 != -0x80000000) {
      FUN_0134bd64(local_58,local_44);
    }
    FUN_012bc780(param_1,auStack_1c4);
  }
  FUN_005f8f84(auStack_1c4);
  return param_1;
}

