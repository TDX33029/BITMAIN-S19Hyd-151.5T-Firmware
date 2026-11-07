// FUN_0121a900 @ 0121a900 size=684 calls_out=14 calls_in=0
// strings: Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks. | failed to park thread

void FUN_0121a900(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  uint *extraout_r2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  
  uVar8 = thunk_FUN_01bee35a(param_1,0x20,*param_2);
  iVar7 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  uVar5 = *extraout_r2;
  uVar6 = extraout_r2[1];
  if (*(char *)(iVar7 + 0x38) != '\x01') {
    if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_0121a938;
    FUN_019a2bcc(iVar7,&LAB_019efb68);
    *(undefined1 *)(iVar7 + 0x38) = 1;
  }
  if (*(char *)(iVar7 + 0x32) != '\x02') {
LAB_0121ab6c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                 ,0x183,&DAT_01c23ccc);
  }
  iVar2 = 0x1f0;
  if ((uVar5 & 1) != 0) {
    iVar2 = 0x128;
  }
  *(undefined1 *)(iVar7 + 0x32) = 1;
  uVar8 = FUN_019f7c78(uVar6 + iVar2);
  if ((*(uint *)(iVar7 + 0x24) & 1) == 0) {
    uVar9 = FUN_019e9e08();
    uStack_40 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_3c = 1;
    if (1 < (uint)uVar9) {
      uStack_3c = (uint)uVar9;
    }
  }
  else {
    uStack_40 = *(undefined4 *)(iVar7 + 0x28);
    uStack_3c = *(uint *)(iVar7 + 0x2c);
  }
  *(undefined4 *)(iVar7 + 0x24) = 1;
  *(undefined8 *)(iVar7 + 0x28) = uVar8;
  FUN_019ec774(&local_38,iVar7,uVar5,uVar6);
  local_48 = local_34;
  uStack_44 = uStack_30;
  local_2c = uStack_40;
  local_28 = uStack_3c;
  if (local_38 == 4) {
LAB_0121a938:
                    /* WARNING: Subroutine does not return */
    FUN_019b0950(&DAT_01d301c0);
  }
  if (local_38 == 3) goto LAB_0121ab6c;
  uVar8 = FUN_019ee710();
  if ((int)uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("failed to park thread",0x15,&local_48,&DAT_01d29600,&DAT_01c23cfc);
  }
  if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_0121aa6c:
    cVar4 = *(char *)(iVar7 + 0x30);
    uVar6 = (uint)*(byte *)(iVar7 + 0x31);
    *(undefined2 *)(iVar7 + 0x30) = 0x8001;
  }
  else {
    if (*(char *)(iVar7 + 0x38) != '\x02') {
      FUN_019a2bcc(iVar7,&LAB_019efb68);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_0121aa6c;
    }
    cVar4 = '\x02';
  }
  pcVar3 = (char *)(extraout_r2[3] + 8);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_0121aaac;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0121aaac:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_0121aafc;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_0121aafc:
  if (cVar4 != '\x02') {
    if (*(char *)(iVar7 + 0x38) != '\x01') {
      if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_0121ab38;
      FUN_019a2bcc(iVar7,&LAB_019efb68);
      *(undefined1 *)(iVar7 + 0x38) = 1;
    }
    *(char *)(iVar7 + 0x31) = (char)uVar6;
    *(char *)(iVar7 + 0x30) = cVar4;
  }
LAB_0121ab38:
  (**(code **)((int)uVar8 + 0xc))((int)((ulonglong)uVar8 >> 0x20));
  *param_1 = 4;
  param_1[1] = 0;
  FUN_0120e714(&local_38);
  return;
}

