// FUN_01603ee8 @ 01603ee8 size=484 calls_out=5 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01603f2c) */

void FUN_01603ee8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int extraout_r2;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = thunk_FUN_016de0ee(param_1,param_2,0x240);
  puVar3 = (uint *)((ulonglong)uVar6 >> 0x20);
  puVar2 = (uint *)((int)uVar6 + extraout_r2);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  if (uVar4 == 0 && uVar5 == 0) {
    ClearExclusiveLocal();
    do {
      uVar4 = DAT_018dd9a8 + 1;
      uVar5 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
      if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
        FUN_015ee8c8();
        goto LAB_0160408c;
      }
      bVar1 = (bool)hasExclusiveAccess(0x18dd9a8);
    } while (!bVar1);
    DAT_018dd9a8 = uVar4;
    DAT_018dd9ac = uVar5;
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
  }
  ClearExclusiveLocal();
  if (uVar4 == *puVar3 && uVar5 == puVar3[1]) {
    uVar4 = puVar3[3];
    if (0xfffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410806,0x26,&DAT_018aaff4);
    }
    puVar3[3] = uVar4 + 1;
    if (puVar3[4] != 0) {
LAB_0160408c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018ab4ec);
    }
    puVar3[3] = uVar4;
    *param_1 = 4;
    if (uVar4 != 0) {
      return;
    }
  }
  else {
    puVar2 = puVar3 + 2;
    do {
      if (*puVar2 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680();
        goto LAB_01603ffc;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = 1;
    DataMemoryBarrier(0xb);
LAB_01603ffc:
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar4;
    puVar3[1] = uVar5;
    puVar3[3] = 1;
    if (puVar3[4] != 0) goto LAB_0160408c;
    puVar3[3] = 0;
    *param_1 = 4;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = puVar3 + 2;
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 0;
  if (uVar4 == 2) {
    software_interrupt(0);
    FUN_016d3496(puVar3,0x81,1,param_5);
    return;
  }
  return;
}

