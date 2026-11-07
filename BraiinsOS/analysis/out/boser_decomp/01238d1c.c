// FUN_01238d1c @ 01238d1c size=456 calls_out=8 calls_in=1
// strings: no more values in next_value_seed; internal error in ValueDeserializer

void FUN_01238d1c(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_148 [28];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  local_148[0] = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 4;
  if (local_148[0] == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("no more values in next_value_seed, internal error in ValueDeserializer",0x8d,
                 &DAT_01c24c1c);
  }
  iVar3 = *(int *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(uint *)(param_2 + 0xc);
  uVar7 = *(uint *)(param_2 + 0x10);
  uVar10 = *(uint *)(param_2 + 0x14);
  FUN_01bed4e2((uint)local_148 | 4,param_2 + 0x4c,0x6c);
  FUN_01a56a10(&local_a8,local_148);
  if (local_a8 == 1) {
    uVar9 = 1;
    uVar7 = local_a4;
    uVar10 = local_a0;
  }
  else {
    uVar9 = 0;
    if ((uVar8 != 0x80000003) && (0x80000001 < uVar8)) {
      uVar9 = 1;
    }
  }
  FUN_01bed4e2(&local_a8,local_148,0x70);
  local_38 = 0;
  FUN_0123dca8(&local_d8,&local_a8);
  if (local_d8 == 2) {
    puVar1 = (uint *)((uint)&local_d8 | 4);
    uVar7 = puVar1[1];
    uVar10 = puVar1[2];
    param_1[1] = *puVar1;
    param_1[2] = uVar7;
    param_1[3] = uVar10;
    *param_1 = 2;
  }
  else {
    local_a8 = local_d8;
    local_a4 = uStack_d4;
    local_a0 = uStack_d0;
    uStack_9c = uStack_cc;
    uStack_98 = uStack_c8;
    uStack_94 = uStack_c4;
    local_90 = local_c0;
    uStack_8c = uStack_bc;
    uStack_88 = uStack_b8;
    uStack_84 = uStack_b4;
    uStack_80 = uStack_b0;
    uStack_7c = uStack_ac;
    if ((local_d8 & 1) == 0) {
      local_a8 = uVar9;
      local_a4 = uVar7;
      local_a0 = uVar10;
    }
    if (iVar3 < 0) {
      uVar5 = 0;
LAB_01238e40:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,iVar3);
    }
    if (iVar3 == 0) {
      iVar2 = 1;
      iVar6 = 0;
    }
    else {
      uVar5 = 1;
      iVar2 = FUN_01298504(iVar3,1);
      if (iVar2 == 0) goto LAB_01238e40;
      iVar6 = iVar3;
    }
    FUN_01bed4e2(iVar2,uVar4,iVar3);
    local_30 = iVar6;
    local_2c = iVar2;
    local_28 = iVar3;
    FUN_01a4c560(&local_a8,&local_30);
    *param_1 = local_a8;
    param_1[1] = local_a4;
    param_1[2] = local_a0;
    param_1[3] = uStack_9c;
    param_1[4] = uStack_98;
    param_1[5] = uStack_94;
    param_1[6] = local_90;
    param_1[7] = uStack_8c;
    param_1[8] = uStack_88;
    param_1[9] = uStack_84;
    param_1[10] = uStack_80;
    param_1[0xb] = uStack_7c;
  }
  FUN_01272af8(param_2);
  return;
}

