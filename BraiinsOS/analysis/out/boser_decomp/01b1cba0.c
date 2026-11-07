// FUN_01b1cba0 @ 01b1cba0 size=80 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1cba0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar3 = *(int *)(param_3 + iVar1 * 4);
    uVar2 = iVar3 + 0xfff;
    *(int *)(param_1 + iVar1 * 4) = (int)uVar2 >> 0xd;
    *(uint *)(param_2 + iVar1 * 4) = iVar3 - (uVar2 & 0xffffe000);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x100);
  return 0;
}

