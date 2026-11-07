// FUN_01444078 @ 01444078 size=96 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01444078(void)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 in_stack_00000000;
  undefined *puVar2;
  undefined1 auStack_58 [80];
  
  puVar2 = &DAT_01cf8a44;
  FUN_019e6e74(auStack_58);
  iVar1 = thunk_FUN_01be5118(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  FUN_01bed4e2(iVar1,auStack_58,0x50,extraout_r3,in_stack_00000000,puVar2);
  return CONCAT44(&UNK_01cf8a30,iVar1);
}

