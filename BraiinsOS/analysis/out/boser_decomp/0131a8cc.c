// FUN_0131a8cc @ 0131a8cc size=316 calls_out=3 calls_in=2
// strings: 

void FUN_0131a8cc(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined4 local_880;
  int *local_87c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_460;
  uint auStack_428 [258];
  
  do {
    iVar3 = *param_1;
    bVar7 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar7);
  *param_1 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x131aa04);
    (*pcVar1)();
  }
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    auStack_428[iVar3 * 4] = (uint)&DAT_01348fc4;
    auStack_428[iVar3 * 4 + 1] = 0;
    auStack_428[iVar3 * 4 + 2] = 0;
    auStack_428[iVar3 * 4 + 3] = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0x40);
  local_880 = 0;
  local_87c = param_1;
  FUN_01bed4e2((uint)&local_880 | 8,auStack_428,0x400);
  local_470 = 1;
  local_460 = 0;
  local_46c = 0;
  local_474 = 0;
  local_478 = 0;
  auStack_428[0x101] = 0;
  iVar3 = FUN_01be5878(auStack_428 + 0x101,0x20,0x440);
  uVar2 = auStack_428[0x101];
  if ((iVar3 != 0) || (auStack_428[0x101] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0x440);
  }
  FUN_01bed4e2(auStack_428[0x101],&local_880,0x440);
  puVar5 = (uint *)(param_1 + 0x20);
  uVar8 = param_1[0x20];
  do {
    *(uint *)(uVar2 & 0xffffffe0) = uVar8;
    uVar6 = *puVar5;
    if (uVar6 == uVar8) {
      DataMemoryBarrier(0xb);
      bVar7 = (bool)hasExclusiveAccess(puVar5);
      if (bVar7) {
        *puVar5 = uVar2 & 0xffffffe0;
      }
    }
    else {
      bVar7 = false;
      ClearExclusiveLocal();
    }
    uVar8 = uVar6;
  } while (!bVar7);
  return;
}

