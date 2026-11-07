// FUN_014160e4 @ 014160e4 size=308 calls_out=0 calls_in=5
// strings: 

undefined8 FUN_014160e4(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  iVar6 = 0xb;
  if (9999 < uVar4) {
    uVar5 = uVar4;
    iVar3 = 0;
    do {
      iVar6 = iVar3;
      uVar4 = uVar5 / 10000;
      uVar2 = (uint)((short)(uVar5 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_1 + iVar6 + 7) = *(undefined2 *)(&DAT_00534998 + uVar2 * 2);
      *(undefined2 *)(param_1 + iVar6 + 9) =
           *(undefined2 *)(&DAT_00534998 + (uVar5 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar5;
      uVar5 = uVar4;
      iVar3 = iVar6 + -4;
    } while (bVar1);
    iVar6 = iVar6 + 7;
  }
  if (99 < uVar4) {
    iVar6 = iVar6 + -2;
    uVar5 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_1 + iVar6) =
         *(undefined2 *)(&DAT_00534998 + (uVar4 + uVar5 * -100 & 0xffff) * 2);
    uVar4 = uVar5;
  }
  if (uVar4 < 10) {
    iVar6 = iVar6 + -1;
    *(byte *)(param_1 + iVar6) = (byte)uVar4 | 0x30;
  }
  else {
    iVar6 = iVar6 + -2;
    *(undefined2 *)(param_1 + iVar6) = *(undefined2 *)(&DAT_00534998 + uVar4 * 2);
  }
  if (0x7fffffff < param_2) {
    iVar6 = iVar6 + -1;
    *(undefined1 *)(param_1 + iVar6) = 0x2d;
  }
  return CONCAT44(0xb - iVar6,param_1 + iVar6);
}

