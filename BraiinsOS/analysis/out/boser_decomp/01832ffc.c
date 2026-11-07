// FUN_01832ffc @ 01832ffc size=1448 calls_out=19 calls_in=1
// strings: 

void FUN_01832ffc(undefined4 *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 uVar8;
  undefined *puVar9;
  uint *puVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_bc0;
  undefined4 local_bbc;
  undefined *local_bb8;
  undefined1 auStack_bb4 [732];
  undefined1 auStack_8d8 [736];
  uint local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 local_5ec;
  uint local_310;
  undefined4 local_30c;
  undefined *local_308;
  int *local_304;
  undefined4 uStack_300;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x129)) {
  case 0:
    *(undefined1 *)(param_2 + 299) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    puVar10 = (uint *)(param_2 + 0xc4);
    *(undefined1 *)(param_2 + 300) = 1;
    *puVar10 = *(uint *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_2 + 0xb4);
    *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined1 *)(param_2 + 0x12a) = *(undefined1 *)(param_2 + 0x128);
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_2 + 0x34);
    piVar4 = *(int **)(param_2 + 0xf0);
    *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_2 + 0x80);
    do {
      iVar7 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_01833598:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1833598);
      (*pcVar1)();
    }
    piVar6 = *(int **)(param_2 + 0xf4);
    do {
      iVar7 = *piVar6;
      bVar11 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar11);
    *piVar6 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01833598;
    *(undefined1 *)(param_2 + 299) = 1;
    bVar11 = *(char *)(param_2 + 0x8d) != '\x01';
    *(int **)(param_2 + 0x100) = piVar4;
    *(int **)(param_2 + 0x104) = piVar6;
    *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_2 + 0xf8);
    if (bVar11) {
      piVar4 = (int *)(uint)*(byte *)puVar10;
    }
    if ((bVar11 && piVar4 != (int *)0x0) &&
       (iVar7 = FUN_014146a0(puVar10,&DAT_00570360), iVar7 != 0)) {
      iVar7 = FUN_01823e90((uint *)(param_2 + 0x100));
      *(undefined1 *)(iVar7 + 0x8b) = 1;
    }
    *(undefined1 *)(param_2 + 299) = 0;
    local_5f8 = *(uint *)(param_2 + 0x100);
    uStack_5f4 = *(undefined4 *)(param_2 + 0x104);
    uStack_5f0 = *(undefined4 *)(param_2 + 0x108);
    local_304 = *(int **)(param_2 + 0xfc);
    do {
      iVar7 = *local_304;
      bVar11 = (bool)hasExclusiveAccess(local_304);
    } while (!bVar11);
    *local_304 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01833598;
    local_310 = local_5f8;
    local_30c = uStack_5f4;
    local_308 = (undefined *)uStack_5f0;
    FUN_01823d18(param_2 + 0x10c,&local_310);
    *(undefined1 *)(param_2 + 300) = 0;
    local_310 = *puVar10;
    local_30c = *(undefined4 *)(param_2 + 200);
    local_308 = *(undefined **)(param_2 + 0xcc);
    local_304 = *(int **)(param_2 + 0xd0);
    uStack_300 = *(undefined4 *)(param_2 + 0xd4);
    local_2fc = *(undefined4 *)(param_2 + 0xd8);
    uStack_2f8 = *(undefined4 *)(param_2 + 0xdc);
    uStack_2f4 = *(undefined4 *)(param_2 + 0xe0);
    uStack_2f0 = *(undefined4 *)(param_2 + 0xe4);
    uStack_2ec = *(undefined4 *)(param_2 + 0xe8);
    uStack_2e8 = *(undefined4 *)(param_2 + 0xec);
    uVar12 = FUN_01823fd4(param_2 + 0x10c,&local_310);
    *(undefined8 *)(param_2 + 0x90) = uVar12;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1e9f0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1e9f0);
  case 3:
    uVar12 = *(undefined8 *)(param_2 + 0x90);
  }
  (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0xc))(&local_310,(int)uVar12,param_3);
  puVar9 = local_308;
  uVar5 = local_30c;
  uVar2 = local_310;
  if (local_310 == 4) {
    uVar3 = 3;
    *(undefined1 *)((int)param_1 + 9) = 3;
    goto LAB_01833544;
  }
  FUN_01bed4e2(auStack_8d8,&local_304,0x2dc);
  FUN_01139b38(*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94));
  if (uVar2 == 3) {
LAB_01833204:
    uVar12 = CONCAT44(puVar9,uVar5);
    FUN_0182c8b4(param_2 + 0x10c);
    piVar4 = *(int **)(param_2 + 0xfc);
    *(undefined1 *)(param_2 + 299) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_2 + 0xfc));
    }
    FUN_016f8f88(param_2 + 0xf0);
    piVar4 = *(int **)(param_2 + 0x84);
    *(undefined1 *)(param_2 + 300) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_2 + 0x84));
    }
    piVar4 = *(int **)(param_2 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01853618(*(undefined4 *)(param_2 + 0x88));
    }
    if (*(char *)(param_2 + 0x70) != '\x02') {
      (**(code **)(*(int *)(param_2 + 0x60) + 0x10))
                (param_2 + 0x6c,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68));
    }
    piVar4 = *(int **)(param_2 + 0x58);
    if (piVar4 == (int *)0x0) {
      uVar8 = 2;
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar11 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar11);
      *piVar4 = iVar7 + -1;
      uVar8 = 2;
LAB_01833514:
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c));
      }
    }
  }
  else {
    FUN_01bed4e2(auStack_bb4,auStack_8d8,0x2dc);
    local_bb8 = puVar9;
    local_bbc = uVar5;
    local_bc0 = uVar2;
    if (uVar2 == 2) {
      FUN_01bed4e2(&local_310,&local_bc0,0x2e8);
      uVar12 = FUN_0183cd94(*(undefined1 *)(param_2 + 0x8c),&local_310);
      param_3 = (uint)*(byte *)(param_2 + 0x12a);
      uVar8 = 0;
    }
    else {
      FUN_01bed4e2(&local_5f8,&local_bc0,0x2e8);
      if (*(char *)(param_2 + 0x8d) == '\0') {
        FUN_019ded64(&local_310,local_5ec,0);
        if (((char)local_310 != '\x04') && ((local_310 & 0xff) != 4)) {
          uVar5 = FUN_0142322c(&local_310);
          FUN_0182b920(&local_5f8);
          puVar9 = &DAT_01cf48ac;
          if (local_bc0 == 2) {
            FUN_0182c114(&local_bc0);
          }
          goto LAB_01833204;
        }
      }
      FUN_01bed4e2(&local_310,&local_5f8,0x2e8);
      uVar12 = FUN_0183e14c(*(undefined1 *)(param_2 + 0x8c),&local_310);
      uVar8 = *(undefined1 *)(param_2 + 0x8e);
      param_3 = (uint)*(byte *)(param_2 + 0x12a);
      if (local_bc0 == 2) {
        FUN_0182c114(&local_bc0);
      }
    }
    FUN_0182c8b4(param_2 + 0x10c);
    piVar4 = *(int **)(param_2 + 0xfc);
    *(undefined1 *)(param_2 + 299) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_2 + 0xfc));
    }
    FUN_016f8f88(param_2 + 0xf0);
    piVar4 = *(int **)(param_2 + 0x84);
    *(undefined1 *)(param_2 + 300) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_2 + 0x84));
    }
    piVar4 = *(int **)(param_2 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01853618(*(undefined4 *)(param_2 + 0x88));
    }
    if (*(char *)(param_2 + 0x70) != '\x02') {
      (**(code **)(*(int *)(param_2 + 0x60) + 0x10))
                (param_2 + 0x6c,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68));
    }
    piVar4 = *(int **)(param_2 + 0x58);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar11 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar11);
      *piVar4 = iVar7 + -1;
      goto LAB_01833514;
    }
  }
  uVar3 = 1;
  *param_1 = (int)uVar12;
  *(undefined1 *)((int)param_1 + 9) = uVar8;
  *(char *)(param_1 + 2) = (char)param_3;
  param_1[1] = (int)((ulonglong)uVar12 >> 0x20);
LAB_01833544:
  *(undefined1 *)(param_2 + 0x129) = uVar3;
  return;
}

