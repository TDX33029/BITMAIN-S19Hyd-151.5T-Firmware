// FUN_00c6ed74 @ 00c6ed74 size=496 calls_out=1 calls_in=1
// strings: 

void FUN_00c6ed74(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint unaff_s16;
  uint uVar7;
  undefined8 uVar8;
  uint local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  bVar1 = false;
  iVar3 = *(int *)(param_2 + 0x80);
  uVar4 = *(undefined4 *)(param_2 + 0x84);
  uVar5 = *(undefined4 *)(param_2 + 0x88);
  local_74 = 0;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  uVar7 = (uint)(iVar3 != 0);
  uStack_84 = 0;
  local_88 = uVar7;
  iStack_80 = iVar3;
  uStack_7c = uVar4;
  local_78 = uVar7;
  local_70 = iVar3;
  uStack_6c = uVar4;
  local_68 = uVar5;
  do {
    uVar8 = FUN_00c38db8(&local_88);
    iVar2 = (int)((ulonglong)uVar8 >> 0x20);
    if (((int)uVar8 == 0) || (iVar2 == 0)) goto LAB_00c6ee64;
    iVar2 = *(int *)(iVar2 + 0x8c);
  } while (*(int *)(iVar2 + 0x10) != 1);
  local_60 = local_88;
  uStack_5c = uStack_84;
  iStack_58 = iStack_80;
  uStack_54 = uStack_7c;
  local_50 = local_78;
  uStack_4c = local_74;
  iStack_48 = local_70;
  uStack_44 = uStack_6c;
  uStack_40 = local_68;
  unaff_s16 = *(uint *)(iVar2 + 0x14);
  while( true ) {
    uVar8 = FUN_00c38db8(&local_60);
    iVar2 = (int)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0 || iVar2 == 0) break;
    iVar2 = *(int *)(iVar2 + 0x8c);
    if (*(int *)(iVar2 + 0x10) == 1) {
      uVar6 = *(uint *)(iVar2 + 0x14);
      if ((int)(uVar6 ^ (uint)((int)uVar6 >> 0x1f) >> 1) <
          (int)(unaff_s16 ^ (uint)((int)unaff_s16 >> 0x1f) >> 1)) {
        uVar6 = unaff_s16;
      }
      unaff_s16 = uVar6;
    }
  }
  bVar1 = true;
LAB_00c6ee64:
  local_74 = 0;
  uStack_84 = 0;
  local_88 = uVar7;
  iStack_80 = iVar3;
  uStack_7c = uVar4;
  local_78 = uVar7;
  local_70 = iVar3;
  uStack_6c = uVar4;
  local_68 = uVar5;
  do {
    uVar8 = FUN_00c38db8(&local_88);
    iVar3 = (int)((ulonglong)uVar8 >> 0x20);
    if (((int)uVar8 == 0) || (iVar3 == 0)) goto LAB_00c6ef4c;
    iVar3 = *(int *)(iVar3 + 0x8c);
  } while (*(int *)(iVar3 + 0x18) != 1);
  local_60 = local_88;
  uStack_5c = uStack_84;
  iStack_58 = iStack_80;
  uStack_54 = uStack_7c;
  local_50 = local_78;
  uStack_4c = local_74;
  iStack_48 = local_70;
  uStack_44 = uStack_6c;
  uStack_40 = local_68;
  uVar7 = *(uint *)(iVar3 + 0x1c);
  while( true ) {
    uVar8 = FUN_00c38db8(&local_60);
    iVar3 = (int)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0 || iVar3 == 0) break;
    iVar3 = *(int *)(iVar3 + 0x8c);
    if (*(int *)(iVar3 + 0x18) == 1) {
      uVar6 = *(uint *)(iVar3 + 0x1c);
      if ((int)(uVar6 ^ (uint)((int)uVar6 >> 0x1f) >> 1) <
          (int)(uVar7 ^ (uint)((int)uVar7 >> 0x1f) >> 1)) {
        uVar6 = uVar7;
      }
      uVar7 = uVar6;
    }
  }
  if (bVar1) {
    uVar5 = 1;
    param_1[1] = unaff_s16;
    param_1[2] = uVar7;
  }
  else {
LAB_00c6ef4c:
    uVar5 = 0;
  }
  *param_1 = uVar5;
  return;
}

