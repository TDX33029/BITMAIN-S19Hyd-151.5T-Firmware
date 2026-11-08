// FUN_00fabc64 @ 00fabc64 size=336 calls_out=0 calls_in=32
// strings: 

int FUN_00fabc64(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 10;
  uVar3 = param_1;
  if (0x7c < param_1 >> 3) {
    uVar3 = param_1 / 10000;
    uVar2 = (uint)((short)(param_1 % 10000 >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_2 + 6) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
    *(undefined2 *)(param_2 + 8) =
         *(undefined2 *)(&DAT_0040f4ca + (param_1 % 10000 + uVar2 * -100 & 0xffff) * 2);
    iVar1 = 6;
    if (9999999 < param_1) {
      uVar2 = uVar3 % 10000;
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_0040f4ca + (uVar2 / 100) * 2);
      uVar3 = param_1 / 100000000;
      *(undefined2 *)(param_2 + 4) = *(undefined2 *)(&DAT_0040f4ca + (uVar2 % 100) * 2);
      iVar1 = 2;
    }
  }
  if (9 < uVar3) {
    iVar1 = iVar1 + -2;
    uVar2 = (uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_2 + iVar1) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar3 + uVar2 * -100 & 0xffff) * 2);
    uVar3 = uVar2;
  }
  if ((param_1 == 0) || (uVar3 != 0)) {
    *(undefined1 *)(param_2 + iVar1 + -1) = (&DAT_0040f4cb)[(uVar3 & 0xf) * 2];
    return iVar1 + -1;
  }
  return iVar1;
}

