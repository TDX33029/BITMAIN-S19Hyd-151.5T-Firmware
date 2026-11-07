// FUN_009e2554 @ 009e2554 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_009e2554(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_2 + 0x8c);
  if (0x3f < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724(&DAT_00414ee0,0x25,&DAT_018ae4e8);
  }
  *(byte *)(param_2 + 0x8c) = *(byte *)(param_2 + 0x8c) + 1;
  iVar3 = 1 << uVar2;
  uVar1 = 1 >> (0x20 - uVar2 & 0xff);
  if (-1 < (int)(uVar2 - 0x20)) {
    iVar3 = 0;
    uVar1 = 1 << (uVar2 - 0x20 & 0xff);
  }
  *(int *)(param_1 + 0x118) = iVar3;
  *(uint *)(param_1 + 0x11c) = uVar1;
  return;
}

