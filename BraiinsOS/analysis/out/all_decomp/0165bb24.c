// FUN_0165bb24 @ 0165bb24 size=948 calls_out=10 calls_in=1
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO. | time is not frozen | time is not frozen

void FUN_0165bb24(int *param_1,char *param_2,uint param_3,uint param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  char *local_30;
  undefined4 local_2c;
  char **local_28;
  undefined4 *local_24;
  
  if (*(undefined1 **)(param_2 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_018ad3c4);
  }
  if (*param_2 == '\0') {
    bVar10 = (bool)hasExclusiveAccess(param_2);
    if (!bVar10) goto LAB_0165bdb4;
    *param_2 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165bdb4:
    FUN_01280da8(param_2);
  }
  FUN_0128236c(param_2);
  bVar10 = false;
  if (*(undefined1 **)(param_2 + 0x20) == &DAT_3b9aca00) {
    bVar10 = *(int *)(param_2 + 0x28) == 0;
  }
  FUN_01282570(param_2);
  if (*param_2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(param_2);
      if (bVar2) {
        *param_2 = '\0';
      }
      uVar5 = 0;
      if (bVar2) goto LAB_0165bbd4;
    } while (*param_2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(param_2);
  uVar5 = extraout_r1;
LAB_0165bbd4:
  if (!bVar10) {
    if (*param_1 == -0x80000000) {
      FUN_016399a4(param_1[1],uVar5,param_3,param_4);
      return;
    }
    if (*(int *)(param_2 + 0x30) != -1) {
      FUN_0165af70(param_1,param_2 + 0x30,param_3,param_4,param_5);
      FUN_0163edcc(param_1);
      FUN_01644d00(param_1 + 7);
      return;
    }
LAB_0165be44:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_018ad344);
  }
  if (*param_1 == -0x80000000) {
    piVar3 = (int *)(param_1[1] + 8);
    if (*piVar3 == 2) {
      DataMemoryBarrier(0xb);
      do {
        bVar10 = (bool)hasExclusiveAccess(piVar3);
        if (bVar10) {
          *piVar3 = 0;
          goto LAB_0165bc20;
        }
      } while (*piVar3 == 2);
    }
    ClearExclusiveLocal();
LAB_0165bc20:
    DataMemoryBarrier(0xb);
  }
  else {
    if (*(int *)(param_2 + 0x30) == -1) goto LAB_0165be44;
    FUN_0165af70(param_1,param_2 + 0x30,0,0,0);
    FUN_0163edcc(param_1);
    FUN_01644d00(param_1 + 7);
  }
  pcVar4 = param_2 + 0x81;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar10 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar10);
  *pcVar4 = '\0';
  DataMemoryBarrier(0xb);
  if (cVar1 != '\0') {
    return;
  }
  if (*param_2 == '\0') {
    bVar10 = (bool)hasExclusiveAccess(param_2);
    if (!bVar10) goto LAB_0165be20;
    *param_2 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165be20:
    FUN_01280da8(param_2);
  }
  FUN_0128236c(param_2);
  if (*(undefined1 **)(param_2 + 0x20) != &DAT_3b9aca00) {
    FUN_01282570(param_2);
    if (*param_2 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar10 = (bool)hasExclusiveAccess(param_2);
        if (bVar10) {
          *param_2 = '\0';
          goto LAB_0165be9c;
        }
      } while (*param_2 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(param_2);
LAB_0165be9c:
    local_24 = &DAT_0157d360;
    local_28 = &local_30;
    local_2c = 0x12;
    local_30 = "time is not frozen";
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_28,&DAT_018ad3d4);
  }
  uVar6 = *(uint *)(param_2 + 8);
  uVar9 = *(uint *)(param_2 + 0xc);
  uVar8 = uVar6 + param_3;
  uVar6 = uVar9 + param_4 + (uint)CARRY4(uVar6,param_3);
  if ((int)param_4 < 0 != (int)((uVar9 ^ uVar6) & ~(uVar9 ^ param_4)) < 0) {
LAB_0165bd8c:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar7 = (undefined1 *)(*(int *)(param_2 + 0x10) + param_5);
  if (&DAT_3b9aca00 <= puVar7) {
    bVar10 = 0xfffffffe < uVar8;
    uVar8 = uVar8 + 1;
    uVar9 = uVar6 + bVar10;
    if ((int)((uVar6 ^ uVar9) & ~uVar6) < 0) goto LAB_0165bd8c;
    puVar7 = puVar7 + -1000000000;
    uVar6 = uVar9;
  }
  *(uint *)(param_2 + 8) = uVar8;
  *(uint *)(param_2 + 0xc) = uVar6;
  *(undefined1 **)(param_2 + 0x10) = puVar7;
  FUN_01282570(param_2);
  if (*param_2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar10 = (bool)hasExclusiveAccess(param_2);
      if (bVar10) {
        *param_2 = '\0';
        return;
      }
    } while (*param_2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(param_2);
  return;
}

