// FUN_011b1eac @ 011b1eac size=1536 calls_out=12 calls_in=0
// strings: 

void FUN_011b1eac(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int local_f0;
  int local_e4;
  int local_e0;
  uint local_c8;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int *local_9c;
  int *local_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar19 = *(uint *)(param_3 + 0xc);
  iVar9 = uVar19 * 0xc;
  if (0xaaaaaaa < uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar9);
  }
  local_e4 = 4;
  local_f0 = 0;
  local_e0 = 4;
  local_b8 = 0;
  if (iVar9 != 0) {
    local_e0 = thunk_FUN_016d4a50(iVar9);
    local_b8 = uVar19;
    if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar9);
    }
  }
  piVar15 = *(int **)(param_2 + 4);
  iVar9 = *(int *)(param_2 + 8);
  local_b0 = 0;
  local_a4 = 0;
  local_a8 = 4;
  local_ac = 0;
  local_b4 = local_e0;
  if (iVar9 != 0) {
    iVar2 = *(int *)(param_3 + 4);
    uVar10 = *(uint *)(param_3 + 8);
    if (iVar2 == 0) {
      uVar19 = 0;
    }
    local_e4 = 4;
    local_f0 = 0;
    local_c8 = 0;
    piVar16 = piVar15;
    do {
      piVar3 = piVar16 + 6;
      iVar21 = 0;
      iVar12 = iVar2;
      uVar18 = uVar10;
      uVar20 = uVar19;
      bVar8 = iVar2 != 0;
      while( true ) {
        if (uVar20 == 0) break;
LAB_011b2034:
        if (!bVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a9ff4);
        }
        if (iVar21 == 0) {
          uVar13 = 0;
          iVar21 = iVar12;
          for (; uVar18 != 0; uVar18 = uVar18 - 1) {
            iVar21 = *(int *)(iVar21 + 0x198);
          }
          iVar12 = 0;
          if (*(short *)(iVar21 + 0x192) != 0) goto LAB_011b205c;
LAB_011b208c:
          do {
            iVar5 = *(int *)(iVar21 + 0x108);
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018aa004);
            }
            uVar13 = (uint)*(ushort *)(iVar21 + 400);
            iVar12 = iVar12 + 1;
            iVar21 = iVar5;
          } while (*(ushort *)(iVar5 + 0x192) <= uVar13);
        }
        else {
          uVar13 = uVar18;
          if (*(ushort *)(iVar21 + 0x192) <= uVar18) goto LAB_011b208c;
LAB_011b205c:
          iVar5 = iVar21;
        }
        if (iVar12 == 0) {
          uVar18 = uVar13 + 1;
          iVar21 = iVar5;
        }
        else {
          piVar4 = (int *)(iVar5 + uVar13 * 4 + 0x19c);
          do {
            iVar21 = *piVar4;
            iVar12 = iVar12 + -1;
            piVar4 = (int *)(iVar21 + 0x198);
          } while (iVar12 != 0);
          uVar18 = 0;
        }
        iVar12 = iVar5 + uVar13 * 0xc;
        FUN_00ff71dc(&local_a0,*piVar16 + 8,*(undefined4 *)(iVar12 + 0x110),
                     *(undefined4 *)(iVar12 + 0x114));
        piVar4 = local_9c;
        uVar20 = uVar20 - 1;
        if (local_a0 == 0x12) {
          if ((char)local_9c == '\0') goto LAB_011b2020;
          iVar17 = *(int *)(iVar12 + 0x114);
          uVar11 = *(undefined4 *)(iVar12 + 0x110);
          if (iVar17 == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = thunk_FUN_016d4a50(iVar17,uVar11);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar17);
            }
          }
          FUN_016dd1aa(iVar6,uVar11,iVar17);
          if (local_c8 == local_b8) {
            FUN_015f37b0(&local_b8);
            local_e0 = local_b4;
          }
          uVar14 = local_c8 + 1;
          piVar4 = (int *)(local_e0 + local_c8 * 0xc);
          *piVar4 = iVar17;
          piVar4[1] = iVar6;
          piVar4[2] = iVar17;
          local_60[1] = *(undefined4 *)(iVar12 + 0x110);
          local_60[2] = *(undefined4 *)(iVar12 + 0x114);
          local_60[0] = -0x80000000;
          local_b0 = uVar14;
          local_60[3] = param_4;
          FUN_011c9534(&local_a0,piVar16 + 1,iVar5 + uVar13 * 0x18,local_60,param_5,param_6);
          local_f0 = local_a4;
          if (local_a4 == local_ac) {
            FUN_011ca644(&local_ac);
          }
          local_e4 = local_a8;
          puVar7 = (uint *)(local_a8 + local_f0 * 0x40);
          *puVar7 = local_a0;
          puVar7[1] = (uint)local_9c;
          puVar7[2] = (uint)local_98;
          puVar7[3] = uStack_94;
          puVar7[4] = local_90;
          puVar7[5] = local_8c;
          puVar7[6] = uStack_88;
          puVar7[7] = uStack_84;
          puVar7[8] = uStack_80;
          puVar7[9] = uStack_7c;
          bVar8 = true;
          puVar7[10] = local_78;
          puVar7[0xb] = uStack_74;
          puVar7[0xc] = uStack_70;
          puVar7[0xd] = uStack_6c;
          puVar7[0xe] = uStack_68;
          puVar7[0xf] = uStack_64;
          local_f0 = local_f0 + 1;
          iVar12 = 0;
          local_c8 = uVar14;
          local_a4 = local_f0;
          if (uVar20 == 0) break;
          goto LAB_011b2034;
        }
        iVar12 = local_a0 - 0xf;
        if (local_a0 < 0xf) {
          iVar12 = 0;
        }
        if (iVar12 == 1) {
          iVar12 = *local_9c;
          uVar13 = iVar12 - 1;
          if (iVar12 == 0) {
            uVar13 = 0;
          }
          iVar5 = 4;
          if (7 < uVar13) goto LAB_011b2214;
          if ((1 << (uVar13 & 0xff) & 0xd6U) != 0) goto LAB_011b2180;
          if (uVar13 == 0) {
            if (iVar12 == 0) {
              uVar13 = local_9c[2];
LAB_011b2208:
              iVar5 = 0x24;
              if (uVar13 == 0x22) {
                iVar5 = 0xc;
              }
              goto LAB_011b2214;
            }
            uVar13 = local_9c[2];
            iVar12 = uVar13 - 0x22;
            if (uVar13 < 0x22) {
              iVar12 = 0;
            }
            if (iVar12 == 1) {
              iVar12 = local_9c[4];
              iVar5 = 0x10;
              if (iVar12 < -0x7ffffffc) goto LAB_011b2180;
              goto LAB_011b2218;
            }
            if (iVar12 == 0) goto LAB_011b2208;
          }
          else {
LAB_011b2214:
            iVar12 = *(int *)((int)local_9c + iVar5);
LAB_011b2218:
            if (iVar12 != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)((int)local_9c + iVar5 + 4));
            }
          }
LAB_011b2180:
          thunk_FUN_016d3fb4(piVar4);
        }
        else if (((iVar12 == 0) && ((1 << (local_a0 & 0xff) & 0x7bdeU) == 0)) &&
                (local_9c != (int *)0x0)) {
          piVar4 = local_98;
          goto LAB_011b2180;
        }
LAB_011b2020:
        bVar8 = true;
        iVar12 = 0;
      }
      piVar16 = piVar3;
    } while (piVar3 != piVar15 + iVar9 * 6);
  }
  iVar9 = local_e4;
  iVar2 = local_f0 << 6;
  do {
    iVar21 = iVar2;
    if (iVar21 == 0) {
      local_60[0] = -0x80000000;
      local_50 = 0;
      local_60[1] = local_ac;
      local_60[2] = local_e4;
      local_60[3] = local_f0;
      goto LAB_011b23b4;
    }
    pcVar1 = (char *)(iVar9 + 0x3c);
    iVar9 = iVar9 + 0x40;
    iVar2 = iVar21 + -0x40;
  } while (*pcVar1 != '\0');
  local_60[0] = 0;
  local_48 = 0;
  local_60[2] = 0;
  local_60[1] = 4;
  local_60[3] = local_ac;
  local_50 = local_e4;
  local_4c = local_f0;
LAB_011b23b4:
  FUN_011f1dd4(&local_40,&local_b8);
  local_9c = (int *)0x1;
  local_a0 = 1;
  local_98 = (int *)local_40;
  uStack_94 = uStack_3c;
  local_90 = uStack_38;
  local_8c = uStack_34;
  uStack_88 = uStack_30;
  uStack_84 = uStack_2c;
  puVar7 = (uint *)thunk_FUN_016d4a50(0x20);
  if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar7 = local_a0;
  puVar7[1] = (uint)local_9c;
  puVar7[2] = (uint)local_98;
  puVar7[3] = uStack_94;
  puVar7[4] = local_90;
  puVar7[5] = local_8c;
  puVar7[6] = uStack_88;
  puVar7[7] = uStack_84;
  iVar9 = 0x18;
  if (iVar21 == 0) {
    iVar9 = 0x10;
  }
  piVar15 = *(int **)((int)local_60 + iVar9);
  if (piVar15 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar15;
      bVar8 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar8);
    *piVar15 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_60 + iVar9));
    }
  }
  *(uint **)((int)local_60 + iVar9) = puVar7;
  *param_1 = local_60[0];
  param_1[1] = local_60[1];
  param_1[2] = local_60[2];
  param_1[3] = local_60[3];
  param_1[4] = local_50;
  param_1[5] = local_4c;
  param_1[6] = local_48;
  return;
}

