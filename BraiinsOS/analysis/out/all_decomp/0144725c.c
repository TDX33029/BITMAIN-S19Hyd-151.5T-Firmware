// FUN_0144725c @ 0144725c size=248 calls_out=5 calls_in=0
// strings: Parsed Url is not a valid Uri

void FUN_0144725c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 local_80 [18];
  undefined2 local_38;
  undefined4 *local_24;
  undefined *local_20;
  
  iVar1 = thunk_FUN_016d4a50(0x1d);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x1d);
  }
  FUN_016dd1aa(iVar1,"Parsed Url is not a valid Uri",0x1d);
  local_24 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (local_24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *local_24 = 0x1d;
  local_24[1] = iVar1;
  local_24[2] = 0x1d;
  local_38 = 0;
  local_80[0] = 2;
  local_20 = &DAT_018a4148;
  piVar2 = (int *)thunk_FUN_016d4a50(100);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,100);
  }
  FUN_016dd1aa(piVar2,local_80,100);
  iVar1 = *piVar2;
  bVar3 = iVar1 != 2;
  if (bVar3) {
    iVar1 = piVar2[4];
  }
  if (bVar3 && iVar1 != 0) {
    thunk_FUN_016d3fb4(piVar2[5]);
  }
  FUN_016dd1aa(piVar2,param_1,0x48);
  return;
}

