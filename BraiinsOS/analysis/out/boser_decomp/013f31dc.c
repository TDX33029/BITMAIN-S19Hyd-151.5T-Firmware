// FUN_013f31dc @ 013f31dc size=1672 calls_out=22 calls_in=1
// strings: capacity overflow | capacity overflow

/* WARNING: Removing unreachable block (ram,0x013f37b8) */
/* WARNING: Removing unreachable block (ram,0x013f3858) */
/* WARNING: Removing unreachable block (ram,0x013f37d4) */

void FUN_013f31dc(int param_1,int *param_2)

{
  uint uVar1;
  int **ppiVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int *unaff_r4;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  bool bVar17;
  undefined8 uVar18;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  int iStack_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  int local_2c;
  
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if (((*(uint *)(*(int *)(param_1 + 0x80) + 0x2c) & *(uint *)(*(int *)(param_1 + 0x80) + 0x28)) !=
       0xffffffff) && (param_2[1] == 0)) {
    piVar12 = (int *)thunk_FUN_01be5118(0x28);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x28);
    }
    iVar7 = 0;
    do {
      ppiVar2 = (int **)&local_40;
      piVar5 = (int *)(&DAT_00476ae0)[iVar7 * 2];
      uVar1 = (&DAT_00476ae4)[iVar7 * 2];
      piVar14 = (int *)0x0;
      if (piVar5 == (int *)0x0 && uVar1 == 0) {
LAB_013f33a0:
        ppiVar2 = &local_58;
        local_40 = (int *)&DAT_00000001;
      }
      else if (uVar1 == 0) {
        piVar14 = piVar5;
        goto LAB_013f33a0;
      }
      *ppiVar2 = piVar14;
      piVar14 = local_58;
      if (local_40 != (int *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("capacity overflow",0x23,&DAT_01d2fe10);
      }
      uVar9 = 0;
      piVar11 = unaff_r4;
      if ((int *)0x5555555 < local_58) {
LAB_013f35fc:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,piVar11);
      }
      piVar11 = (int *)((int)local_58 * 0x18);
      if (piVar11 == (int *)0x0) {
        unaff_r4 = (int *)&SUB_00000004;
        piVar14 = (int *)0x0;
      }
      else {
        uVar9 = 4;
        unaff_r4 = (int *)FUN_01298504(piVar11,4);
        if (unaff_r4 == (int *)0x0) goto LAB_013f35fc;
      }
      local_60 = (int *)0x0;
      piVar11 = (int *)0x0;
      if (piVar5 == (int *)0x0 && uVar1 == 0) {
LAB_013f3434:
        local_40 = (int *)&DAT_00000001;
        ppiVar2 = &local_58;
      }
      else {
        if (uVar1 == 0) {
          piVar11 = piVar5;
          goto LAB_013f3434;
        }
        piVar11 = (int *)0x0;
        ppiVar2 = (int **)&local_40;
      }
      *ppiVar2 = piVar11;
      local_68 = piVar14;
      local_64 = unaff_r4;
      if (local_40 != (int *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("capacity overflow",0x23,&DAT_01d2fe20);
      }
      if (piVar14 < local_58) {
        FUN_01af7b44(&local_68,0,local_58,4,0x18);
      }
      piVar14 = local_60;
      if (piVar5 != (int *)0x0 || uVar1 != 0) {
        piVar16 = (int *)0x0;
        uVar15 = 0;
        piVar11 = local_64 + (int)local_60 * 6;
        do {
          local_30 = (undefined1 *)0x0;
          local_2c = CONCAT31(local_2c._1_3_,3);
          local_34 = (undefined1 *)0x0;
          local_38 = (int *)0x0;
          local_40 = (int *)0x0;
          puVar3 = (undefined1 *)thunk_FUN_01be5118(0x14);
          if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          *(undefined4 *)(puVar3 + 4) = 0;
          *(undefined4 *)(puVar3 + 8) = 0;
          bVar17 = (int *)0xfffffffe < piVar16;
          piVar16 = (int *)((int)piVar16 + 1);
          *(undefined4 *)(puVar3 + 0xc) = 0;
          uVar15 = uVar15 + bVar17;
          *(undefined4 *)(puVar3 + 0x10) = 0;
          piVar14 = (int *)((int)piVar14 + 1);
          *puVar3 = 0;
          local_58 = local_40;
          piStack_54 = local_3c;
          uStack_50 = 1;
          iStack_44 = local_2c;
          *piVar11 = (int)local_40;
          piVar11[1] = (int)local_3c;
          piVar11[2] = 1;
          piVar11[3] = (int)puVar3;
          piVar11[4] = (int)puVar3;
          piVar11[5] = local_2c;
          piVar11 = piVar11 + 6;
          puStack_4c = puVar3;
          puStack_48 = puVar3;
          local_34 = puVar3;
          local_30 = puVar3;
        } while (uVar15 <= uVar1 && (uint)(piVar5 <= piVar16) <= uVar15 - uVar1);
      }
      local_40 = local_68;
      local_3c = local_64;
      local_60 = piVar14;
      local_38 = piVar14;
      if ((piVar14 < local_68) &&
         (iVar8 = FUN_0144746c(&local_40,piVar14,4,0x18), iVar8 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      iVar8 = iVar7 * 2;
      piVar12[iVar8] = (int)local_3c;
      iVar7 = iVar7 + 1;
      (piVar12 + iVar8)[1] = (int)local_38;
    } while (iVar7 != 5);
    local_38 = (int *)&DAT_00000005;
    local_40 = (int *)&DAT_00000005;
    local_3c = piVar12;
    FUN_013f3ab8(*param_2,0);
    *param_2 = (int)piVar12;
    param_2[1] = 5;
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x80) + 0x28);
  iVar8 = *(int *)(*(int *)(param_1 + 0x80) + 0x2c);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  iVar10 = *(int *)(param_1 + 0x84);
  pcVar13 = (char *)(iVar10 + 4);
  if (*pcVar13 == '\0') {
    bVar17 = (bool)hasExclusiveAccess(pcVar13);
    if (!bVar17) goto LAB_013f3784;
    *pcVar13 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_013f3784:
    FUN_0164fba8(pcVar13);
  }
  FUN_0165098c(pcVar13);
  iVar10 = *(int *)(iVar10 + 0x10);
  FUN_01650a90(pcVar13);
  if (*pcVar13 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar17 = (bool)hasExclusiveAccess(pcVar13);
      if (bVar17) {
        *pcVar13 = '\0';
        goto LAB_013f32a4;
      }
    } while (*pcVar13 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar13);
LAB_013f32a4:
  if (iVar7 == -1 && iVar8 == -1) {
    if (iVar10 != 0) {
      FUN_014017dc(*(undefined4 *)(param_1 + 0x84),0);
      FUN_0140a2dc(*param_2,param_2[1],iVar10);
      FUN_01409c78(iVar10);
      return;
    }
  }
  else {
    if (iVar10 == 0) {
      piVar12 = *(int **)(param_1 + 0x80);
      do {
        iVar7 = *piVar12;
        bVar17 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar17);
      *piVar12 = iVar7 + 1;
      if (-1 < iVar7) {
        piVar14 = *(int **)(param_1 + 0x84);
        do {
          iVar7 = *piVar14;
          bVar17 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar17);
        *piVar14 = iVar7 + 1;
        if (-1 < iVar7) {
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if (piVar12[10] == -1 && piVar12[0xb] == -1) {
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar14;
              bVar17 = (bool)hasExclusiveAccess(piVar14);
            } while (!bVar17);
            *piVar14 = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              thunk_FUN_01be4678(piVar14);
            }
            FUN_01406cb8(piVar12);
            puVar4 = (undefined4 *)0x0;
LAB_013f376c:
            FUN_014017dc(*(undefined4 *)(param_1 + 0x84),puVar4);
            return;
          }
          uVar18 = FUN_01409ee8(param_2[2],param_2[3],param_2[4],param_2[5],piVar12[10],piVar12[0xb]
                               );
          uVar15 = (uint)((ulonglong)uVar18 >> 0x20);
          uVar1 = (uint)uVar18;
          local_30 = (undefined1 *)0x0;
          local_34 = (undefined1 *)0x0;
          local_40 = (int *)CONCAT13((char)((ulonglong)uVar18 >> 0x20),CONCAT12((char)uVar18,0x101))
          ;
          local_3c = piVar12;
          local_38 = piVar14;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(0x14);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          *puVar4 = local_40;
          puVar4[1] = local_3c;
          puVar4[2] = local_38;
          puVar4[3] = local_34;
          puVar4[4] = local_30;
          uVar6 = param_2[1];
          if (uVar1 < uVar6) {
            piVar12 = (int *)(*param_2 + uVar1 * 8);
            uVar6 = piVar12[1];
            if (uVar15 < uVar6) {
              iVar8 = *piVar12 + uVar15 * 0x18;
              iVar10 = *(int *)(iVar8 + 0x10);
              iVar7 = iVar10;
              if (iVar10 == 0) {
                iVar7 = iVar8;
              }
              *(undefined4 **)(iVar7 + 0xc) = puVar4;
              iVar7 = *(int *)(iVar8 + 8);
              puVar4[3] = 0;
              puVar4[4] = iVar10;
              *(undefined4 **)(iVar8 + 0x10) = puVar4;
              *(int *)(iVar8 + 8) = iVar7 + 1;
              goto LAB_013f376c;
            }
            uVar1 = uVar15;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar1,uVar6,&DAT_01cf3c34);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0197a954();
    }
    FUN_0140a2dc(*param_2,param_2[1],iVar10);
    iVar7 = FUN_01409ca4(param_2,iVar10);
    if (iVar7 != 0) {
      FUN_014017dc(*(undefined4 *)(param_1 + 0x84),0);
      FUN_013f2db8(iVar7);
      return;
    }
  }
  return;
}

