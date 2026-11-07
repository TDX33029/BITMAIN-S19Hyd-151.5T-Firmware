// FUN_01236a48 @ 01236a48 size=132 calls_out=1 calls_in=1
// strings: 

byte FUN_01236a48(byte *param_1)

{
  byte local_11;
  byte *local_10;
  code *local_c;
  
  local_11 = *param_1;
  if (local_11 == 0) {
    return 0;
  }
  *param_1 = local_11 - 1 & local_11;
  local_11 = local_11 & -local_11;
  switch(local_11) {
  case 1:
  case 2:
  case 4:
  case 8:
  case 0x10:
  case 0x20:
  case 0x40:
    return local_11;
  default:
    local_10 = &local_11;
    local_c = FUN_00fac0c8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056e02f,&local_10,&DAT_0188a658);
  }
}

