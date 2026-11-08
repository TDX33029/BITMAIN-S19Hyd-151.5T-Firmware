// FUN_01412618 @ 01412618 size=1096 calls_out=12 calls_in=1
// strings: 

void FUN_01412618(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined1 auStack_a40 [2];
  undefined4 local_a3e;
  undefined4 local_a3a;
  undefined4 local_a36;
  undefined4 local_a32;
  undefined4 local_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  uint local_a18;
  uint uStack_a14;
  uint uStack_a10;
  uint uStack_a0c;
  uint uStack_a08;
  uint local_a04;
  uint local_a00;
  uint uStack_9fc;
  uint local_9f8;
  uint uStack_9f4;
  uint uStack_9f0;
  uint uStack_9ec;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0xa1)) {
  case 0:
    param_2[0xc] = *param_2;
    param_2[0xd] = param_2[1];
    param_2[0xe] = param_2[2];
    param_2[0xf] = param_2[3];
    param_2[0x10] = param_2[4];
    param_2[0x11] = param_2[5];
    param_2[0x12] = param_2[6];
    param_2[0x13] = param_2[7];
    param_2[0x14] = param_2[8];
    param_2[0x15] = param_2[9];
    param_2[0x16] = param_2[10];
    param_2[0x17] = param_2[0xb];
    local_5c = param_2[0x1a];
    uStack_58 = param_2[0x1b];
    uStack_54 = param_2[0x1c];
    uStack_50 = param_2[0x1d];
    uStack_4c = param_2[0x1e];
    local_48 = param_2[0x1f];
    uStack_44 = param_2[0x20];
    uStack_40 = param_2[0x21];
    uStack_3c = param_2[0x22];
    uStack_38 = param_2[0x23];
    uStack_34 = param_2[0x24];
    local_68 = (int *)param_2[6];
    *(undefined1 *)((int)param_2 + 0xa2) = *(undefined1 *)(param_2 + 0x28);
    param_2[0x25] = local_68;
    param_2[0x26] = param_2[7];
    param_2[0x27] = param_2[8];
    do {
      iVar11 = *local_68;
      bVar1 = (bool)hasExclusiveAccess(local_68);
    } while (!bVar1);
    *local_68 = iVar11 + 1;
    if (iVar11 < 0) {
LAB_01412a58:
                    /* WARNING: Does not return */
      pcVar8 = (code *)software_udf(0xfdee,0x1412a58);
      (*pcVar8)();
    }
    local_64 = (int *)param_2[0x26];
    local_60 = param_2[0x27];
    do {
      iVar11 = *local_64;
      bVar1 = (bool)hasExclusiveAccess(local_64);
    } while (!bVar1);
    *local_64 = iVar11 + 1;
    if (iVar11 < 0) goto LAB_01412a58;
    local_30 = 0;
    iVar11 = thunk_FUN_016d4a50(0x9f0);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x9f0);
    }
    FUN_016dd1aa(iVar11,&local_a18,0x9f0);
    puVar12 = &DAT_018a4230;
    param_2[0x18] = iVar11;
    param_2[0x19] = &DAT_018a4230;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a4370);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a4370);
  case 3:
    iVar11 = param_2[0x18];
    puVar12 = (undefined *)param_2[0x19];
  }
  (**(code **)(puVar12 + 0xc))(&local_a18,iVar11,param_3);
  uVar3 = (undefined2)local_a18;
  uVar14 = local_a18 & 0xffff;
  if (uVar14 == 4) {
    uVar10 = 3;
    uVar4 = 3;
    goto LAB_01412a28;
  }
  uVar7 = (uint)&local_a18 | 2;
  FUN_016dd1aa(auStack_a40,uVar7,0x12);
  puVar13 = (undefined4 *)param_2[0x19];
  uVar9 = param_2[0x18];
  pcVar8 = (code *)*puVar13;
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(uVar9);
  }
  if (puVar13[1] != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  if (uVar14 == 3) {
    local_a28 = local_a3e;
    uStack_a24 = local_a3a;
    uStack_a20 = local_a36;
    uStack_a1c = local_a32;
    uVar16 = FUN_0145ae04(*(undefined1 *)(param_2 + 0x16),&local_a28);
    piVar5 = (int *)param_2[0x25];
    uVar15 = *(undefined1 *)((int)param_2 + 0xa2);
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143d994(param_2[0x25]);
    }
    piVar5 = (int *)param_2[0x26];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_2[0x26],param_2[0x27]);
    }
    piVar5 = (int *)param_2[0x15];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143d9f8(param_2[0x15]);
    }
    piVar5 = (int *)param_2[0x10];
    if (piVar5 == (int *)0x0) {
      uVar10 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar11 + -1;
      uVar10 = 0;
      uVar2 = uVar16;
joined_r0x014129fc:
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(param_2[0x10],param_2[0x11]);
        uVar16 = uVar2;
      }
    }
  }
  else {
    FUN_016dd1aa(uVar7,auStack_a40,0x12);
    local_a18 = CONCAT22(local_a18._2_2_,uVar3);
    puVar6 = (uint *)thunk_FUN_016d4a50(0x30);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x30);
    }
    uVar15 = 0;
    uVar16 = CONCAT44(&DAT_018a3f50,puVar6);
    *puVar6 = local_a18;
    puVar6[1] = uStack_a14;
    puVar6[2] = uStack_a10;
    puVar6[3] = uStack_a0c;
    puVar6[4] = uStack_a08;
    puVar6[5] = local_a04;
    puVar6[6] = local_a00;
    puVar6[7] = uStack_9fc;
    puVar6[8] = local_9f8;
    puVar6[9] = uStack_9f4;
    puVar6[10] = uStack_9f0;
    puVar6[0xb] = uStack_9ec;
    piVar5 = (int *)param_2[0x25];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143d994(param_2[0x25]);
    }
    piVar5 = (int *)param_2[0x26];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_2[0x26],param_2[0x27]);
    }
    piVar5 = (int *)param_2[0x15];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143d9f8(param_2[0x15]);
    }
    piVar5 = (int *)param_2[0x10];
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar11 + -1;
      uVar10 = 2;
      uVar2 = CONCAT44(&DAT_018a3f50,puVar6);
      uVar16 = CONCAT44(&DAT_018a3f50,puVar6);
      goto joined_r0x014129fc;
    }
    uVar10 = 2;
  }
  uVar4 = 1;
  *(undefined1 *)(param_1 + 1) = uVar15;
  *param_1 = uVar16;
LAB_01412a28:
  *(undefined1 *)((int)param_2 + 0xa1) = uVar4;
  *(undefined1 *)((int)param_1 + 9) = uVar10;
  return;
}

