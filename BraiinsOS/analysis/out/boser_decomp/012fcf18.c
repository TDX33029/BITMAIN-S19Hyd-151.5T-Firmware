// FUN_012fcf18 @ 012fcf18 size=272 calls_out=1 calls_in=6
// strings: 

void FUN_012fcf18(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_16 [2];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar4 = (uint)uVar1;
  if (uVar1 >> 3 < 0x7d) {
    iVar5 = 5;
    uVar2 = uVar4;
    if (uVar4 < 10) goto LAB_012fcfd4;
    iVar5 = 3;
    uVar2 = (uint)((short)(uVar1 >> 2) * 0x147b) >> 0x11;
    uVar3 = uVar4;
  }
  else {
    uVar2 = (uint)((short)(uVar1 >> 4) * 0x347) >> 0x13;
    uVar3 = uVar4 + uVar2 * -10000;
    local_14 = *(undefined2 *)
                (&DAT_00534998 + ((uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
    iVar5 = 1;
  }
  local_12 = *(undefined2 *)
              (&DAT_00534998 +
              (uVar3 + ((uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
              2);
LAB_012fcfd4:
  if ((uVar4 == 0) || (iVar6 = iVar5, uVar2 != 0)) {
    iVar6 = iVar5 + -1;
    auStack_16[iVar5] = (&DAT_00534999)[(uVar2 & 0xf) * 2];
  }
  FUN_012fa378(param_2,1,1,0,auStack_16 + iVar6 + 1,5 - iVar6);
  return;
}

