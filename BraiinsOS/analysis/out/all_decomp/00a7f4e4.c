// FUN_00a7f4e4 @ 00a7f4e4 size=640 calls_out=5 calls_in=0
// strings: BUG: Poisoned lockbosminer::paused::paused_file_realopen/bosminer/bosminer/src/paused.rsevent open/bosminer/bosminer/src/paused.rs:44

void FUN_00a7f4e4(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined1 local_28;
  
  uVar10 = param_3[10];
  if (*param_2 < (uint)param_3[10]) {
    uVar10 = *param_2;
  }
  param_3[10] = uVar10;
  DataMemoryBarrier(0xb);
  if (DAT_018d913c != 0) {
    local_2c = &local_30;
    local_30 = &DAT_018d913c;
    FUN_015eedc4(&DAT_018d913c,1,&local_2c,&DAT_0186da28,&DAT_018ac9b8);
  }
  iVar3 = DAT_018d9140;
  ppuVar7 = (undefined4 **)(DAT_018d9140 + 8);
  puVar12 = (uint *)(DAT_018d9140 + 0x10);
  do {
    if (*ppuVar7 != (undefined4 *)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(ppuVar7);
      goto LAB_00a7f544;
    }
    bVar2 = (bool)hasExclusiveAccess(ppuVar7);
  } while (!bVar2);
  *ppuVar7 = (undefined4 *)0x1;
  DataMemoryBarrier(0xb);
LAB_00a7f544:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar3 + 0xc);
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = *(char *)(iVar3 + 0xc);
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar5;
    local_2c = ppuVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Poisoned lockbosminer::paused::paused_file_realopen/bosminer/bosminer/src/paused.rsevent open/bosminer/bosminer/src/paused.rs:44"
                 ,0x12,&local_2c,&DAT_018599a0,&DAT_0185a1cc);
  }
  if (((*puVar12 & 1) == 0) ||
     (*(uint *)(iVar3 + 0x1c) == 0 &&
      (uint)(uVar10 <= *(uint *)(iVar3 + 0x18)) <= *(uint *)(iVar3 + 0x1c))) {
    *puVar12 = 1;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(uint *)(iVar3 + 0x18) = uVar10;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    if ((uVar5 == 0) && (((DAT_018dd988 & 0x7fffffff) != 0 && (iVar4 = FUN_015bf3f8(), iVar4 == 0)))
       ) {
      *(undefined1 *)(iVar3 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      puVar6 = *ppuVar7;
      bVar2 = (bool)hasExclusiveAccess(ppuVar7);
    } while (!bVar2);
    *ppuVar7 = (undefined4 *)0x0;
  }
  else {
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)
       ) {
      *(undefined1 *)(iVar3 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      puVar6 = *ppuVar7;
      bVar2 = (bool)hasExclusiveAccess(ppuVar7);
    } while (!bVar2);
    *ppuVar7 = (undefined4 *)0x0;
  }
  if (puVar6 == (undefined4 *)0x2) {
    FUN_016d6968(0xf0,ppuVar7,0x81,1);
  }
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar11 = param_3[3];
  uVar13 = param_3[4];
  uVar14 = param_3[5];
  param_1[1] = *param_3;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar11;
  param_1[5] = uVar13;
  param_1[6] = uVar14;
  uVar8 = param_3[7];
  uVar9 = param_3[8];
  uVar11 = param_3[9];
  uVar13 = param_3[10];
  uVar14 = param_3[0xb];
  param_1[7] = param_3[6];
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar11;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar14;
  *param_1 = 0;
  return;
}

