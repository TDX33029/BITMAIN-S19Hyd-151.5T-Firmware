// FUN_01644d00 @ 01644d00 size=812 calls_out=9 calls_in=5
// strings: 

void FUN_01644d00(undefined4 *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  uint local_24;
  int *local_20;
  undefined4 *local_1c;
  
  bVar7 = DAT_018d90fc;
  do {
    bVar2 = DAT_018d90fc;
    if ((bVar7 & 1) != 0) {
      return;
    }
    if (DAT_018d90fc == bVar7) {
      bVar1 = (bool)hasExclusiveAccess(0x18d90fc);
      if (bVar1) {
        DAT_018d90fc = bVar7 | 1;
      }
      bVar12 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar12 = true;
      }
    }
    else {
      bVar12 = false;
      ClearExclusiveLocal();
    }
    bVar7 = bVar2;
  } while (!bVar12);
  FUN_0128236c(&DAT_018d90fc);
  if (DAT_018d9100 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    puVar4 = (undefined4 *)(DAT_018d9100[0x27] & 0xfffffffe);
    if (DAT_018d9104 == puVar4) {
      uVar5 = 1;
      if ((DAT_018d9100[0x27] & 1U) == 0) {
        uVar5 = 2;
      }
      if (uVar5 == 2) goto LAB_01644f90;
    }
    else {
      uVar5 = 0;
      DAT_018d9104 = puVar4;
    }
    if ((uVar5 & 1) != 0) goto LAB_01644f90;
    if (DAT_018d90ec == '\0') {
      bVar12 = (bool)hasExclusiveAccess(0x18d90ec);
      if (!bVar12) goto LAB_01644ee4;
      DAT_018d90ec = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01644ee4:
      FUN_01280da8(&DAT_018d90ec);
    }
    FUN_0128236c(&DAT_018d90ec);
    FUN_0165ac20();
    goto LAB_01644f90;
  }
  if (DAT_018d90ec == '\0') {
    bVar12 = (bool)hasExclusiveAccess(0x18d90ec);
    if (!bVar12) goto LAB_01644dfc;
    DAT_018d90ec = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01644dfc:
    FUN_01280da8(&DAT_018d90ec);
  }
  FUN_0128236c(&DAT_018d90ec);
  if (DAT_018d90f8 != 0) {
    FUN_01635f84(&local_24,0x11,*param_1);
    puVar4 = local_1c;
    piVar3 = local_20;
    piVar6 = DAT_018d9100;
    if (local_24 == 0) {
      if (DAT_018d9100 != (int *)0x0) {
        piVar9 = DAT_018d9100 + 0x28;
        do {
          iVar10 = *piVar9;
          bVar12 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar12);
        *piVar9 = iVar10 + -1;
        if (iVar10 == 1) {
          FUN_0163b708(piVar6 + 0x22);
          piVar6 = DAT_018d9100;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar6;
          bVar12 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar12);
        *piVar6 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00784894(DAT_018d9100);
        }
      }
      DAT_018d9100 = piVar3;
      DAT_018d9104 = puVar4;
      FUN_0165ac20();
      bVar12 = local_24 == 1;
      if (bVar12) {
        local_24 = (uint)local_20 & 0xff;
      }
      if (bVar12 && local_24 == 3) {
        uVar11 = *local_1c;
        puVar4 = (undefined4 *)local_1c[1];
        pcVar8 = (code *)*puVar4;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(uVar11);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_016d3fb4(uVar11);
        }
        thunk_FUN_016d3fb4(local_1c);
      }
      goto LAB_01644f90;
    }
    if ((char)local_20 == '\x03') {
      uVar11 = *local_1c;
      puVar4 = (undefined4 *)local_1c[1];
      pcVar8 = (code *)*puVar4;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar11);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
      thunk_FUN_016d3fb4(local_1c);
    }
  }
  FUN_01282570(&DAT_018d90ec);
  if (DAT_018d90ec == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar12 = (bool)hasExclusiveAccess(0x18d90ec);
    } while (!bVar12);
    DAT_018d90ec = '\0';
  }
  else {
    ClearExclusiveLocal();
    FUN_01280a5c(&DAT_018d90ec);
  }
LAB_01644f90:
  FUN_01282570(&DAT_018d90fc);
  if (DAT_018d90fc != 1) {
    ClearExclusiveLocal();
    FUN_01280a5c(&DAT_018d90fc);
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar12 = (bool)hasExclusiveAccess(0x18d90fc);
  } while (!bVar12);
  DAT_018d90fc = 0;
  return;
}

