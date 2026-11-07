// FUN_00fac004 @ 00fac004 size=192 calls_out=1 calls_in=0
// strings: 

void FUN_00fac004(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_c [2];
  undefined2 local_a;
  
  bVar1 = *param_1;
  uVar6 = ((int)(char)bVar1 ^ (int)(char)bVar1 >> 7) - ((int)(char)bVar1 >> 7);
  iVar2 = 3;
  uVar5 = uVar6 & 0xff;
  if (9 < uVar5) {
    uVar3 = uVar6 * 2 + 0x38;
    if (uVar5 < 100) {
      uVar3 = uVar6 * 2;
    }
    uVar6 = (uint)(99 < uVar5);
    local_a = *(undefined2 *)(&DAT_0040f4ca + (uVar3 & 0xff));
    iVar2 = 1;
  }
  if (((int)(char)bVar1 == 0) || (iVar4 = iVar2, (uVar6 & 0xff) != 0)) {
    iVar4 = iVar2 + -1;
    auStack_c[iVar2] = (&DAT_0040f4cb)[(uVar6 & 0x7f) * 2];
  }
  FUN_00fa9698(param_2,bVar1 >> 7 ^ 1,1,0,auStack_c + iVar4 + 1,3 - iVar4);
  return;
}

