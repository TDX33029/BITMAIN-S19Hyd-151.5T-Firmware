// FUN_012d97d8 @ 012d97d8 size=1564 calls_out=16 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012d97d8(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  bool bVar7;
  int *piVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  int *piVar18;
  undefined4 uVar19;
  int *piVar20;
  int iVar21;
  undefined1 *puVar22;
  int local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  int local_70;
  int iStack_6c;
  undefined2 local_68;
  int *local_60;
  int *local_5c;
  undefined1 *local_58;
  int *local_50;
  int *local_4c;
  undefined1 *local_48;
  int *local_40;
  int *local_3c;
  undefined1 *local_38;
  int local_34;
  undefined4 local_30;
  
  local_68 = 0x100;
  iVar21 = param_2[8];
  local_80 = *param_2;
  local_7c = param_2[1];
  iStack_78 = param_2[2];
  local_74 = param_2[3];
  local_70 = param_2[4];
  iStack_6c = param_2[5];
  iVar17 = param_2[6];
  do {
    iVar3 = *param_3;
    bVar7 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar7);
  *param_3 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x12d9e04);
    (*pcVar1)();
  }
  iVar3 = *(int *)(iVar17 + 0x10);
  if (iVar3 == *(int *)(iVar17 + 8)) {
    FUN_018c4418();
  }
  puVar4 = (undefined4 *)(*(int *)(iVar17 + 0xc) + iVar3 * 0xc);
  *puVar4 = param_3;
  local_30 = 0;
  puVar4[1] = iVar21;
  puVar4[2] = &local_80;
  *(int *)(iVar17 + 0x10) = iVar3 + 1;
  local_40 = *(int **)(iVar17 + 0x30);
  local_34 = *(int *)(iVar17 + 0x34);
  *(undefined4 *)(iVar17 + 0x34) = 0;
  local_38 = (undefined1 *)(iVar17 + 0x2c);
  local_3c = local_40 + local_34 * 3;
  if (local_34 != 0) {
    do {
      piVar20 = (int *)*local_40;
      piVar8 = local_40 + 1;
      local_40 = local_40 + 3;
      piVar12 = piVar20 + 3;
      if (*piVar12 == 0) {
        DataMemoryBarrier(0xb);
LAB_012d98b4:
        bVar7 = (bool)hasExclusiveAccess(piVar12);
        if (!bVar7) goto code_r0x012d98c0;
        *piVar12 = *piVar8;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar8 = (int *)(piVar20[2] + 0x18);
        do {
          iVar3 = *piVar8;
          bVar7 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar7);
        *piVar8 = 1;
        if (iVar3 == -1) {
          FUN_01be6c3c(0xf0,piVar8,0x81,1);
        }
        goto LAB_012d98d4;
      }
LAB_012d98cc:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_012d98d4:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar20;
        bVar7 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar7);
      *piVar20 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db128(piVar20);
      }
    } while (local_40 != local_3c);
  }
  FUN_01656d48(&local_40);
  FUN_00a97e8c(iVar17,(char)param_2[7]);
  puVar4 = (undefined4 *)param_2[9];
  piVar20 = param_3 + 3;
  piVar8 = (int *)*puVar4;
  piVar12 = (int *)puVar4[1];
  puVar22 = (undefined1 *)puVar4[2];
  while( true ) {
    iVar17 = *piVar20;
    DataMemoryBarrier(0xb);
    if (iVar17 == 2) break;
    if (iVar17 == 1) goto LAB_012d9b68;
    if (iVar17 != 0) goto LAB_012d9b30;
    if (puVar22 == &DAT_3b9aca00) {
      FUN_019b0a28(param_3[2]);
    }
    else {
      FUN_019ac130(&local_40,1);
      bVar7 = (int)local_3c - (int)((int)piVar12 + (uint)(local_40 < piVar8)) < 0 ==
              (SBORROW4((int)local_3c,(int)piVar12) !=
              SBORROW4((int)local_3c - (int)piVar12,(uint)(local_40 < piVar8)));
      if (local_40 == piVar8 && local_3c == piVar12) {
        bVar7 = puVar22 <= local_38;
      }
      if (bVar7) {
        iVar17 = *piVar20;
        if (iVar17 != 0) goto LAB_012d9b04;
        bVar7 = true;
        DataMemoryBarrier(0xb);
        goto LAB_012d9aec;
      }
      local_4c = local_3c;
      local_50 = local_40;
      local_48 = local_38;
      local_60 = piVar8;
      local_5c = piVar12;
      local_58 = puVar22;
      FUN_019ac248(&local_40,&local_60,&local_50);
      piVar18 = (int *)(param_3[2] + 0x18);
      do {
        iVar17 = *piVar18;
        bVar7 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar7);
      *piVar18 = iVar17 + -1;
      DataMemoryBarrier(0xb);
      if (iVar17 != 1) {
        puVar9 = local_38;
        iVar17 = local_34;
        uVar5 = local_30;
        if (((uint)local_40 & 1) != 0) {
          uVar5 = 0;
          iVar17 = 0;
          puVar9 = (undefined1 *)0x0;
        }
        FUN_019ae574(piVar18,local_40,puVar9,iVar17,uVar5);
        do {
          bVar7 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar7);
        *piVar18 = 0;
        DataMemoryBarrier(0xb);
      }
    }
  }
  goto LAB_012d9c44;
code_r0x012d98c0:
  if (*piVar12 != 0) goto LAB_012d98cc;
  goto LAB_012d98b4;
  while (iVar17 = *piVar20, iVar17 == 0) {
LAB_012d9aec:
    bVar2 = (bool)hasExclusiveAccess(piVar20);
    if (bVar2) {
      *piVar20 = 1;
      goto LAB_012d9b0c;
    }
  }
LAB_012d9b04:
  bVar7 = false;
  ClearExclusiveLocal();
LAB_012d9b0c:
  DataMemoryBarrier(0xb);
  if ((bVar7) || (iVar17 == 1)) {
LAB_012d9b68:
    FUN_01656cb0(&local_40,param_2[10]);
    piVar8 = local_3c;
    if (local_40 == (int *)&DAT_00000001) {
      local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
      local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce36f8,&DAT_01d06a18);
    }
    uVar15 = (uint)local_38 & 0xff;
    iVar3 = local_3c[3];
    iVar17 = local_3c[4] * 0xc;
    iVar10 = -1;
    do {
      if (iVar17 == 0) goto LAB_012d9dc4;
      piVar12 = (int *)(iVar3 + 4);
      iVar17 = iVar17 + -0xc;
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 0xc;
    } while (*piVar12 != iVar21);
    FUN_012e8fb8(&local_40,local_3c + 2,iVar10,&DAT_01d06a88);
    if (local_40 == (int *)0x0) {
LAB_012d9dc4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d06a28);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *local_40;
      bVar7 = (bool)hasExclusiveAccess(local_40);
    } while (!bVar7);
    *local_40 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db128();
    }
    FUN_00a97e8c(piVar8,uVar15);
    if (local_80 == -0x80000000) {
      puVar6 = &DAT_01d06a38;
      goto LAB_012d9db8;
    }
    puVar4 = (undefined4 *)((uint)&local_80 | 4);
    uVar11 = *puVar4;
    uVar13 = puVar4[1];
    uVar14 = puVar4[2];
    uVar16 = puVar4[3];
    uVar19 = puVar4[4];
    uVar5 = 0;
    goto LAB_012d9d1c;
  }
  if (iVar17 != 2) {
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d06a08);
    }
LAB_012d9b30:
    FUN_012d8ba8(&local_80);
    *param_1 = 2;
    if (local_80 == -0x80000000) {
      return;
    }
    FUN_019bb7e0(local_80,local_7c);
    FUN_019bb7e0(local_74,local_70);
    return;
  }
LAB_012d9c44:
  FUN_01656cb0(&local_40,param_2[10]);
  piVar8 = local_3c;
  if (local_40 == (int *)&DAT_00000001) {
    local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
    local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01ce36f8,&DAT_01d06a48);
  }
  uVar15 = (uint)local_38 & 0xff;
  iVar3 = local_3c[3];
  iVar17 = local_3c[4] * 0xc;
  iVar10 = -1;
  do {
    if (iVar17 == 0) goto LAB_012d9dd4;
    piVar12 = (int *)(iVar3 + 4);
    iVar17 = iVar17 + -0xc;
    iVar10 = iVar10 + 1;
    iVar3 = iVar3 + 0xc;
  } while (*piVar12 != iVar21);
  FUN_012e8fb8(&local_40,local_3c + 2,iVar10,&DAT_01d06a88);
  if (local_40 == (int *)0x0) {
LAB_012d9dd4:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d06a58);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar17 = *local_40;
    bVar7 = (bool)hasExclusiveAccess(local_40);
  } while (!bVar7);
  *local_40 = iVar17 + -1;
  if (iVar17 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db128();
  }
  FUN_00a97e8c(piVar8,uVar15);
  if (local_80 == -0x80000000) {
    puVar6 = &DAT_01d06a68;
LAB_012d9db8:
    local_80 = -0x80000000;
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(puVar6);
  }
  puVar4 = (undefined4 *)((uint)&local_80 | 4);
  uVar11 = *puVar4;
  uVar13 = puVar4[1];
  uVar14 = puVar4[2];
  uVar16 = puVar4[3];
  uVar19 = puVar4[4];
  uVar5 = 1;
LAB_012d9d1c:
  param_1[2] = uVar11;
  param_1[3] = uVar13;
  param_1[4] = uVar14;
  param_1[5] = uVar16;
  param_1[6] = uVar19;
  *param_1 = uVar5;
  param_1[1] = local_80;
  return;
}

