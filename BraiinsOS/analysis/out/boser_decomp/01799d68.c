// FUN_01799d68 @ 01799d68 size=1296 calls_out=16 calls_in=2
// strings: 

void FUN_01799d68(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined *puVar10;
  uint *puVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_4e0;
  undefined4 local_4dc;
  undefined *local_4d8;
  undefined1 auStack_4d4 [292];
  undefined1 auStack_3b0 [296];
  uint local_288;
  undefined4 uStack_284;
  undefined *puStack_280;
  undefined4 local_27c;
  uint local_158;
  undefined4 local_154;
  undefined *local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x11d)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x11f) = 0;
    puVar11 = param_2 + 0x35;
    param_2[0x10] = *param_2;
    param_2[0x11] = param_2[1];
    param_2[0x12] = param_2[2];
    param_2[0x13] = param_2[3];
    param_2[0x14] = param_2[4];
    param_2[0x15] = param_2[5];
    param_2[0x16] = param_2[6];
    param_2[0x17] = param_2[7];
    param_2[0x18] = param_2[8];
    param_2[0x19] = param_2[9];
    param_2[0x1a] = param_2[10];
    param_2[0x1b] = param_2[0xb];
    param_2[0x1c] = param_2[0xc];
    param_2[0x1d] = param_2[0xd];
    param_2[0x1e] = param_2[0xe];
    param_2[0x1f] = param_2[0xf];
    *(undefined1 *)(param_2 + 0x48) = 1;
    *puVar11 = param_2[0x2a];
    param_2[0x36] = param_2[0x2b];
    param_2[0x37] = param_2[0x2c];
    param_2[0x38] = param_2[0x2d];
    param_2[0x39] = param_2[0x2e];
    param_2[0x3a] = param_2[0x2f];
    param_2[0x3b] = param_2[0x30];
    param_2[0x3c] = param_2[0x31];
    param_2[0x3d] = param_2[0x32];
    param_2[0x3e] = param_2[0x33];
    param_2[0x3f] = param_2[0x34];
    *(undefined1 *)((int)param_2 + 0x11e) = *(undefined1 *)(param_2 + 0x47);
    param_2[0x40] = param_2[9];
    param_2[0x41] = param_2[10];
    param_2[0x42] = param_2[0xb];
    piVar4 = (int *)param_2[0x40];
    param_2[0x43] = param_2[0x1c];
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_0179a26c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x179a26c);
      (*pcVar1)();
    }
    piVar6 = (int *)param_2[0x41];
    do {
      iVar7 = *piVar6;
      bVar12 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar12);
    *piVar6 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_0179a26c;
    *(undefined1 *)((int)param_2 + 0x11f) = 1;
    bVar12 = *(char *)((int)param_2 + 0x7d) != '\x01';
    param_2[0x44] = piVar4;
    param_2[0x45] = piVar6;
    param_2[0x46] = param_2[0x42];
    if (bVar12) {
      piVar4 = (int *)(uint)(byte)*puVar11;
    }
    if ((bVar12 && piVar4 != (int *)0x0) &&
       (iVar7 = FUN_0141103c(puVar11,&DAT_00570360), iVar7 != 0)) {
      iVar7 = FUN_0180af5c(param_2 + 0x44);
      *(undefined1 *)(iVar7 + 0x57) = 1;
    }
    *(undefined1 *)((int)param_2 + 0x11f) = 0;
    local_288 = param_2[0x44];
    uStack_284 = param_2[0x45];
    puStack_280 = (undefined *)param_2[0x46];
    piVar4 = (int *)param_2[0x43];
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + 1;
    local_158 = local_288;
    local_154 = uStack_284;
    local_150 = puStack_280;
    if (iVar7 < 0) goto LAB_0179a26c;
    *(undefined1 *)(param_2 + 0x27) = 0;
    param_2[0x23] = local_288;
    param_2[0x24] = uStack_284;
    param_2[0x25] = puStack_280;
    param_2[0x20] = 0x80000000;
    param_2[0x26] = piVar4;
    *(undefined1 *)(param_2 + 0x48) = 0;
    local_158 = *puVar11;
    local_154 = param_2[0x36];
    local_150 = (undefined *)param_2[0x37];
    uStack_14c = param_2[0x38];
    uStack_148 = param_2[0x39];
    local_144 = param_2[0x3a];
    uStack_140 = param_2[0x3b];
    uStack_13c = param_2[0x3c];
    uStack_138 = param_2[0x3d];
    uStack_134 = param_2[0x3e];
    uStack_130 = param_2[0x3f];
    uVar13 = FUN_017ce0e0();
    *(undefined8 *)(param_2 + 0x28) = uVar13;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1cc68);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1cc68);
  case 3:
    uVar13 = *(undefined8 *)(param_2 + 0x28);
  }
  (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0xc))(&local_158,(int)uVar13,param_3);
  puVar10 = local_150;
  uVar5 = local_154;
  uVar9 = local_158;
  if (local_158 == 4) {
    uVar3 = 3;
    *(undefined1 *)((int)param_1 + 9) = 3;
    goto LAB_0179a230;
  }
  FUN_01bed4e2(auStack_3b0,&uStack_14c,0x124);
  FUN_01139b38(param_2[0x28],param_2[0x29]);
  if (uVar9 == 3) {
LAB_01799f70:
    uVar13 = CONCAT44(puVar10,uVar5);
    FUN_01799830(param_2 + 0x20);
    piVar4 = (int *)param_2[0x43];
    *(undefined1 *)((int)param_2 + 0x11f) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcb30(param_2[0x43]);
    }
    FUN_01784e10(param_2 + 0x40);
    piVar4 = (int *)param_2[0x1d];
    *(undefined1 *)(param_2 + 0x48) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcb30(param_2[0x1d]);
    }
    piVar4 = (int *)param_2[0x1e];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01784b8c(param_2[0x1e]);
    }
    uVar8 = 2;
    if (*(char *)(param_2 + 0x18) != '\x02') {
      (**(code **)(param_2[0x14] + 0x10))(param_2 + 0x17,param_2[0x15],param_2[0x16]);
      uVar13 = CONCAT44(puVar10,uVar5);
    }
  }
  else {
    FUN_01bed4e2(auStack_4d4,auStack_3b0,0x124);
    local_4d8 = puVar10;
    local_4dc = uVar5;
    local_4e0 = uVar9;
    if (uVar9 == 2) {
      FUN_01bed4e2(&local_158,&local_4e0,0x130);
      uVar13 = FUN_01781abc(*(undefined1 *)(param_2 + 0x1f),&local_158);
      bVar2 = *(byte *)((int)param_2 + 0x11e);
      uVar8 = 0;
    }
    else {
      FUN_01bed4e2(&local_288,&local_4e0,0x130);
      if (*(char *)((int)param_2 + 0x7d) == '\0') {
        FUN_019ded64(&local_158,local_27c,0);
        if (((char)local_158 != '\x04') && ((local_158 & 0xff) != 4)) {
          uVar5 = FUN_014333d0(&local_158);
          FUN_0179992c(&local_288);
          puVar10 = &DAT_01cf5e1c;
          goto LAB_01799f70;
        }
      }
      FUN_01bed4e2(&local_158,&local_4e0,0x130);
      uVar13 = FUN_017815f0(*(undefined1 *)(param_2 + 0x1f),&local_158);
      uVar8 = *(undefined1 *)((int)param_2 + 0x7e);
      bVar2 = *(byte *)((int)param_2 + 0x11e);
    }
    uVar9 = (uint)bVar2;
    FUN_01799830(param_2 + 0x20);
    piVar4 = (int *)param_2[0x43];
    *(undefined1 *)((int)param_2 + 0x11f) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcb30(param_2[0x43]);
    }
    FUN_01784e10(param_2 + 0x40);
    piVar4 = (int *)param_2[0x1d];
    *(undefined1 *)(param_2 + 0x48) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcb30(param_2[0x1d]);
    }
    piVar4 = (int *)param_2[0x1e];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar12 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar12);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01784b8c(param_2[0x1e]);
    }
    if (*(char *)(param_2 + 0x18) != '\x02') {
      (**(code **)(param_2[0x14] + 0x10))(param_2 + 0x17,param_2[0x15],param_2[0x16]);
    }
  }
  uVar3 = 1;
  *param_1 = (int)uVar13;
  *(undefined1 *)((int)param_1 + 9) = uVar8;
  *(char *)(param_1 + 2) = (char)uVar9;
  param_1[1] = (int)((ulonglong)uVar13 >> 0x20);
LAB_0179a230:
  *(undefined1 *)((int)param_2 + 0x11d) = uVar3;
  return;
}

