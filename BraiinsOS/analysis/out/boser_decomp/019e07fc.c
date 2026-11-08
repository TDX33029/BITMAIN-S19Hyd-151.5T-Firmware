// FUN_019e07fc @ 019e07fc size=676 calls_out=8 calls_in=3
// strings: 

void FUN_019e07fc(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int aiStack_124 [65];
  
  aiStack_124[0x40] = 0;
  pcVar8 = (char *)(param_1 + 0xc);
  if (*pcVar8 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar1) goto LAB_019e083c;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019e083c:
    FUN_0164fba8(pcVar8);
  }
  FUN_0165098c(pcVar8);
  if ((param_2 & 5) != 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (iVar5 != 0) {
      if (0x1f < (uint)aiStack_124[0x40]) goto LAB_019e0a94;
      aiStack_124[aiStack_124[0x40] * 2] = iVar5;
      aiStack_124[aiStack_124[0x40] * 2 + 1] = iVar3;
      aiStack_124[0x40] = aiStack_124[0x40] + 1;
    }
  }
  if ((param_2 & 10) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (iVar5 != 0) {
      if (0x1f < (uint)aiStack_124[0x40]) {
LAB_019e0a94:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(aiStack_124[0x40],0x20,&DAT_01d28cc4);
      }
      aiStack_124[aiStack_124[0x40] * 2] = iVar5;
      aiStack_124[aiStack_124[0x40] * 2 + 1] = iVar3;
      aiStack_124[0x40] = aiStack_124[0x40] + 1;
    }
  }
  do {
    if ((uint)aiStack_124[0x40] < 0x20) {
      iVar3 = *(int *)(param_1 + 0x10);
      do {
        do {
          if (iVar3 == 0) {
LAB_019e0a1c:
            FUN_01650a90(pcVar8);
            if (*pcVar8 != '\x01') goto LAB_019e0a50;
            DataMemoryBarrier(0xb);
            goto LAB_019e0a38;
          }
          iVar5 = *(int *)(iVar3 + 4);
          uVar2 = *(uint *)(iVar3 + 0x10);
          uVar6 = -(uVar2 & 1) & 5 | (uVar2 >> 1 & 1) << 1 | (uVar2 >> 1 & 1) << 3;
          if ((uVar2 & 0x10) != 0) {
            uVar6 = uVar6 | 0x14;
          }
          iVar3 = iVar5;
        } while (((uVar6 | uVar2 & 0x20) & param_2) == 0);
        iVar5 = FUN_019dfd84((int *)(param_1 + 0x10));
        if (iVar5 == 0) goto LAB_019e0a1c;
        iVar7 = *(int *)(iVar5 + 8);
        iVar4 = *(int *)(iVar5 + 0xc);
        *(undefined4 *)(iVar5 + 8) = 0;
        if (iVar7 != 0) {
          *(undefined1 *)(iVar5 + 0x14) = 1;
          if (0x1f < (uint)aiStack_124[0x40]) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(aiStack_124[0x40],0x20,&DAT_01d28cc4);
          }
          aiStack_124[aiStack_124[0x40] * 2] = iVar7;
          aiStack_124[aiStack_124[0x40] * 2 + 1] = iVar4;
          aiStack_124[0x40] = aiStack_124[0x40] + 1;
        }
      } while ((uint)aiStack_124[0x40] < 0x20);
    }
    FUN_01650a90(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar1) {
          *pcVar8 = '\0';
          goto LAB_019e09d8;
        }
      } while (*pcVar8 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar8);
LAB_019e09d8:
    FUN_019d83c4(aiStack_124);
    if (*pcVar8 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar8);
      if (!bVar1) goto LAB_019e0a00;
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019e0a00:
      FUN_0164fba8(pcVar8);
    }
    FUN_0165098c(pcVar8);
  } while( true );
  while (*pcVar8 == '\x01') {
LAB_019e0a38:
    bVar1 = (bool)hasExclusiveAccess(pcVar8);
    if (bVar1) {
      *pcVar8 = '\0';
      goto LAB_019e0a5c;
    }
  }
LAB_019e0a50:
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar8);
LAB_019e0a5c:
  FUN_019d83c4(aiStack_124);
  FUN_019d8434(aiStack_124,aiStack_124[0x40]);
  return;
}

