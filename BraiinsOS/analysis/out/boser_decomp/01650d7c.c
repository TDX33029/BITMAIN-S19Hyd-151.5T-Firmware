// FUN_01650d7c @ 01650d7c size=1644 calls_out=16 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01650d7c(undefined4 *param_1,int *param_2,int *param_3)

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
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  int iVar19;
  undefined1 *puVar20;
  int local_78;
  int iStack_74;
  int iStack_70;
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
  iVar19 = param_2[6];
  local_78 = *param_2;
  iStack_74 = param_2[1];
  iStack_70 = param_2[2];
  iStack_6c = param_2[3];
  iVar15 = param_2[4];
  do {
    iVar3 = *param_3;
    bVar7 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar7);
  *param_3 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16513f8);
    (*pcVar1)();
  }
  iVar3 = *(int *)(iVar15 + 0x10);
  if (iVar3 == *(int *)(iVar15 + 8)) {
    FUN_019ee178();
  }
  puVar4 = (undefined4 *)(*(int *)(iVar15 + 0xc) + iVar3 * 0xc);
  *puVar4 = param_3;
  local_30 = 0;
  puVar4[1] = iVar19;
  puVar4[2] = &local_78;
  *(int *)(iVar15 + 0x10) = iVar3 + 1;
  local_40 = *(int **)(iVar15 + 0x30);
  local_34 = *(int *)(iVar15 + 0x34);
  *(undefined4 *)(iVar15 + 0x34) = 0;
  local_38 = (undefined1 *)(iVar15 + 0x2c);
  local_3c = local_40 + local_34 * 3;
  if (local_34 != 0) {
    do {
      piVar18 = (int *)*local_40;
      piVar8 = local_40 + 1;
      local_40 = local_40 + 3;
      piVar12 = piVar18 + 3;
      if (*piVar12 == 0) {
        DataMemoryBarrier(0xb);
LAB_01650e5c:
        bVar7 = (bool)hasExclusiveAccess(piVar12);
        if (!bVar7) goto code_r0x01650e68;
        *piVar12 = *piVar8;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar8 = (int *)(piVar18[2] + 0x18);
        do {
          iVar3 = *piVar8;
          bVar7 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar7);
        *piVar8 = 1;
        if (iVar3 == -1) {
          FUN_01be6c3c(0xf0,piVar8,0x81,1);
        }
        goto LAB_01650e7c;
      }
LAB_01650e74:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_01650e7c:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar18;
        bVar7 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar7);
      *piVar18 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db128(piVar18);
      }
    } while (local_40 != local_3c);
  }
  FUN_01652c58(&local_40);
  FUN_00a97e8c(iVar15,(char)param_2[5]);
  puVar4 = (undefined4 *)param_2[7];
  piVar18 = param_3 + 3;
  piVar8 = (int *)*puVar4;
  piVar12 = (int *)puVar4[1];
  puVar20 = (undefined1 *)puVar4[2];
  while( true ) {
    iVar15 = *piVar18;
    DataMemoryBarrier(0xb);
    if (iVar15 == 2) break;
    if (iVar15 == 1) goto LAB_0165115c;
    if (iVar15 != 0) goto LAB_016510d8;
    if (puVar20 == &DAT_3b9aca00) {
      FUN_019b0a28(param_3[2]);
    }
    else {
      FUN_019ac130(&local_40,1);
      bVar7 = (int)local_3c - (int)((int)piVar12 + (uint)(local_40 < piVar8)) < 0 ==
              (SBORROW4((int)local_3c,(int)piVar12) !=
              SBORROW4((int)local_3c - (int)piVar12,(uint)(local_40 < piVar8)));
      if (local_40 == piVar8 && local_3c == piVar12) {
        bVar7 = puVar20 <= local_38;
      }
      if (bVar7) {
        iVar15 = *piVar18;
        if (iVar15 != 0) goto LAB_016510ac;
        bVar7 = true;
        DataMemoryBarrier(0xb);
        goto LAB_01651094;
      }
      local_4c = local_3c;
      local_50 = local_40;
      local_48 = local_38;
      local_60 = piVar8;
      local_5c = piVar12;
      local_58 = puVar20;
      FUN_019ac248(&local_40,&local_60,&local_50);
      piVar16 = (int *)(param_3[2] + 0x18);
      do {
        iVar15 = *piVar16;
        bVar7 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar7);
      *piVar16 = iVar15 + -1;
      DataMemoryBarrier(0xb);
      if (iVar15 != 1) {
        puVar9 = local_38;
        iVar15 = local_34;
        uVar5 = local_30;
        if (((uint)local_40 & 1) != 0) {
          uVar5 = 0;
          iVar15 = 0;
          puVar9 = (undefined1 *)0x0;
        }
        FUN_019ae574(piVar16,local_40,puVar9,iVar15,uVar5);
        do {
          bVar7 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar7);
        *piVar16 = 0;
        DataMemoryBarrier(0xb);
      }
    }
  }
  goto LAB_01651238;
code_r0x01650e68:
  if (*piVar12 != 0) goto LAB_01650e74;
  goto LAB_01650e5c;
  while (iVar15 = *piVar18, iVar15 == 0) {
LAB_01651094:
    bVar2 = (bool)hasExclusiveAccess(piVar18);
    if (bVar2) {
      *piVar18 = 1;
      goto LAB_016510b4;
    }
  }
LAB_016510ac:
  bVar7 = false;
  ClearExclusiveLocal();
LAB_016510b4:
  DataMemoryBarrier(0xb);
  if ((bVar7) || (iVar15 == 1)) {
LAB_0165115c:
    FUN_01656cb0(&local_40,param_2[8]);
    piVar8 = local_3c;
    if (local_40 == (int *)&DAT_00000001) {
      local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
      local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01d06aa8,&DAT_01d06a18);
    }
    uVar13 = (uint)local_38 & 0xff;
    iVar3 = local_3c[3];
    iVar15 = local_3c[4] * 0xc;
    iVar10 = -1;
    do {
      if (iVar15 == 0) goto LAB_016513b8;
      piVar12 = (int *)(iVar3 + 4);
      iVar15 = iVar15 + -0xc;
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 0xc;
    } while (*piVar12 != iVar19);
    FUN_012e8fb8(&local_40,local_3c + 2,iVar10,&DAT_01d06a88);
    if (local_40 == (int *)0x0) {
LAB_016513b8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d06a28);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *local_40;
      bVar7 = (bool)hasExclusiveAccess(local_40);
    } while (!bVar7);
    *local_40 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db128();
    }
    FUN_00a97e8c(piVar8,uVar13);
    if (local_78 == -0x80000000) {
      puVar6 = &DAT_01d06a38;
      goto LAB_016513ac;
    }
    puVar4 = (undefined4 *)((uint)&local_78 | 4);
    uVar11 = *puVar4;
    uVar14 = puVar4[1];
    uVar17 = puVar4[2];
    uVar5 = 0;
    goto LAB_01651310;
  }
  if (iVar15 != 2) {
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d06a08);
    }
LAB_016510d8:
    DataMemoryBarrier(0xb);
    if ((char)local_68 == '\0') {
      iVar15 = 1;
      iVar19 = 0;
      uVar13 = 0;
      do {
        if (uVar13 < 7) {
          if (uVar13 != 0) {
            iVar3 = iVar19;
            do {
              iVar3 = iVar3 + -1;
              HintYield();
            } while (iVar3 != 0);
          }
        }
        else {
          FUN_01bea67c();
        }
        iVar19 = iVar19 + iVar15;
        iVar15 = iVar15 + 2;
        uVar13 = uVar13 + 1;
        DataMemoryBarrier(0xb);
      } while ((char)local_68 == '\0');
    }
    *param_1 = 2;
    if (local_78 == -0x80000000) {
      return;
    }
    FUN_0165037c(&local_78);
    return;
  }
LAB_01651238:
  FUN_01656cb0(&local_40,param_2[8]);
  piVar8 = local_3c;
  if (local_40 == (int *)&DAT_00000001) {
    local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
    local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01d06aa8,&DAT_01d06a48);
  }
  uVar13 = (uint)local_38 & 0xff;
  iVar3 = local_3c[3];
  iVar15 = local_3c[4] * 0xc;
  iVar10 = -1;
  do {
    if (iVar15 == 0) goto LAB_016513c8;
    piVar12 = (int *)(iVar3 + 4);
    iVar15 = iVar15 + -0xc;
    iVar10 = iVar10 + 1;
    iVar3 = iVar3 + 0xc;
  } while (*piVar12 != iVar19);
  FUN_012e8fb8(&local_40,local_3c + 2,iVar10,&DAT_01d06a88);
  if (local_40 == (int *)0x0) {
LAB_016513c8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d06a58);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *local_40;
    bVar7 = (bool)hasExclusiveAccess(local_40);
  } while (!bVar7);
  *local_40 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db128();
  }
  FUN_00a97e8c(piVar8,uVar13);
  if (local_78 == -0x80000000) {
    puVar6 = &DAT_01d06a68;
LAB_016513ac:
    local_78 = -0x80000000;
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(puVar6);
  }
  puVar4 = (undefined4 *)((uint)&local_78 | 4);
  uVar11 = *puVar4;
  uVar14 = puVar4[1];
  uVar17 = puVar4[2];
  uVar5 = 1;
LAB_01651310:
  param_1[2] = uVar11;
  param_1[3] = uVar14;
  param_1[4] = uVar17;
  *param_1 = uVar5;
  param_1[1] = local_78;
  return;
}

