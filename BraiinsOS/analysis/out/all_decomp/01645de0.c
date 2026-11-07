// FUN_01645de0 @ 01645de0 size=1460 calls_out=22 calls_in=2
// strings: A Tokio 1.x context was found; but it is being shutdown. | failed to wake I/O driver | A Tokio 1.x context was found; but it is being shutdown. | inner has gone away | inner has gone away | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_01645de0(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  char *local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 local_40;
  int local_3c;
  undefined4 *local_38;
  undefined1 *puStack_34;
  char *local_30;
  uint local_2c;
  uint local_28;
  
  if (*param_2 == 3) {
    do {
      cVar3 = FUN_0165244c(param_2 + 8,param_3);
      if (param_2[1] == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("inner has gone away",0x13,&DAT_018aca20);
      }
      FUN_016525a4(&local_30,param_2 + 1);
      if (local_30 != (char *)0x0) goto LAB_01645f78;
      if ((local_2c & 1) != 0) goto LAB_01645f8c;
    } while (cVar3 != '\x02');
LAB_01645e8c:
    *(undefined1 *)param_1 = 5;
    return;
  }
  if (*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("inner has gone away",0x13,&DAT_018ac96c);
  }
  FUN_01657318(&local_50,param_2[9],param_3,0);
  puVar2 = local_48;
  uVar5 = local_4c;
  if (local_50 == (char *)0x2) goto LAB_01645e8c;
  if (((uint)local_50 & 1) == 0) {
    FUN_016525a4(&local_30,param_2);
    if (local_30 != (char *)0x0) {
LAB_01645f78:
      *param_1 = local_2c;
      param_1[1] = local_28;
      return;
    }
    if ((local_2c & 1) != 0) {
LAB_01645f8c:
      param_1[1] = local_28;
      *(undefined1 *)param_1 = 4;
      return;
    }
    puVar7 = (uint *)(param_2[9] + 0x28);
    DataMemoryBarrier(0xb);
    uVar10 = *(uint *)(param_2[9] + 0x28);
    do {
      while( true ) {
        if (((uint)local_48 & 0xff) != (uVar10 & 0xffffff) >> 0x10) goto LAB_0164605c;
        uVar9 = *puVar7;
        if (uVar9 == uVar10) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        uVar10 = uVar9;
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar7);
      if (bVar1) {
        *puVar7 = uVar10 & (uVar5 & 0x33 ^ 0xff003f);
      }
      DataMemoryBarrier(0xb);
      uVar10 = uVar9;
    } while (!bVar1);
  }
  else {
    if (((byte)local_4c != '\x03') || (*(char *)(local_48 + 2) != '(')) {
LAB_01645f40:
      *param_1 = local_4c;
      param_1[1] = (uint)local_48;
      return;
    }
    uVar11 = *local_48;
    iVar14 = local_48[1];
    iVar4 = (**(code **)(iVar14 + 0x18))(uVar11);
    if (iVar4 != 0) goto LAB_01645f40;
    local_28 = local_28 & 0xffffff00;
    puStack_34 = &LAB_01656d18;
    local_30 = "A Tokio 1.x context was found, but it is being shutdown.";
    local_2c = 0x38;
    local_38 = &local_40;
    local_40 = uVar11;
    local_3c = iVar14;
    FUN_00fa948c(&local_30,&DAT_018ac9f8,&DAT_00590e71,&local_38);
    uVar5 = local_2c;
    if (local_2c == 0) {
      uVar5 = local_28 & 0xff;
    }
    if (local_2c != 0 || (uVar5 & 1) != 0) goto LAB_01645f40;
    if (2 < (byte)local_4c) {
      uVar11 = *puVar2;
      puVar15 = (undefined4 *)puVar2[1];
      pcVar8 = (code *)*puVar15;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar11);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
  }
LAB_0164605c:
  iVar4 = param_2[10];
  if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac8fc);
  }
  iVar14 = 0x180;
  puVar7 = (uint *)(param_2 + 8);
  if (param_2[7] != 0) {
    iVar14 = 0xb8;
  }
  iVar14 = *puVar7 + iVar14;
  if (*(int *)(iVar14 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_018ad15c);
  }
  iVar6 = FUN_016d3742(*(int *)(iVar14 + 0x30),2,iVar4,0);
  if (iVar6 < 0) {
    FUN_016d2bc8();
    goto LAB_016461e0;
  }
  pcVar13 = (char *)(iVar14 + 0x3c);
  if (*pcVar13 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar13);
    if (!bVar1) goto LAB_01646334;
    *pcVar13 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01646334:
    FUN_01280da8(pcVar13);
  }
  FUN_0128236c(pcVar13);
  piVar12 = (int *)param_2[9];
  do {
    iVar4 = *piVar12;
    bVar1 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar1);
  *piVar12 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)software_udf(0xfdee,0x16461d0);
    (*pcVar8)();
  }
  iVar4 = *(int *)(iVar14 + 0x48);
  if (iVar4 == *(int *)(iVar14 + 0x40)) {
    FUN_016431c4(iVar14 + 0x40);
  }
  *(int **)(*(int *)(iVar14 + 0x44) + iVar4 * 4) = piVar12;
  iVar4 = iVar4 + 1;
  *(int *)(iVar14 + 0x48) = iVar4;
  DataMemoryBarrier(0xb);
  *(int *)(iVar14 + 0x38) = iVar4;
  FUN_01282570(pcVar13);
  if (*pcVar13 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar13);
      if (bVar1) {
        *pcVar13 = '\0';
        bVar1 = true;
        goto LAB_01646170;
      }
    } while (*pcVar13 == '\x01');
  }
  bVar1 = false;
  ClearExclusiveLocal();
LAB_01646170:
  if (iVar4 == 0x10) {
    if (!bVar1) {
      FUN_01280a5c(pcVar13);
    }
    FUN_0126df90(&local_50,*(undefined4 *)(iVar14 + 0x34));
    if ((char)local_50 != '\x04') {
      local_2c = local_4c;
      local_30 = local_50;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("failed to wake I/O driver",0x19,&local_30,&DAT_018ad2fc,&DAT_018ad384);
    }
  }
  else if (!bVar1) {
    FUN_01280a5c(pcVar13);
  }
  iVar4 = param_2[10];
LAB_016461e0:
  uVar16 = FUN_0164ec90(&DAT_018ac90c);
  FUN_0165768c(&local_30,iVar4,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),&DAT_018ac91c);
  uVar10 = local_28;
  uVar5 = local_2c;
  pcVar13 = local_30;
  if (local_30 == (char *)0x2) {
    if ((local_2c & 0xff) != 4) {
      *param_1 = local_2c;
      param_1[1] = local_28;
      return;
    }
  }
  else {
    FUN_0165823c(param_2[9]);
    if (param_2[7] == 0) {
      piVar12 = (int *)*puVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar12;
        bVar1 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar1);
      *piVar12 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(*puVar7);
      }
    }
    else {
      piVar12 = (int *)*puVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar12;
        bVar1 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar1);
      *piVar12 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(*puVar7);
      }
    }
    piVar12 = (int *)param_2[9];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar12;
      bVar1 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar1);
    *piVar12 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659660(param_2[9]);
    }
    *puVar7 = uVar5;
    param_2[7] = (int)pcVar13;
    param_2[9] = uVar10;
  }
  (**(code **)(*(int *)*param_3 + 8))(((int *)*param_3)[1]);
  *(undefined1 *)param_1 = 5;
  return;
}

