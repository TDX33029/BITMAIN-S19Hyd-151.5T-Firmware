// FUN_01b59a48 @ 01b59a48 size=220 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_01b59a48(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((byte)(*(char *)(param_1 + 0x17d) - 1U) < 2) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 200);
  iVar2 = *(int *)(param_1 + 0xd0);
  FUN_01b257dc(param_1 + 0xd4 + iVar2,0,iVar3 - iVar2);
  iVar1 = param_1 + iVar3 + -1;
  *(undefined1 *)(param_1 + iVar2 + 0xd4) = *(undefined1 *)(param_1 + 0x17c);
  *(byte *)(iVar1 + 0xd4) = ~((byte)~(byte)(((uint)*(byte *)(iVar1 + 0xd4) << 0x19) >> 0x18) >> 1);
  iVar1 = FUN_01b599ac(param_1,param_1 + 0xd4,iVar3,iVar3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    return 1;
  }
  return 0;
}

