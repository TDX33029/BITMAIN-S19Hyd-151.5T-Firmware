// FUN_00a2b24c @ 00a2b24c size=452 calls_out=12 calls_in=1
// strings: BUG: SettingsManager lock poisoned

void FUN_00a2b24c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  undefined1 auStack_118 [64];
  undefined4 local_d8;
  undefined1 auStack_cc [12];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  uint *local_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0fc);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e0fc);
  }
  piVar3 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_118,param_2,0x48);
  FUN_00a2b4fc(local_d8);
  iVar5 = *piVar3;
  puVar4 = (uint *)(iVar5 + 8);
  uVar2 = *(uint *)(iVar5 + 8);
  if (uVar2 < 0x3ffffffe) {
    if (*puVar4 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar2 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_00a2b2c4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(puVar4);
LAB_00a2b2c4:
  if (*(char *)(iVar5 + 0x10) != '\0') {
    local_60 = iVar5 + 0x14;
    local_5c = puVar4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: SettingsManager lock poisoned",0x22,&local_60,&DAT_01c0e40c,&DAT_01c0e0ec);
  }
  FUN_00b093d4(auStack_cc,*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c),0);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = uVar2 - 1;
  if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar4);
  }
  FUN_00ab523c(&local_60,auStack_cc);
  piVar3 = (int *)((uint)&local_70 | 4);
  *piVar3 = local_60;
  piVar3[1] = (int)local_5c;
  piVar3[2] = iStack_58;
  local_70 = 1;
  FUN_0160aaa4(&local_60,0);
  local_80 = local_70;
  uStack_7c = uStack_6c;
  uStack_78 = uStack_68;
  uStack_74 = uStack_64;
  local_c0 = local_60;
  iStack_bc = (int)local_5c;
  iStack_b8 = iStack_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  local_ac = local_4c;
  uStack_a8 = uStack_48;
  uStack_a4 = uStack_44;
  uStack_a0 = uStack_40;
  uStack_9c = uStack_3c;
  local_98 = local_38;
  uStack_94 = uStack_34;
  uStack_90 = uStack_30;
  uStack_8c = uStack_2c;
  uStack_88 = uStack_28;
  uStack_84 = uStack_24;
  FUN_0196afa8(auStack_cc);
  FUN_00f9604c(auStack_118);
  *param_1 = 3;
  param_1[1] = 0;
  FUN_01bed4e2(param_1 + 2,&local_c0,0x50);
  param_1[0x16] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

