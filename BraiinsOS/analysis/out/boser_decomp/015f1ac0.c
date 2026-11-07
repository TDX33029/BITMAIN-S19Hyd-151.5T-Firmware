// FUN_015f1ac0 @ 015f1ac0 size=524 calls_out=5 calls_in=3
// strings: 

void FUN_015f1ac0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_30;
  int iStack_2c;
  uint uStack_28;
  
  iVar7 = 0;
  local_48 = 0;
  local_4c = &DAT_00000001;
  local_50 = 0;
  if (param_3 == 0) {
LAB_015f1c9c:
    FUN_006666a0(&local_50);
    puVar8 = local_4c;
  }
  else {
    puVar8 = &DAT_00000001;
    iVar3 = 0;
    do {
      iVar4 = param_2 + iVar7;
      FUN_006666fc(&local_30,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      local_40 = local_30;
      local_3c = iStack_2c;
      local_38 = uStack_28;
      if (*(int *)(iVar4 + 0xc) != -0x80000000) {
        if (local_30 == uStack_28) {
          FUN_006520b4(&local_40,uStack_28,1,1,1);
        }
        *(undefined1 *)(local_3c + local_38) = 0x3d;
        local_38 = local_38 + 1;
        uVar6 = *(undefined4 *)(iVar4 + 0x10);
        uVar5 = *(uint *)(iVar4 + 0x14);
        if (local_40 - local_38 < uVar5) {
          FUN_006520b4(&local_40,local_38,uVar5,1,1);
        }
        uVar1 = local_38;
        FUN_01bed4e2(local_3c + local_38,uVar6,uVar5);
        local_38 = uVar1 + uVar5;
      }
      if (0xfe < local_38) {
        local_38 = 0xff;
      }
      uVar5 = local_38;
      if (iVar3 == local_50) {
        FUN_006666a0(&local_50);
        puVar8 = local_4c;
      }
      uVar2 = local_38;
      iVar4 = local_3c;
      uVar1 = local_40;
      puVar8[iVar3] = (char)uVar5;
      local_48 = iVar3 + 1;
      if ((uint)(local_50 - local_48) < local_38) {
        FUN_006520b4(&local_50,local_48,local_38,1,1);
      }
      iVar3 = local_48;
      puVar8 = local_4c;
      FUN_01bed4e2(local_4c + local_48,iVar4,uVar2);
      iVar3 = iVar3 + uVar2;
      local_48 = iVar3;
      FUN_0134bd64(uVar1,iVar4);
      iVar7 = iVar7 + 0x18;
    } while (param_3 * 0x18 != iVar7);
    if (iVar3 != 0) goto LAB_015f1cb8;
    if (local_50 == 0) goto LAB_015f1c9c;
  }
  *puVar8 = 0;
  local_48 = 1;
LAB_015f1cb8:
  *param_1 = local_50;
  param_1[1] = (int)local_4c;
  param_1[2] = local_48;
  return;
}

