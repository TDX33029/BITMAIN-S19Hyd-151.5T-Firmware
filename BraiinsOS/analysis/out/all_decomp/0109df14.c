// FUN_0109df14 @ 0109df14 size=352 calls_out=5 calls_in=1
// strings: 

void FUN_0109df14(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  pcVar4 = (char *)(param_2 + 4);
  if (*pcVar4 == '\0') {
    bVar7 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar7) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0109df44;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_0109df44:
  FUN_0128236c(pcVar4);
  iVar5 = *(int *)(param_2 + 0xc);
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar7 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar7) {
        *pcVar4 = '\0';
        goto LAB_0109df90;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_0109df90:
  if (iVar5 != 0) {
    iVar2 = *(int *)(iVar5 + 8);
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x54) != iVar5)) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != iVar5) {
      iVar3 = *(int *)(param_1 + 0x48);
      bVar7 = iVar3 == 1;
      if (bVar7) {
        iVar3 = *(int *)(param_1 + 0x4c);
      }
      if (bVar7 && iVar3 == iVar5) {
        uVar6 = *(undefined4 *)(iVar3 + 4);
        *(undefined4 *)(param_1 + 0x48) = 1;
        *(undefined4 *)(param_1 + 0x4c) = uVar6;
        iVar3 = *(int *)(iVar5 + 4);
      }
      else {
        iVar3 = *(int *)(iVar5 + 4);
      }
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x54) = iVar3;
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      else {
        if (iVar3 == 0) {
          return;
        }
        *(int *)(iVar2 + 4) = iVar3;
        iVar3 = *(int *)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 8);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_01883dc0);
        }
        *(int *)(iVar5 + 8) = iVar1;
        *(int *)(param_1 + 0x58) = iVar5;
        *(int *)(iVar1 + 4) = iVar5;
        return;
      }
    }
  }
  return;
}

