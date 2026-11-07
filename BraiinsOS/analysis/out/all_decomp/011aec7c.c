// FUN_011aec7c @ 011aec7c size=912 calls_out=11 calls_in=0
// strings: 

void FUN_011aec7c(uint *param_1,int *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_cc;
  int local_c8;
  uint local_c4;
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
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
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
  uVar11 = *(uint *)(param_3 + 0xc);
  iVar6 = uVar11 * 0xc;
  if (0xaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar6);
  }
  uVar12 = 0;
  local_c8 = 4;
  local_c0 = 0;
  if (iVar6 != 0) {
    local_c8 = thunk_FUN_016d4a50(iVar6);
    local_c0 = uVar11;
    if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar6);
    }
  }
  local_a8[2] = *(uint *)(param_3 + 4);
  local_a8[3] = *(uint *)(param_3 + 8);
  local_b0 = 4;
  if (local_a8[2] == 0) {
    uVar11 = 0;
  }
  iVar6 = *param_2;
  local_a8[0] = (uint)(local_a8[2] != 0);
  local_b8 = 0;
  local_ac = 0;
  local_c4 = 4;
  local_b4 = 0;
  local_94 = 0;
  local_a8[1] = 0;
  local_cc = 0;
  local_bc = local_c8;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar11;
  while( true ) {
    uVar13 = FUN_00f45584(local_a8);
    iVar8 = (int)uVar13;
    if (iVar8 == 0) break;
    uVar9 = *(undefined4 *)(iVar8 + 4);
    iVar10 = *(int *)(iVar8 + 8);
    cVar3 = FUN_011af09c(iVar6 + 8,uVar9,iVar10);
    if (cVar3 != '\0') {
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
      FUN_016dd1aa(iVar4,uVar9,iVar10);
      if (local_cc == local_c0) {
        FUN_015f37b0(&local_c0);
        local_c8 = local_bc;
      }
      piVar7 = (int *)(local_c8 + local_cc * 0xc);
      *piVar7 = iVar10;
      piVar7[1] = iVar4;
      piVar7[2] = iVar10;
      local_3c = *(undefined4 *)(iVar8 + 4);
      uStack_38 = *(undefined4 *)(iVar8 + 8);
      local_40 = 0x80000000;
      local_b8 = local_cc + 1;
      uStack_34 = param_4;
      FUN_011c9534(&local_80,param_2 + 1,(int)((ulonglong)uVar13 >> 0x20),&local_40,param_5,param_6)
      ;
      uVar12 = local_ac;
      if (local_ac == local_b4) {
        FUN_011ca644(&local_b4);
      }
      local_c4 = local_b0;
      puVar5 = (undefined4 *)(local_b0 + uVar12 * 0x40);
      *puVar5 = local_80;
      puVar5[1] = local_7c;
      puVar5[2] = local_78;
      puVar5[3] = uStack_74;
      puVar5[4] = local_70;
      puVar5[5] = local_6c;
      puVar5[6] = uStack_68;
      puVar5[7] = uStack_64;
      puVar5[8] = uStack_60;
      puVar5[9] = uStack_5c;
      puVar5[10] = local_58;
      puVar5[0xb] = uStack_54;
      puVar5[0xc] = uStack_50;
      puVar5[0xd] = uStack_4c;
      puVar5[0xe] = uStack_48;
      puVar5[0xf] = uStack_44;
      uVar12 = uVar12 + 1;
      local_cc = local_cc + 1;
      local_ac = uVar12;
    }
  }
  uVar11 = local_c4;
  iVar6 = uVar12 << 6;
  do {
    iVar8 = iVar6;
    if (iVar8 == 0) {
      local_98 = 0;
      local_a8[1] = local_b4;
      local_a8[2] = local_c4;
      local_a8[0] = 0x80000000;
      local_a8[3] = uVar12;
      goto LAB_011aef2c;
    }
    pcVar1 = (char *)(uVar11 + 0x3c);
    uVar11 = uVar11 + 0x40;
    iVar6 = iVar8 + -0x40;
  } while (*pcVar1 != '\0');
  local_a8[3] = local_b4;
  local_98 = local_c4;
  local_a8[0] = 0;
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
  local_94 = uVar12;
LAB_011aef2c:
  FUN_011f1dd4(&local_40,&local_c0);
  local_7c = 1;
  local_80 = 1;
  local_78 = local_40;
  uStack_74 = local_3c;
  local_70 = uStack_38;
  local_6c = uStack_34;
  uStack_68 = uStack_30;
  uStack_64 = uStack_2c;
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  iVar6 = 0x18;
  *puVar5 = local_80;
  puVar5[1] = local_7c;
  puVar5[2] = local_78;
  puVar5[3] = uStack_74;
  if (iVar8 == 0) {
    iVar6 = 0x10;
  }
  puVar5[4] = local_70;
  puVar5[5] = local_6c;
  puVar5[6] = uStack_68;
  puVar5[7] = uStack_64;
  piVar7 = *(int **)((int)local_a8 + iVar6);
  if (piVar7 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_a8 + iVar6));
    }
  }
  *(undefined4 **)((int)local_a8 + iVar6) = puVar5;
  *param_1 = local_a8[0];
  param_1[1] = local_a8[1];
  param_1[2] = local_a8[2];
  param_1[3] = local_a8[3];
  param_1[4] = local_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  return;
}

