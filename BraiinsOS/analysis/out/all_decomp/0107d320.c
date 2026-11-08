// FUN_0107d320 @ 0107d320 size=676 calls_out=11 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0107d530 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0107d320(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint in_fpscr;
  undefined4 uVar15;
  double in_d0;
  double dVar16;
  double dVar17;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  
  iVar12 = *param_1;
  pcVar10 = (char *)(iVar12 + 8);
  if (*pcVar10 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar10);
    if (bVar1) {
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0107d378;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar10);
LAB_0107d378:
  FUN_0128236c(pcVar10);
  FUN_015f3b0c(&local_70,1);
  uVar14 = *(undefined4 *)(iVar12 + 0x10);
  uVar11 = *(undefined4 *)(iVar12 + 0x14);
  puVar9 = *(undefined1 **)(iVar12 + 0x18);
  *(uint *)(iVar12 + 0x10) = local_70;
  *(undefined4 *)(iVar12 + 0x14) = uStack_6c;
  *(undefined4 *)(iVar12 + 0x18) = local_68;
  FUN_01282570(pcVar10);
  if (*pcVar10 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar10);
      if (bVar1) {
        *pcVar10 = '\0';
        goto LAB_0107d3e8;
      }
    } while (*pcVar10 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar10);
LAB_0107d3e8:
  iVar12 = param_1[1];
  param_1 = param_1 + 1;
  DataMemoryBarrier(0xb);
  if (puVar9 == &DAT_3b9aca00) {
    puVar3 = (undefined *)(param_3 * 1000000 + param_5 / 1000);
    puVar5 = &DAT_004c4b40;
    if (puVar3 < &DAT_004c4b40) {
      puVar5 = puVar3;
    }
    do {
      iVar4 = *param_1;
      if (iVar4 == iVar12) {
        DataMemoryBarrier(0xb);
        bVar6 = hasExclusiveAccess(param_1);
        if ((bool)bVar6) {
          *param_1 = (int)puVar5;
        }
      }
      else {
        bVar6 = 0;
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      iVar12 = iVar4;
    } while (!(bool)(bVar6 & 1));
  }
  else {
    uVar7 = (uint)((ulonglong)param_3 * 1000000);
    lVar2 = (ulonglong)param_4 * 1000000 + ((ulonglong)param_3 * 1000000 >> 0x20);
    uVar8 = (uint)lVar2;
    uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
    param_5 = param_5 / 1000;
    bVar1 = CARRY4(uVar8,(uint)CARRY4(uVar7,param_5));
    FUN_0184590c(uVar7 + param_5,uVar8 + CARRY4(uVar7,param_5),uVar13 + bVar1,
                 CARRY4(uVar13,(uint)bVar1));
    do {
      while( true ) {
        FUN_015f3b0c(&local_70,1);
        local_90 = local_70;
        uStack_8c = uStack_6c;
        uStack_88 = local_68;
        local_80 = uVar14;
        local_7c = uVar11;
        local_78 = puVar9;
        FUN_015f3c24(&local_70,&local_90,&local_80);
        dVar16 = (double)VectorUnsignedToFloat(local_60,(byte)(in_fpscr >> 0x16) & 3);
        dVar17 = (double)FUN_01845f30(local_68,uStack_64);
        dVar17 = dVar16 / 1000000000.0 + dVar17;
        FUN_016d5578(SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20),0);
        FUN_016d5330(SUB84(dVar17 / -3.0,0));
        dVar16 = (double)VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x16) & 3);
        dVar17 = dVar17 / -3.0;
        if ((local_70 & 1) != 0) {
          dVar17 = 0.7165313105737893;
        }
        uVar15 = SUB84((1.0 - dVar17) * in_d0 + dVar17 * dVar16,0);
        FUN_016d6168(uVar15);
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar15);
        puVar5 = (undefined *)((uint)(0.0 < dVar17) * (int)(longlong)dVar17);
        iVar4 = *param_1;
        if (&UNK_004c4b3f < puVar5) {
          puVar5 = &DAT_004c4b40;
        }
        if (iVar4 == iVar12) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        iVar12 = iVar4;
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = (int)puVar5;
      }
      DataMemoryBarrier(0xb);
      iVar12 = iVar4;
    } while (!bVar1);
  }
  return;
}

