// FUN_016844ec @ 016844ec size=116 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_016844ec(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int local_10;
  int iStack_c;
  
  uVar2 = (param_3 & 0x7ffffff) + (uint)*(byte *)(param_1 + (param_4 & 0xff) + 0x158);
  if (*(uint *)(param_2 + 0x7c) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_2 + 0x7c),&DAT_01d084bc);
  }
  if (*(int *)(*(int *)(param_2 + 0x78) + uVar2 * 4) < 0) {
    local_10 = param_1;
    iStack_c = param_2;
    uVar1 = FUN_016c4f08(&local_10,param_3,(param_4 & 0xff) << 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

