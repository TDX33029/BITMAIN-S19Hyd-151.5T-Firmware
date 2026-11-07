// FUN_014c9680 @ 014c9680 size=148 calls_out=4 calls_in=3
// strings: 

void FUN_014c9680(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_78 [18];
  undefined2 local_30;
  undefined4 local_1c;
  undefined *local_18;
  
  local_1c = 1;
  local_18 = &DAT_018a5108;
  local_30 = 0;
  local_78[0] = 2;
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
  FUN_016dd1aa(piVar1,param_1,0x48);
  return;
}

