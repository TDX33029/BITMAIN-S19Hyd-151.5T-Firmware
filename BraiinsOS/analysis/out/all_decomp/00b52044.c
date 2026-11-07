// FUN_00b52044 @ 00b52044 size=120 calls_out=4 calls_in=0
// strings: 

void FUN_00b52044(int param_1)

{
  undefined1 auStack_3c0 [920];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*(char *)(param_1 + 0x3ac) == '\0') {
    FUN_016dd1aa(auStack_3c0,param_1,0x398);
    local_28 = *(undefined4 *)(param_1 + 0x3a0);
    uStack_24 = *(undefined4 *)(param_1 + 0x3a4);
    uStack_20 = *(undefined4 *)(param_1 + 0x3a8);
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0034f43b,0x3d,&DAT_018704d0);
  }
  if (*(char *)(param_1 + 0x3ac) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018704e0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb7cc0(&DAT_018704e0);
}

