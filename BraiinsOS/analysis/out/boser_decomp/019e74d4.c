// FUN_019e74d4 @ 019e74d4 size=780 calls_out=11 calls_in=2
// strings: mio: | mio: | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019e74d4(uint *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
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
  
  iVar2 = 0x180;
  if ((param_3 & 1) != 0) {
    iVar2 = 0xb8;
  }
  piVar7 = (int *)(param_4 + iVar2);
  if (*piVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,param_5);
  }
  piVar5 = piVar7 + 3;
  if ((char)*piVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar5);
    if (!bVar1) goto LAB_019e7530;
    *(char *)piVar5 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019e7530:
    FUN_0164fba8(piVar5);
  }
  FUN_0165098c(piVar5);
  FUN_019f8030(&local_38,piVar7 + 4);
  piVar3 = local_34;
  pcVar6 = local_38;
  if (((char)local_38 == '\x04') || (((uint)local_38 & 0xff) == 4)) {
    FUN_01650a90(piVar5);
    if ((char)*piVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        if (bVar1) {
          *(char *)piVar5 = '\0';
          goto LAB_019e75c4;
        }
      } while ((char)*piVar5 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar5);
LAB_019e75c4:
    piVar4 = piVar3 + 8;
    local_49 = 1;
    local_50 = piVar4;
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
    FUN_01609584(&local_58,*piVar7,param_2,piVar4,1);
    if ((char)local_58 == '\x04') goto LAB_019e7790;
    local_34 = local_54;
    local_38 = local_58;
    if ((char)*piVar5 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(piVar5);
      if (!bVar1) goto LAB_019e76f4;
      *(char *)piVar5 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019e76f4:
      FUN_0164fba8(piVar5);
    }
    FUN_0165098c(piVar5);
    FUN_019f7f9c(piVar7 + 4,piVar3);
    FUN_01650a90(piVar5);
    if ((char)*piVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        if (bVar1) {
          *(char *)piVar5 = '\0';
          goto LAB_019e7750;
        }
      } while ((char)*piVar5 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar5);
LAB_019e7750:
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    pcVar6 = local_58;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db52c(piVar3);
    }
  }
  else {
    FUN_01650a90(piVar5);
    local_54 = piVar3;
    if ((char)*piVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        if (bVar1) {
          *(char *)piVar5 = '\0';
          goto LAB_019e777c;
        }
      } while ((char)*piVar5 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar5);
  }
LAB_019e777c:
  piVar3 = local_54;
  if (((uint)pcVar6 & 0xff) != 4) {
    *param_1 = 2;
    param_1[1] = (uint)pcVar6;
    param_1[2] = (uint)piVar3;
    FUN_014397e4(param_3,param_4);
    return;
  }
LAB_019e7790:
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = (uint)piVar3;
  return;
}

