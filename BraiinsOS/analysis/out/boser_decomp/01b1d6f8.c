// FUN_01b1d6f8 @ 01b1d6f8 size=112 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1d6f8(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = 0;
  do {
    iVar4 = iVar2 * 8;
    iVar1 = iVar2 * 8;
    iVar2 = iVar2 + 1;
    iVar4 = 0x80000 - *(int *)(param_2 + iVar4);
    uVar3 = 0x80000 - *(int *)(param_2 + 4 + iVar1);
    *param_1 = (char)iVar4;
    param_1[1] = (char)((uint)iVar4 >> 8);
    param_1[2] = (char)uVar3 * '\x10' | (byte)((uint)iVar4 >> 0x10);
    param_1[3] = (char)(uVar3 >> 4);
    param_1[4] = (char)(uVar3 >> 0xc);
    param_1 = param_1 + 5;
  } while (iVar2 != 0x80);
  return 0;
}

