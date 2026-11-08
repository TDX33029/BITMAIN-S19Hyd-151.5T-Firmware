// FUN_00b8a340 @ 00b8a340 size=108 calls_out=3 calls_in=3
// strings: 

void FUN_00b8a340(undefined4 *param_1,int *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((char)param_2[1] == '\0') {
    FUN_006666fc(&local_20,*(undefined4 *)(*param_2 + 0x17c),*(undefined4 *)(*param_2 + 0x180));
    *param_1 = local_20;
    param_1[1] = uStack_1c;
    param_1[2] = uStack_18;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13d6c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c13d6c);
}

