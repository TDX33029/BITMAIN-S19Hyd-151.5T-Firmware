// FUN_00718b00 @ 00718b00 size=72 calls_out=1 calls_in=1
// strings: 

bool FUN_00718b00(undefined4 param_1)

{
  bool bVar1;
  uint local_18 [2];
  uint local_10;
  uint local_c;
  
  FUN_00718a68(local_18,param_1);
  if ((local_18[0] & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = local_c == 0 && (0xffff < local_10) <= local_c;
  }
  return bVar1;
}

