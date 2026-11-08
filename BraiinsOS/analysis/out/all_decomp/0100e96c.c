// FUN_0100e96c @ 0100e96c size=356 calls_out=1 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x0100ea30) */

void FUN_0100e96c(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  lVar2 = ZEXT48(auStack_20) * 0x34e90c6c;
  lVar3 = ZEXT48(auStack_20) * 0xbe5466cf;
  uVar8 = (uint)lVar3 ^ (uint)((ulonglong)lVar2 >> 0x20);
  uVar9 = (uint)((ulonglong)lVar3 >> 0x20) ^ (uint)lVar2 ^ 0x100ead8;
  uVar4 = (ulonglong)uVar8 * 0x34e90c6c ^ (ulonglong)uVar9 * 0xbe5466cf;
  uVar5 = (ulonglong)uVar9 * 0x34e90c6c ^ (ulonglong)uVar8 * 0xbe5466cf;
  uVar9 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
  uVar8 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20) ^ 0x18dd8f0;
  uVar4 = (ulonglong)uVar9 * 0x34e90c6c ^ (ulonglong)uVar8 * 0xbe5466cf;
  uVar5 = (ulonglong)uVar8 * 0x34e90c6c ^ (ulonglong)uVar9 * 0xbe5466cf;
  uVar8 = (uint)(uVar5 >> 0x20);
  FUN_0100e624(&local_50,uVar8,(uint)uVar5 ^ (uint)(uVar4 >> 0x20),uVar8 ^ (uint)uVar4);
  cVar7 = DAT_018dd920;
  if (DAT_018dd920 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(0x18dd920);
    if (bVar1) {
      DAT_018dd920 = '\x01';
    }
    DataMemoryBarrier(0xb);
    if (bVar1) goto LAB_0100eaa8;
  }
  else {
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  do {
    while( true ) {
      cVar6 = DAT_018dd920;
      if (cVar7 == '\x02') {
        return;
      }
      HintYield();
      cVar7 = cVar6;
      if (DAT_018dd920 == '\0') break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dd920);
    if (bVar1) {
      DAT_018dd920 = '\x01';
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_0100eaa8:
  DataMemoryBarrier(0xb);
  DAT_018dd920 = 2;
  DAT_018dd91c = uStack_24;
  DAT_018dd918 = uStack_28;
  DAT_018dd914 = uStack_2c;
  DAT_018dd910 = uStack_30;
  DAT_018dd90c = uStack_34;
  DAT_018dd908 = local_38;
  DAT_018dd904 = uStack_3c;
  DAT_018dd900 = uStack_40;
  DAT_018dd8fc = uStack_44;
  DAT_018dd8f8 = uStack_48;
  DAT_018dd8f4 = uStack_4c;
  DAT_018dd8f0 = local_50;
  return;
}

