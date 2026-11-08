// FUN_011957fc @ 011957fc size=972 calls_out=7 calls_in=5
// strings: 

void FUN_011957fc(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int *local_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int *local_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int *local_148;
  int local_144;
  undefined4 local_140;
  undefined4 local_13c;
  int *local_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x25)) {
  case 0:
    local_98 = *param_2;
    uStack_94 = param_2[1];
    local_90 = param_2[2];
    uStack_8c = param_2[3];
    local_88 = param_2[4];
    uStack_84 = param_2[5];
    uStack_80 = param_2[6];
    uStack_7c = param_2[7];
    local_1bc = param_2[8];
    local_1b4 = param_2[9];
    local_1b8 = param_2[10];
    param_2[0xb] = local_b8;
    param_2[0xc] = uStack_b4;
    param_2[0xd] = uStack_b0;
    param_2[0xe] = uStack_ac;
    param_2[0xf] = uStack_a8;
    param_2[0x10] = local_a4;
    param_2[0x11] = uStack_a0;
    param_2[0x12] = uStack_9c;
    param_2[0x13] = local_98;
    param_2[0x14] = uStack_94;
    param_2[0x15] = local_90;
    param_2[0x16] = uStack_8c;
    param_2[0x17] = local_88;
    param_2[0x18] = uStack_84;
    param_2[0x19] = uStack_80;
    param_2[0x1a] = uStack_7c;
    local_168 = (int *)0x0;
    *(undefined1 *)((int)param_2 + 0x8a) = 0;
    param_2[0x1f] = local_1b4;
    param_2[0x20] = local_1b8;
    param_2[0x21] = local_1bc;
    param_2[0x1b] = 0;
LAB_01195914:
    *(undefined2 *)(param_2 + 0x22) = 0x100;
    param_2[0xb] = param_2[0x13];
    param_2[0xc] = param_2[0x14];
    param_2[0xd] = param_2[0x15];
    param_2[0xe] = param_2[0x16];
    param_2[0xf] = param_2[0x17];
    param_2[0x10] = param_2[0x18];
    param_2[0x11] = param_2[0x19];
    param_2[0x12] = param_2[0x1a];
    piVar3 = (int *)param_2[0xf];
    if (piVar3 == (int *)0x0) {
      *(undefined1 *)(param_2 + 0x22) = 1;
      if (local_168 == (int *)0x0) {
        local_168 = (int *)0x0;
      }
      else {
        uVar6 = param_2[0x1d];
        uVar7 = param_2[0x1e];
        puVar4 = (undefined4 *)((uint)&local_168 | 4);
        *puVar4 = param_2[0x1c];
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
      }
    }
    else if (local_168 == (int *)0x0) {
      *(undefined1 *)(param_2 + 0x22) = 1;
      uVar6 = param_2[0x19];
      uVar7 = param_2[0x1a];
      puVar4 = (undefined4 *)((uint)&local_168 | 4);
      *puVar4 = param_2[0x18];
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      local_168 = piVar3;
    }
    else {
      uVar6 = param_2[0x19];
      uVar7 = param_2[0x1a];
      puVar4 = (undefined4 *)((uint)&local_148 | 4);
      *puVar4 = param_2[0x18];
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      local_154 = param_2[0x1c];
      uStack_150 = param_2[0x1d];
      uStack_14c = param_2[0x1e];
      local_158 = local_168;
      local_148 = piVar3;
      FUN_006cb608(&local_148);
      local_168 = local_148;
      iStack_164 = local_144;
      uStack_160 = local_140;
      uStack_15c = local_13c;
      *(undefined1 *)(param_2 + 0x22) = 1;
    }
    if (param_2[0xc] != 0) {
      local_148 = (int *)param_2[0xb];
      local_144 = param_2[0xc] + -1;
      local_140 = param_2[0xd];
      local_13c = param_2[0xe];
      iVar2 = *local_148;
      iVar5 = local_148[1];
      iVar8 = *(int *)(iVar5 + 8);
      *(undefined2 *)(param_2 + 0x22) = 0;
      local_138 = local_168;
      iStack_134 = iStack_164;
      uStack_130 = uStack_160;
      uStack_12c = uStack_15c;
      local_148 = local_148 + 2;
      uVar9 = (**(code **)(iVar5 + 0x20))
                        (iVar2 + (iVar8 - 1U & 0xfffffff8) + 8,local_1bc,local_1b4,local_1b8,
                         &local_148);
      *(undefined8 *)(param_2 + 0x23) = uVar9;
      goto LAB_01195aa0;
    }
    *(undefined2 *)(param_2 + 0x22) = 0;
    uVar9 = FUN_006c9928(param_2[0xd],param_2[0xe],&local_168);
    *(undefined8 *)(param_2 + 0x23) = uVar9;
LAB_01195b10:
    (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))(&local_148,(int)uVar9,param_3);
    if (local_148 != (int *)&DAT_00000003 || local_144 != 0) {
      FUN_01bed4e2(&local_b8,&local_148,0x90);
      FUN_01139b38(param_2[0x23],param_2[0x24]);
      goto LAB_01195b58;
    }
    uVar1 = 4;
LAB_01195b38:
    *(undefined1 *)((int)param_2 + 0x8a) = uVar1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c219ec);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c219ec);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x8a)) {
    case 0:
      local_168 = (int *)param_2[0x1b];
      local_1b4 = param_2[0x1f];
      local_1b8 = param_2[0x20];
      local_1bc = param_2[0x21];
      goto LAB_01195914;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c219dc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c219dc);
    case 3:
      uVar9 = *(undefined8 *)(param_2 + 0x23);
      break;
    case 4:
      uVar9 = *(undefined8 *)(param_2 + 0x23);
      goto LAB_01195b10;
    }
LAB_01195aa0:
    (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))(&local_148,(int)uVar9,param_3);
    if (local_148 == (int *)&DAT_00000003 && local_144 == 0) {
      uVar1 = 3;
      goto LAB_01195b38;
    }
    FUN_01bed4e2(&local_b8,&local_148,0x90);
    FUN_01139b38(param_2[0x23],param_2[0x24]);
LAB_01195b58:
    *(undefined2 *)(param_2 + 0x22) = 0;
    FUN_01bed4e2(param_1,&local_b8,0x90);
    iVar2 = *param_1;
    iVar5 = param_1[1];
    uVar1 = 1;
    *(undefined1 *)((int)param_2 + 0x8a) = 1;
    if (iVar2 != 3 || iVar5 != 0) {
      FUN_00b968c0(param_2 + 0xb);
      goto LAB_01195ba8;
    }
  }
  uVar1 = 3;
  *param_1 = 3;
  param_1[1] = 0;
LAB_01195ba8:
  *(undefined1 *)(param_2 + 0x25) = uVar1;
  return;
}

