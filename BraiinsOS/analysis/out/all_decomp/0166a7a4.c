// FUN_0166a7a4 @ 0166a7a4 size=1100 calls_out=6 calls_in=2
// strings: basic string

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0166a7a4(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint local_98;
  int local_94;
  int local_90;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  undefined4 *local_74;
  char *local_70;
  int local_6c;
  int local_68;
  uint uStack_64;
  int local_60;
  uint local_5c;
  int local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  int local_2c;
  char **local_28;
  
  iVar8 = *(int *)(param_2 + 0xc);
  if (iVar8 == 0) {
LAB_0166a8b0:
    *param_1 = 1;
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  pcVar7 = *(char **)(param_2 + 8);
  cVar1 = *pcVar7;
  *(char **)(param_2 + 8) = pcVar7 + 1;
  *(int *)(param_2 + 0xc) = iVar8 + -1;
  if (cVar1 != '\"') {
    *(char **)(param_2 + 8) = pcVar7;
    *(int *)(param_2 + 0xc) = iVar8;
    goto LAB_0166a8b0;
  }
  local_90 = 0;
  local_68 = 0;
  local_98 = 0x80000000;
  local_5c = 0x9207e5d;
  local_94 = 1;
  local_60 = 0x5b2300;
  local_58 = -0x7fffdf;
  local_54 = (undefined4 *)&DAT_00000001;
  FUN_0167b4d8(&local_88,&local_68,param_2);
  if (local_88 == 3) {
    iVar8 = 1;
    if (local_84 != 0x80000001) {
      local_98 = local_84;
      *(int *)((uint)&local_98 | 4) = local_80;
      ((int *)((uint)&local_98 | 4))[1] = local_7c;
      iVar8 = local_80;
    }
LAB_0166a910:
    while( true ) {
      uVar10 = *(undefined4 *)(param_2 + 8);
      uVar9 = *(undefined4 *)(param_2 + 0xc);
      local_60 = 0x5b2300;
      local_5c = 0x9207e5d;
      local_58 = -0x7fffdf;
      local_68 = 0;
      local_54 = (undefined4 *)&DAT_00000001;
      FUN_0167b4d8(&local_88,&local_68,param_2);
      uVar6 = local_7c;
      iVar5 = local_80;
      uVar4 = local_84;
      if (local_88 != 3) break;
      if (local_84 == 0x80000001) goto LAB_0166aa4c;
      FUN_0168e618(&local_98);
      if (local_98 - local_90 < uVar6) {
        FUN_0166e728(&local_98,local_90,uVar6,1,1);
      }
      iVar2 = local_90;
      iVar8 = local_94;
      FUN_016dd1aa(local_94 + local_90,iVar5,uVar6);
      local_90 = iVar2 + uVar6;
      if ((uVar4 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
    }
    if (local_88 == 1) {
      *(undefined4 *)(param_2 + 8) = uVar10;
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      if (local_84 != 0) {
        thunk_FUN_016d3fb4(local_80);
      }
      if (local_78 != 0) {
        if ((code *)*local_74 != (code *)0x0) {
          (*(code *)*local_74)(local_78);
        }
        if (local_74[1] != 0) {
          thunk_FUN_016d3fb4(local_78);
        }
      }
LAB_0166aa4c:
      local_70 = *(char **)(param_2 + 8);
      local_6c = *(int *)(param_2 + 0xc);
      if (local_6c != 0) {
        cVar1 = *local_70;
        *(char **)(param_2 + 8) = local_70 + 1;
        *(int *)(param_2 + 0xc) = local_6c + -1;
        if (cVar1 == '\"') goto LAB_0166ab98;
        *(char **)(param_2 + 8) = local_70;
        *(int *)(param_2 + 0xc) = local_6c;
      }
      local_78 = 0;
      local_7c = 0;
      local_80 = 4;
      local_84 = 0;
      puVar11 = (undefined4 *)((uint)&local_88 | 4);
      local_50 = *puVar11;
      uStack_4c = puVar11[1];
      uStack_48 = puVar11[2];
      uStack_44 = puVar11[3];
      uStack_40 = puVar11[4];
      local_88 = 2;
      *puVar11 = local_50;
      puVar11[1] = uStack_4c;
      puVar11[2] = uStack_48;
      puVar11[3] = uStack_44;
      puVar11[4] = uStack_40;
      local_28 = &local_70;
      local_30 = 0xc;
      local_34 = "basic string";
      local_38 = 3;
      local_2c = param_2;
      FUN_00953084(&local_68,&local_88,&local_38);
      iVar5 = local_68;
      local_88 = local_68;
      local_84 = uStack_64;
      uVar4 = local_84;
      local_80 = local_60;
      local_7c = local_5c;
      local_78 = local_58;
      local_74 = local_54;
      if (local_68 == 3) {
LAB_0166ab98:
        *param_1 = 3;
        param_1[1] = local_98;
        param_1[2] = local_94;
        param_1[3] = local_90;
        return;
      }
      local_84._0_1_ = (undefined1)uStack_64;
      uVar3 = (undefined1)local_84;
      local_84 = uVar4;
      FUN_016dd1aa((undefined2 *)((int)param_1 + 5),(uint)&local_88 | 5,0x13);
      *(undefined1 *)(param_1 + 1) = uVar3;
      *param_1 = iVar5;
      goto joined_r0x0166aae8;
    }
    param_1[2] = local_80;
    param_1[3] = local_7c;
    param_1[4] = local_78;
    param_1[5] = (int)local_74;
  }
  else {
    if (local_88 == 1) {
      *(char **)(param_2 + 8) = pcVar7 + 1;
      *(int *)(param_2 + 0xc) = iVar8 + -1;
      if (local_84 != 0) {
        thunk_FUN_016d3fb4(local_80);
      }
      puVar11 = local_74;
      iVar8 = local_78;
      if (local_78 != 0) {
        if ((code *)*local_74 != (code *)0x0) {
          (*(code *)*local_74)(local_78);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_016d3fb4(iVar8);
        }
      }
      iVar8 = 1;
      goto LAB_0166a910;
    }
    param_1[2] = local_80;
    param_1[3] = local_7c;
    param_1[4] = local_78;
    param_1[5] = (int)local_74;
    iVar8 = 1;
  }
  *param_1 = local_88;
  param_1[1] = local_84;
joined_r0x0166aae8:
  if ((local_98 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(iVar8);
  return;
}

