// FUN_0137a984 @ 0137a984 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_0137a984(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  undefined1 auStack_10 [8];
  
  uVar2 = (param_3 & 0x7ffffff) + (uint)*(byte *)(param_1 + (param_4 & 0xff) + 0x158);
  if (*(uint *)(param_2 + 0x7c) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_2 + 0x7c),&DAT_01893ad0);
  }
  uVar2 = *(uint *)(*(int *)(param_2 + 0x78) + uVar2 * 4);
  piVar1 = (int *)auStack_10;
  if (uVar2 < 0x80000000) {
    param_1 = 0;
    piVar1 = (int *)(auStack_10 + 8);
  }
  if ((int)uVar2 < 0) {
    *piVar1 = param_1;
    piVar1[1] = param_2;
    FUN_01390198(piVar1,param_3,(param_4 & 0xff) << 8);
    return;
  }
  return;
}

