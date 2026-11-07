// FUN_0118003c @ 0118003c size=1752 calls_out=13 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x01180708) */
/* WARNING: Removing unreachable block (ram,0x01180a6c) */
/* WARNING: Removing unreachable block (ram,0x01180748) */
/* WARNING: Removing unreachable block (ram,0x01180770) */
/* WARNING: Removing unreachable block (ram,0x01180774) */
/* WARNING: Removing unreachable block (ram,0x01180788) */
/* WARNING: Removing unreachable block (ram,0x01180790) */
/* WARNING: Removing unreachable block (ram,0x01180794) */
/* WARNING: Removing unreachable block (ram,0x0118079c) */
/* WARNING: Removing unreachable block (ram,0x011807a8) */
/* WARNING: Removing unreachable block (ram,0x011807b4) */
/* WARNING: Removing unreachable block (ram,0x011807bc) */
/* WARNING: Removing unreachable block (ram,0x011807c0) */
/* WARNING: Removing unreachable block (ram,0x011807c8) */
/* WARNING: Removing unreachable block (ram,0x01180ab0) */
/* WARNING: Removing unreachable block (ram,0x011807d0) */
/* WARNING: Removing unreachable block (ram,0x01180844) */
/* WARNING: Removing unreachable block (ram,0x01180850) */

void FUN_0118003c(uint *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  char *unaff_r6;
  int *piVar11;
  undefined8 uVar12;
  uint local_e8;
  uint local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8 [4];
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar9 = *(uint *)(param_3 + 0xc);
  iVar7 = uVar9 * 0xc;
  if (0xaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar7);
  }
  if (iVar7 == 0) {
    local_bc = 4;
    local_c8 = 4;
    local_cc = 0;
  }
  else {
    local_c8 = thunk_FUN_016d4a50(iVar7);
    if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar7);
    }
    local_bc = thunk_FUN_016d4a50(iVar7);
    if (local_bc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar7);
    }
    unaff_r6 = param_3;
    local_cc = uVar9;
  }
  local_c4 = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_c0 = local_cc;
  if ((0x3ffffff < uVar9) || (unaff_r6 = (char *)(uVar9 * 0x40), (char *)0x7ffffffc < unaff_r6)) {
LAB_0118016c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_b4,unaff_r6);
  }
  if (unaff_r6 == (char *)0x0) {
    local_e8 = 4;
  }
  else {
    local_e8 = thunk_FUN_016d4a50(unaff_r6);
    if (local_e8 == 0) {
      local_b4 = 4;
      goto LAB_0118016c;
    }
    local_b4 = uVar9;
  }
  iVar7 = *(int *)(param_2 + 8);
  piVar11 = *(int **)(param_2 + 4);
  local_a8[3] = *(uint *)(param_3 + 8);
  local_a8[2] = *(uint *)(param_3 + 4);
  local_88 = uVar9;
  if (local_a8[2] == 0) {
    local_88 = 0;
  }
  local_a8[0] = (uint)(local_a8[2] != 0);
  local_ac = 0;
  local_94 = 0;
  local_a8[1] = 0;
  local_b0 = local_e8;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  while( true ) {
    uVar9 = local_ac;
    uVar12 = FUN_00f45584(local_a8);
    iVar10 = (int)uVar12;
    if (iVar10 == 0) break;
    local_3c = *(undefined4 *)(iVar10 + 4);
    uStack_38 = *(undefined4 *)(iVar10 + 8);
    local_40 = 0x80000000;
    uStack_34 = param_4;
    if (iVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01180324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01180328 + *(int *)(&DAT_01180328 + *piVar11 * 4)))();
      return;
    }
    uVar8 = *(undefined4 *)(iVar10 + 4);
    iVar10 = *(int *)(iVar10 + 8);
    if (iVar10 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar10);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar10);
      }
    }
    FUN_016dd1aa(iVar4,uVar8,iVar10);
    uVar6 = local_b8;
    if (local_b8 == local_c0) {
      FUN_015f37b0(&local_c0);
    }
    piVar5 = (int *)(local_bc + uVar6 * 0xc);
    *piVar5 = iVar10;
    piVar5[1] = iVar4;
    piVar5[2] = iVar10;
    local_b8 = uVar6 + 1;
    FUN_011c9534(&local_80,param_2 + 0xc,(int)((ulonglong)uVar12 >> 0x20),&local_40,param_5,param_6)
    ;
    if (uVar9 == local_b4) {
      FUN_011ca644(&local_b4);
      local_e8 = local_b0;
    }
    puVar3 = (undefined4 *)(local_e8 + uVar9 * 0x40);
    local_ac = uVar9 + 1;
    *puVar3 = local_80;
    puVar3[1] = local_7c;
    puVar3[2] = local_78;
    puVar3[3] = local_74;
    puVar3[4] = local_70;
    puVar3[5] = local_6c;
    puVar3[6] = local_68;
    puVar3[7] = local_64;
    puVar3[8] = local_60;
    puVar3[9] = local_5c;
    puVar3[10] = local_58;
    puVar3[0xb] = local_54;
    puVar3[0xc] = local_50;
    puVar3[0xd] = local_4c;
    puVar3[0xe] = local_48;
    puVar3[0xf] = local_44;
  }
  uVar6 = local_e8;
  iVar7 = uVar9 << 6;
  do {
    iVar10 = iVar7;
    if (iVar10 == 0) {
      local_98 = 0;
      local_a8[0] = 0x80000000;
      local_a8[3] = uVar9;
      local_a8[2] = local_e8;
      local_a8[1] = local_b4;
      goto joined_r0x01180938;
    }
    pcVar1 = (char *)(uVar6 + 0x3c);
    uVar6 = uVar6 + 0x40;
    iVar7 = iVar10 + -0x40;
  } while (*pcVar1 != '\0');
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
  local_a8[0] = 0;
  local_a8[3] = local_b4;
  local_98 = local_e8;
  local_94 = uVar9;
joined_r0x01180938:
  if (local_b8 == 0) {
    *param_1 = local_a8[0];
    param_1[1] = local_a8[1];
    param_1[2] = local_a8[2];
    param_1[3] = local_a8[3];
    param_1[4] = local_98;
    param_1[5] = local_94;
    param_1[6] = local_90;
    if (local_c0 != 0) {
      thunk_FUN_016d3fb4(local_bc);
    }
  }
  else {
    FUN_011f1dd4(&local_40,&local_c0);
    local_7c = 1;
    local_80 = 1;
    local_78 = local_40;
    local_74 = local_3c;
    local_70 = uStack_38;
    local_6c = uStack_34;
    local_68 = uStack_30;
    local_64 = uStack_2c;
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x20);
    }
    *puVar3 = local_80;
    puVar3[1] = local_7c;
    puVar3[2] = local_78;
    puVar3[3] = local_74;
    puVar3[4] = local_70;
    puVar3[5] = local_6c;
    puVar3[6] = local_68;
    puVar3[7] = local_64;
    iVar7 = 0x18;
    if (iVar10 == 0) {
      iVar7 = 0x10;
    }
    piVar11 = *(int **)((int)local_a8 + iVar7);
    if (piVar11 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01353488(*(undefined4 *)((int)local_a8 + iVar7));
      }
    }
    *(undefined4 **)((int)local_a8 + iVar7) = puVar3;
    *param_1 = local_a8[0];
    param_1[1] = local_a8[1];
    param_1[2] = local_a8[2];
    param_1[3] = local_a8[3];
    param_1[4] = local_98;
    param_1[5] = local_94;
    param_1[6] = local_90;
  }
  puVar3 = (undefined4 *)(local_c8 + 4);
  for (; local_c4 != 0; local_c4 = local_c4 + -1) {
    if (puVar3[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar3);
    }
    puVar3 = puVar3 + 3;
  }
  if (local_cc == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_c8);
  return;
}

