// FUN_012fcd24 @ 012fcd24 size=312 calls_out=1 calls_in=1
// strings: 

void FUN_012fcd24(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_16 [2];
  undefined2 local_14;
  undefined2 local_12;
  
  uVar1 = *param_1;
  uVar2 = ((int)(short)uVar1 ^ (int)(short)uVar1 >> 0xf) - ((int)(short)uVar1 >> 0xf);
  uVar3 = uVar2 & 0xffff;
  if (uVar3 >> 3 < 0x7d) {
    iVar4 = 5;
    if (uVar3 < 10) goto joined_r0x012fcdfc;
    iVar4 = 3;
    uVar3 = (uint)((short)(uVar3 >> 2) * 0x147b) >> 0x11;
  }
  else {
    uVar3 = (uint)((short)(uVar3 >> 4) * 0x347) >> 0x13;
    uVar2 = uVar2 + uVar3 * -10000;
    local_14 = *(undefined2 *)
                (&DAT_00534998 + ((uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
    iVar4 = 1;
  }
  local_12 = *(undefined2 *)
              (&DAT_00534998 +
              (uVar2 + ((uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
              2);
  uVar2 = uVar3;
joined_r0x012fcdfc:
  if (((int)(short)uVar1 == 0) || ((uVar2 & 0xffff) != 0)) {
    auStack_16[iVar4] = (&DAT_00534999)[(uVar2 & 0xf) * 2];
    iVar4 = iVar4 + -1;
  }
  FUN_012fa378(param_2,uVar1 >> 0xf ^ 1,1,0,auStack_16 + iVar4 + 1,5 - iVar4);
  return;
}

