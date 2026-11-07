// FUN_00702490 @ 00702490 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_00702490(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x270);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x270);
  }
  *(undefined2 *)(iVar1 + 0x26e) = 0;
  *(undefined4 *)(iVar1 + 0x268) = 0;
  return;
}

