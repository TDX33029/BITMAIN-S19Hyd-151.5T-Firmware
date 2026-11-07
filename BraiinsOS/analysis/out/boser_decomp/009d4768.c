// FUN_009d4768 @ 009d4768 size=260 calls_out=6 calls_in=6
// strings: max receivers

void FUN_009d4768(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(param_2 + 0x10);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_009d47a4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar3);
LAB_009d47a4:
  FUN_0165098c(pcVar3);
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar2 == 0) {
    *(undefined1 *)(param_2 + 0x2c) = 0;
  }
  else {
    if (iVar2 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("max receivers",0x1b,&DAT_01d2a510);
    }
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570520,8,&DAT_01d2a520);
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(int *)(param_2 + 0x28) = iVar2 + 1;
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_009d4840;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_009d4840:
  *param_1 = uVar5;
  param_1[1] = uVar4;
  param_1[2] = param_2;
  return;
}

