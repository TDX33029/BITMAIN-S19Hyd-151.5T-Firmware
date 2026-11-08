// FUN_0162b20c @ 0162b20c size=832 calls_out=8 calls_in=7
// strings: 

void FUN_0162b20c(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_r2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 *local_2c;
  undefined1 local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d90b4 != 2) {
    FUN_0162b594();
  }
  do {
    if (DAT_018d90bc != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018d90bc);
      goto LAB_0162b250;
    }
    bVar11 = (bool)hasExclusiveAccess(0x18d90bc);
  } while (!bVar11);
  DAT_018d90bc = 1;
  DataMemoryBarrier(0xb);
LAB_0162b250:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
  }
  uVar3 = DAT_018d90cc;
  puVar4 = DAT_018d90c8;
  if (DAT_018d90c0 != '\0') {
    local_28 = (undefined1)uVar5;
    local_2c = &DAT_018d90bc;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ac32c,&DAT_018ac31c);
  }
  if (DAT_018d90cc == 0) {
    uVar9 = DAT_018d90d0;
    DAT_018d90d0 = DAT_018d90d0 + 1;
    goto LAB_0162b398;
  }
  uVar8 = DAT_018d90cc - 1;
  uVar9 = DAT_018d90c8[uVar8];
  if (uVar8 == 0) {
    DAT_018d90cc = uVar8;
    goto LAB_0162b398;
  }
  uVar10 = *DAT_018d90c8;
  uVar7 = DAT_018d90cc - 3;
  if (uVar8 < 2) {
    uVar7 = 0;
  }
  bVar11 = DAT_018d90cc < 4;
  DAT_018d90cc = uVar8;
  *DAT_018d90c8 = uVar9;
  if (bVar11) {
    uVar2 = 0;
    uVar6 = 1;
    if (uVar8 == 2) {
LAB_0162b33c:
      puVar4[uVar2] = puVar4[uVar6];
      puVar4[uVar6] = uVar9;
      goto LAB_0162b364;
    }
  }
  else {
    uVar6 = 1;
    uVar8 = 0;
    do {
      uVar2 = uVar6;
      if (puVar4[uVar6 + 1] <= puVar4[uVar6]) {
        uVar2 = uVar6 + 1;
      }
      puVar4[uVar8] = puVar4[uVar2];
      uVar6 = uVar2 << 1 | 1;
      uVar8 = uVar2;
    } while (uVar2 * 2 < uVar7);
    if (uVar2 * 2 == uVar3 - 3) goto LAB_0162b33c;
    puVar4[uVar2] = uVar9;
    uVar6 = uVar2;
LAB_0162b364:
    do {
      uVar3 = uVar6 - 1;
      uVar2 = uVar3 >> 1;
      if (puVar4[uVar2] <= uVar9) {
        uVar2 = uVar6;
        break;
      }
      puVar4[uVar6] = puVar4[uVar2];
      uVar6 = uVar2;
    } while (1 < uVar3);
  }
  puVar4[uVar2] = uVar9;
  uVar9 = uVar10;
LAB_0162b398:
  uVar3 = 0x1f - LZCOUNT(uVar9 + 1);
  *param_1 = uVar9;
  uVar8 = uVar3 & 0x1f;
  param_1[1] = uVar3;
  param_1[2] = 1 << uVar8;
  param_1[3] = (uVar9 + 1) - (1 << uVar8);
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar1 = FUN_015bf3f8(), iVar1 == 0))
  {
    DAT_018d90c0 = '\x01';
  }
  iVar1 = DAT_018d90bc;
  DataMemoryBarrier(0xb);
  do {
    bVar11 = (bool)hasExclusiveAccess(0x18d90bc);
  } while (!bVar11);
  DAT_018d90bc = 0;
  if (iVar1 == 2) {
    FUN_016d6968(0xf0,&DAT_018d90bc,0x81,1);
  }
  uVar5 = *param_1;
  uVar9 = param_1[1];
  uVar3 = param_1[2];
  uVar8 = param_1[3];
  *param_2 = 1;
  param_2[1] = uVar5;
  param_2[2] = uVar9;
  uVar12 = thunk_FUN_016de0ee(param_1,param_2,0x270);
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  puVar4 = (uint *)((int)uVar12 + extraout_r2);
  *(uint *)(iVar1 + 0xc) = uVar3;
  *(uint *)(iVar1 + 0x10) = uVar8;
  if ((char)puVar4[1] != '\x01') {
    if ((char)puVar4[1] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(puVar4,FUN_0162b5e8);
    *(undefined1 *)(puVar4 + 1) = 1;
  }
  *puVar4 = uVar5;
  return;
}

