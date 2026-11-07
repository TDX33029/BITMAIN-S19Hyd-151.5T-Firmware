// FUN_012fcc70 @ 012fcc70 size=176 calls_out=1 calls_in=4
// strings: 

void FUN_012fcc70(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_c [2];
  undefined2 local_a;
  
  uVar3 = (uint)*param_1;
  if (uVar3 < 10) {
    iVar2 = 3;
    uVar1 = uVar3;
  }
  else {
    uVar1 = (uint)((short)(ushort)*param_1 * 0x29) >> 0xc;
    local_a = *(undefined2 *)(&DAT_00534998 + (uVar3 + uVar1 * -100 & 0xff) * 2);
    iVar2 = 1;
  }
  if ((uVar3 == 0) || (uVar1 != 0)) {
    auStack_c[iVar2] = (&DAT_00534999)[(uVar1 & 0x7f) * 2];
    iVar2 = iVar2 + -1;
  }
  FUN_012fa378(param_2,1,1,0,auStack_c + iVar2 + 1,3 - iVar2);
  return;
}

