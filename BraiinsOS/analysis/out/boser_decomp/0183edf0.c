// FUN_0183edf0 @ 0183edf0 size=2076 calls_out=18 calls_in=0
// strings: 

void FUN_0183edf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  int *local_a0;
  uint *local_9c;
  int **local_98;
  uint local_94 [3];
  int *local_88;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_50;
  int local_4c;
  uint local_2c;
  int *local_28;
  
  puVar10 = (undefined4 *)((uint)&local_a0 | 0x10);
  do {
    do {
      piVar15 = DAT_01d50474;
      piVar14 = DAT_01d50470;
      piVar7 = (int *)((int)DAT_01d50470 + 1);
      piVar8 = (int *)((int)DAT_01d50474 + (uint)((int *)0xfffffffe < DAT_01d50470));
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == (int *)0x0;
    bVar3 = DAT_01d50474 == (int *)0x0;
    DAT_01d50470 = piVar7;
    DAT_01d50474 = piVar8;
  } while (bVar2 && bVar3);
  uVar16 = thunk_FUN_01bee35a(&DAT_01d50470,0x20);
  puVar12 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar12[0xe] == '\x01') goto LAB_0183ee8c;
  if ((char)puVar12[0xe] != '\x02') goto LAB_0183ee74;
  FUN_01139b38(param_2,param_3);
  uVar4 = 1;
  while( true ) {
    local_a0 = (int *)CONCAT31(local_a0._1_3_,uVar4);
    FUN_018236e4(&local_a0);
LAB_0183ee74:
    FUN_019a2bcc(puVar12,&LAB_019efb68);
    *(undefined1 *)(puVar12 + 0xe) = 1;
LAB_0183ee8c:
    if (0x7ffffffe < *puVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar12 = *puVar12 + 1;
    if (puVar12[1] != 2) break;
    FUN_01139b38(param_2,param_3);
    *puVar12 = *puVar12 - 1;
    uVar4 = 0;
  }
  if ((puVar12[1] & 1) == 0) {
    piVar7 = (int *)puVar12[2];
    do {
      iVar5 = *piVar7;
      iVar6 = iVar5 + 1;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar6;
    if (iVar5 < 0) goto LAB_0183f5fc;
    piVar8 = (int *)piVar7[0x82];
    if (piVar8 != (int *)0x0) {
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0183f5fc;
      iVar6 = piVar7[0x83];
    }
    local_98 = (int **)&PTR_LAB_01d1e144;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[4] = piVar14;
    puVar10[5] = piVar15;
    local_78 = 0;
    local_9c = (uint *)0x0;
    local_a0 = (int *)0xcc;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_28 = (int *)0x0;
    local_88 = piVar7;
    local_70 = param_2;
    local_6c = param_3;
    local_50 = piVar8;
    local_4c = iVar6;
    iVar5 = FUN_01be5878(&local_28,0x20,0x60);
    piVar8 = local_28;
    if ((iVar5 != 0) || (local_28 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_28,&local_a0,0x60);
    iVar5 = piVar7[0x47];
    piVar8[4] = piVar7[0x46];
    piVar8[5] = iVar5;
    uVar11 = *(uint *)((int)piVar8 + *(int *)(piVar8[2] + 0x24));
    piVar13 = (int *)(piVar7[0x40] + (piVar7[0x45] & uVar11) * 0xc);
    if ((char)*piVar13 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(piVar13);
      if (!bVar2) goto LAB_0183f1a0;
      *(char *)piVar13 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0183f1a0:
      FUN_0164fba8(piVar13);
    }
    FUN_0165098c(piVar13);
    DataMemoryBarrier(0xb);
    if ((char)piVar7[0x48] == '\0') {
      local_98 = (int **)(piVar7 + 0x44);
      local_9c = (uint *)(piVar7 + 0x42);
      local_2c = *(uint *)((int)piVar8 + *(int *)(piVar8[2] + 0x24));
      local_a0 = piVar13;
      local_94[0] = uVar11;
      if (uVar11 != local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&local_2c,local_94,0);
      }
      piVar9 = (int *)piVar13[1];
      local_28 = piVar8;
      if (piVar8 == piVar9) {
        FUN_01861160(piVar13 + 1,&local_28);
        goto LAB_0183f5fc;
      }
      *(int **)((int)piVar8 + *(int *)(piVar8[2] + 0x1c) + 4) = piVar9;
      *(undefined4 *)((int)piVar8 + *(int *)(piVar8[2] + 0x1c)) = 0;
      if (piVar9 != (int *)0x0) {
        *(int **)((int)piVar9 + *(int *)(piVar9[2] + 0x1c)) = piVar8;
      }
      piVar13[1] = (int)piVar8;
      if (piVar13[2] == 0) {
        piVar13[2] = (int)piVar8;
      }
      do {
        uVar11 = *local_9c;
        bVar2 = (bool)hasExclusiveAccess(local_9c);
      } while (!bVar2);
      *local_9c = uVar11 + 1;
      piVar7[0x43] = piVar7[0x43] + (uint)(0xfffffffe < uVar11);
      do {
        bVar2 = (bool)hasExclusiveAccess(local_98);
      } while (!bVar2);
      *local_98 = (int *)((int)*local_98 + 1);
      FUN_01650a90(piVar13);
      if ((char)*piVar13 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar13);
          if (bVar2) {
            *(char *)piVar13 = '\0';
            goto LAB_0183f4a4;
          }
        } while ((char)*piVar13 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(piVar13);
LAB_0183f4a4:
      piVar13 = piVar8;
    }
    else {
      FUN_01650a90(piVar13);
      if ((char)*piVar13 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar13);
          if (bVar2) {
            *(char *)piVar13 = '\0';
            goto LAB_0183f208;
          }
        } while ((char)*piVar13 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(piVar13);
LAB_0183f208:
      (**(code **)(piVar8[2] + 0x18))(piVar8);
      FUN_019d8858(piVar8);
      piVar13 = (int *)0x0;
    }
    local_a0 = piVar14;
    local_9c = (uint *)piVar15;
    if (piVar7[0x80] != 0) {
      (**(code **)(piVar7[0x81] + 0x14))
                (piVar7[0x80] + (*(int *)(piVar7[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
    }
    if (piVar13 != (int *)0x0) {
      FUN_019dc904(puVar12[2],piVar13);
    }
    goto LAB_0183f504;
  }
  piVar7 = (int *)puVar12[2];
  do {
    iVar5 = *piVar7;
    iVar6 = iVar5 + 1;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar6;
  if (iVar5 < 0) goto LAB_0183f5fc;
  piVar8 = (int *)piVar7[0x50];
  if (piVar8 != (int *)0x0) {
    do {
      iVar5 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_0183f5fc;
    iVar6 = piVar7[0x51];
  }
  local_98 = (int **)&PTR_LAB_01d1e11c;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[4] = piVar14;
  puVar10[5] = piVar15;
  local_78 = 0;
  local_9c = (uint *)0x0;
  local_a0 = (int *)0xcc;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_28 = (int *)0x0;
  local_88 = piVar7;
  local_70 = param_2;
  local_6c = param_3;
  local_50 = piVar8;
  local_4c = iVar6;
  iVar5 = FUN_01be5878(&local_28,0x20,0x60);
  piVar8 = local_28;
  if ((iVar5 != 0) || (local_28 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0x60);
  }
  FUN_01bed4e2(local_28,&local_a0,0x60);
  iVar5 = piVar7[0x1b];
  piVar8[4] = piVar7[0x1a];
  piVar8[5] = iVar5;
  uVar11 = *(uint *)((int)piVar8 + *(int *)(piVar8[2] + 0x24));
  piVar13 = (int *)(piVar7[0x14] + (piVar7[0x19] & uVar11) * 0xc);
  if ((char)*piVar13 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(piVar13);
    if (!bVar2) goto LAB_0183f108;
    *(char *)piVar13 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0183f108:
    FUN_0164fba8(piVar13);
  }
  FUN_0165098c(piVar13);
  DataMemoryBarrier(0xb);
  if ((char)piVar7[0x1c] == '\0') {
    local_98 = (int **)(piVar7 + 0x18);
    local_9c = (uint *)(piVar7 + 0x16);
    local_2c = *(uint *)((int)piVar8 + *(int *)(piVar8[2] + 0x24));
    local_a0 = piVar13;
    local_94[0] = uVar11;
    if (uVar11 != local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_2c,local_94,0);
    }
    piVar9 = (int *)piVar13[1];
    local_28 = piVar8;
    if (piVar8 == piVar9) {
      FUN_01861160(piVar13 + 1,&local_28);
LAB_0183f5fc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x183f5fc);
      (*pcVar1)();
    }
    *(int **)((int)piVar8 + *(int *)(piVar8[2] + 0x1c) + 4) = piVar9;
    *(undefined4 *)((int)piVar8 + *(int *)(piVar8[2] + 0x1c)) = 0;
    if (piVar9 != (int *)0x0) {
      *(int **)((int)piVar9 + *(int *)(piVar9[2] + 0x1c)) = piVar8;
    }
    piVar13[1] = (int)piVar8;
    if (piVar13[2] == 0) {
      piVar13[2] = (int)piVar8;
    }
    do {
      uVar11 = *local_9c;
      bVar2 = (bool)hasExclusiveAccess(local_9c);
    } while (!bVar2);
    *local_9c = uVar11 + 1;
    piVar7[0x17] = piVar7[0x17] + (uint)(0xfffffffe < uVar11);
    do {
      bVar2 = (bool)hasExclusiveAccess(local_98);
    } while (!bVar2);
    *local_98 = (int *)((int)*local_98 + 1);
    FUN_01650a90(piVar13);
    if ((char)*piVar13 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar13);
        if (bVar2) {
          *(char *)piVar13 = '\0';
          goto LAB_0183f340;
        }
      } while ((char)*piVar13 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar13);
LAB_0183f340:
    piVar13 = piVar8;
  }
  else {
    FUN_01650a90(piVar13);
    if ((char)*piVar13 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar13);
        if (bVar2) {
          *(char *)piVar13 = '\0';
          goto LAB_0183f16c;
        }
      } while ((char)*piVar13 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar13);
LAB_0183f16c:
    (**(code **)(piVar8[2] + 0x18))(piVar8);
    FUN_019d8d64(piVar8);
    piVar13 = (int *)0x0;
  }
  local_a0 = piVar14;
  local_9c = (uint *)piVar15;
  if (piVar7[0x4e] != 0) {
    (**(code **)(piVar7[0x4f] + 0x14))
              (piVar7[0x4e] + (*(int *)(piVar7[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
  }
  if (piVar13 != (int *)0x0) {
    local_28 = (int *)((uint)local_28 & 0xffffff00);
    local_a0 = piVar7 + 2;
    local_9c = (uint *)piVar13;
    local_98 = &local_28;
    FUN_019ee860(&local_a0);
  }
LAB_0183f504:
  *puVar12 = *puVar12 - 1;
  if (*piVar8 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar8);
    if (bVar2) {
      *piVar8 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar8[2] + 0x10))(piVar8);
  return;
}

