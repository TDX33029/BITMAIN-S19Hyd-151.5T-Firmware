// FUN_00b047e8 @ 00b047e8 size=384 calls_out=7 calls_in=2
// strings: 

void FUN_00b047e8(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  char cVar8;
  int iVar9;
  int local_18;
  uint *local_14;
  
  iVar9 = *param_1;
  puVar7 = (uint *)(iVar9 + 8);
  uVar3 = *(uint *)(iVar9 + 8);
  if (uVar3 < 0x3ffffffe) {
    if (*puVar7 != uVar3) {
      ClearExclusiveLocal();
      goto LAB_00b0491c;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar7);
    if (!bVar2) goto LAB_00b0491c;
    *puVar7 = uVar3 + 1;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00b0491c:
    FUN_0197a5c8(puVar7);
  }
  if (*(char *)(iVar9 + 0x10) != '\0') {
    local_18 = iVar9 + 0x14;
    local_14 = puVar7;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0056c7a8,0x20,&local_18,&DAT_01c10be8,&DAT_01c10fe8);
  }
  DataMemoryBarrier(0xb);
  cVar8 = (char)param_1[2];
  if (*(char *)(iVar9 + 0x21) != '\x02') {
    cVar8 = *(char *)(iVar9 + 0x21);
  }
  do {
    uVar3 = *puVar7;
    bVar2 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar2);
  *puVar7 = uVar3 - 1;
  if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar7);
  }
  iVar9 = param_1[1];
  piVar5 = (int *)(iVar9 + 0x98);
  if (*piVar5 == 0) {
    bVar2 = (bool)hasExclusiveAccess(piVar5);
    if (bVar2) {
      *piVar5 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00b04890;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164d8d8(piVar5);
LAB_00b04890:
  FUN_0165098c(piVar5);
  FUN_0165098c((uint)piVar5 | 1);
  cVar1 = *(char *)(iVar9 + 0x9c);
  *(char *)(iVar9 + 0x9c) = cVar8;
  if (cVar1 == cVar8) {
    FUN_009dd354(piVar5);
    return;
  }
  piVar4 = (int *)(iVar9 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = *piVar4 + 2;
  FUN_009dd354(piVar5);
  iVar6 = 0;
  do {
    FUN_019e03e8(iVar9 + 8 + iVar6);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 != 0x80);
  return;
}

