// FUN_0134399c @ 0134399c size=196 calls_out=0 calls_in=3
// strings: 

byte FUN_0134399c(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 < 0x80) {
    bVar1 = *(byte *)(param_1 + param_2);
    goto LAB_01343a58;
  }
  if (*(char *)(param_1 + 0x101) != '\0') {
    bVar1 = 1;
    if (param_2 - 0xfdf0 < 0x200) goto LAB_01343a58;
    uVar2 = 0xd760;
    bVar3 = param_2 - 0xa0 < 0xd760;
    if (!bVar3) {
      uVar2 = param_2 - 0xf900;
    }
    if (bVar3 || uVar2 < 0x4d0) goto LAB_01343a58;
    if ((param_2 - 0xe1000 < 0xeffe) || (param_2 - 0x10000 < 0xd0000 && (~param_2 & 0xfffe) != 0))
    goto LAB_01343a58;
  }
  bVar1 = 0;
  if ((*(char *)(param_1 + 0x102) != '\0') &&
     (((bVar1 = 1, 0x18ff < param_2 - 0xe000 && (bVar1 = 0, 0xeffff < param_2)) &&
      (bVar1 = 0, (~param_2 & 0xfffe) != 0)))) {
    bVar1 = 1;
  }
LAB_01343a58:
  return bVar1 & 1;
}

