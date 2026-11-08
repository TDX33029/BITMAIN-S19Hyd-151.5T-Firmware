// FUN_015fbb98 @ 015fbb98 size=176 calls_out=3 calls_in=8
// strings: failed to get current UNIX time<searcher function><searcher kind union>

int FUN_015fbb98(void)

{
  uint local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_20;
  undefined4 uStack_1c;
  int local_18;
  uint local_10;
  
  FUN_019ac130(&local_20,0);
  local_2c = 0;
  local_30 = 0;
  local_40 = local_20;
  uStack_3c = uStack_1c;
  iStack_38 = local_18;
  local_28 = 0;
  FUN_019ac248(&local_20,&local_40,&local_30);
  if ((local_20 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("failed to get current UNIX time<searcher function><searcher kind union>",0x1f,
                 &local_20,&DAT_01cfdcf0);
  }
  return local_18 * 1000 + local_10 / 1000000;
}

