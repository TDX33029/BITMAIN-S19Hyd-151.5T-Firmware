// FUN_014474b4 @ 014474b4 size=180 calls_out=4 calls_in=0
// strings: 

void FUN_014474b4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_78 [18];
  undefined2 local_30;
  undefined4 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_14 = param_1;
  local_1c = (undefined4 *)thunk_FUN_016d4a50(4);
  if (local_1c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *local_1c = param_1;
  local_30 = 2;
  local_78[0] = 2;
  local_18 = &DAT_018a3fe4;
  piVar1 = (int *)thunk_FUN_016d4a50(100);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,100);
  }
  FUN_016dd1aa(piVar1,local_78,100);
  iVar2 = *piVar1;
  bVar3 = iVar2 != 2;
  if (bVar3) {
    iVar2 = piVar1[4];
  }
  if (bVar3 && iVar2 != 0) {
    thunk_FUN_016d3fb4(piVar1[5]);
  }
  FUN_016dd1aa(piVar1,param_2,0x48);
  return;
}

