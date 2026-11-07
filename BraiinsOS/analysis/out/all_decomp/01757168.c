// FUN_01757168 @ 01757168 size=292 calls_out=3 calls_in=6
// strings: 

undefined8 FUN_01757168(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0 && param_1 != 0) {
    if (*(int *)(param_2 + 0xcc) == 0) {
      return 1;
    }
    if (1 < *(byte *)(param_2 + 0x17d) - 1) {
      iVar1 = *(int *)(param_2 + 200);
      iVar2 = *(int *)(param_2 + 0xd0);
      if (iVar1 != iVar2) {
        FUN_016dd606(param_2 + 0xd4 + iVar2,0);
      }
      *(undefined1 *)(param_2 + iVar2 + 0xd4) = *(undefined1 *)(param_2 + 0x17c);
      *(byte *)(param_2 + iVar1 + 0xd3) =
           ~((byte)~(byte)(((uint)*(byte *)(param_2 + iVar1 + 0xd3) << 0x19) >> 0x18) >> 1);
      iVar1 = FUN_01753f4c(param_2,param_2 + 0xd4,iVar1,iVar1);
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0xd0) = 0;
        FUN_0175400c(param_2,param_1,*(undefined4 *)(param_2 + 0xcc),*(undefined4 *)(param_2 + 200),
                     *(undefined1 *)(param_2 + 0x17d));
        *(undefined1 *)(param_2 + 0x17d) = 2;
        return 1;
      }
    }
  }
  return 0;
}

