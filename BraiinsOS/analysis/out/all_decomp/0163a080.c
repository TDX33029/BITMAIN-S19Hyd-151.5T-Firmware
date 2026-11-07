// FUN_0163a080 @ 0163a080 size=1120 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0163a080(uint param_1,undefined1 *param_2)

{
  bool bVar1;
  undefined4 **ppuVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  uint uVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  uint **ppuVar16;
  int iVar17;
  bool bVar18;
  undefined1 *local_68;
  uint local_64;
  undefined4 **local_60;
  uint local_5c;
  undefined1 *local_58;
  undefined4 **local_50;
  uint uStack_4c;
  undefined1 *puStack_48;
  uint **local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  uint local_34;
  int local_30;
  
  pcVar11 = (char *)(param_1 + 0xc);
  if (*pcVar11 == '\0') {
    bVar18 = (bool)hasExclusiveAccess(pcVar11);
    if (bVar18) {
      *pcVar11 = '\x01';
    }
    bVar1 = false;
    if (bVar18) {
      DataMemoryBarrier(0xb);
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
    ClearExclusiveLocal();
  }
  if (!bVar1) {
    FUN_01280da8(pcVar11);
  }
  FUN_0128236c(pcVar11);
  piVar14 = (int *)(param_1 + 4);
  puVar6 = (uint *)*piVar14;
  if (puVar6 == (uint *)0x0) {
    bVar18 = true;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar14);
      if (bVar1) {
        *piVar14 = 1;
        goto LAB_0163a110;
      }
      puVar6 = (uint *)*piVar14;
    } while (puVar6 == (uint *)0x0);
  }
  bVar18 = false;
  ClearExclusiveLocal();
LAB_0163a110:
  DataMemoryBarrier(0xb);
  if (bVar18) {
    if (param_2 == &DAT_3b9aca00) {
      do {
        FUN_0127fd30(param_1 + 8,pcVar11);
        if (*piVar14 == 3) {
          DataMemoryBarrier(0xb);
          do {
            bVar18 = (bool)hasExclusiveAccess(piVar14);
            if (bVar18) {
              *piVar14 = 0;
              goto LAB_0163a19c;
            }
          } while (*piVar14 == 3);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      } while( true );
    }
    FUN_015f3b0c(&local_40,1);
    param_2 = local_38 + (int)param_2;
    if (param_2 < &DAT_3b9aca00) {
      local_64 = (uint)local_3c;
      puVar15 = param_2;
      ppuVar16 = local_40;
    }
    else {
      ppuVar16 = (uint **)((int)local_40 + 1);
      puVar15 = &DAT_3b9aca00;
      local_64 = (int)local_3c + (uint)((undefined4 **)0xfffffffe < local_40);
      if (-1 < (int)(((uint)local_3c ^ local_64) & ~(uint)local_3c)) {
        puVar15 = param_2 + -1000000000;
      }
    }
    FUN_015f3b0c(&local_40,1);
    ppuVar2 = (undefined4 **)((int)local_40 + 1);
    uVar7 = (int)local_3c + (uint)((undefined4 **)0xfffffffe < local_40);
    if ((int)(((uint)local_3c ^ uVar7) & ~(uint)local_3c) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    puVar10 = local_38;
    if (puVar15 != &DAT_3b9aca00) {
      puVar10 = puVar15;
      ppuVar2 = ppuVar16;
      uVar7 = local_64;
    }
    iVar3 = param_1 + 8;
    while( true ) {
      local_60 = ppuVar2;
      local_5c = uVar7;
      local_58 = puVar10;
      FUN_015f3b0c(&local_40,1);
      local_50 = local_40;
      uStack_4c = (uint)local_3c;
      puStack_48 = local_38;
      FUN_015f3c24(&local_40,&local_60,&local_50);
      iVar17 = local_30;
      uVar12 = local_34;
      puVar15 = local_38;
      if (((uint)local_40 & 1) != 0) {
        puVar15 = (undefined1 *)0x0;
        uVar12 = 0;
        iVar17 = 0;
      }
      if ((puVar15 == (undefined1 *)0x0 && uVar12 == 0) && iVar17 == 0) break;
      FUN_015f3b0c(&local_40,1);
      puVar13 = (undefined1 *)((int)local_40 + (int)puVar15);
      uVar4 = (int)local_3c + uVar12 + (uint)CARRY4((uint)local_40,(uint)puVar15);
      if ((int)uVar12 < 0 == (int)(((uint)local_3c ^ uVar4) & ~((uint)local_3c ^ uVar12)) < 0) {
        puVar8 = local_38 + iVar17;
        if (puVar8 < &DAT_3b9aca00) {
          puVar15 = puVar8;
          local_68 = puVar13;
          param_1 = uVar4;
        }
        else {
          uVar12 = uVar4 + ((undefined1 *)0xfffffffe < puVar13);
          bVar18 = -1 < (int)((uVar4 ^ uVar12) & ~uVar4);
          if (bVar18) {
            param_1 = uVar12;
          }
          puVar15 = &DAT_3b9aca00;
          if (bVar18) {
            puVar15 = puVar8 + -1000000000;
            local_68 = puVar13 + 1;
          }
        }
      }
      else {
        puVar15 = &DAT_3b9aca00;
      }
      iVar17 = FUN_0127fd30(iVar3,pcVar11,local_68,param_1,puVar15);
      if (iVar17 != 0) break;
      if (*piVar14 == 3) {
        DataMemoryBarrier(0xb);
        do {
          bVar18 = (bool)hasExclusiveAccess(piVar14);
          if (bVar18) {
            *piVar14 = 0;
            goto LAB_0163a19c;
          }
        } while (*piVar14 == 3);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    do {
      puVar6 = (uint *)*piVar14;
      bVar18 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar18);
    *piVar14 = 0;
    DataMemoryBarrier(0xb);
    switch(puVar6) {
    case (uint *)0x0:
    case (uint *)0x2:
      puVar9 = &DAT_018ac5cc;
      puVar5 = &DAT_0057825e;
      break;
    case (uint *)0x1:
    case (uint *)0x3:
      goto switchD_0163a460_caseD_1;
    default:
      puVar9 = &DAT_018ac5dc;
      puVar5 = &DAT_00579048;
    }
LAB_0163a4a4:
    local_40 = (uint **)&local_50;
    local_3c = &LAB_00fac484;
    local_50 = (undefined4 **)puVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(puVar5,&local_40,puVar9);
  }
  if (puVar6 != (uint *)0x3) {
    puVar9 = &DAT_018ac5ec;
    puVar5 = &DAT_0057f434;
    goto LAB_0163a4a4;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar18 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar18);
  *piVar14 = 0;
LAB_0163a19c:
  DataMemoryBarrier(0xb);
switchD_0163a460_caseD_1:
  FUN_01282570(pcVar11);
  if (*pcVar11 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar18 = (bool)hasExclusiveAccess(pcVar11);
      if (bVar18) {
        *pcVar11 = '\0';
        return;
      }
    } while (*pcVar11 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar11);
  return;
}

