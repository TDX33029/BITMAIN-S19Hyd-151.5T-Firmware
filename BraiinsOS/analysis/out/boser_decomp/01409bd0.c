// FUN_01409bd0 @ 01409bd0 size=124 calls_out=3 calls_in=0
// strings: localhost.

void FUN_01409bd0(undefined2 *param_1)

{
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_c;
  
  FUN_013c89a4(local_50,"localhost.",10);
  if (local_50[0] == 2) {
    local_c = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_c,&DAT_01cf3b5c,&DAT_01cf3b4c);
  }
  FUN_01bed4e2(param_1 + 2,local_50,0x44);
  *param_1 = 0x11;
  return;
}

