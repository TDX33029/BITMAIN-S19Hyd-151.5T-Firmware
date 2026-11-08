// FUN_015f2bc0 @ 015f2bc0 size=128 calls_out=0 calls_in=3
// strings: 

int FUN_015f2bc0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  
  puVar6 = (uint *)*param_1;
  iVar10 = param_1[3];
  puVar8 = puVar6 + 1;
  uVar9 = ~*puVar6 & 0x80808080;
  do {
    if (iVar10 == 0) {
      return 0;
    }
    puVar7 = puVar8;
    if (uVar9 == 0) {
      do {
        puVar8 = puVar7 + 1;
        uVar9 = *puVar7;
        puVar6 = puVar6 + -0x32;
        puVar7 = puVar8;
      } while ((uVar9 & 0x80808080) == 0x80808080);
      uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = uVar9 >> 8;
    uVar2 = uVar9 >> 0x10;
    uVar3 = uVar9 >> 0x18;
    uVar4 = uVar9 << 0x18;
    uVar9 = uVar9 - 1 & uVar9;
    iVar10 = iVar10 + -1;
    sVar5 = (short)((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3) >> 3
                   );
  } while (*(char *)((int)puVar6 + -sVar5 * 0x32 + -0x32) == '\x02');
  return (int)puVar6 + -sVar5 * 0x32 + -0x32;
}

