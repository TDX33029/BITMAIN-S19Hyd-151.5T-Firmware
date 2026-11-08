// FUN_009b41a0 @ 009b41a0 size=380 calls_out=8 calls_in=1
// strings: 

void FUN_009b41a0(undefined4 param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_3c;
  undefined4 *local_38;
  int *local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 *local_28;
  int *piStack_24;
  int iStack_20;
  undefined4 local_1c;
  
  local_3c = param_1;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  local_38 = &local_3c;
  local_34 = &DAT_00f5c97c;
  FUN_00600d2c(&local_28,&DAT_00590e71,&local_38);
  *piVar2 = (int)local_28;
  piVar2[1] = (int)piStack_24;
  piVar2[2] = iStack_20;
  piVar3 = (int *)thunk_FUN_016d4a50(8);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,8);
  }
  iVar4 = piVar2[2];
  *piVar3 = piVar2[1];
  piVar3[1] = iVar4;
  FUN_009b564c(&local_38,DAT_018d8054 + 8,piVar3,1);
  if (local_38 != (undefined4 *)&DAT_00000005) {
    local_1c = local_2c;
    local_28 = local_38;
    piStack_24 = local_34;
    iStack_20 = uStack_30;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01869dec,&DAT_01886b2c);
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(local_34 + 2);
  } while (!bVar1);
  local_34[2] = param_2 & 0xff;
  local_34[3] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *local_34;
    bVar1 = (bool)hasExclusiveAccess(local_34);
  } while (!bVar1);
  *local_34 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  thunk_FUN_016d3fb4(piVar3);
  if (*piVar2 != 0) {
    thunk_FUN_016d3fb4(piVar2[1]);
  }
  thunk_FUN_016d3fb4(piVar2);
  return;
}

