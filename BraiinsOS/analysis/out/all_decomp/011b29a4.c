// FUN_011b29a4 @ 011b29a4 size=968 calls_out=12 calls_in=0
// strings: 

void FUN_011b29a4(uint *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int local_d0;
  uint local_c8;
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
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar9 = *(uint *)(param_3 + 0xc);
  iVar5 = uVar9 * 0xc;
  if (0xaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  uVar11 = 0;
  local_d0 = 4;
  local_c0 = 0;
  if (iVar5 != 0) {
    local_d0 = thunk_FUN_016d4a50(iVar5);
    local_c0 = uVar9;
    if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar5);
    }
  }
  local_a8[2] = *(uint *)(param_3 + 4);
  local_a8[3] = *(uint *)(param_3 + 8);
  if (local_a8[2] == 0) {
    uVar9 = 0;
  }
  iVar5 = *param_2;
  local_a8[0] = (uint)(local_a8[2] != 0);
  local_b8 = 0;
  local_ac = 0;
  local_c4 = 4;
  local_b0 = 4;
  local_b4 = 0;
  local_94 = 0;
  local_a8[1] = 0;
  local_c8 = 0;
  local_bc = local_d0;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar9;
  while( true ) {
    uVar12 = FUN_00f45584(local_a8);
    iVar8 = (int)uVar12;
    if (iVar8 == 0) break;
    FUN_00ff71dc(&local_80,iVar5 + 8,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
    if (local_80 == 0x12) {
      if ((char)local_7c != '\0') {
        iVar10 = *(int *)(iVar8 + 8);
        uVar6 = *(undefined4 *)(iVar8 + 4);
        if (iVar10 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = thunk_FUN_016d4a50(iVar10,uVar6);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar10);
          }
        }
        FUN_016dd1aa(iVar3,uVar6,iVar10);
        if (local_c8 == local_c0) {
          FUN_015f37b0(&local_c0);
          local_d0 = local_bc;
        }
        piVar7 = (int *)(local_d0 + local_c8 * 0xc);
        *piVar7 = iVar10;
        piVar7[1] = iVar3;
        piVar7[2] = iVar10;
        local_3c = *(int *)(iVar8 + 4);
        iStack_38 = *(int *)(iVar8 + 8);
        local_40 = -0x80000000;
        local_b8 = local_c8 + 1;
        iStack_34 = param_4;
        FUN_011c9534(&local_80,param_2 + 1,(int)((ulonglong)uVar12 >> 0x20),&local_40,param_5,
                     param_6);
        uVar11 = local_ac;
        if (local_ac == local_b4) {
          FUN_011ca644(&local_b4);
        }
        local_c4 = local_b0;
        piVar7 = (int *)(local_b0 + uVar11 * 0x40);
        *piVar7 = local_80;
        piVar7[1] = local_7c;
        piVar7[2] = local_78;
        piVar7[3] = iStack_74;
        piVar7[4] = local_70;
        piVar7[5] = local_6c;
        piVar7[6] = iStack_68;
        piVar7[7] = iStack_64;
        piVar7[8] = iStack_60;
        piVar7[9] = iStack_5c;
        piVar7[10] = local_58;
        piVar7[0xb] = iStack_54;
        piVar7[0xc] = iStack_50;
        piVar7[0xd] = iStack_4c;
        piVar7[0xe] = iStack_48;
        piVar7[0xf] = iStack_44;
        uVar11 = uVar11 + 1;
        local_c8 = local_c8 + 1;
        local_ac = uVar11;
      }
    }
    else {
      FUN_011648d0(&local_80);
    }
  }
  uVar9 = local_c4;
  iVar5 = uVar11 << 6;
  do {
    iVar8 = iVar5;
    if (iVar8 == 0) {
      local_a8[1] = local_b4;
      local_98 = 0;
      local_a8[0] = 0x80000000;
      local_a8[2] = local_c4;
      local_a8[3] = uVar11;
      goto LAB_011b2c90;
    }
    pcVar1 = (char *)(uVar9 + 0x3c);
    uVar9 = uVar9 + 0x40;
    iVar5 = iVar8 + -0x40;
  } while (*pcVar1 != '\0');
  local_a8[3] = local_b4;
  local_a8[0] = 0;
  local_98 = local_c4;
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
  local_94 = uVar11;
LAB_011b2c90:
  FUN_011f1dd4(&local_40,&local_c0);
  local_7c = 1;
  local_80 = 1;
  local_78 = local_40;
  iStack_74 = local_3c;
  local_70 = iStack_38;
  local_6c = iStack_34;
  iStack_68 = iStack_30;
  iStack_64 = iStack_2c;
  piVar7 = (int *)thunk_FUN_016d4a50(0x20);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *piVar7 = local_80;
  piVar7[1] = local_7c;
  piVar7[2] = local_78;
  piVar7[3] = iStack_74;
  piVar7[4] = local_70;
  piVar7[5] = local_6c;
  piVar7[6] = iStack_68;
  piVar7[7] = iStack_64;
  iVar5 = 0x18;
  if (iVar8 == 0) {
    iVar5 = 0x10;
  }
  piVar4 = *(int **)((int)local_a8 + iVar5);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_a8 + iVar5));
    }
  }
  *(int **)((int)local_a8 + iVar5) = piVar7;
  *param_1 = local_a8[0];
  param_1[1] = local_a8[1];
  param_1[2] = local_a8[2];
  param_1[3] = local_a8[3];
  param_1[4] = local_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  return;
}

