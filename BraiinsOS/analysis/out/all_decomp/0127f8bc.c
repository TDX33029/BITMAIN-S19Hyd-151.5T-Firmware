// FUN_0127f8bc @ 0127f8bc size=1132 calls_out=4 calls_in=3
// strings: 

void FUN_0127f8bc(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  bool bVar12;
  undefined8 uVar13;
  uint uStack_38;
  uint local_34;
  uint local_30;
  
  uVar13 = FUN_0127f678();
  puVar4 = (uint *)((ulonglong)uVar13 >> 0x20);
  puVar3 = (uint *)uVar13;
  if ((byte *)*param_1 != param_2) {
    puVar11 = puVar3 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar11;
      bVar2 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar2);
    *puVar11 = uVar8 - 1;
    if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
      FUN_01286894(puVar11);
    }
    if (puVar3 == puVar4) {
      return;
    }
    puVar4 = puVar4 + 6;
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar4;
      bVar2 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar2);
    *puVar4 = uVar8 - 1;
    goto LAB_0127fbcc;
  }
  bVar1 = *param_2;
  do {
    while( true ) {
      bVar5 = bVar1;
      if ((bVar5 & 1) == 0) {
        puVar11 = puVar3 + 7;
        param_2 = (byte *)*puVar11;
        if (param_2 == (byte *)0x0) goto LAB_0127fb74;
        uVar8 = 0;
        if (*(undefined4 **)(param_2 + 4) != param_1) goto LAB_0127fa0c;
        pbVar7 = (byte *)0x0;
        goto LAB_0127fa2c;
      }
      bVar1 = *param_2;
      if (bVar1 == bVar5) break;
      ClearExclusiveLocal();
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = bVar5 | 2;
  puVar11 = puVar3 + 7;
  uVar8 = *puVar11;
  if (uVar8 != 0) {
    uVar6 = 0;
    if (*(undefined4 **)(uVar8 + 4) != param_1) {
      do {
        uVar6 = uVar8;
        uVar8 = *(uint *)(uVar6 + 8);
        if (uVar8 == 0) goto LAB_0127fb74;
      } while (*(undefined4 **)(uVar8 + 4) != param_1);
      puVar11 = (uint *)(uVar6 + 8);
    }
    uVar9 = *(uint *)(uVar8 + 8);
    *puVar11 = uVar9;
    if (puVar3[8] == uVar8) {
      puVar3[8] = uVar6;
    }
    *(byte **)(uVar8 + 4) = param_2;
    goto joined_r0x0127f9dc;
  }
LAB_0127fb74:
  *param_1 = 0;
  goto LAB_0127fb7c;
  while (*(undefined4 **)(param_2 + 4) != param_1) {
LAB_0127fa0c:
    pbVar7 = param_2;
    param_2 = *(byte **)(pbVar7 + 8);
    if (param_2 == (byte *)0x0) goto LAB_0127fb74;
  }
  puVar11 = (uint *)(pbVar7 + 8);
LAB_0127fa2c:
  uVar9 = *(uint *)(param_2 + 8);
  *puVar11 = uVar9;
  if ((byte *)puVar3[8] == param_2) {
    puVar3[8] = (uint)pbVar7;
  }
joined_r0x0127f9dc:
  for (; uVar9 != 0; uVar9 = *(uint *)(uVar9 + 8)) {
    if (*(undefined4 **)(uVar9 + 4) == param_1) {
      bVar2 = true;
      goto joined_r0x0127fbec;
    }
  }
  bVar2 = false;
joined_r0x0127fbec:
  if (uVar8 != 0) {
    *(undefined4 *)(uVar8 + 8) = 0;
    if (puVar4[7] == 0) {
      puVar4[7] = uVar8;
    }
    else {
      *(uint *)(puVar4[8] + 8) = uVar8;
    }
    puVar4[8] = uVar8;
  }
  if ((bVar5 & 1) == 0) {
    FUN_015f3b0c(&uStack_38,1);
    uVar9 = *puVar3;
    uVar8 = puVar3[1];
    bVar12 = (int)(uVar8 - (local_34 + (uVar9 < uStack_38))) < 0 !=
             (SBORROW4(uVar8,local_34) != SBORROW4(uVar8 - local_34,(uint)(uVar9 < uStack_38)));
    if (uStack_38 == uVar9 && local_34 == uVar8) {
      bVar12 = puVar3[2] < local_30;
    }
    if (bVar12) {
      uVar8 = puVar3[4] ^ puVar3[4] << 0xd;
      uVar8 = uVar8 ^ uVar8 >> 0x11;
      uVar8 = uVar8 ^ uVar8 << 5;
      puVar3[4] = uVar8;
      puVar10 = (undefined1 *)(uVar8 + (short)(uVar8 / 1000000) * -1000000 + local_30);
      if (&DAT_3b9aca00 <= puVar10) {
        bVar12 = 0xfffffffe < uStack_38;
        uStack_38 = uStack_38 + 1;
        uVar8 = local_34 + bVar12;
        if ((int)((local_34 ^ uVar8) & ~local_34) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
        }
        puVar10 = puVar10 + -1000000000;
        local_34 = uVar8;
      }
      *puVar3 = uStack_38;
      puVar3[1] = local_34;
      puVar3[2] = (uint)puVar10;
    }
    if (!bVar2) {
      *param_1 = 0;
    }
    if ((bVar5 & 1) == 0) {
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      DataMemoryBarrier(0xb);
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      puVar11 = puVar3 + 6;
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar11;
        bVar2 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar2);
      *puVar11 = uVar8 - 1;
      if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
        FUN_01286894(puVar11);
      }
      if (puVar3 != puVar4) {
        puVar4 = puVar4 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar4;
          bVar2 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar2);
        *puVar4 = uVar8 - 1;
        if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
          FUN_01286894();
        }
      }
      software_interrupt(0);
      FUN_016d3496(param_2,0x81,1,param_5);
      return;
    }
  }
  else if (!bVar2) goto LAB_0127fb74;
LAB_0127fb7c:
  puVar11 = puVar3 + 6;
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar11;
    bVar2 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar2);
  *puVar11 = uVar8 - 1;
  if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
    FUN_01286894(puVar11);
  }
  if (puVar3 == puVar4) {
    return;
  }
  puVar4 = puVar4 + 6;
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar4;
    bVar2 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar2);
  *puVar4 = uVar8 - 1;
LAB_0127fbcc:
  if ((uVar8 < 4) || ((uVar8 & 2) != 0)) {
    return;
  }
  FUN_01286894();
  return;
}

