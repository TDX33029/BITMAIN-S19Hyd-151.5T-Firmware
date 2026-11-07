// FUN_01aab2f8 @ 01aab2f8 size=1792 calls_out=15 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01aab62c) */
/* WARNING: Removing unreachable block (ram,0x01aab638) */
/* WARNING: Removing unreachable block (ram,0x01aab658) */
/* WARNING: Removing unreachable block (ram,0x01aab754) */
/* WARNING: Removing unreachable block (ram,0x01aab76c) */
/* WARNING: Removing unreachable block (ram,0x01aab668) */
/* WARNING: Removing unreachable block (ram,0x01aab774) */
/* WARNING: Removing unreachable block (ram,0x01aab784) */
/* WARNING: Removing unreachable block (ram,0x01aab788) */
/* WARNING: Removing unreachable block (ram,0x01aab78c) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x01d50d54 : 0x01aab698 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01aab2f8(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  byte local_58;
  undefined4 local_48;
  undefined4 local_40;
  int *local_3c;
  undefined4 uStack_38;
  int *local_30;
  int *local_2c;
  uint local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d50d3c != 2) {
    FUN_01aac100();
  }
  if (DAT_01d50d44 == 0) {
    bVar1 = (bool)hasExclusiveAccess(0x1d50d44);
    if (bVar1) {
      DAT_01d50d44 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_01aab340;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(&DAT_01d50d44);
LAB_01aab340:
  local_58 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    local_58 = FUN_0197ac0c();
    local_58 = local_58 ^ 1;
  }
  uVar13 = DAT_01d50d58;
  if ((char)DAT_01d50d4c != '\0') {
    local_2c = (int *)CONCAT31(local_2c._1_3_,local_58);
    local_30 = &DAT_01d50d44;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01d2e868,&DAT_01d2e838);
  }
  if (DAT_01d50d58 != 0) {
    uVar17 = 0;
LAB_01aab388:
    iVar10 = DAT_01d50d54;
    piVar18 = (int *)(DAT_01d50d54 + uVar17 * 0xc);
    FUN_01aaaac0(&local_30,piVar18);
    if (local_30 != (int *)0x2) goto code_r0x01aab3ac;
    if (*piVar18 != 0) {
      FUN_01aac480(piVar18 + 1);
    }
    uVar15 = uVar17 + 1;
    if (uVar15 < uVar13) {
      do {
        piVar18 = (int *)(iVar10 + uVar15 * 0xc);
        FUN_01aaaac0(&local_30,piVar18);
        if (local_30 == (int *)0x2) {
          if (*piVar18 != 0) {
            FUN_01aac480(piVar18 + 1);
          }
        }
        else {
          if (local_30 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *local_2c;
              bVar1 = (bool)hasExclusiveAccess(local_2c);
            } while (!bVar1);
            *local_2c = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(local_2c,local_28);
            }
          }
          iVar10 = DAT_01d50d54;
          iVar12 = piVar18[1];
          iVar14 = piVar18[2];
          piVar6 = (int *)(DAT_01d50d54 + uVar17 * 0xc);
          *piVar6 = *piVar18;
          piVar6[1] = iVar12;
          piVar6[2] = iVar14;
          uVar17 = uVar17 + 1;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar13);
    }
    DAT_01d50d58 = uVar17;
  }
LAB_01aab4b8:
  if (*param_1 == 1) {
    local_2c = (int *)param_1[1];
    piVar18 = local_2c + 1;
    do {
      iVar10 = *piVar18;
      while (iVar10 != -1) {
        if (iVar10 < 0) {
          local_2c = (int *)&LAB_018a13b8;
          local_30 = (int *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_00590e5f,&local_30,&DAT_01d2e880);
        }
        iVar12 = *piVar18;
        if (iVar12 == iVar10) {
          bVar2 = (bool)hasExclusiveAccess(piVar18);
          if (bVar2) {
            *piVar18 = iVar10 + 1;
          }
          bVar1 = false;
          if (bVar2) {
            DataMemoryBarrier(0xb);
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
          ClearExclusiveLocal();
        }
        iVar10 = iVar12;
        if (bVar1) {
          local_30 = (int *)0x1;
          goto LAB_01aab544;
        }
      }
      HintYield();
    } while( true );
  }
  local_2c = (int *)param_1[1];
  local_30 = (int *)0x0;
LAB_01aab544:
  uVar13 = DAT_01d50d58;
  uVar17 = param_1[2];
  local_28 = uVar17;
  if (DAT_01d50d58 == DAT_01d50d50) {
    FUN_018c4418(&DAT_01d50d50);
  }
  puVar11 = (uint *)(DAT_01d50d54 + uVar13 * 0xc);
  *puVar11 = (uint)local_30;
  puVar11[1] = (uint)local_2c;
  puVar11[2] = local_28;
  DAT_01d50d58 = uVar13 + 1;
  DAT_01d50d18 = DAT_01d50d58 < 2;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  local_48 = CONCAT31(local_48._1_3_,local_58);
  if (*param_1 == 1) {
    iVar10 = param_1[1] + (*(int *)(uVar17 + 8) - 1U & 0xfffffff8) + 8;
  }
  else {
    iVar10 = param_1[1];
  }
  (**(code **)(uVar17 + 0xc))(iVar10,param_1);
  uVar13 = DAT_01d50d58;
  iVar10 = DAT_01d50d54;
  local_40 = 2;
  local_3c = &DAT_01d50d44;
  uStack_38 = local_48;
  if (DAT_01d50d58 == 0) {
    uVar17 = 5;
  }
  else {
    uVar15 = 0;
    uVar17 = 5;
    do {
      FUN_01aaaac0(&local_30,iVar10 + uVar15 * 0xc);
      uVar4 = local_28;
      piVar6 = local_2c;
      piVar18 = local_30;
      if (local_30 != (int *)0x2) {
        piVar7 = local_2c;
        if (((uint)local_30 & 1) != 0) {
          piVar7 = (int *)((int)local_2c + (*(int *)(local_28 + 8) - 1U & 0xfffffff8) + 8);
        }
        uVar8 = (**(code **)(local_28 + 0x18))(piVar7);
        if (uVar8 <= uVar17) {
          uVar17 = uVar8;
        }
        if (uVar8 == 6) {
          uVar17 = 0;
        }
        if (piVar18 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar12 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = iVar12 + -1;
          if (iVar12 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(piVar6,uVar4);
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar13);
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d51aec != (undefined4 *)0x0) {
    puVar19 = DAT_01d51aec;
    do {
      local_30 = (int *)CONCAT31(local_30._1_3_,3);
      FUN_01aac4ec(local_40,local_3c,*puVar19,&local_30);
      DataMemoryBarrier(0xb);
      uVar13 = 0;
      if (((uint)local_30 & 0xff) != 3) {
        uVar13 = (uint)local_30 & 0xff;
      }
      uVar5 = (char)uVar13;
      if (uVar13 != 2) {
        uVar5 = 1;
      }
      if (uVar13 == 0) {
        uVar5 = (char)uVar13;
      }
      *(undefined1 *)(puVar19 + 2) = uVar5;
      DataMemoryBarrier(0xb);
      puVar19 = (undefined4 *)puVar19[1];
      DataMemoryBarrier(0xb);
    } while (puVar19 != (undefined4 *)0x0);
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d51af0 != '\0') {
    DataMemoryBarrier(0xb);
    if (DAT_01d50d34 != 2) {
      FUN_01aac2f4();
    }
    do {
      if (DAT_01d50d20 != 0) {
        ClearExclusiveLocal();
        FUN_0197ade4(&DAT_01d50d20);
        goto LAB_01aab854;
      }
      bVar1 = (bool)hasExclusiveAccess(0x1d50d20);
    } while (!bVar1);
    DAT_01d50d20 = 1;
    DataMemoryBarrier(0xb);
LAB_01aab854:
    uVar13 = 0;
    if ((DAT_01d51b08 & 0x7fffffff) != 0) {
      uVar13 = FUN_0197ac0c();
      uVar13 = uVar13 ^ 1;
    }
    piVar18 = local_3c;
    uVar3 = local_40;
    if (DAT_01d50d24 != '\0') {
      local_2c = (int *)CONCAT31(local_2c._1_3_,(char)uVar13);
      local_30 = &DAT_01d50d20;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01d2e7e0,&DAT_01d2e7a8);
    }
    if (DAT_01d50d30 != 0) {
      puVar20 = DAT_01d50d2c + DAT_01d50d30 * 2;
      puVar19 = DAT_01d50d2c;
      do {
        uVar16 = *puVar19;
        iVar10 = puVar19[1];
        uVar9 = (**(code **)(iVar10 + 0x10))(uVar16);
        local_30 = (int *)CONCAT31(local_30._1_3_,3);
        FUN_01aac4ec(uVar3,piVar18,uVar9,&local_30);
        uVar15 = 0;
        if (((uint)local_30 & 0xff) != 3) {
          uVar15 = (uint)local_30 & 0xff;
        }
        (**(code **)(iVar10 + 0xc))(uVar16,uVar15);
        puVar19 = puVar19 + 2;
      } while (puVar19 != puVar20);
    }
    FUN_00a97e8c(&DAT_01d50d20,uVar13);
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x1d50f88);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_01d50f88 = uVar17;
  FUN_01aab23c(&local_40);
  return;
code_r0x01aab3ac:
  if (local_30 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *local_2c;
      bVar1 = (bool)hasExclusiveAccess(local_2c);
    } while (!bVar1);
    *local_2c = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(local_2c,local_28);
    }
  }
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar13) goto LAB_01aab4b8;
  goto LAB_01aab388;
}

