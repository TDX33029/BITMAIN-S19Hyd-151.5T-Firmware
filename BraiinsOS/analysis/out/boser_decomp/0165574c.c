// FUN_0165574c @ 0165574c size=232 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_0165574c(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  bVar1 = *pbVar3;
  if (((char)bVar1 < '\0') ||
     ((*(uint *)(param_1[2] + (uint)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
    *param_1 = pbVar3 + 1;
    param_1[1] = uVar4 - 1;
    return CONCAT44(3,&DAT_004c150d + (uint)bVar1 * 3);
  }
  uVar2 = 1;
  do {
    uVar5 = uVar2;
    if (uVar4 == uVar5) {
      *param_1 = 1;
      param_1[1] = 0;
      return CONCAT44(uVar4,pbVar3);
    }
    uVar6 = (uint)(char)pbVar3[uVar5];
  } while ((-1 < (int)uVar6) &&
          (uVar2 = uVar5 + 1, (*(uint *)(param_1[2] + (uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0)
          );
  if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d06bd8);
  }
  *param_1 = pbVar3 + uVar5;
  param_1[1] = uVar4 - uVar5;
  return CONCAT44(uVar5,pbVar3);
}

