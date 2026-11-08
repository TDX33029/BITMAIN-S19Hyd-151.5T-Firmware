// FUN_0108968c @ 0108968c size=276 calls_out=2 calls_in=0
// strings: 

void FUN_0108968c(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 unaff_r9;
  bool bVar8;
  
  pcVar6 = (char *)param_1[3];
  while (pcVar6 != (char *)0x0) {
    pcVar2 = (char *)*param_1;
    bVar8 = pcVar2 == &DAT_00000001;
    if (bVar8) {
      pcVar2 = (char *)param_1[1];
    }
    if (bVar8 && pcVar2 == pcVar6) {
      unaff_r9 = *(undefined4 *)(pcVar2 + 0xc);
    }
    puVar3 = *(undefined4 **)(pcVar6 + 0xc);
    param_1[3] = puVar3;
    if (bVar8 && pcVar2 == pcVar6) {
      *param_1 = 1;
      param_1[1] = unaff_r9;
    }
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = param_1;
    }
    puVar3[4] = 0;
    iVar4 = param_1[2];
    cVar1 = *pcVar6;
    pcVar6[0xc] = '\0';
    pcVar6[0xd] = '\0';
    pcVar6[0xe] = '\0';
    pcVar6[0xf] = '\0';
    pcVar6[0x10] = '\0';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    param_1[2] = iVar4 + -1;
    if (cVar1 != '\0') {
      piVar7 = *(int **)(pcVar6 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        bVar8 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar8);
      *piVar7 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        piVar5 = (int *)piVar7[4];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar8 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar8);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0108a158(piVar7[4]);
        }
        thunk_FUN_016d3fb4(piVar7);
      }
      piVar7 = *(int **)(pcVar6 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        bVar8 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar8);
      *piVar7 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
      }
    }
    thunk_FUN_016d3fb4(pcVar6);
    pcVar6 = (char *)param_1[3];
  }
  return;
}

