// FUN_019ef354 @ 019ef354 size=300 calls_out=5 calls_in=1
// strings: 

void FUN_019ef354(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  uVar5 = param_2[1];
  uVar3 = *(uint *)(*param_2 + 0x7c);
  if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,uVar3,&DAT_01d296b0);
  }
  iVar2 = *(int *)(*param_2 + 0x78) + uVar5 * 0x80;
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar2 + 0x10));
  } while (!bVar1);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar2 + 0x18));
  } while (!bVar1);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  do {
    uVar4 = *(undefined4 *)(iVar2 + 0x24);
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar2 + 0x20));
  } while (!bVar1);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar2 + 0x24) = uVar7;
  if (*(char *)(param_1 + 0x66) != '\0') goto LAB_019ef3cc;
  iVar2 = *param_2;
  pcVar6 = (char *)(iVar2 + 0x9c);
  if (*pcVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar6);
    if (bVar1) {
      *pcVar6 = '\x01';
    }
    param_2 = (int *)(uint)!bVar1;
    if (param_2 != (int *)0x0) goto LAB_019ef460;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019ef460:
    FUN_0164fba8(pcVar6,param_2,0,uVar4);
  }
  FUN_0165098c(pcVar6);
  *(undefined1 *)(param_1 + 0x66) = *(undefined1 *)(iVar2 + 0xb4);
  FUN_01650a90(pcVar6);
  if (*pcVar6 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar6);
      if (bVar1) {
        *pcVar6 = '\0';
        goto LAB_019ef3cc;
      }
    } while (*pcVar6 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar6);
LAB_019ef3cc:
  if (*(char *)(param_1 + 0x67) == '\0') {
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  return;
}

