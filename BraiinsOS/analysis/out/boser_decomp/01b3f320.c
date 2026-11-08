// FUN_01b3f320 @ 01b3f320 size=88 calls_out=1 calls_in=6
// strings: 

uint FUN_01b3f320(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x11c); iVar2 = iVar2 + 1) {
    uVar1 = uVar1 | *(uint *)(param_2 + iVar2 * 4);
  }
  uVar1 = FUN_01b0c688(uVar1);
  return ~uVar1;
}

