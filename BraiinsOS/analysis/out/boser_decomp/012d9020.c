// FUN_012d9020 @ 012d9020 size=1504 calls_out=16 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012d9020(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined1 *puVar17;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int iStack_68;
  undefined2 local_64;
  int *local_60;
  int *piStack_5c;
  undefined1 *puStack_58;
  int *local_50;
  int *local_4c;
  undefined1 *local_48;
  int *local_40;
  int *local_3c;
  undefined1 *local_38;
  int local_34;
  undefined4 local_30;
  
  iVar11 = *param_2;
  iVar13 = param_2[3];
  local_64 = 0x100;
  local_7c = -0x80000000;
  do {
    iVar3 = *param_3;
    bVar6 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar6);
  *param_3 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x12d9610);
    (*pcVar1)();
  }
  iVar3 = *(int *)(iVar13 + 0x28);
  if (iVar3 == *(int *)(iVar13 + 0x20)) {
    FUN_018c4418();
  }
  puVar4 = (undefined4 *)(*(int *)(iVar13 + 0x24) + iVar3 * 0xc);
  *puVar4 = param_3;
  local_30 = 0;
  puVar4[1] = iVar11;
  puVar4[2] = &local_7c;
  *(int *)(iVar13 + 0x28) = iVar3 + 1;
  local_40 = *(int **)(iVar13 + 0x18);
  local_34 = *(int *)(iVar13 + 0x1c);
  *(undefined4 *)(iVar13 + 0x1c) = 0;
  local_38 = (undefined1 *)(iVar13 + 0x14);
  local_3c = local_40 + local_34 * 3;
  if (local_34 != 0) {
    do {
      piVar15 = (int *)*local_40;
      piVar8 = local_40 + 1;
      local_40 = local_40 + 3;
      piVar16 = piVar15 + 3;
      if (*piVar16 == 0) {
        DataMemoryBarrier(0xb);
LAB_012d9100:
        bVar6 = (bool)hasExclusiveAccess(piVar16);
        if (!bVar6) goto code_r0x012d910c;
        *piVar16 = *piVar8;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar8 = (int *)(piVar15[2] + 0x18);
        do {
          iVar3 = *piVar8;
          bVar6 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar6);
        *piVar8 = 1;
        if (iVar3 == -1) {
          FUN_01be6c3c(0xf0,piVar8,0x81,1);
        }
        goto LAB_012d9120;
      }
LAB_012d9118:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_012d9120:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar15;
        bVar6 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar6);
      *piVar15 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db128(piVar15);
      }
    } while (local_40 != local_3c);
  }
  FUN_01656d48(&local_40);
  FUN_00a97e8c(iVar13,(char)param_2[4]);
  puVar4 = (undefined4 *)param_2[1];
  piVar15 = param_3 + 3;
  piVar8 = (int *)*puVar4;
  piVar16 = (int *)puVar4[1];
  puVar17 = (undefined1 *)puVar4[2];
  while( true ) {
    iVar13 = *piVar15;
    DataMemoryBarrier(0xb);
    if (iVar13 == 2) break;
    if (iVar13 == 1) goto LAB_012d93a0;
    if (iVar13 != 0) goto LAB_012d9368;
    if (puVar17 == &DAT_3b9aca00) {
      FUN_019b0a28(param_3[2]);
    }
    else {
      FUN_019ac130(&local_40,1);
      bVar6 = (int)local_3c - (int)((int)piVar16 + (uint)(local_40 < piVar8)) < 0 ==
              (SBORROW4((int)local_3c,(int)piVar16) !=
              SBORROW4((int)local_3c - (int)piVar16,(uint)(local_40 < piVar8)));
      if (local_40 == piVar8 && local_3c == piVar16) {
        bVar6 = puVar17 <= local_38;
      }
      if (bVar6) {
        iVar13 = *piVar15;
        if (iVar13 != 0) goto LAB_012d933c;
        bVar6 = true;
        DataMemoryBarrier(0xb);
        goto LAB_012d9324;
      }
      local_4c = local_3c;
      local_50 = local_40;
      local_48 = local_38;
      local_60 = piVar8;
      piStack_5c = piVar16;
      puStack_58 = puVar17;
      FUN_019ac248(&local_40,&local_60,&local_50);
      piVar14 = (int *)(param_3[2] + 0x18);
      do {
        iVar13 = *piVar14;
        bVar6 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar6);
      *piVar14 = iVar13 + -1;
      DataMemoryBarrier(0xb);
      if (iVar13 != 1) {
        puVar9 = local_38;
        iVar13 = local_34;
        uVar5 = local_30;
        if (((uint)local_40 & 1) != 0) {
          uVar5 = 0;
          iVar13 = 0;
          puVar9 = (undefined1 *)0x0;
        }
        FUN_019ae574(piVar14,local_40,puVar9,iVar13,uVar5);
        do {
          bVar6 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar6);
        *piVar14 = 0;
        DataMemoryBarrier(0xb);
      }
    }
  }
  goto LAB_012d9458;
code_r0x012d910c:
  if (*piVar16 != 0) goto LAB_012d9118;
  goto LAB_012d9100;
  while (iVar13 = *piVar15, iVar13 == 0) {
LAB_012d9324:
    bVar2 = (bool)hasExclusiveAccess(piVar15);
    if (bVar2) {
      *piVar15 = 1;
      goto LAB_012d9344;
    }
  }
LAB_012d933c:
  bVar6 = false;
  ClearExclusiveLocal();
LAB_012d9344:
  DataMemoryBarrier(0xb);
  if ((bVar6) || (iVar13 == 1)) {
LAB_012d93a0:
    FUN_01656cb0(&local_40,param_2[2]);
    piVar8 = local_3c;
    if (local_40 == (int *)&DAT_00000001) {
      local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
      local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce36f8,&DAT_01ce36a8);
    }
    uVar12 = (uint)local_38 & 0xff;
    iVar3 = local_3c[9];
    iVar13 = local_3c[10] * 0xc;
    iVar10 = -1;
    do {
      if (iVar13 == 0) goto LAB_012d95d0;
      piVar16 = (int *)(iVar3 + 4);
      iVar13 = iVar13 + -0xc;
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 0xc;
    } while (*piVar16 != iVar11);
    FUN_012e8fb8(&local_40,local_3c + 8,iVar10,&DAT_01d06a88);
    if (local_40 == (int *)0x0) {
LAB_012d95d0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce36b8);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *local_40;
      bVar6 = (bool)hasExclusiveAccess(local_40);
    } while (!bVar6);
    *local_40 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db128();
    }
    FUN_00a97e8c(piVar8,uVar12);
    uVar7 = 0;
    goto LAB_012d950c;
  }
  if (iVar13 != 2) {
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01ce3698);
    }
LAB_012d9368:
    FUN_012d8ba8(&local_7c);
    iVar11 = local_7c;
    local_7c = -0x80000000;
    if (iVar11 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce36e8);
    }
    param_1[1] = local_78;
    param_1[2] = iStack_74;
    param_1[3] = local_70;
    param_1[4] = local_6c;
    param_1[5] = iStack_68;
    *param_1 = iVar11;
    return;
  }
LAB_012d9458:
  FUN_01656cb0(&local_40,param_2[2]);
  piVar8 = local_3c;
  if (local_40 == (int *)&DAT_00000001) {
    local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
    local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce36f8,&DAT_01ce36c8);
  }
  uVar12 = (uint)local_38 & 0xff;
  iVar3 = local_3c[9];
  iVar13 = local_3c[10] * 0xc;
  iVar10 = -1;
  do {
    if (iVar13 == 0) goto LAB_012d95e0;
    piVar16 = (int *)(iVar3 + 4);
    iVar13 = iVar13 + -0xc;
    iVar10 = iVar10 + 1;
    iVar3 = iVar3 + 0xc;
  } while (*piVar16 != iVar11);
  FUN_012e8fb8(&local_40,local_3c + 8,iVar10,&DAT_01d06a88);
  if (local_40 == (int *)0x0) {
LAB_012d95e0:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce36d8);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *local_40;
    bVar6 = (bool)hasExclusiveAccess(local_40);
  } while (!bVar6);
  *local_40 = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db128();
  }
  FUN_00a97e8c(piVar8,uVar12);
  uVar7 = 1;
LAB_012d950c:
  *(undefined1 *)(param_1 + 1) = uVar7;
  *param_1 = -0x80000000;
  if (local_7c != -0x80000000) {
    FUN_019bb7e0(local_7c,local_78);
    FUN_019bb7e0(local_70,local_6c);
  }
  return;
}

