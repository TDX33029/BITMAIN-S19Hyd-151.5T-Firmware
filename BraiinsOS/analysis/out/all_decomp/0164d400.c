// FUN_0164d400 @ 0164d400 size=1372 calls_out=17 calls_in=1
// strings: assertion failed: prev.ref_count() >= 1 | assertion failed: prev.ref_count() >= 1 | assertion failed: handle.shared.owned.is_empty() | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

uint * FUN_0164d400(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_2 + 0xa0) = 1;
  uVar5 = *(uint *)(param_2 + 0x94);
  if (uVar5 != 0xffffffff) {
    uVar16 = thunk_FUN_016de0ee(param_1 + 4,0x1c4);
    puVar9 = (undefined4 *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    piVar14 = (int *)(param_2 + 0x90);
    uVar10 = 0;
LAB_0164d488:
    do {
      pcVar11 = (char *)(*(int *)(param_2 + 0x80) + (*(uint *)(param_2 + 0x94) & uVar10) * 0xc);
      if (*pcVar11 == '\0') {
        bVar15 = (bool)hasExclusiveAccess(pcVar11);
        if (!bVar15) goto LAB_0164d4c4;
        *pcVar11 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0164d4c4:
        FUN_01280da8(pcVar11);
      }
      FUN_0128236c(pcVar11);
      iVar13 = *(int *)(pcVar11 + 8);
      if (iVar13 != 0) {
        iVar2 = *(int *)(*(int *)(iVar13 + 8) + 0x1c);
        iVar6 = *(int *)(iVar13 + iVar2);
        *(int *)(pcVar11 + 8) = iVar6;
        if (iVar6 == 0) {
          pcVar11[4] = '\0';
          pcVar11[5] = '\0';
          pcVar11[6] = '\0';
          pcVar11[7] = '\0';
        }
        else {
          *(undefined4 *)(iVar6 + *(int *)(*(int *)(iVar6 + 8) + 0x1c) + 4) = 0;
          iVar2 = *(int *)(*(int *)(iVar13 + 8) + 0x1c);
        }
        *(undefined4 *)(iVar13 + iVar2) = 0;
        *(undefined4 *)(iVar13 + *(int *)(*(int *)(iVar13 + 8) + 0x1c) + 4) = 0;
        do {
          bVar15 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar15);
        *piVar14 = *piVar14 + -1;
      }
      bVar15 = true;
      puVar3 = puVar9;
      if ((*(char *)(puVar9 + 0xd) != '\x01') &&
         (puVar3 = (undefined4 *)FUN_01284e64(puVar9), puVar3 == (undefined4 *)0x0)) {
        FUN_01283788(&local_58);
        bVar15 = false;
        local_8c = local_58;
        uStack_88 = uStack_54;
        uStack_84 = uStack_50;
        uStack_80 = uStack_4c;
        local_7c = local_48;
        local_78 = iStack_44;
        local_74 = uStack_40;
        local_70 = iStack_3c;
        local_6c = local_38;
        local_68 = uStack_34;
        uStack_64 = uStack_30;
        uStack_60 = uStack_2c;
        uStack_5c = uStack_28;
        puVar3 = &local_8c;
      }
      iVar7 = puVar3[8];
      iVar8 = puVar3[9];
      iVar2 = iVar8 * -4;
      iVar6 = iVar8;
      do {
        if (iVar2 == 0) goto LAB_0164d594;
        puVar1 = (undefined4 *)((iVar7 + -4) - iVar2);
        iVar2 = iVar2 + 4;
        iVar6 = iVar6 + -1;
      } while ((char *)*puVar1 != pcVar11);
      puVar3[9] = iVar8 + -1;
      *(undefined4 *)(iVar7 + iVar6 * 4) = *(undefined4 *)(iVar7 + (iVar8 + -1) * 4);
LAB_0164d594:
      if (!bVar15) {
        do {
          iVar2 = DAT_018dd954 + -1;
          bVar15 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar15);
        DAT_018dd954 = iVar2;
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
        }
        if (local_78 != 3) {
          if (local_78 == 0) {
            FUN_012848c0(local_74);
          }
          else if (local_78 == 1) {
            FUN_01283d28();
          }
          else {
            FUN_01284358();
          }
        }
      }
      if (*pcVar11 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar15 = (bool)hasExclusiveAccess(pcVar11);
          if (bVar15) {
            *pcVar11 = '\0';
            goto LAB_0164d640;
          }
        } while (*pcVar11 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar11);
LAB_0164d640:
      if (iVar13 != 0) {
        (**(code **)(*(int *)(iVar13 + 8) + 0x18))(iVar13);
        goto LAB_0164d488;
      }
      bVar15 = uVar10 != uVar5;
      uVar10 = uVar10 + 1;
    } while (bVar15);
  }
  while (param_1[3] != 0) {
    uVar10 = param_1[3] - 1;
    uVar12 = param_1[2] + 1;
    puVar4 = *(uint **)(param_1[1] + param_1[2] * 4);
    uVar5 = uVar12 - *param_1;
    if (uVar12 < *param_1) {
      uVar5 = uVar12;
    }
    param_1[2] = uVar5;
    param_1[3] = uVar10;
    *(uint *)(param_2 + 0x28) = uVar10;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar4;
      bVar15 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar15);
    *puVar4 = uVar5 - 0x40;
    DataMemoryBarrier(0xb);
    if (uVar5 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
    }
    if ((uVar5 & 0xffffffc0) == 0x40) {
      (**(code **)(puVar4[2] + 8))();
    }
  }
  pcVar11 = (char *)(param_2 + 0xa8);
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*pcVar11 == '\0') {
    bVar15 = (bool)hasExclusiveAccess(pcVar11);
    if (bVar15) {
      *pcVar11 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0164d754;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar11);
LAB_0164d754:
  FUN_0128236c(pcVar11);
  if (*(char *)(param_2 + 0xb4) == '\0') {
    *(undefined1 *)(param_2 + 0xb4) = 1;
  }
  FUN_01282570(pcVar11);
  if (*pcVar11 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar15 = (bool)hasExclusiveAccess(pcVar11);
      if (bVar15) {
        *pcVar11 = '\0';
        goto LAB_0164d7ac;
      }
    } while (*pcVar11 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar11);
LAB_0164d7ac:
  while (puVar4 = (uint *)FUN_0163bb84(pcVar11), puVar4 != (uint *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar4;
      bVar15 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar15);
    *puVar4 = uVar5 - 0x40;
    DataMemoryBarrier(0xb);
    if (uVar5 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
    }
    if ((uVar5 & 0xffffffc0) == 0x40) {
      (**(code **)(puVar4[2] + 8))();
    }
  }
  if (*(int *)(param_2 + 0x90) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: handle.shared.owned.is_empty()",0x30,&DAT_018acc30);
  }
  uVar5 = param_1[5];
  do {
    bVar15 = (bool)hasExclusiveAccess((uint *)(param_2 + 0x10));
  } while (!bVar15);
  *(uint *)(param_2 + 0x10) = param_1[4];
  *(uint *)(param_2 + 0x14) = uVar5;
  uVar5 = param_1[7];
  do {
    bVar15 = (bool)hasExclusiveAccess((uint *)(param_2 + 0x18));
  } while (!bVar15);
  *(uint *)(param_2 + 0x18) = param_1[6];
  *(uint *)(param_2 + 0x1c) = uVar5;
  uVar5 = param_1[9];
  do {
    bVar15 = (bool)hasExclusiveAccess((uint *)(param_2 + 0x20));
  } while (!bVar15);
  *(uint *)(param_2 + 0x20) = param_1[8];
  *(uint *)(param_2 + 0x24) = uVar5;
  if (param_1[0x10] != 3) {
    if (param_1[0x10] == 0) {
      if (*(undefined1 **)(param_2 + 400) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,&DAT_018ad3e4);
      }
      DataMemoryBarrier(0xb);
      if (*(char *)(param_2 + 0x180) != '\0') {
        return param_1;
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_2 + 0x180) = 1;
      DataMemoryBarrier(0xb);
      FUN_0165bf54(param_2 + 0x158,&DAT_3b9aca00,0xffffffff,0xffffffff);
    }
    if (param_1[0x11] == 0x80000000) {
      if (*(int *)(param_1[0x12] + 0xc) != 0) {
        FUN_0127f168(param_1[0x12] + 0xc);
      }
    }
    else {
      FUN_0163f090(param_2 + 0x100);
    }
  }
  return param_1;
}

