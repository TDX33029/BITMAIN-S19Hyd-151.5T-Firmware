// FUN_0109e274 @ 0109e274 size=352 calls_out=5 calls_in=2
// strings: 

void FUN_0109e274(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  pcVar4 = (char *)(param_2 + 4);
  if (*pcVar4 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar6) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0109e2a4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_0109e2a4:
  FUN_0128236c(pcVar4);
  iVar5 = *(int *)(param_2 + 0xc);
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar6) {
        *pcVar4 = '\0';
        goto LAB_0109e2f0;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_0109e2f0:
  if (iVar5 != 0) {
    iVar2 = *(int *)(iVar5 + 8);
    if ((iVar2 == 0) && (param_1[3] != iVar5)) {
      return;
    }
    iVar1 = param_1[4];
    if (iVar1 != iVar5) {
      iVar3 = *param_1;
      bVar6 = iVar3 == 1;
      if (bVar6) {
        iVar3 = param_1[1];
      }
      if (bVar6 && iVar3 == iVar5) {
        iVar3 = *(int *)(iVar3 + 4);
        *param_1 = 1;
        param_1[1] = iVar3;
        iVar3 = *(int *)(iVar5 + 4);
      }
      else {
        iVar3 = *(int *)(iVar5 + 4);
      }
      if (iVar2 == 0) {
        param_1[3] = iVar3;
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
        param_1[4] = iVar5;
        *(int *)(iVar1 + 4) = iVar5;
        return;
      }
    }
  }
  return;
}

