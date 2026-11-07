// FUN_00a2c47c @ 00a2c47c size=664 calls_out=12 calls_in=1
// strings: Settings reset failed | BUG: SettingsManager lock poisoned

void FUN_00a2c47c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  undefined1 auStack_220 [64];
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [72];
  undefined1 auStack_178 [96];
  undefined1 auStack_118 [72];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char **local_b8;
  undefined2 *local_b4;
  undefined4 **local_b0;
  code *local_ac;
  undefined4 local_78;
  char *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e15c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e15c);
  }
  piVar3 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_220,param_2,0x48);
  FUN_00a2b4fc(local_1e0);
  iVar5 = *piVar3;
  piVar3 = (int *)(iVar5 + 8);
  if (*piVar3 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (bVar1) {
      *piVar3 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_00a2c4d8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(piVar3);
LAB_00a2c4d8:
  uVar4 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar4 = FUN_0197ac0c();
    uVar4 = uVar4 ^ 1;
  }
  if (*(char *)(iVar5 + 0x10) != '\0') {
    local_b4 = (undefined2 *)CONCAT31(local_b4._1_3_,(char)uVar4);
    local_b8 = (char **)piVar3;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: SettingsManager lock poisoned",0x22,&local_b8,&DAT_01c0e41c,&DAT_01c0e14c);
  }
  puVar7 = *(undefined4 **)(iVar5 + 0x18);
  iVar5 = *(int *)(iVar5 + 0x1c) << 3;
  do {
    if (iVar5 == 0) goto LAB_00a2c5dc;
    puVar2 = (undefined4 *)(**(code **)(puVar7[1] + 0x1c))(*puVar7);
    iVar5 = iVar5 + -8;
    puVar7 = puVar7 + 2;
  } while (puVar2 == (undefined4 *)0x0);
  local_48 = 0x15;
  local_b0 = &local_44;
  local_b8 = &local_4c;
  local_4c = "Settings reset failed";
  local_ac = FUN_00667a08;
  local_b4 = &DAT_0132b6a0;
  local_44 = puVar2;
  FUN_00664898(&local_30,&DAT_00587911,&local_b8);
  local_40 = local_30;
  uStack_3c = uStack_2c;
  uStack_38 = uStack_28;
  FUN_01a70fd4(&local_b8,0xd);
  (**(code **)*local_44)();
  puVar6 = local_b4;
  ppcVar8 = local_b8;
  FUN_01bed4e2(auStack_178,&local_b0,0x60);
  if (ppcVar8 == (char **)&DAT_00000003 && puVar6 == (undefined2 *)0x0) {
LAB_00a2c5dc:
    FUN_01ac2a34(piVar3,uVar4);
    puVar6 = (undefined2 *)0x0;
    FUN_0160aaa4(&local_b8,0);
    local_78 = 0;
    FUN_01bed4e2(auStack_1c0,&local_b8,0x48);
    ppcVar8 = (char **)&DAT_00000003;
    FUN_00f9604c(auStack_220);
  }
  else {
    FUN_01bed4e2(auStack_118,auStack_178,0x60);
    FUN_01bed4e2(auStack_1c0,auStack_118,0x48);
    local_1d8 = local_d0;
    uStack_1d4 = uStack_cc;
    uStack_1d0 = uStack_c8;
    uStack_1cc = uStack_c4;
    uStack_1c8 = uStack_c0;
    uStack_1c4 = uStack_bc;
    FUN_01ac2a34(piVar3,uVar4);
    FUN_00f9604c(auStack_220);
  }
  *param_1 = ppcVar8;
  param_1[1] = puVar6;
  FUN_01bed4e2(param_1 + 2,auStack_1c0,0x48);
  param_1[0x14] = local_1d8;
  param_1[0x15] = uStack_1d4;
  param_1[0x16] = uStack_1d0;
  param_1[0x17] = uStack_1cc;
  param_1[0x18] = uStack_1c8;
  param_1[0x19] = uStack_1c4;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

