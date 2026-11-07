// FUN_009b2148 @ 009b2148 size=336 calls_out=8 calls_in=1
// strings: 

void FUN_009b2148(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *local_38;
  int *local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int local_28;
  int *local_24;
  int local_20;
  
  local_2c = param_1;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  local_38 = &local_2c;
  local_34 = &DAT_00f5c97c;
  FUN_00600d2c(&local_28,&DAT_00590e71,&local_38);
  uStack_30 = 1;
  local_38 = (undefined4 *)0x1;
  *piVar2 = local_28;
  piVar2[1] = (int)local_24;
  piVar2[2] = local_20;
  local_34 = piVar2;
  local_24 = (int *)thunk_FUN_016d4a50(8);
  if (local_24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,8);
  }
  iVar6 = piVar2[2];
  *local_24 = piVar2[1];
  local_24[1] = iVar6;
  local_20 = 1;
  local_28 = 1;
  FUN_006048f4(&local_28);
  local_20 = 2;
  local_24[2] = param_2;
  local_24[3] = param_3;
  piVar3 = (int *)FUN_009b4588(DAT_018d804c);
  puVar4 = (uint *)(piVar3 + 2);
  do {
    uVar5 = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = uVar5 + param_4;
  piVar3[3] = piVar3[3] + (uint)CARRY4(uVar5,param_4);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (local_28 != 0) {
    thunk_FUN_016d3fb4(local_24);
  }
  if (*piVar2 != 0) {
    thunk_FUN_016d3fb4(piVar2[1]);
  }
  thunk_FUN_016d3fb4(piVar2);
  return;
}

