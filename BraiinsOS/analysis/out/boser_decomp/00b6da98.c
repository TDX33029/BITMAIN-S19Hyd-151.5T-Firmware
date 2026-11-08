// FUN_00b6da98 @ 00b6da98 size=100 calls_out=4 calls_in=0
// strings: 

void FUN_00b6da98(undefined4 param_1,int param_2)

{
  undefined1 auStack_28 [24];
  
  if (*(char *)(param_2 + 4) == '\0') {
    FUN_00797c60(auStack_28);
    FUN_01bed4e2(param_1,auStack_28,0x11);
    *(undefined1 *)(param_2 + 4) = 1;
    return;
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13420);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c13420);
}

