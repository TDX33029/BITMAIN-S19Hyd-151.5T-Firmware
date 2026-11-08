// FUN_011b06cc @ 011b06cc size=1312 calls_out=12 calls_in=0
// strings: 

void FUN_011b06cc(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int local_f0;
  int local_ec;
  int local_e0;
  uint local_dc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar18 = *(uint *)(param_3 + 0xc);
  iVar8 = uVar18 * 0xc;
  if (0xaaaaaaa < uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar8);
  }
  local_e0 = 4;
  local_f0 = 0;
  local_ec = 4;
  local_b8 = 0;
  if (iVar8 != 0) {
    local_ec = thunk_FUN_016d4a50(iVar8);
    local_b8 = uVar18;
    if (local_ec == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar8);
    }
  }
  piVar12 = *(int **)(param_2 + 4);
  iVar8 = *(int *)(param_2 + 8);
  local_b0 = 0;
  local_a4 = 0;
  local_a8 = 4;
  local_ac = 0;
  local_b4 = local_ec;
  if (iVar8 != 0) {
    iVar2 = *(int *)(param_3 + 4);
    uVar9 = *(uint *)(param_3 + 8);
    if (iVar2 == 0) {
      uVar18 = 0;
    }
    local_e0 = 4;
    local_f0 = 0;
    local_dc = 0;
    piVar6 = piVar12;
    do {
      piVar3 = piVar6 + 6;
      iVar17 = 0;
      iVar11 = iVar2;
      uVar19 = uVar9;
      uVar15 = uVar18;
      bVar7 = iVar2 != 0;
      while( true ) {
        if (uVar15 == 0) break;
LAB_011b0854:
        if (!bVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a9ff4);
        }
        if (iVar17 == 0) {
          uVar10 = 0;
          iVar17 = iVar11;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            iVar17 = *(int *)(iVar17 + 0x198);
          }
          iVar11 = 0;
          if (*(short *)(iVar17 + 0x192) == 0) goto LAB_011b08ac;
LAB_011b087c:
          iVar20 = iVar17;
        }
        else {
          uVar10 = uVar19;
          if (uVar19 < *(ushort *)(iVar17 + 0x192)) goto LAB_011b087c;
LAB_011b08ac:
          do {
            iVar20 = *(int *)(iVar17 + 0x108);
            if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018aa004);
            }
            uVar10 = (uint)*(ushort *)(iVar17 + 400);
            iVar11 = iVar11 + 1;
            iVar17 = iVar20;
          } while (*(ushort *)(iVar20 + 0x192) <= uVar10);
        }
        if (iVar11 == 0) {
          uVar19 = uVar10 + 1;
          iVar17 = iVar20;
        }
        else {
          piVar4 = (int *)(iVar20 + uVar10 * 4 + 0x19c);
          do {
            iVar17 = *piVar4;
            iVar11 = iVar11 + -1;
            piVar4 = (int *)(iVar17 + 0x198);
          } while (iVar11 != 0);
          uVar19 = 0;
        }
        iVar11 = iVar20 + uVar10 * 0xc;
        FUN_01265b90(&local_a0,*(undefined4 *)(*piVar6 + 8),*(undefined4 *)(*piVar6 + 0xc),
                     *(undefined4 *)(iVar11 + 0x110),*(undefined4 *)(iVar11 + 0x114));
        uVar15 = uVar15 - 1;
        if (local_a0 == -0x80000000 || local_a0 == 0) goto LAB_011b083c;
        if (local_a0 == -0x7fffffff) {
          if ((char)local_9c == '\0') goto LAB_011b083c;
          uVar13 = *(undefined4 *)(iVar11 + 0x110);
          iVar16 = *(int *)(iVar11 + 0x114);
          if (iVar16 == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = thunk_FUN_016d4a50(iVar16);
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar16);
            }
          }
          FUN_016dd1aa(iVar5,uVar13,iVar16);
          if (local_dc == local_b8) {
            FUN_015f37b0(&local_b8);
            local_ec = local_b4;
          }
          uVar14 = local_dc + 1;
          piVar4 = (int *)(local_ec + local_dc * 0xc);
          *piVar4 = iVar16;
          piVar4[1] = iVar5;
          piVar4[2] = iVar16;
          local_60[1] = *(undefined4 *)(iVar11 + 0x110);
          local_60[2] = *(undefined4 *)(iVar11 + 0x114);
          local_60[0] = -0x80000000;
          local_b0 = uVar14;
          local_60[3] = param_4;
          FUN_011c9534(&local_a0,piVar6 + 1,iVar20 + uVar10 * 0x18,local_60,param_5,param_6);
          local_f0 = local_a4;
          if (local_a4 == local_ac) {
            FUN_011ca644(&local_ac);
          }
          local_e0 = local_a8;
          piVar4 = (int *)(local_a8 + local_f0 * 0x40);
          *piVar4 = local_a0;
          piVar4[1] = local_9c;
          piVar4[2] = local_98;
          piVar4[3] = iStack_94;
          piVar4[4] = local_90;
          piVar4[5] = local_8c;
          piVar4[6] = iStack_88;
          piVar4[7] = iStack_84;
          piVar4[8] = iStack_80;
          piVar4[9] = iStack_7c;
          bVar7 = true;
          piVar4[10] = local_78;
          piVar4[0xb] = iStack_74;
          piVar4[0xc] = iStack_70;
          piVar4[0xd] = iStack_6c;
          piVar4[0xe] = iStack_68;
          piVar4[0xf] = iStack_64;
          local_f0 = local_f0 + 1;
          iVar11 = 0;
          local_dc = uVar14;
          local_a4 = local_f0;
          if (uVar15 == 0) break;
          goto LAB_011b0854;
        }
        thunk_FUN_016d3fb4(local_9c);
LAB_011b083c:
        bVar7 = true;
        iVar11 = 0;
      }
      piVar6 = piVar3;
    } while (piVar3 != piVar12 + iVar8 * 6);
  }
  iVar8 = local_e0;
  iVar2 = local_f0 << 6;
  do {
    iVar17 = iVar2;
    if (iVar17 == 0) {
      local_60[0] = -0x80000000;
      local_50 = 0;
      local_60[1] = local_ac;
      local_60[2] = local_e0;
      local_60[3] = local_f0;
      goto LAB_011b0af4;
    }
    pcVar1 = (char *)(iVar8 + 0x3c);
    iVar8 = iVar8 + 0x40;
    iVar2 = iVar17 + -0x40;
  } while (*pcVar1 != '\0');
  local_60[0] = 0;
  local_48 = 0;
  local_60[2] = 0;
  local_60[1] = 4;
  local_60[3] = local_ac;
  local_50 = local_e0;
  local_4c = local_f0;
LAB_011b0af4:
  FUN_011f1dd4(&local_40,&local_b8);
  local_9c = 1;
  local_a0 = 1;
  local_98 = local_40;
  iStack_94 = iStack_3c;
  local_90 = iStack_38;
  local_8c = iStack_34;
  iStack_88 = iStack_30;
  iStack_84 = iStack_2c;
  piVar12 = (int *)thunk_FUN_016d4a50(0x20);
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *piVar12 = local_a0;
  piVar12[1] = local_9c;
  piVar12[2] = local_98;
  piVar12[3] = iStack_94;
  piVar12[4] = local_90;
  piVar12[5] = local_8c;
  piVar12[6] = iStack_88;
  piVar12[7] = iStack_84;
  iVar8 = 0x18;
  if (iVar17 == 0) {
    iVar8 = 0x10;
  }
  piVar6 = *(int **)((int)local_60 + iVar8);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar7);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_60 + iVar8));
    }
  }
  *(int **)((int)local_60 + iVar8) = piVar12;
  *param_1 = local_60[0];
  param_1[1] = local_60[1];
  param_1[2] = local_60[2];
  param_1[3] = local_60[3];
  param_1[4] = local_50;
  param_1[5] = local_4c;
  param_1[6] = local_48;
  return;
}

