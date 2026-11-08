// FUN_01b697d8 @ 01b697d8 size=236 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_01b697d8(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte local_5c [31];
  byte local_3d;
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b69704(param_3,0x20,local_5c,0);
  local_5c[0] = local_5c[0] & 0xf8;
  local_3d = local_3d & 0x7f | 0x40;
  FUN_01b3ac34(param_1,local_5c);
  FUN_01b26974(param_2,param_3,0x20);
  FUN_01b26974(param_2 + 0x20,param_1);
  FUN_01b6b174(local_5c,0x40);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

