// FUN_01b5b9d0 @ 01b5b9d0 size=396 calls_out=4 calls_in=9
// strings: 

undefined4 FUN_01b5b9d0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0 || param_2 == 0) {
    return 0;
  }
  *(uint *)(param_2 + 0xcc) = param_3;
  if (param_3 != 0) {
    if ((*(char *)(param_2 + 0x17d) == '\x02') ||
       ((*(char *)(param_2 + 0x17d) == '\0' && (iVar2 = FUN_01b59a48(param_2), iVar2 == 0)))) {
      return 0;
    }
    uVar1 = *(uint *)(param_2 + 0xd0);
    if (uVar1 != 0) {
      iVar2 = *(int *)(param_2 + 200) - uVar1;
      if (param_3 <= uVar1) {
        FUN_01b26974(param_1,param_2 + 0xd4 + iVar2,param_3);
        *(uint *)(param_2 + 0xd0) = *(int *)(param_2 + 0xd0) - param_3;
        return 1;
      }
      FUN_01b26974(param_1,param_2 + 0xd4 + iVar2);
      param_1 = param_1 + *(int *)(param_2 + 0xd0);
      param_3 = param_3 - *(int *)(param_2 + 0xd0);
      *(undefined4 *)(param_2 + 0xd0) = 0;
    }
    uVar1 = *(uint *)(param_2 + 200);
    iVar2 = param_1;
    if (uVar1 < param_3) {
      uVar3 = FUN_01bf0fd4(param_3,uVar1);
      param_3 = (uint)((ulonglong)uVar3 >> 0x20);
      iVar2 = uVar1 * (int)uVar3 + param_1;
      FUN_01b59b24(param_2,param_1,uVar1 * (int)uVar3,uVar1,*(undefined1 *)(param_2 + 0x17d));
      *(undefined1 *)(param_2 + 0x17d) = 1;
    }
    if (param_3 != 0) {
      FUN_01b59b24(param_2,param_2 + 0xd4,*(undefined4 *)(param_2 + 200),
                   *(undefined4 *)(param_2 + 200),*(undefined1 *)(param_2 + 0x17d));
      FUN_01b26974(iVar2,param_2 + 0xd4,param_3);
      *(uint *)(param_2 + 0xd0) = *(int *)(param_2 + 200) - param_3;
      *(undefined1 *)(param_2 + 0x17d) = 1;
    }
  }
  return 1;
}

