// FUN_016ddca0 @ 016ddca0 size=30 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_016ddca0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 < 3) {
    uVar1 = FUN_016d6590(param_1,param_2 + 0x5402);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_016d2bc8();
  *puVar2 = 0x16;
  return 0xffffffff;
}

