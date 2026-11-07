// FUN_019df02c @ 019df02c size=1140 calls_out=16 calls_in=2
// strings: mio: | mio: | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019df02c(ulonglong *param_1,ushort *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  ushort *puVar8;
  undefined2 uVar9;
  char *pcVar10;
  int *piVar11;
  ushort uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined4 extraout_r12;
  ulonglong uVar16;
  undefined4 local_68;
  int *local_64;
  char *local_60;
  undefined4 local_5c;
  int **local_58;
  code *local_54;
  undefined4 local_50;
  char *local_48;
  int *local_44;
  int *local_40;
  undefined1 local_39;
  int **local_38;
  code *local_34;
  undefined1 *local_30;
  code *local_2c;
  
  uVar12 = *param_2;
  uVar5 = 2;
  if (uVar12 != 0) {
    uVar5 = 10;
  }
  FUN_01609904(&local_68,uVar5,2);
  piVar2 = local_64;
  if (((char)local_68 == '\x04') || (((uint)local_68 & 0xff) == 4)) {
    if (local_64 == (int *)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570c98,8,&DAT_01d05e10);
    }
    if ((uVar12 & 1) == 0) {
      puVar8 = param_2 + 1;
      local_60 = (char *)0x0;
      uVar5 = 0x10;
      uVar12 = param_2[3] << 8 | param_2[3] >> 8;
      uVar9 = 2;
      local_5c = 0;
      local_50 = extraout_r12;
    }
    else {
      local_38 = *(int ***)(param_2 + 6);
      local_60 = *(char **)(param_2 + 2);
      local_5c = *(undefined4 *)(param_2 + 4);
      local_34 = *(code **)(param_2 + 8);
      local_50 = *(undefined4 *)(param_2 + 0xc);
      puVar8 = param_2 + 10;
      uVar12 = param_2[0xe] << 8 | param_2[0xe] >> 8;
      uVar5 = 0x1c;
      uVar9 = 10;
    }
    local_64 = *(int **)puVar8;
    local_54 = local_34;
    local_58 = local_38;
    local_68 = (char *)CONCAT22(uVar12,uVar9);
    iVar3 = FUN_01be718e(piVar2,&local_68,uVar5);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)FUN_01be3244();
      piVar15 = (int *)*puVar4;
      FUN_01bf01d6(piVar2);
      uVar7 = 0;
      local_68 = (char *)0x0;
      goto LAB_019df1a0;
    }
    uVar16 = FUN_019ef7f4(&DAT_01d28f14);
    pcVar6 = (char *)(uVar16 >> 0x20);
    iVar3 = 0x180;
    if ((uVar16 & 1) != 0) {
      iVar3 = 0xb8;
    }
    piVar14 = (int *)(pcVar6 + iVar3);
    if (*piVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                   ,0x68,&DAT_01d28f14);
    }
    piVar13 = piVar14 + 3;
    if ((char)*piVar13 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(piVar13);
      if (!bVar1) goto LAB_019df1bc;
      *(char *)piVar13 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019df1bc:
      FUN_0164fba8(piVar13);
    }
    FUN_0165098c(piVar13);
    FUN_019f8030(&local_68,piVar14 + 4);
    piVar15 = local_64;
    pcVar10 = local_68;
    if (((char)local_68 == '\x04') || (((uint)local_68 & 0xff) == 4)) {
      FUN_01650a90(piVar13);
      if ((char)*piVar13 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar13);
          if (bVar1) {
            *(char *)piVar13 = '\0';
            goto LAB_019df250;
          }
        } while ((char)*piVar13 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(piVar13);
LAB_019df250:
      piVar11 = piVar15 + 8;
      local_39 = 3;
      local_40 = piVar11;
      if (4 < DAT_01d51b00) {
        local_30 = &local_39;
        local_38 = &local_40;
        local_2c = FUN_01609ae4;
        local_34 = FUN_015d0bcc;
        local_58 = (int **)&DAT_01d29800;
        local_5c = 9;
        local_60 = "mio:";
        local_64 = (int *)&DAT_00000009;
        local_68 = "mio:";
        FUN_015fb650(&DAT_005b6793,&local_38,5,&local_68);
      }
      FUN_01609584(&local_48,*piVar14,piVar2,piVar11,3);
      if ((char)local_48 != '\x04') {
        local_64 = local_44;
        local_68 = local_48;
        if ((char)*piVar13 == '\0') {
          bVar1 = (bool)hasExclusiveAccess(piVar13);
          if (!bVar1) goto LAB_019df380;
          *(char *)piVar13 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_019df380:
          FUN_0164fba8(piVar13);
        }
        FUN_0165098c(piVar13);
        FUN_019f7f9c(piVar14 + 4,piVar15);
        FUN_01650a90(piVar13);
        if ((char)*piVar13 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar13);
            if (bVar1) {
              *(char *)piVar13 = '\0';
              goto LAB_019df3dc;
            }
          } while ((char)*piVar13 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(piVar13);
LAB_019df3dc:
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar15;
          bVar1 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar1);
        *piVar15 = iVar3 + -1;
        pcVar10 = local_48;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db52c(piVar15);
        }
        goto LAB_019df408;
      }
LAB_019df418:
      if ((int)uVar16 != 2) {
        *(int **)((int)param_1 + 0xc) = piVar2;
        goto LAB_019df458;
      }
      pcVar10 = pcVar6;
    }
    else {
      FUN_01650a90(piVar13);
      local_44 = piVar15;
      if ((char)*piVar13 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar13);
          if (bVar1) {
            *(char *)piVar13 = '\0';
            goto LAB_019df408;
          }
        } while ((char)*piVar13 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(piVar13);
LAB_019df408:
      piVar15 = local_44;
      if (((uint)pcVar10 & 0xff) == 4) goto LAB_019df418;
      FUN_014397e4((int)uVar16,pcVar6);
    }
    FUN_01bf01d6(piVar2);
  }
  else {
    uVar7 = (uint)local_68 >> 8;
    piVar15 = local_64;
LAB_019df1a0:
    pcVar10 = (char *)((uint)local_68 & 0xff | uVar7 << 8);
  }
  uVar16 = CONCAT44(pcVar10,2);
LAB_019df458:
  *param_1 = uVar16;
  *(int **)(param_1 + 1) = piVar15;
  return;
}

