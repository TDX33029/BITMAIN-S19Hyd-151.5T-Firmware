// FUN_019ee698 @ 019ee698 size=104 calls_out=3 calls_in=10
// strings: 

void FUN_019ee698(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x270);
  piVar3 = (int *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if (((char)piVar3[1] != '\x01') && (piVar3 = (int *)FUN_019efa28(), piVar3 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,(int)register0x00000054 + -9,&DAT_01d29600);
  }
  iVar4 = *piVar3;
  piVar3 = (int *)(iVar4 + 8);
  if (*piVar3 == 2) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (bVar1) {
        *piVar3 = 0;
        DataMemoryBarrier(0xb);
        return;
      }
    } while (*piVar3 == 2);
  }
  ClearExclusiveLocal();
  pcVar5 = (char *)(iVar4 + 0x10);
  DataMemoryBarrier(0xb);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar1) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019ee414;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar5);
LAB_019ee414:
  FUN_0165098c(pcVar5);
  iStack_24 = *piVar3;
  if (iStack_24 == 0) {
    bVar1 = true;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar3);
      if (bVar2) {
        *piVar3 = 1;
        goto LAB_019ee450;
      }
      iStack_24 = *piVar3;
    } while (iStack_24 == 0);
  }
  bVar1 = false;
  ClearExclusiveLocal();
LAB_019ee450:
  DataMemoryBarrier(0xb);
  if (!bVar1) {
    if (iStack_24 != 2) {
      piStack_20 = &iStack_24;
      uStack_1c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0058138c,&piStack_20,&DAT_01d29660);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
LAB_019ee4d0:
    DataMemoryBarrier(0xb);
    FUN_01650a90(pcVar5);
    if (*pcVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar5);
        if (bVar1) {
          *pcVar5 = '\0';
          return;
        }
      } while (*pcVar5 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar5);
    return;
  }
  do {
    FUN_0164f0b8(iVar4 + 0xc,pcVar5);
    if (*piVar3 == 2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
        if (bVar1) {
          *piVar3 = 0;
          goto LAB_019ee4d0;
        }
      } while (*piVar3 == 2);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}

