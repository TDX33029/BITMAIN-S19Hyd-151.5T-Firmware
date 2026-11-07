// FUN_00f53e78 @ 00f53e78 size=360 calls_out=11 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

int FUN_00f53e78(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 local_258 [138];
  int local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar7 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x29)) {
  case 0:
    local_2c = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(param_1 + 0x28) = 0;
    local_30 = *(int *)(param_1 + 0x20) + 8;
    local_28 = 0;
    iVar5 = thunk_FUN_01be5118(0x238);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x238);
    }
    FUN_01bed4e2(iVar5,local_258,0x238);
    puVar6 = &DAT_01c13580;
    *(int *)(param_1 + 0x18) = iVar5;
    *(undefined **)(param_1 + 0x1c) = &DAT_01c13580;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c193c4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c193c4);
  case 3:
    iVar5 = *(int *)(param_1 + 0x18);
    puVar6 = *(undefined **)(param_1 + 0x1c);
  }
  iVar5 = (**(code **)(puVar6 + 0xc))(iVar5,param_2);
  if (iVar5 == 0) {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0x20));
    }
    *(undefined1 *)(param_1 + 0x29) = 1;
    FUN_019ec558((int)uVar7,uVar3);
    local_258[0] = 2;
    FUN_00f31dec(param_1,local_258);
  }
  else {
    *(undefined1 *)(param_1 + 0x29) = 3;
    FUN_019ec558((int)uVar7,uVar3);
  }
  return iVar5;
}

