// FUN_0196bd9c @ 0196bd9c size=364 calls_out=1 calls_in=7
// strings: 

undefined8 FUN_0196bd9c(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar5 = (int)param_4 >> 0x1f;
  uVar3 = (param_3 ^ uVar5) - uVar5;
  uVar5 = (param_4 ^ uVar5) - (uVar5 + ((param_3 ^ uVar5) < uVar5));
  uVar7 = CONCAT44(uVar5,uVar3);
  iVar2 = 0x14;
  if (uVar5 != 0 || uVar5 < (9999 < uVar3)) {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar6 = (int)(uVar7 >> 0x20);
      uVar4 = (uint)uVar7;
      uVar7 = FUN_01bf0ff0(uVar4,iVar6,10000,0);
      uVar3 = uVar4 + (int)uVar7 * -10000;
      uVar5 = (uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_1 + iVar2 + 0x10) = *(undefined2 *)(&DAT_00534998 + uVar5 * 2);
      *(undefined2 *)(param_1 + iVar2 + 0x12) =
           *(undefined2 *)(&DAT_00534998 + (uVar3 + uVar5 * -100 & 0xffff) * 2);
      iVar1 = iVar2 + -4;
    } while ((uint)(uVar4 < 100000000) <= (uint)-iVar6);
    iVar2 = iVar2 + 0x10;
  }
  uVar5 = (uint)uVar7;
  if ((uint)(uVar5 < 100) <= (uint)-(int)(uVar7 >> 0x20)) {
    iVar2 = iVar2 + -2;
    uVar3 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_1 + iVar2) =
         *(undefined2 *)(&DAT_00534998 + (uVar5 + uVar3 * -100 & 0xffff) * 2);
    uVar7 = (ulonglong)uVar3;
  }
  uVar5 = (uint)(uVar7 >> 0x20);
  if (uVar5 == 0 && (9 < (uint)uVar7) <= uVar5) {
    iVar2 = iVar2 + -1;
    *(byte *)(param_1 + iVar2) = (byte)uVar7 | 0x30;
  }
  else {
    iVar2 = iVar2 + -2;
    *(undefined2 *)(param_1 + iVar2) = *(undefined2 *)(&DAT_00534998 + (uint)uVar7 * 2);
  }
  if (0x7fffffff < param_4) {
    iVar2 = iVar2 + -1;
    *(undefined1 *)(param_1 + iVar2) = 0x2d;
  }
  return CONCAT44(0x14 - iVar2,param_1 + iVar2);
}

