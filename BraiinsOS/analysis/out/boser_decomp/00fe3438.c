// FUN_00fe3438 @ 00fe3438 size=80 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00fe3438(int *param_1)

{
  undefined4 uVar1;
  undefined1 local_20 [16];
  
  local_20[0] = 0xd;
  uVar1 = FUN_01967538(local_20,&DAT_01c252ec,&DAT_01d064b8);
  if (*param_1 == 4 || *param_1 == 2) {
    FUN_019bb7e0(param_1[2],param_1[3]);
  }
  return uVar1;
}

