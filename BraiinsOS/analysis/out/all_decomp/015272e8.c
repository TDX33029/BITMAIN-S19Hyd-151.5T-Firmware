// FUN_015272e8 @ 015272e8 size=760 calls_out=5 calls_in=2
// strings: 

void FUN_015272e8(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  FUN_01555ec8(&local_88);
  iVar9 = *param_2;
  (**(code **)(*(int *)(iVar9 + 0x14) + 0x14))(&local_7c,*(undefined4 *)(iVar9 + 0x10));
  if (local_80 < local_7c) {
    puVar7 = &DAT_018a8aa8;
  }
  else if (local_80 - local_7c < local_7c) {
    puVar7 = &DAT_018a8ab8;
  }
  else {
    uVar1 = (local_80 - local_7c) - local_7c;
    if (uVar1 < local_78) {
      puVar7 = &DAT_018a8ac8;
    }
    else {
      uVar1 = uVar1 - local_78;
      if (local_78 <= uVar1) {
        uVar5 = *(undefined4 *)(iVar9 + 0x10);
        iVar8 = *(int *)(iVar9 + 0x14);
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        local_44 = 0;
        local_48 = 0;
        local_28 = 0x20;
        if (0x20 < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,local_7c,0x20,&DAT_018a7ef4);
        }
        iVar2 = local_84 + local_7c + local_7c;
        iVar3 = iVar2 + local_78;
        FUN_016dd1aa(&local_48,local_84 + local_7c,local_7c);
        local_28 = local_7c;
        local_70 = local_48;
        uStack_6c = local_44;
        uStack_68 = local_40;
        uStack_64 = local_3c;
        local_60 = local_38;
        uStack_5c = local_34;
        uStack_58 = local_30;
        uStack_54 = local_2c;
        uStack_50 = local_7c;
        uVar11 = (**(code **)(iVar8 + 0x10))(uVar5,&local_70,iVar3,local_78);
        uVar5 = *(undefined4 *)(iVar9 + 0x10);
        iVar8 = *(int *)(iVar9 + 0x14);
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        local_44 = 0;
        local_48 = 0;
        FUN_016dd1aa(&local_48,local_84,local_7c);
        local_28 = local_7c;
        local_70 = local_48;
        uStack_6c = local_44;
        uStack_68 = local_40;
        uStack_64 = local_3c;
        local_60 = local_38;
        uStack_5c = local_34;
        uStack_58 = local_30;
        uStack_54 = local_2c;
        uStack_50 = local_7c;
        uVar12 = (**(code **)(iVar8 + 0xc))
                           (uVar5,&local_70,iVar2,local_78,iVar3 + local_78,uVar1 - local_78);
        if (local_88 != 0) {
          thunk_FUN_016d3fb4(local_84);
        }
        uVar5 = *(undefined4 *)(param_1 + 8);
        puVar10 = *(undefined4 **)(param_1 + 0xc);
        pcVar4 = (code *)*puVar10;
        uVar1 = *(uint *)(iVar9 + 0x20);
        iVar9 = *(int *)(iVar9 + 0x24);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar5);
        }
        if (puVar10[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        puVar10 = *(undefined4 **)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x31) = 1;
        uVar6 = 0xffff0000;
        if (uVar1 < 0xffff0000) {
          uVar6 = uVar1;
        }
        pcVar4 = (code *)*puVar10;
        if (iVar9 != -1) {
          uVar6 = uVar1;
        }
        *(undefined8 *)(param_1 + 8) = uVar12;
        *(uint *)(param_1 + 0x18) = uVar6;
        *(int *)(param_1 + 0x1c) = iVar9;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar5);
        }
        if (puVar10[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined8 *)(param_1 + 0x10) = uVar11;
        *(undefined1 *)(param_1 + 0x32) = 1;
        return;
      }
      puVar7 = &DAT_018a8ad8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00418e0f,0x13,puVar7);
}

