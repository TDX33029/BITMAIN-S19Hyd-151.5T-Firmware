// FUN_01b3265c @ 01b3265c size=252 calls_out=6 calls_in=5
// strings: 

undefined8 FUN_01b3265c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_b4 [136];
  int local_2c;
  
  bVar2 = param_2 == 0x11;
  if (param_2 < 0x12) {
    bVar2 = *(uint *)(param_5 + 0x18) == param_2;
  }
  local_2c = DAT_01d53560;
  if ((bVar2) && (param_4 <= param_2 * 2)) {
    FUN_01bed93e(auStack_b4,0,0x88,0);
    FUN_01b26974(auStack_b4,param_3,param_4 << 2);
    iVar1 = FUN_01b30ae8(param_1,param_2,auStack_b4,param_2 << 1,param_5);
    if (iVar1 != 0) {
      FUN_01b6b174(auStack_b4,param_2 << 3);
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

