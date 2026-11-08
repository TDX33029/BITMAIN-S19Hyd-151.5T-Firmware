// FUN_01657318 @ 01657318 size=780 calls_out=8 calls_in=15
// strings: A Tokio 1.x context was found; but it is being shutdown.

void FUN_01657318(undefined4 *param_1,uint param_2,int *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 uVar9;
  char cVar10;
  int *piVar11;
  char cVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar15 = thunk_FUN_016de0ee(param_1,0x40);
  iVar14 = (int)uVar15 + (int)((ulonglong)uVar15 >> 0x20);
  if (*(char *)(iVar14 + 0x38) == '\x01') {
LAB_01657370:
    cVar10 = *(char *)(iVar14 + 0x31);
    cVar12 = *(char *)(iVar14 + 0x30);
    cVar2 = cVar10;
    if (cVar12 == '\x01') {
      if (cVar10 == '\0') {
        FUN_016455a4(*(undefined4 *)*param_3,((undefined4 *)*param_3)[1]);
        *param_1 = 2;
        return;
      }
      cVar2 = cVar10 + -1;
    }
    *(char *)(iVar14 + 0x31) = cVar2;
  }
  else {
    cVar12 = '\0';
    cVar10 = '\0';
    if (*(char *)(iVar14 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar14,FUN_01655ec4);
      *(undefined1 *)(iVar14 + 0x38) = 1;
      goto LAB_01657370;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  uVar4 = 5;
  DataMemoryBarrier(0xb);
  if (param_4 != 0) {
    uVar4 = 10;
  }
  if ((uVar3 & (uVar4 | 0x80000000)) == 0) {
    pcVar7 = (char *)(param_2 + 0x2c);
    if (*pcVar7 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar7);
      if (!bVar1) goto LAB_016573ec;
      *pcVar7 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_016573ec:
      FUN_01280da8(pcVar7);
    }
    FUN_0128236c(pcVar7);
    param_3 = (int *)*param_3;
    iVar5 = 0x18;
    if (param_4 != 0) {
      iVar5 = 0x20;
    }
    piVar11 = (int *)(param_2 + 0x20 + iVar5);
    puVar13 = (undefined4 *)*piVar11;
    puVar6 = (undefined4 *)*param_3;
    if (puVar13 == (undefined4 *)0x0) {
      uVar15 = (*(code *)*puVar6)(param_3[1]);
      if (*piVar11 != 0) {
        (**(code **)(*piVar11 + 0xc))(piVar11[1]);
      }
LAB_01657498:
      *(undefined8 *)piVar11 = uVar15;
    }
    else {
      iVar5 = piVar11[1];
      if (puVar13 != puVar6 || iVar5 != param_3[1]) {
        uVar15 = (*(code *)*puVar6)();
        (*(code *)puVar13[3])(iVar5);
        goto LAB_01657498;
      }
    }
    uVar3 = *(uint *)(param_2 + 0x28);
    DataMemoryBarrier(0xb);
    if (param_4 == 0) {
      if ((int)uVar3 < 0) {
        uVar8 = 1;
        uVar4 = 5;
        goto LAB_01657524;
      }
      uVar4 = uVar3 & 5;
      if (uVar4 != 0) goto LAB_016574c8;
LAB_016574ec:
      uVar8 = 2;
    }
    else {
      if ((int)uVar3 < 0) {
        uVar8 = 1;
        uVar4 = 10;
      }
      else {
        uVar4 = uVar3 & 10;
        if (uVar4 == 0) goto LAB_016574ec;
LAB_016574c8:
        uVar8 = uVar3 >> 0x1f;
      }
LAB_01657524:
      param_2 = uVar3 >> 0x10;
    }
    uVar9 = (undefined1)param_2;
    FUN_01282570(pcVar7);
    if (*pcVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar1) {
          *pcVar7 = '\0';
          goto LAB_01657568;
        }
      } while (*pcVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar7);
LAB_01657568:
    if (uVar8 == 2) {
      *param_1 = 2;
      goto joined_r0x0165757c;
    }
  }
  else {
    uVar4 = uVar3 & uVar4;
    uVar8 = uVar3 >> 0x1f;
    uVar9 = (undefined1)(uVar3 >> 0x10);
  }
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(param_1 + 2) = uVar9;
    *(undefined1 *)((int)param_1 + 9) = 0;
    *param_1 = 0;
    param_1[1] = uVar4;
    return;
  }
  FUN_015e79d4(&local_30,0x28,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
  *param_1 = 1;
  param_1[1] = local_30;
  param_1[2] = local_2c;
joined_r0x0165757c:
  if (cVar12 == '\0') {
    return;
  }
  if (*(char *)(iVar14 + 0x38) != '\x01') {
    if (*(char *)(iVar14 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar14,FUN_01655ec4);
    *(undefined1 *)(iVar14 + 0x38) = 1;
  }
  *(char *)(iVar14 + 0x31) = cVar10;
  *(undefined1 *)(iVar14 + 0x30) = 1;
  return;
}

