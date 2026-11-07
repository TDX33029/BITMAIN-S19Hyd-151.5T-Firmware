// FUN_01a9df74 @ 01a9df74 size=212 calls_out=2 calls_in=5
// strings: invalid varint

void FUN_01a9df74(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = param_2[1];
  uVar11 = 0;
  uVar5 = 0;
  uVar2 = 0;
  uVar10 = uVar6;
  if (9 < uVar6) {
    uVar10 = 10;
  }
  do {
    uVar7 = uVar2;
    if (uVar7 == uVar10) goto LAB_01a9e020;
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&DAT_00570850);
    }
    uVar6 = uVar6 - 1;
    uVar8 = uVar7 * 7 & 0x3f;
    bVar1 = *(byte *)*param_2;
    uVar9 = uVar8 - 0x20;
    *param_2 = (byte *)*param_2 + 1;
    uVar4 = (int)(char)bVar1 & 0x7f;
    param_2[1] = uVar6;
    uVar2 = uVar4 << uVar8;
    if (-1 < (int)uVar9) {
      uVar2 = 0;
    }
    uVar11 = uVar2 | uVar11;
    uVar2 = uVar4 >> (0x20 - uVar8 & 0xff);
    if (-1 < (int)uVar9) {
      uVar2 = uVar4 << (uVar9 & 0xff);
    }
    uVar5 = uVar2 | uVar5;
    uVar2 = uVar7 + 1;
  } while ((char)bVar1 < 0);
  if ((uVar7 == 9) && (1 < bVar1)) {
LAB_01a9e020:
    uVar3 = FUN_01aa0da0("invalid varint",0xe);
    param_1[1] = uVar3;
    uVar3 = 1;
  }
  else {
    param_1[2] = uVar11;
    uVar3 = 0;
    param_1[3] = uVar5;
  }
  *param_1 = uVar3;
  return;
}

