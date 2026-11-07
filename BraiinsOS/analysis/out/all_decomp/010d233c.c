// FUN_010d233c @ 010d233c size=160 calls_out=4 calls_in=0
// strings: BUG: Using a dummy driver

void FUN_010d233c(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = thunk_FUN_016d4a50(0x19);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x19);
  }
  FUN_016dd1aa(iVar1,"BUG: Using a dummy driver",0x19);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar2 = 0x19;
  puVar2[1] = iVar1;
  puVar2[2] = 0x19;
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar3 + 2) = 0x28;
  *(undefined4 **)(param_1 + 4) = puVar3;
  *param_1 = 3;
  *puVar3 = puVar2;
  puVar3[1] = &DAT_01885634;
  return;
}

