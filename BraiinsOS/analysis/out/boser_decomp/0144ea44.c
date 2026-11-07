// FUN_0144ea44 @ 0144ea44 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_0144ea44(undefined4 param_1,uint param_2)

{
  bool bVar1;
  undefined4 local_10;
  uint local_c;
  
  local_c = param_2 << 2;
  bVar1 = 0x3ffffffe < param_2;
  if (param_2 < 0x40000000) {
    bVar1 = 0x7ffffffc < local_c;
  }
  if (bVar1) {
    local_10 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_10,&DAT_01cf92ec,&DAT_01d2ebc8);
  }
  thunk_FUN_01be4678();
  return;
}

