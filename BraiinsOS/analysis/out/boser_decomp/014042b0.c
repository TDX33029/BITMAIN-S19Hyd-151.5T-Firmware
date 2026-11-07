// FUN_014042b0 @ 014042b0 size=516 calls_out=11 calls_in=0
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x01404420 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_014042b0(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint in_fpscr;
  undefined4 uVar17;
  double in_d0;
  double dVar18;
  double dVar19;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  uVar8 = (uint)((ulonglong)param_3 * 1000000);
  iVar10 = *param_1;
  lVar3 = (ulonglong)param_4 * 1000000 + ((ulonglong)param_3 * 1000000 >> 0x20);
  uVar11 = (uint)lVar3;
  uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
  param_5 = param_5 / 1000;
  puVar9 = (undefined *)(uVar8 + param_5);
  bVar1 = CARRY4(uVar11,(uint)CARRY4(uVar8,param_5));
  pcVar12 = (char *)(iVar10 + 8);
  if (*pcVar12 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar12);
    if (bVar2) {
      *pcVar12 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0140432c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar12);
LAB_0140432c:
  FUN_0165098c(pcVar12);
  FUN_019ac130(&local_58,1);
  uVar15 = *(undefined4 *)(iVar10 + 0x10);
  uVar16 = *(undefined4 *)(iVar10 + 0x14);
  puVar14 = *(undefined1 **)(iVar10 + 0x18);
  *(undefined4 *)(iVar10 + 0x10) = local_58;
  *(undefined4 *)(iVar10 + 0x14) = local_54;
  *(undefined4 *)(iVar10 + 0x18) = local_50;
  FUN_01650a90(pcVar12);
  if (*pcVar12 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar12);
      if (bVar2) {
        *pcVar12 = '\0';
        goto LAB_0140439c;
      }
    } while (*pcVar12 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar12);
LAB_0140439c:
  FUN_01bf09c8(puVar9,uVar11 + CARRY4(uVar8,param_5),uVar6 + bVar1,CARRY4(uVar6,(uint)bVar1));
  piVar13 = param_1 + 1;
  DataMemoryBarrier(0xb);
  iVar10 = param_1[1];
  do {
    puVar7 = puVar9;
    if (puVar14 != &DAT_3b9aca00) {
      FUN_019b0710(&local_58,puVar9,uVar15,uVar16);
      dVar19 = (double)FUN_01bf0e80(local_58,local_54);
      dVar18 = (double)VectorUnsignedToFloat(local_50,(byte)(in_fpscr >> 0x16) & 3);
      dVar19 = dVar18 / 1000000000.0 + dVar19;
      FUN_01be5bd8(SUB84(dVar19,0),(int)((ulonglong)dVar19 >> 0x20),0);
      dVar19 = dVar19 / -3.0;
      FUN_01be5990(SUB84(dVar19,0));
      dVar18 = (double)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
      uVar17 = SUB84((1.0 - dVar19) * in_d0 + dVar19 * dVar18,0);
      FUN_01be6410(uVar17);
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar17);
      puVar7 = (undefined *)((uint)(0.0 < dVar19) * (int)(longlong)dVar19);
    }
    iVar4 = *piVar13;
    if (&UNK_004c4b3f < puVar7) {
      puVar7 = &DAT_004c4b40;
    }
    if (iVar4 == iVar10) {
      DataMemoryBarrier(0xb);
      bVar5 = hasExclusiveAccess(piVar13);
      if ((bool)bVar5) {
        *piVar13 = (int)puVar7;
      }
    }
    else {
      bVar5 = 0;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    iVar10 = iVar4;
  } while (!(bool)(bVar5 & 1));
  return;
}

