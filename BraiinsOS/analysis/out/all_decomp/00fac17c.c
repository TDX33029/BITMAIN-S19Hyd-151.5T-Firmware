// FUN_00fac17c @ 00fac17c size=312 calls_out=1 calls_in=0
// strings: 

void FUN_00fac17c(ushort *param_1,undefined4 param_2)

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
    if (uVar3 < 10) goto joined_r0x00fac254;
    iVar4 = 3;
    uVar3 = (uint)((short)(uVar3 >> 2) * 0x147b) >> 0x11;
  }
  else {
    uVar3 = (uint)((short)(uVar3 >> 4) * 0x347) >> 0x13;
    uVar2 = uVar2 + uVar3 * -10000;
    local_14 = *(undefined2 *)
                (&DAT_0040f4ca + ((uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
    iVar4 = 1;
  }
  local_12 = *(undefined2 *)
              (&DAT_0040f4ca +
              (uVar2 + ((uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
              2);
  uVar2 = uVar3;
joined_r0x00fac254:
  if (((int)(short)uVar1 == 0) || ((uVar2 & 0xffff) != 0)) {
    auStack_16[iVar4] = (&DAT_0040f4cb)[(uVar2 & 0xf) * 2];
    iVar4 = iVar4 + -1;
  }
  FUN_00fa9698(param_2,uVar1 >> 0xf ^ 1,1,0,auStack_16 + iVar4 + 1,5 - iVar4);
  return;
}

