// FUN_0124ac58 @ 0124ac58 size=1120 calls_out=10 calls_in=0
// strings: 

void FUN_0124ac58(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int local_e4;
  int local_c8;
  uint local_c4;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 != '\x05') {
    param_1[2] = 4;
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar12 = *(uint *)(param_3 + 0xc);
  iVar10 = uVar12 * 0xc;
  if (0xaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar10);
  }
  iVar18 = 4;
  local_c8 = 4;
  local_b8 = 0;
  if (iVar10 != 0) {
    local_c8 = thunk_FUN_016d4a50(iVar10);
    local_b8 = uVar12;
    if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar10);
    }
  }
  local_e4 = 0;
  iVar10 = *(int *)(param_2 + 4);
  local_b0 = 0;
  local_a4 = 0;
  local_a8 = 4;
  local_ac = 0;
  local_b4 = local_c8;
  if (*(int *)(param_2 + 8) != 0) {
    iVar4 = iVar10 + *(int *)(param_2 + 8) * 0x20;
    iVar14 = *(int *)(param_3 + 4);
    iVar18 = 4;
    iVar5 = *(int *)(param_3 + 8);
    local_e4 = 0;
    local_c4 = 0;
LAB_0124ada4:
    if (iVar14 != 0) {
      uVar11 = *(undefined4 *)(iVar10 + 4);
      uVar12 = *(uint *)(iVar10 + 8);
      iVar15 = iVar14;
      local_bc = iVar5;
      do {
        iVar16 = iVar15 + 0x10c;
        uVar2 = *(ushort *)(iVar15 + 0x192);
        uVar19 = 0xffffffff;
        iVar20 = (uint)uVar2 * 0xc;
        do {
          uVar9 = (uint)uVar2;
          if (iVar20 == 0) goto joined_r0x0124ae64;
          uVar13 = *(uint *)(iVar16 + 8);
          uVar9 = uVar13;
          if (uVar12 < uVar13) {
            uVar9 = uVar12;
          }
          iVar6 = FUN_016dd50a(uVar11,*(undefined4 *)(iVar16 + 4),uVar9);
          if (iVar6 == 0) {
            iVar6 = uVar12 - uVar13;
          }
          iVar20 = iVar20 + -0xc;
          uVar19 = uVar19 + 1;
          iVar16 = iVar16 + 0xc;
        } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
        uVar9 = uVar19;
        if (0 < iVar6 == iVar6 < 0) {
          local_60[0] = -0x80000000;
          iVar18 = *(int *)(iVar10 + 8);
          uVar17 = *(undefined4 *)(iVar10 + 4);
          local_60[1] = uVar11;
          local_60[2] = uVar12;
          local_60[3] = param_4;
          if (iVar18 == 0) {
            iVar20 = 1;
          }
          else {
            iVar20 = thunk_FUN_016d4a50(iVar18);
            if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar18);
            }
          }
          FUN_016dd1aa(iVar20,uVar17,iVar18);
          if (local_c4 == local_b8) {
            FUN_015f37b0(&local_b8);
            local_c8 = local_b4;
          }
          piVar8 = (int *)(local_c8 + local_c4 * 0xc);
          *piVar8 = iVar18;
          piVar8[1] = iVar20;
          piVar8[2] = iVar18;
          local_b0 = local_c4 + 1;
          FUN_011c9534(&local_a0,iVar10 + 0xc,iVar15 + uVar19 * 0x18,local_60,param_5,param_6);
          local_e4 = local_a4;
          if (local_a4 == local_ac) {
            FUN_011ca644(&local_ac);
          }
          puVar7 = (undefined4 *)(local_a8 + local_e4 * 0x40);
          *puVar7 = local_a0;
          puVar7[1] = local_9c;
          puVar7[2] = local_98;
          puVar7[3] = uStack_94;
          puVar7[4] = local_90;
          puVar7[5] = local_8c;
          puVar7[6] = uStack_88;
          puVar7[7] = uStack_84;
          puVar7[8] = uStack_80;
          puVar7[9] = uStack_7c;
          puVar7[10] = local_78;
          puVar7[0xb] = uStack_74;
          puVar7[0xc] = uStack_70;
          puVar7[0xd] = uStack_6c;
          puVar7[0xe] = uStack_68;
          puVar7[0xf] = uStack_64;
          local_e4 = local_e4 + 1;
          iVar18 = local_a8;
          local_c4 = local_c4 + 1;
          local_a4 = local_e4;
          break;
        }
joined_r0x0124ae64:
        if (local_bc == 0) goto LAB_0124af58;
        local_bc = local_bc + -1;
        iVar15 = *(int *)(iVar15 + uVar9 * 4 + 0x198);
      } while( true );
    }
    goto LAB_0124ad94;
  }
LAB_0124af70:
  iVar10 = iVar18;
  iVar4 = local_e4 << 6;
  do {
    iVar5 = iVar4;
    if (iVar5 == 0) {
      local_60[0] = -0x80000000;
      local_50 = 0;
      local_60[1] = local_ac;
      local_60[2] = iVar18;
      local_60[3] = local_e4;
      goto LAB_0124afd4;
    }
    pcVar1 = (char *)(iVar10 + 0x3c);
    iVar10 = iVar10 + 0x40;
    iVar4 = iVar5 + -0x40;
  } while (*pcVar1 != '\0');
  local_60[0] = 0;
  local_48 = 0;
  local_60[2] = 0;
  local_60[1] = 4;
  local_60[3] = local_ac;
  local_50 = iVar18;
  local_4c = local_e4;
LAB_0124afd4:
  FUN_011f1dd4(&local_40,&local_b8);
  local_9c = 1;
  local_a0 = 1;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  local_90 = uStack_38;
  local_8c = uStack_34;
  uStack_88 = uStack_30;
  uStack_84 = uStack_2c;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar7 = local_a0;
  puVar7[1] = local_9c;
  puVar7[2] = local_98;
  puVar7[3] = uStack_94;
  puVar7[4] = local_90;
  puVar7[5] = local_8c;
  puVar7[6] = uStack_88;
  puVar7[7] = uStack_84;
  iVar10 = 0x18;
  if (iVar5 == 0) {
    iVar10 = 0x10;
  }
  piVar8 = *(int **)((int)local_60 + iVar10);
  if (piVar8 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar8;
      bVar3 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar3);
    *piVar8 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_60 + iVar10));
    }
  }
  *(undefined4 **)((int)local_60 + iVar10) = puVar7;
  *param_1 = local_60[0];
  param_1[1] = local_60[1];
  param_1[2] = local_60[2];
  param_1[3] = local_60[3];
  param_1[4] = local_50;
  param_1[5] = local_4c;
  param_1[6] = local_48;
  return;
LAB_0124af58:
LAB_0124ad94:
  iVar10 = iVar10 + 0x20;
  if (iVar10 == iVar4) goto LAB_0124af70;
  goto LAB_0124ada4;
}

