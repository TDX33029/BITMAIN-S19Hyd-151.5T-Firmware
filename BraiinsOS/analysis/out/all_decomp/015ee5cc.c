// FUN_015ee5cc @ 015ee5cc size=640 calls_out=8 calls_in=10
// strings: a formatting trait implementation returned an error when the underlying stream did not

/* WARNING: Removing unreachable block (ram,0x015ee618) */

void FUN_015ee5cc(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint *local_34;
  uint local_30;
  undefined4 *local_2c;
  uint **local_28;
  
  uVar11 = thunk_FUN_016de0ee();
  puVar5 = (uint *)((ulonglong)uVar11 >> 0x20);
  iVar4 = (int)uVar11;
  uVar7 = *(uint *)(iVar4 + 0x240);
  uVar8 = *(uint *)(iVar4 + 0x244);
  if (uVar7 == 0 && uVar8 == 0) {
    ClearExclusiveLocal();
    do {
      uVar7 = DAT_018dd9a8 + 1;
      uVar8 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
      if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
        FUN_015ee8c8();
        goto LAB_015ee834;
      }
      bVar1 = (bool)hasExclusiveAccess(0x18dd9a8);
    } while (!bVar1);
    DAT_018dd9a8 = uVar7;
    DAT_018dd9ac = uVar8;
    *(uint *)(iVar4 + 0x240) = uVar7;
    *(uint *)(iVar4 + 0x244) = uVar8;
  }
  ClearExclusiveLocal();
  if (uVar7 == *puVar5 && uVar8 == puVar5[1]) {
    uVar7 = puVar5[3] + 1;
    if (puVar5[3] == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410806,0x26,&DAT_018aaff4);
    }
  }
  else {
    puVar3 = puVar5 + 2;
    do {
      if (*puVar3 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680();
        goto LAB_015ee6dc;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = 1;
    DataMemoryBarrier(0xb);
LAB_015ee6dc:
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar7;
    puVar5[1] = uVar8;
    uVar7 = 1;
  }
  puVar5[3] = uVar7;
  local_28 = &local_34;
  *(undefined1 *)param_1 = 4;
  local_2c = (undefined4 *)param_1[1];
  local_30 = *param_1;
  local_34 = puVar5;
  iVar4 = FUN_00fa948c(&local_30,&DAT_018aaad8,param_3,param_4);
  puVar2 = local_2c;
  uVar7 = local_30 & 0xff;
  if (iVar4 == 0) {
    if ((uVar7 != 4) && (uVar7 == 3)) {
      uVar9 = *local_2c;
      puVar10 = (undefined4 *)local_2c[1];
      pcVar6 = (code *)*puVar10;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
  }
  else {
    if (uVar7 == 4) {
LAB_015ee834:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_018aaab0);
    }
    *param_1 = local_30;
    param_1[1] = (uint)local_2c;
  }
  uVar7 = local_34[3];
  local_34[3] = uVar7 - 1;
  if (uVar7 - 1 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(local_34);
    } while (!bVar1);
    *local_34 = 0;
    local_34[1] = 0;
    puVar5 = local_34 + 2;
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = 0;
    if (uVar7 == 2) {
      FUN_016d6968(0xf0,puVar5,0x81,1);
      return;
    }
  }
  return;
}

