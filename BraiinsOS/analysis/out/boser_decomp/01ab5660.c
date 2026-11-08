// FUN_01ab5660 @ 01ab5660 size=572 calls_out=4 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01ab5660(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *extraout_r2;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined4 *local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  uint local_5f8;
  uint uStack_5f4;
  uint uStack_5f0;
  uint uStack_5ec;
  undefined4 *local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  uint local_5d8;
  uint local_5d4;
  uint local_5d0;
  uint local_5cc;
  int local_5b0 [278];
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  
  iVar1 = *(int *)*param_2;
  uVar13 = thunk_FUN_01bee35a(iVar1,0x2c0);
  puVar5 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  puVar12 = (undefined1 *)extraout_r2[2];
  uVar11 = extraout_r2[3];
  if ((char)puVar5[4] == '\0') {
    FUN_019ae6ac(&local_158);
    *puVar5 = local_158;
    puVar5[1] = uStack_154;
    puVar5[2] = uStack_150;
    puVar5[3] = uStack_14c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  local_5d8 = *puVar5;
  local_5d4 = puVar5[1];
  local_5d0 = puVar5[2];
  local_5cc = puVar5[3];
  *puVar5 = local_5d8 + 1;
  puVar5[1] = local_5d4 + (0xfffffffe < local_5d8);
  local_5e8 = &DAT_0056d238;
  uStack_5e4 = 0;
  uStack_5e0 = 0;
  uStack_5dc = 0;
  if (uVar11 != 0) {
    puVar6 = puVar12 + uVar11 * 0x20;
    do {
      FUN_01abb514(local_5b0,iVar1 + 0x1c,*(undefined4 *)(puVar12 + 0x14),
                   *(undefined4 *)(puVar12 + 0x18));
      if (local_5b0[0] == 0) {
        local_608 = local_5e8;
        uStack_604 = uStack_5e4;
        uStack_600 = uStack_5e0;
        uStack_5fc = uStack_5dc;
        local_5f8 = local_5d8;
        uStack_5f4 = local_5d4;
        uStack_5f0 = local_5d0;
        uStack_5ec = local_5cc;
        FUN_01aae318();
        goto LAB_01ab5f28;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*puVar12) {
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar12 = puVar12 + 0x20;
    } while (puVar12 != puVar6);
  }
  puVar2 = (undefined4 *)((uint)&local_608 | 4);
  uVar7 = puVar2[1];
  uVar9 = puVar2[2];
  uVar3 = puVar2[3];
  uVar4 = puVar2[4];
  uVar8 = puVar2[5];
  uVar10 = puVar2[6];
  if (local_5e8 == (undefined4 *)0x0) {
LAB_01ab5f28:
    puVar5 = (uint *)param_2[1];
    uVar11 = *extraout_r2;
    if (*puVar5 == 6) {
      *puVar5 = uVar11;
    }
    else if (uVar11 < *puVar5) {
      *puVar5 = uVar11;
    }
    param_1[8] = 6;
  }
  else {
    param_1[1] = *puVar2;
    param_1[2] = uVar7;
    param_1[3] = uVar9;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[6] = uVar8;
    param_1[7] = uVar10;
    uVar11 = *extraout_r2;
    *param_1 = local_5e8;
    param_1[8] = uVar11;
  }
  return;
}

