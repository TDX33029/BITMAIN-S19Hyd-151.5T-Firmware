// FUN_01961a10 @ 01961a10 size=140 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01961a10(int *param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 == -1) {
    param_2 = param_1[1];
  }
  if (iVar3 == -1 && param_2 == -1) {
    return 1;
  }
  if (-1 < iVar3) {
    uVar2 = LZCOUNT(*param_1) + 0x20;
    if (param_1[1] != 0) {
      uVar2 = LZCOUNT(param_1[1]);
    }
    return CONCAT44(8 - (uVar2 >> 3),param_1);
  }
  puVar1 = (ushort *)(iVar3 * 2);
  if ((short)*puVar1 < 0) {
    uVar2 = FUN_019618d0(puVar1);
  }
  else {
    uVar2 = *puVar1 & 0x7f;
  }
  return CONCAT44(uVar2,(int)puVar1 +
                        ((uint)((short)(0x26U - (short)LZCOUNT(uVar2) & 0xff) * 0x25) >> 8));
}

