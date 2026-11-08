// FUN_00c7d390 @ 00c7d390 size=772 calls_out=9 calls_in=2
// strings: 

void FUN_00c7d390(uint *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  uint *puVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (*param_2 != 1) {
    *param_1 = 8;
    param_1[1] = 0;
    return;
  }
  uVar3 = (&switchD_00c7d3bc::switchdataD_00c7d3c0)[*(byte *)(param_2 + 3)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 3)) {
  case 0:
    piVar9 = (int *)param_2[1];
    param_2[2] = (int)piVar9;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6a6c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6a6c);
  case 3:
    piVar9 = (int *)param_2[2];
  }
  uVar12 = thunk_FUN_016de0ee(uVar3,0x40);
  iVar10 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
  if (*(char *)(iVar10 + 0x38) == '\x01') {
LAB_00c7d434:
    cVar4 = *(char *)(iVar10 + 0x31);
    cVar6 = *(char *)(iVar10 + 0x30);
    cVar2 = cVar4;
    if (cVar6 != '\x01') {
LAB_00c7d454:
      *(char *)(iVar10 + 0x31) = cVar2;
      goto LAB_00c7d458;
    }
    if (cVar4 != '\0') {
      cVar2 = cVar4 + -1;
      goto LAB_00c7d454;
    }
    FUN_016455a4(*param_3,param_3[1]);
    goto LAB_00c7d650;
  }
  cVar6 = '\0';
  cVar4 = '\0';
  if (*(char *)(iVar10 + 0x38) != '\x02') {
    FUN_015e8e6c(iVar10,FUN_00bacf28);
    *(undefined1 *)(iVar10 + 0x38) = 1;
    goto LAB_00c7d434;
  }
LAB_00c7d458:
  iVar11 = *piVar9;
  FUN_00c73c28(&local_48,iVar11 + 0x70,iVar11 + 0x20);
  if ((local_48 & 0xf) == 7) {
    DataMemoryBarrier(0xb);
    if (1 < *(uint *)(iVar11 + 0x80)) {
      puVar8 = &DAT_018ac108;
LAB_00c7d67c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00412a7f,0x30,puVar8);
    }
LAB_00c7d568:
    local_44 = 0;
    local_48 = 7;
  }
  else if (local_48 == 8) {
    FUN_0163e1c0(iVar11 + 0x40,param_3);
    FUN_00c73c28(&local_48,iVar11 + 0x70,iVar11 + 0x20);
    if ((local_48 & 0xf) == 7) {
      DataMemoryBarrier(0xb);
      if (1 < *(uint *)(iVar11 + 0x80)) {
        puVar8 = &DAT_018ac0f8;
        goto LAB_00c7d67c;
      }
      goto LAB_00c7d568;
    }
    if (local_48 == 8) {
      if ((*(char *)(iVar11 + 0x7c) == '\x01') &&
         (DataMemoryBarrier(0xb), *(uint *)(iVar11 + 0x80) < 2)) {
        local_44 = 0;
        local_48 = 7;
        *(undefined1 *)(param_2 + 3) = 1;
        goto LAB_00c7d5cc;
      }
      if (cVar6 != '\0') {
        if (*(char *)(iVar10 + 0x38) != '\x01') {
          if (*(char *)(iVar10 + 0x38) == '\x02') goto LAB_00c7d650;
          FUN_015e8e6c(iVar10,FUN_01655ec4);
          *(undefined1 *)(iVar10 + 0x38) = 1;
        }
        *(char *)(iVar10 + 0x31) = cVar4;
        *(undefined1 *)(iVar10 + 0x30) = 1;
      }
LAB_00c7d650:
      *(undefined1 *)(param_2 + 3) = 3;
      goto LAB_00c7d658;
    }
    puVar7 = (uint *)(iVar11 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar3 - 2;
    if (uVar3 < 2) goto LAB_00c7d670;
    local_60 = local_40;
    uStack_5c = uStack_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
  }
  else {
    puVar7 = (uint *)(iVar11 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar3 - 2;
    if (uVar3 < 2) {
LAB_00c7d670:
                    /* WARNING: Subroutine does not return */
      FUN_015bef44();
    }
    local_60 = local_40;
    uStack_5c = uStack_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
  }
  uVar5 = 1;
  if (local_48 == 8 && local_44 == 0) {
    uVar5 = 3;
  }
  *(undefined1 *)(param_2 + 3) = uVar5;
  if (local_48 != 8 || local_44 != 0) {
LAB_00c7d5cc:
    param_1[2] = local_60;
    param_1[3] = uStack_5c;
    param_1[4] = uStack_58;
    param_1[5] = uStack_54;
    param_1[6] = uStack_50;
    param_1[7] = uStack_4c;
    *param_2 = 0;
    *param_1 = local_48;
    param_1[1] = local_44;
    return;
  }
LAB_00c7d658:
  *param_1 = 8;
  param_1[1] = 0;
  return;
}

