// FUN_01527d18 @ 01527d18 size=176 calls_out=3 calls_in=2
// strings: 

void FUN_01527d18(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [40];
  
  uVar1 = *(uint *)(param_2 + 0x40);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018a7f14);
  }
  FUN_016dd606(auStack_88,0x20,0x40);
  FUN_016dd606(auStack_c8,0x20,0x40);
  FUN_016dd1aa(auStack_48,param_3,0x22);
  FUN_016dd1aa(auStack_c8,param_2,uVar1);
  FUN_016dd1aa(param_1 + 1,auStack_88,0x62);
  FUN_016dd1aa((int)param_1 + 0x66,auStack_c8,0x40);
  *param_1 = uVar1 + 0x62;
  return;
}

