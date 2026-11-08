// FUN_018f3a94 @ 018f3a94 size=176 calls_out=3 calls_in=1
// strings: 

void FUN_018f3a94(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [40];
  
  uVar1 = *(uint *)(param_2 + 0x40);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d258e8);
  }
  FUN_01bed93e(auStack_88,0x20,0x40);
  FUN_01bed93e(auStack_c8,0x20,0x40);
  FUN_01bed4e2(auStack_48,param_3,0x22);
  FUN_01bed4e2(auStack_c8,param_2,uVar1);
  FUN_01bed4e2(param_1 + 1,auStack_88,0x62);
  FUN_01bed4e2((int)param_1 + 0x66,auStack_c8,0x40);
  *param_1 = uVar1 + 0x62;
  return;
}

