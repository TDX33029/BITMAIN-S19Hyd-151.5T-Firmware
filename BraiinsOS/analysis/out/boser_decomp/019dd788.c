// FUN_019dd788 @ 019dd788 size=812 calls_out=13 calls_in=2
// strings: mio: | mio: | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019dd788(ulonglong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  ulonglong uVar9;
  char *local_58;
  int *local_54;
  int *local_50;
  undefined1 local_49;
  int **local_48;
  code *local_44;
  undefined1 *local_40;
  code *local_3c;
  char *local_38;
  int *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  uVar9 = FUN_019ef7f4(param_3);
  pcVar2 = (char *)(uVar9 >> 0x20);
  iVar3 = 0x180;
  if ((uVar9 & 1) != 0) {
    iVar3 = 0xb8;
  }
  piVar8 = (int *)(pcVar2 + iVar3);
  if (*piVar8 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,param_3);
  }
  piVar4 = piVar8 + 3;
  if ((char)*piVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
    if (!bVar1) goto LAB_019dd7f0;
    *(char *)piVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019dd7f0:
    FUN_0164fba8(piVar4);
  }
  FUN_0165098c(piVar4);
  FUN_019f8030(&local_38,piVar8 + 4);
  piVar5 = local_34;
  pcVar7 = local_38;
  if (((char)local_38 == '\x04') || (((uint)local_38 & 0xff) == 4)) {
    FUN_01650a90(piVar4);
    if ((char)*piVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (bVar1) {
          *(char *)piVar4 = '\0';
          goto LAB_019dd87c;
        }
      } while ((char)*piVar4 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar4);
LAB_019dd87c:
    piVar6 = piVar5 + 8;
    local_49 = 3;
    local_50 = piVar6;
    if (4 < DAT_01d51b00) {
      local_40 = &local_49;
      local_48 = &local_50;
      local_3c = FUN_01609ae4;
      local_44 = FUN_015d0bcc;
      local_28 = &DAT_01d29800;
      local_2c = 9;
      local_30 = "mio:";
      local_34 = (int *)&DAT_00000009;
      local_38 = "mio:";
      FUN_015fb650(&DAT_005b6793,&local_48,5,&local_38);
    }
    FUN_01609584(&local_58,*piVar8,param_2,piVar6,3);
    if ((char)local_58 != '\x04') {
      local_34 = local_54;
      local_38 = local_58;
      if ((char)*piVar4 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (!bVar1) goto LAB_019dd9ac;
        *(char *)piVar4 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_019dd9ac:
        FUN_0164fba8(piVar4);
      }
      FUN_0165098c(piVar4);
      FUN_019f7f9c(piVar8 + 4,piVar5);
      FUN_01650a90(piVar4);
      if ((char)*piVar4 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar4);
          if (bVar1) {
            *(char *)piVar4 = '\0';
            goto LAB_019dda08;
          }
        } while ((char)*piVar4 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(piVar4);
LAB_019dda08:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar3 + -1;
      pcVar7 = local_58;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db52c(piVar5);
      }
      goto LAB_019dda34;
    }
LAB_019dda44:
    if ((int)uVar9 != 2) {
      *(undefined4 *)((int)param_1 + 0xc) = param_2;
      goto LAB_019dda8c;
    }
    pcVar7 = pcVar2;
  }
  else {
    FUN_01650a90(piVar4);
    local_54 = piVar5;
    if ((char)*piVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (bVar1) {
          *(char *)piVar4 = '\0';
          goto LAB_019dda34;
        }
      } while ((char)*piVar4 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar4);
LAB_019dda34:
    piVar5 = local_54;
    if (((uint)pcVar7 & 0xff) == 4) goto LAB_019dda44;
    FUN_014397e4((int)uVar9,pcVar2);
  }
  FUN_01bf01d6(param_2);
  uVar9 = CONCAT44(pcVar7,2);
LAB_019dda8c:
  *param_1 = uVar9;
  *(int **)(param_1 + 1) = piVar5;
  return;
}

