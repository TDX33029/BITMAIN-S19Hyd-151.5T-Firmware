// FUN_01415f98 @ 01415f98 size=328 calls_out=1 calls_in=19
// strings: 

undefined8 FUN_01415f98(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = CONCAT44(param_4,param_3);
  iVar3 = 0x14;
  if (param_4 != 0 || param_4 < (9999 < param_3)) {
    iVar1 = 0;
    do {
      iVar3 = iVar1;
      iVar5 = (int)(uVar7 >> 0x20);
      uVar6 = (uint)uVar7;
      uVar7 = FUN_01bf0ff0(uVar6,iVar5,10000,0);
      uVar4 = uVar6 + (int)uVar7 * -10000;
      uVar2 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_1 + iVar3 + 0x10) = *(undefined2 *)(&DAT_00534998 + uVar2 * 2);
      *(undefined2 *)(param_1 + iVar3 + 0x12) =
           *(undefined2 *)(&DAT_00534998 + (uVar4 + uVar2 * -100 & 0xffff) * 2);
      iVar1 = iVar3 + -4;
    } while ((uint)(uVar6 < 100000000) <= (uint)-iVar5);
    iVar3 = iVar3 + 0x10;
  }
  uVar2 = (uint)uVar7;
  if ((uint)(uVar2 < 100) <= (uint)-(int)(uVar7 >> 0x20)) {
    iVar3 = iVar3 + -2;
    uVar4 = (uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_1 + iVar3) =
         *(undefined2 *)(&DAT_00534998 + (uVar2 + uVar4 * -100 & 0xffff) * 2);
    uVar7 = (ulonglong)uVar4;
  }
  uVar2 = (uint)(uVar7 >> 0x20);
  if (uVar2 == 0 && (9 < (uint)uVar7) <= uVar2) {
    iVar3 = iVar3 + -1;
    *(byte *)(param_1 + iVar3) = (byte)uVar7 | 0x30;
  }
  else {
    iVar3 = iVar3 + -2;
    *(undefined2 *)(param_1 + iVar3) = *(undefined2 *)(&DAT_00534998 + (uint)uVar7 * 2);
  }
  return CONCAT44(0x14 - iVar3,param_1 + iVar3);
}

