// FUN_00a59a78 @ 00a59a78 size=660 calls_out=8 calls_in=2
// strings: A Tokio 1.x context was found; but it is being shutdown.

void FUN_00a59a78(uint *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  uint local_30;
  undefined1 local_2c;
  byte local_2b;
  undefined2 local_2a;
  uint local_28;
  undefined1 local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xd]) {
  case '\0':
    iVar2 = *(int *)(*param_2 + 8) + 0x20;
    param_2[2] = iVar2;
    iVar4 = param_2[1];
    param_2[3] = iVar4;
    *(undefined1 *)(param_2 + 0xc) = 0;
LAB_00a59b00:
    param_2[9] = iVar4;
    *(undefined1 *)(param_2 + 0xb) = 0;
    *(undefined1 *)(param_2 + 10) = 0;
    param_2[4] = iVar2;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a1ec);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a1ec);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xc]) {
    case '\0':
      iVar2 = param_2[2];
      iVar4 = param_2[3];
      goto LAB_00a59b00;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187a1fc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187a1fc);
    }
  }
  FUN_0163ab0c(&local_30,param_2 + 4);
  bVar1 = local_2b;
  if (local_2b == 2) {
    *(undefined1 *)(param_2 + 0xc) = 3;
    *param_1 = 2;
    *(undefined1 *)(param_2 + 0xd) = 3;
    return;
  }
  iVar2 = param_2[4];
  pcVar6 = (char *)(iVar2 + 0xc);
  if (*pcVar6 == '\0') {
    bVar7 = (bool)hasExclusiveAccess(pcVar6);
    if (!bVar7) goto LAB_00a59b84;
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00a59b84:
    FUN_01280da8(pcVar6);
  }
  FUN_0128236c(pcVar6);
  piVar3 = param_2 + 5;
  if (*piVar3 == 0) {
    if (*(int **)(iVar2 + 0x10) != piVar3) goto LAB_00a59bf4;
    piVar5 = (int *)param_2[6];
    *(int **)(iVar2 + 0x10) = piVar5;
    if (piVar5 == (int *)0x0) goto LAB_00a59be8;
LAB_00a59bb4:
    *piVar5 = *piVar3;
  }
  else {
    piVar5 = (int *)param_2[6];
    *(int **)(*piVar3 + 4) = piVar5;
    if (piVar5 != (int *)0x0) goto LAB_00a59bb4;
LAB_00a59be8:
    if (*(int **)(iVar2 + 0x14) != piVar3) goto LAB_00a59bf4;
    *(int *)(iVar2 + 0x14) = *piVar3;
  }
  param_2[5] = 0;
  param_2[6] = 0;
LAB_00a59bf4:
  FUN_01282570(pcVar6);
  if (*pcVar6 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar7 = (bool)hasExclusiveAccess(pcVar6);
      if (bVar7) {
        *pcVar6 = '\0';
        goto LAB_00a59c34;
      }
    } while (*pcVar6 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar6);
LAB_00a59c34:
  if (param_2[7] != 0) {
    (**(code **)(param_2[7] + 0xc))(param_2[8]);
  }
  bVar7 = (bVar1 & 1) == 0;
  *(undefined1 *)(param_2 + 0xc) = 1;
  if (bVar7) {
    local_24 = local_2c;
    local_2b = 0;
    local_28 = local_30;
  }
  else {
    FUN_015e79d4(&local_30,0x28,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
    local_24 = local_2c;
    local_28 = local_30;
  }
  *(undefined2 *)((int)param_1 + 10) = local_2a;
  *param_1 = (uint)!bVar7;
  param_1[1] = local_28;
  *(undefined1 *)(param_1 + 2) = local_24;
  *(byte *)((int)param_1 + 9) = local_2b;
  *(undefined1 *)(param_2 + 0xd) = 1;
  return;
}

