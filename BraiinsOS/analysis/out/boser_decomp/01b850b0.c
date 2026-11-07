// FUN_01b850b0 @ 01b850b0 size=108 calls_out=0 calls_in=3
// strings: 

int FUN_01b850b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = iVar1 + (param_2 + 3U & 0xfffffffc);
    if (uVar2 <= *(uint *)(param_1 + 4)) {
      *(uint *)(param_1 + 8) = uVar2;
      *(uint *)(param_1 + 0xc) = uVar2;
      *(uint *)(param_1 + 0x10) = uVar2;
      return iVar1;
    }
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return 0;
}

