// FUN_0164ed38 @ 0164ed38 size=888 calls_out=4 calls_in=4
// strings: overflow when adding duration to instant

void FUN_0164ed38(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  uint *puVar2;
  byte bVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  uVar13 = FUN_0164eb1c();
  puVar4 = (uint *)((ulonglong)uVar13 >> 0x20);
  puVar2 = (uint *)uVar13;
  if ((byte *)*param_1 != param_2) {
    puVar9 = puVar2 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar9;
      bVar7 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar7);
    *puVar9 = uVar5 - 1;
    if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
      FUN_01652d70();
    }
    if (puVar2 == puVar4) {
      return;
    }
    puVar4 = puVar4 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar4;
      bVar7 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar7);
    *puVar4 = uVar5 - 1;
    goto LAB_0164efd4;
  }
  bVar1 = *param_2;
  do {
    bVar3 = bVar1;
    if ((bVar3 & 1) == 0) break;
    bVar1 = *param_2;
    if (bVar1 == bVar3) {
      bVar7 = (bool)hasExclusiveAccess(param_2);
      if (bVar7) {
        *param_2 = bVar3 | 2;
      }
    }
    else {
      bVar7 = false;
      ClearExclusiveLocal();
    }
  } while (!bVar7);
  puVar9 = puVar2 + 7;
  puVar11 = (undefined4 *)*puVar9;
  if (puVar11 == (undefined4 *)0x0) {
LAB_0164ef7c:
    *param_1 = 0;
  }
  else {
    puVar6 = (undefined4 *)0x0;
    if ((undefined4 *)puVar11[1] != param_1) {
      do {
        puVar6 = puVar11;
        puVar11 = (undefined4 *)puVar6[2];
        if (puVar11 == (undefined4 *)0x0) goto LAB_0164ef7c;
      } while ((undefined4 *)puVar11[1] != param_1);
      puVar9 = puVar6 + 2;
    }
    uVar5 = puVar11[2];
    bVar7 = false;
    *puVar9 = uVar5;
    if ((undefined4 *)puVar2[8] == puVar11) {
      puVar2[8] = (uint)puVar6;
    }
    puVar6 = (undefined4 *)0x0;
    if ((bVar3 & 1) != 0) {
      puVar11[1] = param_2;
      puVar6 = puVar11;
    }
    for (; uVar5 != 0; uVar5 = *(uint *)(uVar5 + 8)) {
      if (*(undefined4 **)(uVar5 + 4) == param_1) {
        bVar7 = true;
        break;
      }
    }
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[2] = 0;
      if (puVar4[7] == 0) {
        puVar4[7] = (uint)puVar6;
      }
      else {
        *(undefined4 **)(puVar4[8] + 8) = puVar6;
      }
      puVar4[8] = (uint)puVar6;
    }
    if ((bVar3 & 1) == 0) {
      FUN_019ac130(&local_30,1);
      uVar5 = *puVar2;
      uVar10 = puVar2[1];
      bVar12 = (int)(uVar10 - (uStack_2c + (uVar5 < local_30))) < 0 !=
               (SBORROW4(uVar10,uStack_2c) != SBORROW4(uVar10 - uStack_2c,(uint)(uVar5 < local_30)))
      ;
      if (local_30 == uVar5 && uStack_2c == uVar10) {
        bVar12 = puVar2[2] < uStack_28;
      }
      if (bVar12) {
        uVar5 = puVar2[4] ^ puVar2[4] << 0xd;
        uVar5 = uVar5 ^ uVar5 >> 0x11;
        uVar5 = uVar5 ^ uVar5 << 5;
        puVar2[4] = uVar5;
        puVar8 = (undefined1 *)(uVar5 + (short)(uVar5 / 1000000) * -1000000 + uStack_28);
        if (&DAT_3b9aca00 <= puVar8) {
          bVar12 = 0xfffffffe < local_30;
          local_30 = local_30 + 1;
          uVar5 = uStack_2c + bVar12;
          if ((int)((uStack_2c ^ uVar5) & ~uStack_2c) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
          }
          puVar8 = puVar8 + -1000000000;
          uStack_2c = uVar5;
        }
        *puVar2 = local_30;
        puVar2[1] = uStack_2c;
        puVar2[2] = (uint)puVar8;
      }
      if (!bVar7) {
        *param_1 = 0;
      }
      puVar11[3] = 0;
      DataMemoryBarrier(0xb);
      *puVar11 = 0;
      puVar9 = puVar2 + 6;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar9;
        bVar7 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar7);
      *puVar9 = uVar5 - 1;
      if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
        FUN_01652d70();
      }
      if (puVar2 != puVar4) {
        puVar4 = puVar4 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *puVar4;
          bVar7 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar7);
        *puVar4 = uVar5 - 1;
        if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
          FUN_01652d70();
        }
      }
      uStack_24 = (int)register0x00000054 + -0xc;
      software_interrupt(0);
      FUN_01be3b5a(puVar11,0x81,1,param_5);
      return;
    }
    if (!bVar7) goto LAB_0164ef7c;
  }
  puVar9 = puVar2 + 6;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar9;
    bVar7 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar7);
  *puVar9 = uVar5 - 1;
  if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
    FUN_01652d70();
  }
  if (puVar2 == puVar4) {
    return;
  }
  puVar4 = puVar4 + 6;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar4;
    bVar7 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar7);
  *puVar4 = uVar5 - 1;
LAB_0164efd4:
  if ((uVar5 < 4) || ((uVar5 & 2) != 0)) {
    return;
  }
  FUN_01652d70();
  return;
}

