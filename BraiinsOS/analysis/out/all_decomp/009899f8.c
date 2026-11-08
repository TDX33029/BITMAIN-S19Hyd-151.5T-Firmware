// FUN_009899f8 @ 009899f8 size=572 calls_out=6 calls_in=1
// strings: 

void FUN_009899f8(ushort *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  uint unaff_r10;
  undefined4 unaff_r11;
  undefined4 extraout_r12;
  undefined4 uVar11;
  ushort uVar12;
  undefined8 uVar13;
  int local_38;
  int iStack_34;
  char *local_30;
  undefined4 local_2c;
  
  uVar13 = thunk_FUN_016de0ee(param_1,0x40);
  iVar8 = (int)uVar13 + (int)((ulonglong)uVar13 >> 0x20);
  if (*(char *)(iVar8 + 0x38) == '\x01') {
LAB_00989a4c:
    cVar9 = *(char *)(iVar8 + 0x31);
    cVar10 = *(char *)(iVar8 + 0x30);
    cVar2 = cVar9;
    if (cVar10 == '\x01') {
      if (cVar9 == '\0') {
        FUN_016455a4(*param_3,param_3[1]);
        *param_1 = 2;
        return;
      }
      cVar2 = cVar9 + -1;
    }
    *(char *)(iVar8 + 0x31) = cVar2;
  }
  else {
    cVar10 = '\0';
    cVar9 = '\0';
    if (*(char *)(iVar8 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar8,FUN_009948a0);
      *(undefined1 *)(iVar8 + 0x38) = 1;
      goto LAB_00989a4c;
    }
  }
  uVar12 = 0x9a84;
  FUN_00c0b178(&local_38,*param_2,param_2 + 1,param_3);
  puVar3 = param_1 + 4;
  if (local_38 == 3 && iStack_34 == 0) {
    cVar2 = local_30[0x27];
    if (cVar2 != '\x02') {
      uVar12 = *(ushort *)(local_30 + 0x14);
      unaff_r11 = *(undefined4 *)(local_30 + 0x16);
      uVar5 = *(undefined4 *)(local_30 + 0x1a);
      uVar7 = *(undefined4 *)(local_30 + 0x1e);
      uVar11 = *(undefined4 *)(local_30 + 0x22);
      unaff_r10 = (uint)CONCAT11(cVar2,local_30[0x26]);
    }
    else {
      uVar5 = 0;
      uVar7 = 0;
      uVar11 = extraout_r12;
    }
    *(undefined4 *)puVar3 = uVar5;
    *(undefined4 *)(param_1 + 6) = uVar7;
    *(undefined4 *)(param_1 + 8) = uVar11;
    piVar6 = (int *)(local_30 + 0x10);
    *(undefined4 *)(param_1 + 2) = unaff_r11;
    param_1[1] = uVar12;
    *param_1 = (ushort)(cVar2 == '\x02');
    *(uint *)(param_1 + 10) = unaff_r10;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      local_30[0x27] = '\x02';
    }
    FUN_01282570(local_30);
    if (*local_30 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(local_30);
        if (bVar1) {
          *local_30 = '\0';
          goto LAB_00989b8c;
        }
      } while (*local_30 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(local_30);
  }
  else {
    if (local_38 == 0) {
      uVar12 = 2;
    }
    else {
      if (local_38 != 1) {
        puVar3[0] = 1;
        puVar3[1] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *(char **)(param_1 + 8) = local_30;
        *(undefined4 *)(param_1 + 10) = local_2c;
        *param_1 = 1;
        uVar12 = *param_1;
        goto joined_r0x00989be8;
      }
      puVar3[0] = 0;
      puVar3[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      uVar12 = 1;
    }
    *param_1 = uVar12;
  }
LAB_00989b8c:
  uVar12 = *param_1;
joined_r0x00989be8:
  if ((uVar12 != 2) || (cVar10 == '\0')) {
    return;
  }
  if (*(char *)(iVar8 + 0x38) != '\x01') {
    if (*(char *)(iVar8 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar8,FUN_01655ec4);
    *(undefined1 *)(iVar8 + 0x38) = 1;
  }
  *(char *)(iVar8 + 0x31) = cVar9;
  *(undefined1 *)(iVar8 + 0x30) = 1;
  return;
}

