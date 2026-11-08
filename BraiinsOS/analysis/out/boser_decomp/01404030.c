// FUN_01404030 @ 01404030 size=268 calls_out=8 calls_in=5
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x014040c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_01404030(int *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint in_fpscr;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar2 = param_1[1];
  DataMemoryBarrier(0xb);
  iVar4 = *param_1;
  pcVar3 = (char *)(iVar4 + 8);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01404070;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar3);
LAB_01404070:
  dVar5 = (double)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_0165098c(pcVar3);
  if (*(undefined1 **)(iVar4 + 0x18) != &DAT_3b9aca00) {
    FUN_019b0710(&local_28,&DAT_3b9aca00,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14)
                );
    dVar7 = (double)FUN_01bf0e80(local_28,local_24);
    dVar6 = (double)VectorUnsignedToFloat(local_20,(byte)(in_fpscr >> 0x16) & 3);
    dVar7 = dVar6 / 1000000000.0 + dVar7;
    FUN_01be5bd8(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),0);
    FUN_01be5990(SUB84(dVar7 / -180.0,0));
    dVar5 = (dVar7 / -180.0) * dVar5;
  }
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_0140411c;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_0140411c:
  return SUB84(dVar5,0);
}

