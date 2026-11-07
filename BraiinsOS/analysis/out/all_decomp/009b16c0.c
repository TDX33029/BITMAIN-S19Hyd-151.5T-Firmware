// FUN_009b16c0 @ 009b16c0 size=436 calls_out=9 calls_in=3
// strings: 

void FUN_009b16c0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 in_d0;
  int local_4c;
  int *local_48;
  undefined4 local_44;
  int *local_40;
  int *local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int *local_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 local_24;
  
  local_4c = param_1;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  local_40 = &local_4c;
  local_3c = &DAT_00f5c97c;
  FUN_00600d2c(&local_30,&DAT_00590e71,&local_40);
  *piVar2 = (int)local_30;
  piVar2[1] = (int)piStack_2c;
  piVar2[2] = iStack_28;
  local_48 = (int *)thunk_FUN_016d4a50(8);
  if (local_48 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,8);
  }
  iVar3 = piVar2[2];
  *local_48 = piVar2[1];
  local_48[1] = iVar3;
  local_44 = 1;
  local_4c = 1;
  FUN_006048f4(&local_4c);
  local_48[2] = param_2;
  local_48[3] = param_3;
  local_44 = 2;
  FUN_009b4e0c(&local_40,DAT_018d800c + 8,local_48,2);
  if (local_40 != (int *)&DAT_00000005) {
    local_24 = local_34;
    local_30 = local_40;
    piStack_2c = local_3c;
    iStack_28 = uStack_38;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01869dec,&DAT_01886b2c);
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(local_3c + 2);
  } while (!bVar1);
  local_3c[2] = (int)in_d0;
  local_3c[3] = (int)((ulonglong)in_d0 >> 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *local_3c;
    bVar1 = (bool)hasExclusiveAccess(local_3c);
  } while (!bVar1);
  *local_3c = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fa50();
  }
  if (local_4c != 0) {
    thunk_FUN_016d3fb4(local_48);
  }
  if (*piVar2 != 0) {
    thunk_FUN_016d3fb4(piVar2[1]);
  }
  thunk_FUN_016d3fb4(piVar2);
  return;
}

