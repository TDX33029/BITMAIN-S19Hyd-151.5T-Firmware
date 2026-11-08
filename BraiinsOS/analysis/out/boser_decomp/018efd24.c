// FUN_018efd24 @ 018efd24 size=204 calls_out=5 calls_in=0
// strings: 

void FUN_018efd24(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int local_14c;
  undefined1 auStack_148 [64];
  undefined1 auStack_108 [160];
  undefined1 auStack_68 [64];
  uint local_28;
  
  if (0x40 < *(uint *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(param_3 + 0x40),0x40,&DAT_01d24fd8);
  }
  FUN_0188fc54(auStack_108,*(undefined4 *)(param_2 + 4));
  FUN_018908c4(&local_14c,auStack_108,param_4,param_5);
  uVar1 = *(uint *)(local_14c + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d2571c);
  }
  FUN_01bed93e(auStack_68,0,0x40);
  local_28 = uVar1;
  FUN_01bed4e2(auStack_68,auStack_148,uVar1);
  FUN_01bed4e2(param_1,auStack_68,0x44);
  return;
}

