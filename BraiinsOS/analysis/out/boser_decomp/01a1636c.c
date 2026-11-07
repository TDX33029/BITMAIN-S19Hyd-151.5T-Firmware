// FUN_01a1636c @ 01a1636c size=1304 calls_out=6 calls_in=2
// strings: 

void FUN_01a1636c(undefined4 *param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 *local_38;
  
  uVar2 = param_2[2];
  uVar5 = *(uint *)(uVar2 + 0x40) & *param_2;
  if (*(uint *)(uVar2 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,*(uint *)(uVar2 + 0xc),&DAT_01d2a550);
  }
  pcVar6 = (char *)(uVar5 * 0x148 + *(int *)(uVar2 + 8));
  if (*pcVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar6);
    if (!bVar1) goto LAB_01a16728;
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01a16728:
    FUN_0164fba8(pcVar6);
  }
  FUN_0165098c(pcVar6);
  uVar10 = *(uint *)(pcVar6 + 0x138);
  uVar2 = *(uint *)(pcVar6 + 0x13c);
  if (!(uVar10 == *param_2 && uVar2 == param_2[1])) {
    FUN_01650a90(pcVar6);
    if (*pcVar6 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar6);
        if (bVar1) {
          *pcVar6 = '\0';
          goto LAB_01a16438;
        }
      } while (*pcVar6 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar6);
LAB_01a16438:
    uVar3 = param_2[2];
    pcVar8 = (char *)(uVar3 + 0x10);
    if (*pcVar8 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar8);
      if (!bVar1) goto LAB_01a16738;
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01a16738:
      FUN_0164fba8(pcVar8);
    }
    FUN_0165098c(pcVar8);
    uVar2 = *(uint *)(param_2[2] + 0xc);
    if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,uVar2,&DAT_01d2a560);
    }
    pcVar6 = (char *)(uVar5 * 0x148 + *(int *)(param_2[2] + 8));
    if (*pcVar6 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar6);
      if (!bVar1) goto LAB_01a164b4;
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01a164b4:
      FUN_0164fba8(pcVar6);
    }
    FUN_0165098c(pcVar6);
    uVar5 = *param_2;
    uVar10 = *(uint *)(pcVar6 + 0x138);
    uVar7 = param_2[1];
    uVar2 = *(uint *)(pcVar6 + 0x13c);
    if (uVar10 != uVar5 || uVar2 != uVar7) {
      uVar4 = *(uint *)(param_2[2] + 0xc);
      if (uVar10 + uVar4 != uVar5 || uVar2 + CARRY4(uVar10,uVar4) != uVar7) {
        uVar2 = *(uint *)(uVar3 + 0x18) - uVar4;
        uVar10 = *(int *)(uVar3 + 0x1c) - (uint)(*(uint *)(uVar3 + 0x18) < uVar4);
        FUN_01650a90(pcVar8);
        if (*pcVar8 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar8);
            if (bVar1) {
              *pcVar8 = '\0';
              goto LAB_01a165e8;
            }
          } while (*pcVar8 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar8);
LAB_01a165e8:
        if (uVar2 != uVar5 || uVar10 != uVar7) {
          *param_1 = 2;
          param_1[1] = 0;
          *param_2 = uVar2;
          param_2[1] = uVar10;
          param_1[2] = uVar2 - uVar5;
          param_1[3] = uVar10 - (uVar7 + (uVar2 < uVar5));
          goto LAB_01a166dc;
        }
        param_1[1] = 0;
        param_1[2] = pcVar6;
        uVar2 = uVar7 + (0xfffffffe < uVar5);
        goto LAB_01a16548;
      }
      if (*(char *)(uVar3 + 0x2c) != '\0') {
        *param_1 = 1;
        param_1[1] = 0;
        FUN_01650a90(pcVar8);
        if (*pcVar8 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar8);
            if (bVar1) {
              *pcVar8 = '\0';
              goto LAB_01a166dc;
            }
          } while (*pcVar8 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar8);
LAB_01a166dc:
        FUN_01650a90(pcVar6);
        if (*pcVar6 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar6);
            if (bVar1) {
              *pcVar6 = '\0';
              return;
            }
          } while (*pcVar6 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar6);
        return;
      }
      iVar9 = 0;
      if (param_3 == (int *)0x0) goto LAB_01a1679c;
      local_38 = (undefined4 *)*param_3;
      if (local_38 == (undefined4 *)0x0) {
        iVar9 = param_4[1];
LAB_01a1674c:
        uVar11 = (**(code **)*param_4)(iVar9);
        iVar9 = *param_3;
        local_38 = (undefined4 *)param_3[1];
        *(undefined8 *)param_3 = uVar11;
      }
      else {
        iVar9 = param_4[1];
        if (param_3[1] != iVar9 || local_38 != (undefined4 *)*param_4) goto LAB_01a1674c;
        iVar9 = 0;
      }
      if ((char)param_3[4] == '\0') {
        *(undefined1 *)(param_3 + 4) = 1;
        FUN_01a36ae0(uVar3 + 0x20);
      }
LAB_01a1679c:
      FUN_01650a90(pcVar6);
      if (*pcVar6 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar6);
          if (bVar1) {
            *pcVar6 = '\0';
            goto LAB_01a167ec;
          }
        } while (*pcVar6 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar6);
LAB_01a167ec:
      FUN_01650a90(pcVar8);
      if (*pcVar8 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar8);
          if (bVar1) {
            *pcVar8 = '\0';
            goto LAB_01a16834;
          }
        } while (*pcVar8 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar8);
LAB_01a16834:
      if (iVar9 != 0) {
        (**(code **)(iVar9 + 0xc))(local_38);
      }
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_01650a90(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar1) {
          *pcVar8 = '\0';
          goto LAB_01a16534;
        }
      } while (*pcVar8 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar8);
  }
LAB_01a16534:
  param_1[1] = 0;
  param_1[2] = pcVar6;
  uVar2 = uVar2 + (0xfffffffe < uVar10);
  uVar5 = uVar10;
LAB_01a16548:
  *param_1 = 3;
  *param_2 = uVar5 + 1;
  param_2[1] = uVar2;
  return;
}

