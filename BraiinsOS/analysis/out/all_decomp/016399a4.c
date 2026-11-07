// FUN_016399a4 @ 016399a4 size=684 calls_out=7 calls_in=2
// strings: 

void FUN_016399a4(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  int local_34;
  int *local_30;
  undefined1 *local_2c;
  int local_28;
  
  piVar6 = (int *)(param_1 + 8);
  if (*piVar6 == 2) {
    DataMemoryBarrier(0xb);
    do {
      bVar9 = (bool)hasExclusiveAccess(piVar6);
      if (bVar9) {
        *piVar6 = 0;
        DataMemoryBarrier(0xb);
        return;
      }
    } while (*piVar6 == 2);
  }
  bVar9 = param_3 == 0 && param_4 == 0;
  ClearExclusiveLocal();
  if (param_3 == 0 && param_4 == 0) {
    bVar9 = param_5 == 0;
  }
  DataMemoryBarrier(0xb);
  if (bVar9) {
    return;
  }
  pcVar5 = (char *)(param_1 + 0x10);
  if (*pcVar5 == '\0') {
    bVar9 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar9) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01639a24;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar5);
LAB_01639a24:
  FUN_0128236c(pcVar5);
  local_34 = *piVar6;
  if (local_34 == 0) {
    bVar9 = true;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
      if (bVar1) {
        *piVar6 = 1;
        goto LAB_01639a60;
      }
      local_34 = *piVar6;
    } while (local_34 == 0);
  }
  bVar9 = false;
  ClearExclusiveLocal();
LAB_01639a60:
  DataMemoryBarrier(0xb);
  if (bVar9) {
    FUN_015f3b0c(&local_30,1);
    uVar3 = (int)local_30 + param_3;
    puVar8 = &DAT_3b9aca00;
    uVar7 = (int)local_2c + param_4 + (uint)CARRY4((uint)local_30,param_3);
    uVar4 = (uint)((int)(((uint)local_2c ^ uVar7) & ~((uint)local_2c ^ param_4)) < 0);
    if ((int)param_4 < 0 == uVar4) {
      puVar2 = (undefined1 *)(local_28 + param_5);
      if (puVar2 < &DAT_3b9aca00) {
        uVar4 = uVar7;
        puVar8 = puVar2;
      }
      else {
        bVar9 = 0xfffffffe < uVar3;
        uVar3 = uVar3 + 1;
        uVar4 = uVar7 + bVar9;
        if (-1 < (int)((uVar7 ^ uVar4) & ~uVar7)) {
          puVar8 = puVar2 + -1000000000;
        }
      }
    }
    FUN_0127fd30(param_1 + 0xc,pcVar5,uVar3,uVar4,puVar8);
    DataMemoryBarrier(0xb);
    do {
      local_34 = *piVar6;
      bVar9 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar9);
    *piVar6 = 0;
    DataMemoryBarrier(0xb);
    if (1 < local_34 - 1U) {
      local_30 = &local_34;
      local_2c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057e51e,&local_30,&DAT_018ac56c);
    }
    FUN_01282570(pcVar5);
    if (*pcVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar9 = (bool)hasExclusiveAccess(pcVar5);
        if (bVar9) {
          *pcVar5 = '\0';
          return;
        }
      } while (*pcVar5 == '\x01');
    }
  }
  else {
    if (local_34 != 2) {
      local_30 = &local_34;
      local_2c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057861d,&local_30,&DAT_018ac57c);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar9 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar9);
    *piVar6 = 0;
    DataMemoryBarrier(0xb);
    FUN_01282570(pcVar5);
    if (*pcVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar9 = (bool)hasExclusiveAccess(pcVar5);
        if (bVar9) {
          *pcVar5 = '\0';
          return;
        }
      } while (*pcVar5 == '\x01');
    }
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar5);
  return;
}

