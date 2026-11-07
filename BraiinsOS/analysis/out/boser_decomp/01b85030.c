// FUN_01b85030 @ 01b85030 size=128 calls_out=1 calls_in=1
// strings: 

int FUN_01b85030(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) || (uVar2 = FUN_01b84ee4(param_1,1), uVar2 < 0xffffff89)) {
    iVar1 = *(int *)(param_1 + 0xc);
    uVar2 = iVar1 + param_2;
    if (uVar2 <= *(uint *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 0xc) = uVar2;
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return 0;
}

