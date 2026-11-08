// FUN_008d094c @ 008d094c size=1056 calls_out=12 calls_in=3
// strings: Control command length not aligned to 4 byte boundary!FIFO: timed out: cmd RX fifo framing errorwork time overflows unsigned integer | BUG: slice with incorrect lengthbackreferences are not supported | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

undefined4 FUN_008d094c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  uint local_c4;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [80];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x19)) {
  case 0:
    uVar4 = param_1[3];
    param_1[4] = param_1[5];
    local_c4 = uVar4 & 3;
    *param_1 = param_1[2];
    param_1[1] = uVar4;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)((int)param_1 + 0x1a);
    if (local_c4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,&local_c4,&DAT_00568f30,
                   "Control command length not aligned to 4 byte boundary!FIFO: timed out: cmd RX fifo framing errorwork time overflows unsigned integer"
                   ,0x6d,&DAT_01865000);
    }
    param_1[7] = param_1[2];
    param_1[8] = uVar4;
    param_1[9] = 4;
    local_c4 = 0;
    while (uVar4 != 0) {
      puVar2 = (undefined4 *)param_1[7];
      uVar6 = param_1[9];
      if (uVar4 <= (uint)param_1[9]) {
        uVar6 = uVar4;
      }
      param_1[7] = (int)puVar2 + uVar6;
      param_1[8] = uVar4 - uVar6;
      if (uVar6 != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: slice with incorrect lengthbackreferences are not supported",0x20,
                     auStack_70,&DAT_01865104,&DAT_01865020);
      }
      uVar5 = *puVar2;
      *(undefined1 *)(param_1 + 0x22) = 0;
      iVar1 = param_1[4];
      param_1[0x1e] = iVar1;
      param_1[0x1f] = uVar5;
LAB_008d0b94:
      param_1[0x20] = iVar1;
      param_1[0x21] = uVar5;
      iVar1 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      while ((uVar4 & 8) != 0) {
        FUN_01656eb8(auStack_70,&DAT_018650a0,0,0,&DAT_000f4240,&DAT_018650a0);
        FUN_016dd1aa(auStack_c0,auStack_70,0x50);
        FUN_016dd1aa(param_1 + 10,auStack_c0,0x50);
switchD_008d0a0c_caseD_3:
        puVar7 = param_1 + 10;
        iVar1 = FUN_01657fc4(puVar7,param_2);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x22) = 3;
          *(undefined1 *)((int)param_1 + 0x19) = 3;
          return 1;
        }
        if ((*puVar7 & 1) != 0) {
          iVar1 = 0x180;
          if (param_1[0x16] != 0) {
            iVar1 = 0xb8;
          }
          if (*(undefined1 **)(param_1[0x17] + iVar1 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                         ,0x73,&DAT_018aceec);
          }
          FUN_0165b454(param_1[0x17] + iVar1 + 0x58,param_1 + 0xc);
        }
        if (param_1[0x16] == 0) {
          piVar3 = (int *)param_1[0x17];
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar3;
            bVar8 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar8);
          *piVar3 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01659344(param_1[0x17]);
          }
        }
        else {
          piVar3 = (int *)param_1[0x17];
          DataMemoryBarrier(0xb);
          do {
            iVar1 = *piVar3;
            bVar8 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar8);
          *piVar3 = iVar1 + -1;
          if (iVar1 == 1) {
            DataMemoryBarrier(0xb);
            FUN_016586fc(param_1[0x17]);
          }
        }
        bVar8 = *puVar7 != 0 || param_1[0xb] != 0;
        iVar1 = 0;
        if (bVar8) {
          iVar1 = param_1[0x12];
        }
        if (bVar8 && iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))(param_1[0x13]);
        }
        iVar1 = *(int *)(param_1[0x20] + 8);
        uVar4 = *(uint *)(iVar1 + 0xc);
      }
      *(undefined4 *)(iVar1 + 4) = param_1[0x21];
      uVar4 = param_1[8];
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
    if (*(char *)(param_1 + 6) != '\x01') {
      *(undefined1 *)((int)param_1 + 0x19) = 1;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
    iVar1 = param_1[4];
    param_1[0x1c] = iVar1;
    param_1[0x1d] = iVar1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01865010);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01865010);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x22)) {
    case 0:
      iVar1 = param_1[0x1e];
      uVar5 = param_1[0x1f];
      goto LAB_008d0b94;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01865090);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01865090);
    case 3:
      goto switchD_008d0a0c_caseD_3;
    }
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1e)) {
    case 0:
      iVar1 = param_1[0x1c];
      param_1[0x1d] = iVar1;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01865050);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01865050);
    case 3:
      goto switchD_008d0a3c_caseD_3;
    }
  }
  while( true ) {
    if ((*(uint *)(*(int *)(iVar1 + 8) + 0xc) & 4) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      *(undefined1 *)((int)param_1 + 0x19) = 1;
      return 0;
    }
    FUN_01656eb8(auStack_70,&DAT_01865060,0,0,&DAT_000f4240,&DAT_01865060);
    FUN_016dd1aa(auStack_c0,auStack_70,0x50);
    FUN_016dd1aa(param_1 + 8,auStack_c0,0x50);
switchD_008d0a3c_caseD_3:
    iVar1 = FUN_01657fc4(param_1 + 8,param_2);
    if (iVar1 != 0) break;
    FUN_00a07b4c(param_1 + 8);
    iVar1 = param_1[0x1d];
  }
  *(undefined1 *)(param_1 + 0x1e) = 3;
  *(undefined1 *)((int)param_1 + 0x19) = 4;
  return 1;
}

