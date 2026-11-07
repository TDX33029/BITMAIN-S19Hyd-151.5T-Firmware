// FUN_0141621c @ 0141621c size=272 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_0141621c(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 10;
  if (9999 < param_2) {
    uVar4 = param_2;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      param_2 = uVar4 / 10000;
      uVar2 = (uint)((short)(uVar4 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_1 + iVar5 + 6) = *(undefined2 *)(&DAT_00534998 + uVar2 * 2);
      *(undefined2 *)(param_1 + iVar5 + 8) =
           *(undefined2 *)(&DAT_00534998 + (uVar4 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar4;
      uVar4 = param_2;
      iVar3 = iVar5 + -4;
    } while (bVar1);
    iVar5 = iVar5 + 6;
  }
  if (99 < param_2) {
    iVar5 = iVar5 + -2;
    uVar4 = (uint)((short)((param_2 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_1 + iVar5) =
         *(undefined2 *)(&DAT_00534998 + (param_2 + uVar4 * -100 & 0xffff) * 2);
    param_2 = uVar4;
  }
  if (param_2 < 10) {
    iVar5 = iVar5 + -1;
    *(byte *)(param_1 + iVar5) = (byte)param_2 | 0x30;
  }
  else {
    iVar5 = iVar5 + -2;
    *(undefined2 *)(param_1 + iVar5) = *(undefined2 *)(&DAT_00534998 + param_2 * 2);
  }
  return CONCAT44(10 - iVar5,param_1 + iVar5);
}

