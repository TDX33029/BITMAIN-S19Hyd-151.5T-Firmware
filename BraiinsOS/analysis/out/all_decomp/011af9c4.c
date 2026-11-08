// FUN_011af9c4 @ 011af9c4 size=1300 calls_out=11 calls_in=0
// strings: 

void FUN_011af9c4(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_c8;
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
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar17 = *(uint *)(param_3 + 0xc);
  iVar9 = uVar17 * 0xc;
  if (0xaaaaaaa < uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar9);
  }
  local_d4 = 4;
  local_d8 = 0;
  local_c8 = 4;
  local_b8 = 0;
  if (iVar9 != 0) {
    local_c8 = thunk_FUN_016d4a50(iVar9);
    local_b8 = uVar17;
    if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar9);
    }
  }
  piVar13 = *(int **)(param_2 + 4);
  iVar9 = *(int *)(param_2 + 8);
  local_b0 = 0;
  local_a4 = 0;
  local_a8 = 4;
  local_ac = 0;
  local_b4 = local_c8;
  if (iVar9 != 0) {
    iVar4 = *(int *)(param_3 + 4);
    uVar10 = *(uint *)(param_3 + 8);
    if (iVar4 == 0) {
      uVar17 = 0;
    }
    local_d4 = 4;
    local_d8 = 0;
    local_d0 = 0;
    piVar14 = piVar13;
    do {
      piVar5 = piVar14 + 6;
      iVar19 = 0;
      iVar16 = iVar4;
      uVar22 = uVar10;
      uVar6 = (uint)(iVar4 != 0);
      uVar23 = uVar17;
joined_r0x011afb20:
      if (uVar23 != 0) {
        do {
          if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018a9ff4);
          }
          if (iVar19 == 0) {
            uVar7 = 0;
            if (uVar22 == 0) {
              iVar11 = 0;
              goto LAB_011afb9c;
            }
            do {
              iVar16 = *(int *)(iVar16 + 0x198);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
            iVar11 = 0;
            if (*(short *)(iVar16 + 0x192) == 0) goto LAB_011afbe8;
LAB_011afbb0:
            iVar20 = iVar16;
          }
          else {
            uVar7 = uVar22;
            iVar11 = iVar16;
            iVar16 = iVar19;
LAB_011afb9c:
            if (uVar7 < *(ushort *)(iVar16 + 0x192)) goto LAB_011afbb0;
LAB_011afbe8:
            do {
              iVar20 = *(int *)(iVar16 + 0x108);
              if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_018aa004);
              }
              uVar7 = (uint)*(ushort *)(iVar16 + 400);
              iVar11 = iVar11 + 1;
              iVar16 = iVar20;
            } while (*(ushort *)(iVar20 + 0x192) <= uVar7);
          }
          if (iVar11 == 0) {
            uVar22 = uVar7 + 1;
            iVar19 = iVar20;
          }
          else {
            piVar12 = (int *)(iVar20 + uVar7 * 4 + 0x19c);
            do {
              iVar19 = *piVar12;
              iVar11 = iVar11 + -1;
              piVar12 = (int *)(iVar19 + 0x198);
            } while (iVar11 != 0);
            uVar22 = 0;
          }
          uVar23 = uVar23 - 1;
          iVar21 = iVar20 + uVar7 * 0xc;
          iVar11 = *(int *)(iVar21 + 0x114);
          uVar18 = *(undefined4 *)(iVar21 + 0x110);
          cVar3 = FUN_011af09c(*piVar14 + 8,uVar18,iVar11);
          uVar6 = 1;
          iVar16 = 0;
          if (cVar3 == '\0') goto joined_r0x011afb20;
          if ((iVar11 != 0) && (uVar6 = thunk_FUN_016d4a50(iVar11), uVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar11);
          }
          FUN_016dd1aa(uVar6,uVar18);
          if (local_d0 == local_b8) {
            FUN_015f37b0(&local_b8);
            local_c8 = local_b4;
          }
          uVar15 = local_d0 + 1;
          piVar12 = (int *)(local_c8 + local_d0 * 0xc);
          *piVar12 = iVar11;
          piVar12[1] = uVar6;
          piVar12[2] = iVar11;
          local_60[1] = *(undefined4 *)(iVar21 + 0x110);
          local_60[2] = *(undefined4 *)(iVar21 + 0x114);
          local_60[0] = -0x80000000;
          local_b0 = uVar15;
          local_60[3] = param_4;
          FUN_011c9534(&local_a0,piVar14 + 1,iVar20 + uVar7 * 0x18,local_60,param_5,param_6);
          local_d8 = local_a4;
          if (local_a4 == local_ac) {
            FUN_011ca644(&local_ac);
          }
          local_d4 = local_a8;
          puVar8 = (undefined4 *)(local_a8 + local_d8 * 0x40);
          *puVar8 = local_a0;
          puVar8[1] = local_9c;
          puVar8[2] = local_98;
          puVar8[3] = uStack_94;
          puVar8[4] = local_90;
          puVar8[5] = local_8c;
          puVar8[6] = uStack_88;
          puVar8[7] = uStack_84;
          puVar8[8] = uStack_80;
          puVar8[9] = uStack_7c;
          puVar8[10] = local_78;
          puVar8[0xb] = uStack_74;
          puVar8[0xc] = uStack_70;
          puVar8[0xd] = uStack_6c;
          puVar8[0xe] = uStack_68;
          puVar8[0xf] = uStack_64;
          local_d8 = local_d8 + 1;
          uVar6 = 1;
          local_d0 = uVar15;
          local_a4 = local_d8;
          if (uVar23 == 0) break;
        } while( true );
      }
      piVar14 = piVar5;
    } while (piVar5 != piVar13 + iVar9 * 6);
  }
  iVar9 = local_d4;
  iVar4 = local_d8 << 6;
  do {
    iVar16 = iVar4;
    if (iVar16 == 0) {
      local_60[0] = -0x80000000;
      local_50 = 0;
      local_60[1] = local_ac;
      local_60[2] = local_d4;
      local_60[3] = local_d8;
      goto LAB_011afde0;
    }
    pcVar1 = (char *)(iVar9 + 0x3c);
    iVar9 = iVar9 + 0x40;
    iVar4 = iVar16 + -0x40;
  } while (*pcVar1 != '\0');
  local_60[0] = 0;
  local_48 = 0;
  local_60[2] = 0;
  local_60[1] = 4;
  local_60[3] = local_ac;
  local_50 = local_d4;
  local_4c = local_d8;
LAB_011afde0:
  FUN_011f1dd4(&local_40,&local_b8);
  local_9c = 1;
  local_a0 = 1;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  local_90 = uStack_38;
  local_8c = uStack_34;
  uStack_88 = uStack_30;
  uStack_84 = uStack_2c;
  puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  iVar9 = 0x18;
  *puVar8 = local_a0;
  puVar8[1] = local_9c;
  puVar8[2] = local_98;
  puVar8[3] = uStack_94;
  if (iVar16 == 0) {
    iVar9 = 0x10;
  }
  puVar8[4] = local_90;
  puVar8[5] = local_8c;
  puVar8[6] = uStack_88;
  puVar8[7] = uStack_84;
  piVar13 = *(int **)((int)local_60 + iVar9);
  if (piVar13 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_60 + iVar9));
    }
  }
  *(undefined4 **)((int)local_60 + iVar9) = puVar8;
  *param_1 = local_60[0];
  param_1[1] = local_60[1];
  param_1[2] = local_60[2];
  param_1[3] = local_60[3];
  param_1[4] = local_50;
  param_1[5] = local_4c;
  param_1[6] = local_48;
  return;
}

