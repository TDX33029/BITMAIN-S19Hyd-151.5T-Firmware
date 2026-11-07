// FUN_006c9df0 @ 006c9df0 size=584 calls_out=9 calls_in=2
// strings: 

void FUN_006c9df0(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 *local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int iStack_54;
  uint uStack_50;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar9 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar4 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((char)puVar4[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar4 = local_38;
    puVar4[1] = local_34;
    puVar4[2] = local_30;
    puVar4[3] = local_2c;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  uStack_78 = *puVar4;
  local_74 = puVar4[1];
  local_70 = puVar4[2];
  local_6c = puVar4[3];
  *puVar4 = uStack_78 + 2;
  puVar4[1] = local_74 + (0xfffffffd < uStack_78);
  local_80 = 0;
  uStack_7c = 0;
  local_84 = 0;
  local_88 = &DAT_0056d238;
  local_68 = &DAT_0056d238;
  local_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = uStack_78 + 1;
  puVar8 = *(undefined4 **)(param_1 + 0x2c);
  iStack_54 = local_74 + (0xfffffffe < uStack_78);
  local_3c = 0;
  local_40 = 4;
  local_44 = 0;
  uStack_50 = local_70;
  local_4c = local_6c;
  local_48 = param_1;
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar7 = puVar8 + *(int *)(param_1 + 0x30) * 2;
    do {
      uVar5 = *puVar8;
      uVar6 = puVar8[1];
      iVar3 = FUN_006e58b4(&local_88,uVar5,uVar6);
      if (iVar3 == 0) {
        local_30 = 0;
        local_34 = 4;
        local_38 = 0;
        FUN_006ca0b8(&local_88,uVar5,uVar6,&local_38);
        FUN_0132b958(local_38,local_34,4,0x10);
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar7);
  }
  uVar2 = local_3c;
  uVar1 = local_40;
  local_2c = local_40 + local_3c * 0x18;
  iVar3 = param_2[2];
  local_38 = local_40;
  local_34 = local_40;
  local_30 = local_44;
  if ((uint)(*param_2 - iVar3) < local_3c) {
    FUN_0132b898(param_2,iVar3,local_3c,4,0x18);
    iVar3 = param_2[2];
  }
  FUN_01bed4e2(param_2[1] + iVar3 * 0x18,uVar1,uVar2 * 0x18);
  param_2[2] = iVar3 + uVar2;
  local_2c = uVar1;
  FUN_006c9a00(&local_38);
  if ((local_84 != 0) && (iVar3 = local_84 * 8 + 8, local_84 + iVar3 != -5)) {
    thunk_FUN_01be4678((int)local_88 - iVar3);
  }
  if ((local_64 != 0) && (iVar3 = local_64 * 0xc + 0xc, local_64 + iVar3 != -5)) {
    thunk_FUN_01be4678((int)local_68 - iVar3);
  }
  return;
}

