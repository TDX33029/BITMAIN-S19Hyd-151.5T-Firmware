// FUN_0190d438 @ 0190d438 size=112 calls_out=1 calls_in=3
// strings: Compression | Compression

void FUN_0190d438(undefined1 *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0192fac8(param_2,1);
  if (((byte *)uVar3 == (byte *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 1)) {
    *param_1 = 0xc;
    *(char **)(param_1 + 4) = "Compression";
    *(undefined4 *)(param_1 + 8) = 0xb;
    return;
  }
  bVar1 = *(byte *)uVar3;
  bVar2 = bVar1;
  if ((1 < bVar1) && (bVar2 = 3, bVar1 == 0x40)) {
    bVar2 = 2;
  }
  param_1[2] = bVar1;
  param_1[1] = bVar2;
  *param_1 = 0x18;
  return;
}

