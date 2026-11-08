// FUN_01b8d4c0 @ 01b8d4c0 size=224 calls_out=4 calls_in=1
// strings: 

void FUN_01b8d4c0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_290 [108];
  undefined1 auStack_224 [512];
  int local_24;
  
  local_24 = DAT_01d53560;
  uVar1 = FUN_01b82770(param_4,param_3,param_2);
  uVar2 = FUN_01b82788(auStack_290,uVar1,param_1,param_3,param_2,0x7ff < param_3);
  if (uVar2 < 0xffffff89) {
    FUN_01b82680(auStack_224,0x200,auStack_290,param_2,uVar1);
  }
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

