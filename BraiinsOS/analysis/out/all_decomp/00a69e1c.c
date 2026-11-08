// FUN_00a69e1c @ 00a69e1c size=584 calls_out=9 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00a69f44) */
/* WARNING: Removing unreachable block (ram,0x00a69f48) */

void FUN_00a69e1c(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 in_d0;
  undefined4 *local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  DataMemoryBarrier(0xb);
  local_44 = param_2;
  if (DAT_018d8068 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034cdde,0x26,&DAT_0186d400);
  }
  local_50 = param_1;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  local_3c = &DAT_00f5c97c;
  local_40 = &local_50;
  FUN_00600d2c(&local_30,&DAT_00590e71,&local_40);
  *puVar2 = local_30;
  puVar2[1] = uStack_2c;
  puVar2[2] = uStack_28;
  local_38 = 1;
  local_40 = (undefined4 *)0x1;
  local_50 = &local_44;
  local_4c = (undefined4 *)&LAB_00fac484;
  local_3c = puVar2;
  FUN_00600d2c(&local_30,&DAT_00569c68,&local_50);
  FUN_015f37b0(&local_40);
  puVar2 = local_3c;
  local_50 = local_40;
  local_4c = local_3c;
  local_3c[3] = local_30;
  local_3c[4] = uStack_2c;
  local_3c[5] = uStack_28;
  local_48 = 2;
  iVar3 = thunk_FUN_016d4a50(0x10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x10);
  }
  puVar4 = (undefined4 *)(iVar3 + 4);
  puVar2 = puVar2 + 1;
  iVar6 = 2;
  do {
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    puVar2 = puVar2 + 3;
    puVar4[-1] = uVar7;
    *puVar4 = uVar8;
    puVar4 = puVar4 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  piVar5 = (int *)FUN_00a630d0(DAT_018d7d24,iVar3,2);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar5 + 2);
  } while (!bVar1);
  piVar5[2] = (int)in_d0;
  piVar5[3] = (int)((ulonglong)in_d0 >> 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fa50();
  }
  thunk_FUN_016d3fb4(iVar3);
  puVar2 = local_4c;
  puVar4 = local_4c + 1;
  for (iVar3 = local_48; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (puVar4[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar4);
    }
    puVar4 = puVar4 + 3;
  }
  if (local_50 != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}

