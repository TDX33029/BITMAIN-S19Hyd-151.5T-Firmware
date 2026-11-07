// FUN_019f9314 @ 019f9314 size=1132 calls_out=9 calls_in=1
// strings: overflow when adding duration to instant

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019f9314(int param_1,undefined1 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *unaff_r10;
  uint unaff_r11;
  bool bVar12;
  uint *local_7c;
  uint local_74;
  uint local_6c;
  undefined1 *local_64;
  uint local_60;
  uint local_5c;
  undefined1 *local_58;
  uint local_50;
  uint uStack_4c;
  undefined1 *puStack_48;
  uint local_40;
  uint local_3c;
  undefined1 *local_38;
  uint local_34;
  int local_30;
  
  pcVar7 = (char *)(param_1 + 0xc);
  if (*pcVar7 == '\0') {
    bVar12 = (bool)hasExclusiveAccess(pcVar7);
    if (bVar12) {
      *pcVar7 = '\x01';
    }
    bVar1 = false;
    if (bVar12) {
      DataMemoryBarrier(0xb);
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
    ClearExclusiveLocal();
  }
  if (!bVar1) {
    FUN_0164fba8(pcVar7);
  }
  FUN_0165098c(pcVar7);
  puVar10 = (uint *)(param_1 + 4);
  uVar4 = *puVar10;
  if (uVar4 == 0) {
    bVar12 = true;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar10);
      if (bVar1) {
        *puVar10 = 1;
        goto LAB_019f93a4;
      }
      uVar4 = *puVar10;
    } while (uVar4 == 0);
  }
  bVar12 = false;
  ClearExclusiveLocal();
LAB_019f93a4:
  DataMemoryBarrier(0xb);
  if (bVar12) {
    if (param_2 == &DAT_3b9aca00) {
      local_64 = &DAT_3b9aca00;
    }
    else {
      FUN_019ac130(&local_40,1);
      param_2 = local_38 + (int)param_2;
      local_64 = &DAT_3b9aca00;
      if (param_2 < &DAT_3b9aca00) {
        local_6c = local_3c;
        local_64 = param_2;
        uVar4 = local_40;
      }
      else {
        uVar4 = local_40 + 1;
        local_6c = local_3c + (0xfffffffe < local_40);
        if (-1 < (int)((local_3c ^ local_6c) & ~local_3c)) {
          local_64 = param_2 + -1000000000;
        }
      }
      FUN_019ac130(&local_40,1);
      local_74 = local_40 + 1;
      uVar2 = local_3c + (0xfffffffe < local_40);
      if ((int)((local_3c ^ uVar2) & ~local_3c) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
      }
      if (local_64 == &DAT_3b9aca00) {
        local_64 = local_38;
      }
      else {
        local_74 = uVar4;
        uVar2 = local_6c;
      }
      local_6c = uVar2;
    }
    do {
      if (local_64 == &DAT_3b9aca00) {
        FUN_0164f0b8(param_1 + 8,pcVar7);
      }
      else {
        local_60 = local_74;
        local_58 = local_64;
        local_5c = local_6c;
        FUN_019ac130(&local_40,1);
        local_50 = local_40;
        uStack_4c = local_3c;
        puStack_48 = local_38;
        FUN_019ac248(&local_40,&local_60,&local_50);
        iVar11 = local_30;
        uVar4 = local_34;
        puVar8 = local_38;
        if ((local_40 & 1) != 0) {
          puVar8 = (undefined1 *)0x0;
          uVar4 = 0;
          iVar11 = 0;
        }
        if ((puVar8 == (undefined1 *)0x0 && uVar4 == 0) && iVar11 == 0) goto LAB_019f96c8;
        FUN_019ac130(&local_40,1);
        puVar9 = puVar8 + local_40;
        uVar2 = local_3c + uVar4 + (uint)CARRY4(local_40,(uint)puVar8);
        if ((int)uVar4 < 0 == (int)((local_3c ^ uVar2) & ~(local_3c ^ uVar4)) < 0) {
          puVar5 = local_38 + iVar11;
          if (puVar5 < &DAT_3b9aca00) {
            puVar8 = puVar5;
            unaff_r10 = puVar9;
            unaff_r11 = uVar2;
          }
          else {
            uVar4 = uVar2 + ((undefined1 *)0xfffffffe < puVar9);
            bVar12 = -1 < (int)((uVar2 ^ uVar4) & ~uVar2);
            if (bVar12) {
              unaff_r11 = uVar4;
            }
            puVar8 = &DAT_3b9aca00;
            if (bVar12) {
              puVar8 = puVar5 + -1000000000;
              unaff_r10 = puVar9 + 1;
            }
          }
        }
        else {
          puVar8 = &DAT_3b9aca00;
        }
        iVar11 = FUN_0164f0b8(param_1 + 8,pcVar7,unaff_r10,unaff_r11,puVar8);
        if (iVar11 != 0) goto LAB_019f96c8;
      }
      if (*puVar10 == 3) {
        DataMemoryBarrier(0xb);
        do {
          bVar12 = (bool)hasExclusiveAccess(puVar10);
          if (bVar12) {
            *puVar10 = 0;
            goto LAB_019f93ec;
          }
        } while (*puVar10 == 3);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    } while( true );
  }
  if (uVar4 == 3) {
    DataMemoryBarrier(0xb);
    do {
      bVar12 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar12);
    *puVar10 = 0;
LAB_019f93ec:
    DataMemoryBarrier(0xb);
    goto switchD_019f96f4_caseD_1;
  }
  puVar6 = &DAT_01d29ad8;
  puVar3 = &DAT_0058138c;
  local_50 = uVar4;
LAB_019f9768:
  local_7c = &local_40;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar3,local_7c,puVar6);
LAB_019f96c8:
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar10;
    bVar12 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar12);
  *puVar10 = 0;
  DataMemoryBarrier(0xb);
  switch(uVar4) {
  case 0:
  case 2:
    puVar6 = &DAT_01d29ab8;
    puVar3 = &DAT_005a38a3;
    break;
  case 1:
  case 3:
switchD_019f96f4_caseD_1:
    FUN_01650a90(pcVar7);
    if (*pcVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar12 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar12) {
          *pcVar7 = '\0';
          return;
        }
      } while (*pcVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar7);
    return;
  default:
    puVar6 = &UNK_01d29ac8;
    puVar3 = &UNK_0057bffc;
  }
  local_50 = uVar4;
  goto LAB_019f9768;
}

