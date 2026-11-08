// FUN_0104def0 @ 0104def0 size=144 calls_out=3 calls_in=0
// strings: localhost.

void FUN_0104def0(int param_1)

{
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_c;
  
  FUN_0103a4b0(local_50,"localhost.",10);
  if (local_50[0] == 2) {
    local_c = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c,&DAT_01883718,&DAT_018836f8);
  }
  FUN_016dd1aa(param_1,local_50,0x44);
  *(undefined1 *)(param_1 + 0x4a) = 2;
  *(undefined4 *)(param_1 + 0x46) = 0x2010101;
  *(undefined2 *)(param_1 + 0x44) = 0x101;
  return;
}

