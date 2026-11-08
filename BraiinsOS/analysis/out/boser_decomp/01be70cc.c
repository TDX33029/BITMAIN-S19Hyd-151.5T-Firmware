// FUN_01be70cc @ 01be70cc size=214 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01be70cc(byte *param_1,uint param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_1 == (byte *)0x0) {
    return 1;
  }
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = bVar1;
    return 1;
  }
  iVar3 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if (**(int **)(iVar3 + -0x18) == 0) {
    if (param_2 - 0xdf80 < 0x80) {
      *param_1 = bVar1;
      return 1;
    }
  }
  else {
    if (param_2 < 0x800) {
      *param_1 = (byte)(param_2 >> 6) | 0xc0;
      param_1[1] = bVar1 & 0x3f | 0x80;
      return 2;
    }
    if (param_2 < 0xd800 || param_2 - 0xe000 < 0x2000) {
      *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
      param_1[1] = (byte)((param_2 & 0xfff) >> 6) | 0x80;
      param_1[2] = bVar1 & 0x3f | 0x80;
      return 3;
    }
    if (param_2 - 0x10000 < 0x100000) {
      param_1[1] = (byte)((param_2 & 0x3ffff) >> 0xc) | 0x80;
      *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
      param_1[2] = (byte)((param_2 & 0xfff) >> 6) | 0x80;
      param_1[3] = bVar1 & 0x3f | 0x80;
      return 4;
    }
  }
  puVar2 = (undefined4 *)FUN_01be3244(param_1);
  *puVar2 = 0x54;
  return 0xffffffff;
}

