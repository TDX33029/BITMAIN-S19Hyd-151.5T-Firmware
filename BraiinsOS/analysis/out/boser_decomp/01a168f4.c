// FUN_01a168f4 @ 01a168f4 size=1296 calls_out=6 calls_in=2
// strings: 

void FUN_01a168f4(undefined4 *param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined4 *local_38;
  
  uVar2 = param_2[2];
  uVar5 = *(uint *)(uVar2 + 0x40) & *param_2;
  if (*(uint *)(uVar2 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,*(uint *)(uVar2 + 0xc),&DAT_01d2a550);
  }
  pcVar6 = (char *)(uVar5 * 0x68 + *(int *)(uVar2 + 8));
  if (*pcVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar6);
    if (!bVar1) goto LAB_01a16ca8;
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01a16ca8:
    FUN_0164fba8(pcVar6);
  }
  FUN_0165098c(pcVar6);
  uVar8 = *(uint *)(pcVar6 + 0x58);
  uVar2 = *(uint *)(pcVar6 + 0x5c);
  if (!(uVar8 == *param_2 && uVar2 == param_2[1])) {
    FUN_01650a90(pcVar6);
    if (*pcVar6 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar6);
        if (bVar1) {
          *pcVar6 = '\0';
          goto LAB_01a169bc;
        }
      } while (*pcVar6 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar6);
LAB_01a169bc:
    uVar3 = param_2[2];
    pcVar10 = (char *)(uVar3 + 0x10);
    if (*pcVar10 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar10);
      if (!bVar1) goto LAB_01a16cb8;
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01a16cb8:
      FUN_0164fba8(pcVar10);
    }
    FUN_0165098c(pcVar10);
    uVar2 = *(uint *)(param_2[2] + 0xc);
    if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,uVar2,&DAT_01d2a560);
    }
    pcVar6 = (char *)(uVar5 * 0x68 + *(int *)(param_2[2] + 8));
    if (*pcVar6 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar6);
      if (!bVar1) goto LAB_01a16a38;
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01a16a38:
      FUN_0164fba8(pcVar6);
    }
    FUN_0165098c(pcVar6);
    uVar5 = *param_2;
    uVar8 = *(uint *)(pcVar6 + 0x58);
    uVar2 = *(uint *)(pcVar6 + 0x5c);
    uVar7 = param_2[1];
    if (uVar8 != uVar5 || uVar2 != uVar7) {
      uVar4 = *(uint *)(param_2[2] + 0xc);
      if (uVar8 + uVar4 != uVar5 || uVar2 + CARRY4(uVar8,uVar4) != uVar7) {
        uVar2 = *(uint *)(uVar3 + 0x18) - uVar4;
        uVar8 = *(int *)(uVar3 + 0x1c) - (uint)(*(uint *)(uVar3 + 0x18) < uVar4);
        FUN_01650a90(pcVar10);
        if (*pcVar10 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar10);
            if (bVar1) {
              *pcVar10 = '\0';
              goto LAB_01a16b68;
            }
          } while (*pcVar10 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar10);
LAB_01a16b68:
        if (uVar2 != uVar5 || uVar8 != uVar7) {
          *param_1 = 2;
          param_1[1] = 0;
          *param_2 = uVar2;
          param_2[1] = uVar8;
          param_1[2] = uVar2 - uVar5;
          param_1[3] = uVar8 - (uVar7 + (uVar2 < uVar5));
          goto LAB_01a16c5c;
        }
        param_1[1] = 0;
        param_1[2] = pcVar6;
        uVar2 = uVar7 + (0xfffffffe < uVar5);
        goto LAB_01a16ac8;
      }
      if (*(char *)(uVar3 + 0x2c) != '\0') {
        *param_1 = 1;
        param_1[1] = 0;
        FUN_01650a90(pcVar10);
        if (*pcVar10 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar10);
            if (bVar1) {
              *pcVar10 = '\0';
              goto LAB_01a16c5c;
            }
          } while (*pcVar10 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar10);
LAB_01a16c5c:
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
      if (param_3 == (int *)0x0) goto LAB_01a16d1c;
      local_38 = (undefined4 *)*param_3;
      if (local_38 == (undefined4 *)0x0) {
        iVar9 = param_4[1];
LAB_01a16ccc:
        uVar11 = (**(code **)*param_4)(iVar9);
        iVar9 = *param_3;
        local_38 = (undefined4 *)param_3[1];
        *(undefined8 *)param_3 = uVar11;
      }
      else {
        iVar9 = param_4[1];
        if (param_3[1] != iVar9 || local_38 != (undefined4 *)*param_4) goto LAB_01a16ccc;
        iVar9 = 0;
      }
      if ((char)param_3[4] == '\0') {
        *(undefined1 *)(param_3 + 4) = 1;
        FUN_01a36ae0(uVar3 + 0x20);
      }
LAB_01a16d1c:
      FUN_01650a90(pcVar6);
      if (*pcVar6 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar6);
          if (bVar1) {
            *pcVar6 = '\0';
            goto LAB_01a16d6c;
          }
        } while (*pcVar6 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar6);
LAB_01a16d6c:
      FUN_01650a90(pcVar10);
      if (*pcVar10 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar1) {
            *pcVar10 = '\0';
            goto LAB_01a16db4;
          }
        } while (*pcVar10 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar10);
LAB_01a16db4:
      if (iVar9 != 0) {
        (**(code **)(iVar9 + 0xc))(local_38);
      }
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_01650a90(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar1) {
          *pcVar10 = '\0';
          goto LAB_01a16ab4;
        }
      } while (*pcVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar10);
  }
LAB_01a16ab4:
  param_1[1] = 0;
  param_1[2] = pcVar6;
  uVar2 = uVar2 + (0xfffffffe < uVar8);
  uVar5 = uVar8;
LAB_01a16ac8:
  *param_1 = 3;
  *param_2 = uVar5 + 1;
  param_2[1] = uVar2;
  return;
}

