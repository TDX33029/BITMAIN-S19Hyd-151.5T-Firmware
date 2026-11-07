// FUN_01b884c8 @ 01b884c8 size=232 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01b884c8(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  puVar5 = (undefined4 *)*param_1;
  iVar3 = param_1[1];
  iVar9 = param_1[4];
  iVar10 = param_1[6];
  iVar8 = param_1[5];
  uVar1 = 0;
  puVar6 = puVar5;
  for (iVar13 = 0; iVar13 != iVar3 - (int)puVar5 >> 3; iVar13 = iVar13 + 1) {
    uVar11 = (uint)*(ushort *)(puVar6 + 1);
    uVar4 = (uint)*(ushort *)((int)puVar6 + 6);
    uVar7 = *puVar6;
    uVar12 = uVar11;
    if (0x3f < uVar11) {
      uVar12 = 0x32 - LZCOUNT(uVar11);
    }
    if (uVar11 < 0x40) {
      uVar12 = (uint)(byte)""[uVar12];
    }
    uVar11 = uVar4;
    if (0x7f < uVar4) {
      uVar11 = LZCOUNT(uVar4);
    }
    *(char *)(iVar9 + iVar13) = (char)uVar12;
    if (uVar4 < 0x80) {
      cVar2 = (&DAT_00561d1c)[uVar11];
    }
    else {
      cVar2 = 'C' - (char)uVar11;
    }
    *(char *)(iVar10 + iVar13) = '\x1f' - (char)LZCOUNT(uVar7);
    if (0x18 < LZCOUNT(uVar7) - 7U) {
      uVar1 = 1;
    }
    *(char *)(iVar8 + iVar13) = cVar2;
    puVar6 = puVar6 + 2;
  }
  if (param_1[9] == 1) {
    *(undefined1 *)(iVar9 + param_1[10]) = 0x23;
  }
  if (param_1[9] == 2) {
    *(undefined1 *)(iVar8 + param_1[10]) = 0x34;
  }
  return uVar1;
}

