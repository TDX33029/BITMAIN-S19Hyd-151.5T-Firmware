// FUN_01209a90 @ 01209a90 size=576 calls_out=10 calls_in=2
// strings: 

void FUN_01209a90(uint *param_1,int param_2,undefined4 *param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_2c;
  uint local_28;
  
  pcVar3 = (char *)(param_2 + 8);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_01209cb0;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01209cb0:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  uVar2 = FUN_019ec670(param_3);
  uVar4 = 0;
  if ((uVar2 & 0xff) != 2) {
    uVar4 = uVar2;
  }
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)param_1 = 5;
    goto LAB_01209c5c;
  }
  if (*(char *)(param_2 + 0x30) == '\0') {
    uVar4 = uVar4 & 0xffffff;
    iVar5 = *(int *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) == iVar5) {
      uVar6 = (**(code **)*param_3)(param_3[1]);
      if (*(int *)(param_2 + 0x28) != 0) {
        (**(code **)(*(int *)(param_2 + 0x28) + 0xc))(*(undefined4 *)(param_2 + 0x2c));
      }
      *(int *)(param_2 + 0x28) = (int)uVar6;
      *param_1 = 0xb05;
      param_1[1] = 0;
      *(int *)(param_2 + 0x2c) = (int)((ulonglong)uVar6 >> 0x20);
      if ((uVar4 >> 8 & 1) != 0) {
        uVar6 = thunk_FUN_01bee35a(0xb05,0x20);
        iVar5 = (int)uVar6 + (int)((ulonglong)uVar6 >> 0x20);
        if (*(char *)(iVar5 + 0x38) != '\x01') {
          if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_01209c5c;
          FUN_019a2bcc(iVar5,&LAB_019efb68);
          *(undefined1 *)(iVar5 + 0x38) = 1;
        }
        *(char *)(iVar5 + 0x31) = (char)(uVar4 >> 0x10);
        *(char *)(iVar5 + 0x30) = (char)(uVar4 >> 8);
      }
      goto LAB_01209c5c;
    }
    uVar4 = *(int *)(param_2 + 0x1c) - iVar5;
    local_28 = *(int *)(param_2 + 0x14) - iVar5;
    if (uVar4 < param_5) {
      param_5 = uVar4;
    }
    if (local_28 < param_5) {
      FUN_01283c9c((int *)(param_2 + 0xc),param_5);
      iVar5 = *(int *)(param_2 + 0x10);
      local_28 = *(int *)(param_2 + 0x14) - iVar5;
    }
    FUN_01bed4e2(*(int *)(param_2 + 0xc) + iVar5,param_4,param_5);
    if (local_28 < param_5) {
      local_2c = param_5;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_2c);
    }
    *(uint *)(param_2 + 0x10) = iVar5 + param_5;
    iVar5 = *(int *)(param_2 + 0x20);
    uVar4 = 4;
    *(undefined4 *)(param_2 + 0x20) = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(param_2 + 0x24));
    }
  }
  else {
    uVar4 = 1;
    param_5 = 0;
  }
  *param_1 = uVar4 | 0xb00;
  param_1[1] = param_5;
LAB_01209c5c:
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        return;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
  return;
}

