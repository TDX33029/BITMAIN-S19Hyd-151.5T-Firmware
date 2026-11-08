// FUN_009cde58 @ 009cde58 size=1284 calls_out=6 calls_in=2
// strings: 

void FUN_009cde58(undefined4 *param_1,uint *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined4 *local_38;
  
  uVar2 = param_2[2];
  uVar6 = *(uint *)(uVar2 + 0x40) & *param_2;
  if (*(uint *)(uVar2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,*(uint *)(uVar2 + 0xc),&DAT_01d2a550);
  }
  pcVar7 = (char *)(*(int *)(uVar2 + 8) + uVar6 * 0x48);
  if (*pcVar7 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar7);
    if (!bVar1) goto LAB_009ce204;
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_009ce204:
    FUN_0164fba8(pcVar7);
  }
  FUN_0165098c(pcVar7);
  uVar9 = *(uint *)(pcVar7 + 0x38);
  uVar2 = *(uint *)(pcVar7 + 0x3c);
  if (!(uVar9 == *param_2 && uVar2 == param_2[1])) {
    FUN_01650a90(pcVar7);
    if (*pcVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar1) {
          *pcVar7 = '\0';
          goto LAB_009cdf20;
        }
      } while (*pcVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar7);
LAB_009cdf20:
    uVar3 = param_2[2];
    pcVar11 = (char *)(uVar3 + 0x10);
    if (*pcVar11 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar11);
      if (!bVar1) goto LAB_009ce214;
      *pcVar11 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_009ce214:
      FUN_0164fba8(pcVar11);
    }
    FUN_0165098c(pcVar11);
    uVar2 = *(uint *)(param_2[2] + 0xc);
    if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,uVar2,&DAT_01d2a560);
    }
    pcVar7 = (char *)(*(int *)(param_2[2] + 8) + uVar6 * 0x48);
    if (*pcVar7 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar7);
      if (!bVar1) goto LAB_009cdf94;
      *pcVar7 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_009cdf94:
      FUN_0164fba8(pcVar7);
    }
    FUN_0165098c(pcVar7);
    uVar6 = *param_2;
    uVar9 = *(uint *)(pcVar7 + 0x38);
    uVar2 = *(uint *)(pcVar7 + 0x3c);
    uVar8 = param_2[1];
    if (uVar9 != uVar6 || uVar2 != uVar8) {
      uVar4 = *(uint *)(param_2[2] + 0xc);
      if (uVar9 + uVar4 != uVar6 || uVar2 + CARRY4(uVar9,uVar4) != uVar8) {
        uVar2 = *(uint *)(uVar3 + 0x18) - uVar4;
        uVar9 = *(int *)(uVar3 + 0x1c) - (uint)(*(uint *)(uVar3 + 0x18) < uVar4);
        FUN_01650a90(pcVar11);
        if (*pcVar11 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar11);
            if (bVar1) {
              *pcVar11 = '\0';
              goto LAB_009ce0c4;
            }
          } while (*pcVar11 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar11);
LAB_009ce0c4:
        if (uVar2 != uVar6 || uVar9 != uVar8) {
          *param_1 = 2;
          param_1[1] = 0;
          *param_2 = uVar2;
          param_2[1] = uVar9;
          param_1[2] = uVar2 - uVar6;
          param_1[3] = uVar9 - (uVar8 + (uVar2 < uVar6));
          goto LAB_009ce1b8;
        }
        param_1[1] = 0;
        param_1[2] = pcVar7;
        uVar2 = uVar8 + (0xfffffffe < uVar6);
        goto LAB_009ce024;
      }
      if (*(char *)(uVar3 + 0x2c) != '\0') {
        *param_1 = 1;
        param_1[1] = 0;
        FUN_01650a90(pcVar11);
        if (*pcVar11 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar11);
            if (bVar1) {
              *pcVar11 = '\0';
              goto LAB_009ce1b8;
            }
          } while (*pcVar11 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar11);
LAB_009ce1b8:
        FUN_01650a90(pcVar7);
        if (*pcVar7 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar7);
            if (bVar1) {
              *pcVar7 = '\0';
              return;
            }
          } while (*pcVar7 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar7);
        return;
      }
      iVar10 = 0;
      if (param_3 == (int *)0x0) goto LAB_009ce274;
      local_38 = (undefined4 *)*param_3;
      if (local_38 == (undefined4 *)0x0) {
        iVar5 = param_4[1];
LAB_009ce228:
        uVar12 = (**(code **)*param_4)(iVar5);
        iVar10 = *param_3;
        local_38 = (undefined4 *)param_3[1];
        *(undefined8 *)param_3 = uVar12;
      }
      else {
        iVar5 = param_4[1];
        if (param_3[1] != iVar5 || local_38 != (undefined4 *)*param_4) goto LAB_009ce228;
      }
      if ((char)param_3[4] == '\0') {
        *(undefined1 *)(param_3 + 4) = 1;
        FUN_007451fc(uVar3 + 0x20);
      }
LAB_009ce274:
      FUN_01650a90(pcVar7);
      if (*pcVar7 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar7);
          if (bVar1) {
            *pcVar7 = '\0';
            goto LAB_009ce2c4;
          }
        } while (*pcVar7 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar7);
LAB_009ce2c4:
      FUN_01650a90(pcVar11);
      if (*pcVar11 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar11);
          if (bVar1) {
            *pcVar11 = '\0';
            goto LAB_009ce30c;
          }
        } while (*pcVar11 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar11);
LAB_009ce30c:
      if (iVar10 != 0) {
        (**(code **)(iVar10 + 0xc))(local_38);
      }
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_01650a90(pcVar11);
    if (*pcVar11 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar11);
        if (bVar1) {
          *pcVar11 = '\0';
          goto LAB_009ce010;
        }
      } while (*pcVar11 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar11);
  }
LAB_009ce010:
  param_1[1] = 0;
  param_1[2] = pcVar7;
  uVar2 = uVar2 + (0xfffffffe < uVar9);
  uVar6 = uVar9;
LAB_009ce024:
  *param_1 = 3;
  *param_2 = uVar6 + 1;
  param_2[1] = uVar2;
  return;
}

