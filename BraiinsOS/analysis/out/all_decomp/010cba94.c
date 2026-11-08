// FUN_010cba94 @ 010cba94 size=96 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_010cba94(void)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 in_stack_00000000;
  undefined *puVar2;
  undefined1 auStack_58 [80];
  
  puVar2 = &DAT_018852f0;
  FUN_01656eb8(auStack_58);
  iVar1 = thunk_FUN_016d4a50(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  FUN_016dd1aa(iVar1,auStack_58,0x50,extraout_r3,in_stack_00000000,puVar2);
  return CONCAT44(&UNK_018852dc,iVar1);
}

