// FUN_01b64e00 @ 01b64e00 size=276 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_01b64e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [52];
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b28a3c(param_3,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    FUN_01b269d8(auStack_80,param_4,0x20);
    FUN_01b5aebc(param_3,800,auStack_60);
    FUN_01b5b204(auStack_80,0x40,auStack_c0);
    FUN_01b64a58(param_1,auStack_80,param_3,auStack_a0);
    FUN_01b269d8(param_2,auStack_c0,0x20);
    FUN_01b6b174(auStack_80,0x40);
    FUN_01b6b174(auStack_c0,0x40);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar2;
}

