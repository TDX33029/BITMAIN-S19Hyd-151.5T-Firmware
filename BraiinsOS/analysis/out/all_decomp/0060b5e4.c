// FUN_0060b5e4 @ 0060b5e4 size=696 calls_out=0 calls_in=2
// strings: 

void FUN_0060b5e4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  iVar15 = param_2[1];
  iVar16 = iVar15 + -1;
  puVar3 = param_1 + 4;
  uVar10 = 0;
  uVar19 = 0;
  uVar17 = 0;
  uVar9 = 0;
  pbVar14 = (byte *)*param_2;
  do {
    if (iVar16 == -1) {
      iVar15 = 0;
      uVar2 = 0x13;
LAB_0060b684:
      *param_1 = 0x2e;
      param_1[1] = 0;
      param_1[3] = pbVar14;
      *(char *)((int)param_1 + 9) = (char)uVar9;
      *(undefined1 *)(param_1 + 2) = uVar2;
      *puVar3 = pbVar14;
      param_1[5] = iVar15;
      return;
    }
    pbVar13 = pbVar14 + 1;
    bVar1 = *pbVar14;
    uVar8 = (uint)bVar1;
    *param_2 = pbVar13;
    param_2[1] = iVar16;
    pbVar14 = pbVar13;
    if ((uVar10 == 0x3f) && (1 < uVar8)) {
      uVar2 = 6;
      goto LAB_0060b684;
    }
    uVar6 = uVar10 & 0x3f;
    uVar4 = uVar8 & 0x7f;
    uVar18 = uVar6 - 0x20;
    iVar16 = iVar16 + -1;
    uVar9 = uVar4 << uVar6;
    if (-1 < (int)uVar18) {
      uVar9 = 0;
    }
    uVar19 = uVar9 | uVar19;
    uVar9 = uVar4 >> (0x20 - uVar6 & 0xff);
    uVar10 = uVar10 + 7;
    if (-1 < (int)uVar18) {
      uVar9 = uVar4 << (uVar18 & 0xff);
    }
    uVar17 = uVar9 | uVar17;
    uVar9 = uVar8;
  } while (0x7fffffff < (uint)(int)(char)bVar1);
  uVar10 = 0;
  uVar4 = 0;
  uVar8 = 0;
  uVar9 = 0;
  do {
    if (iVar16 == -1) {
      param_2 = (undefined4 *)0x0;
      uVar2 = 0x13;
LAB_0060b73c:
      *param_1 = 0x2e;
      param_1[1] = 0;
      param_1[3] = pbVar13;
      *(char *)((int)param_1 + 9) = (char)uVar9;
      *(undefined1 *)(param_1 + 2) = uVar2;
      *puVar3 = pbVar13;
      param_1[5] = param_2;
      return;
    }
    pbVar14 = pbVar13 + 1;
    bVar1 = *pbVar13;
    uVar6 = (uint)bVar1;
    param_2[1] = iVar16;
    *param_2 = pbVar14;
    pbVar13 = pbVar14;
    if ((uVar10 == 0x3f) && (1 < uVar6)) {
      uVar2 = 6;
      goto LAB_0060b73c;
    }
    uVar18 = uVar10 & 0x3f;
    uVar7 = uVar6 & 0x7f;
    uVar11 = uVar18 - 0x20;
    iVar16 = iVar16 + -1;
    uVar9 = uVar7 << uVar18;
    if (-1 < (int)uVar11) {
      uVar9 = 0;
    }
    uVar4 = uVar9 | uVar4;
    uVar9 = uVar7 >> (0x20 - uVar18 & 0xff);
    uVar10 = uVar10 + 7;
    if (-1 < (int)uVar11) {
      uVar9 = uVar7 << (uVar11 & 0xff);
    }
    uVar8 = uVar9 | uVar8;
    uVar9 = uVar6;
  } while (0x7fffffff < (uint)(int)(char)bVar1);
  uVar6 = 0;
  uVar18 = 0;
  uVar10 = 0;
  uVar9 = 0;
  do {
    if (iVar16 == -1) {
      uVar8 = 0;
      uVar2 = 0x13;
LAB_0060b80c:
      *param_1 = 0x2e;
      param_1[1] = 0;
      param_1[3] = pbVar14;
      *(char *)((int)param_1 + 9) = (char)uVar9;
      *(undefined1 *)(param_1 + 2) = uVar2;
      *puVar3 = pbVar14;
      param_1[5] = uVar8;
      return;
    }
    pbVar13 = pbVar14 + 1;
    bVar1 = *pbVar14;
    uVar7 = (uint)bVar1;
    param_2[1] = iVar16;
    *param_2 = pbVar13;
    pbVar14 = pbVar13;
    if ((uVar6 == 0x3f) && (1 < uVar7)) {
      uVar2 = 6;
      goto LAB_0060b80c;
    }
    uVar5 = uVar6 & 0x3f;
    uVar12 = uVar7 & 0x7f;
    uVar11 = uVar5 - 0x20;
    uVar9 = uVar12 << uVar5;
    if (-1 < (int)uVar11) {
      uVar9 = 0;
    }
    iVar16 = iVar16 + -1;
    uVar18 = uVar9 | uVar18;
    uVar9 = uVar12 >> (0x20 - uVar5 & 0xff);
    uVar6 = uVar6 + 7;
    if (-1 < (int)uVar11) {
      uVar9 = uVar12 << (uVar11 & 0xff);
    }
    uVar10 = uVar9 | uVar10;
    uVar9 = uVar7;
    if ((uint)(int)(char)bVar1 < 0x80000000) {
      *puVar3 = 0x2e;
      param_1[5] = 0;
      param_1[8] = uVar19;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[1] = 0;
      param_1[2] = param_3;
      *param_1 = 0x1f;
      param_1[3] = param_4;
      param_1[9] = uVar17;
      param_1[10] = uVar4;
      param_1[0xb] = uVar8;
      param_1[0xc] = uVar18;
      param_1[0xd] = uVar10;
      return;
    }
  } while( true );
}

