// FUN_0193a9c4 @ 0193a9c4 size=456 calls_out=0 calls_in=2
// strings: 

void FUN_0193a9c4(undefined1 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint unaff_r4;
  bool bVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  uint in_r12;
  int local_28;
  
  pbVar11 = (byte *)*param_2;
  iVar13 = param_2[1];
  local_28 = 0;
  pbVar12 = pbVar11;
  iVar14 = iVar13;
  iVar17 = 0;
  do {
    iVar7 = iVar14;
    pbVar16 = pbVar12;
    if (iVar17 == 0) {
LAB_0193aa18:
      bVar3 = 0;
      if (iVar7 != 0) {
        bVar3 = *pbVar16;
      }
      unaff_r4 = 0;
      if (iVar7 != 0) {
        bVar3 = bVar3 == 0x30;
      }
      pbVar5 = pbVar16;
      iVar8 = iVar7;
      uVar15 = 0;
LAB_0193aa44:
      if (iVar8 == 0) {
        bVar9 = false;
LAB_0193aa78:
        *param_2 = pbVar5;
        param_2[1] = iVar8;
        pbVar1 = pbVar5;
        iVar2 = iVar8;
      }
      else {
        in_r12 = *pbVar5 - 0x30;
        *param_2 = pbVar5 + 1;
        param_2[1] = iVar8 + -1;
        bVar9 = 9 >= in_r12;
        pbVar1 = pbVar5 + 1;
        iVar2 = iVar8 + -1;
        if (9 < in_r12) goto LAB_0193aa78;
      }
      iVar8 = iVar2;
      pbVar5 = pbVar1;
      if (bVar9) {
        bVar10 = 0;
        uVar6 = (unaff_r4 & 0xff) * 4 + (unaff_r4 & 0xff);
        if ((((uVar6 >> 7 != 0) || (0xff < in_r12)) ||
            (unaff_r4 = (uVar6 * 2 & 0xff) + (in_r12 & 0xff), unaff_r4 >> 8 != 0)) ||
           (bVar9 = 2 < uVar15, uVar15 = uVar15 + 1, bVar9)) goto LAB_0193ab10;
        goto LAB_0193aa44;
      }
      if (uVar15 == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = bVar3 ^ 1 | uVar15 == 1;
        if (bVar10 != 0) goto LAB_0193ab20;
      }
LAB_0193ab10:
      *param_2 = pbVar16;
      param_2[1] = iVar7;
      pbVar5 = pbVar16;
      iVar8 = iVar7;
LAB_0193ab20:
      if ((bVar10 & 1) == 0) goto LAB_0193ab28;
    }
    else {
      bVar10 = 0;
      if ((iVar14 != 0) && (pbVar16 = pbVar12 + 1, *pbVar12 == 0x2e)) {
        iVar7 = iVar14 + -1;
        goto LAB_0193aa18;
      }
LAB_0193ab28:
      *param_2 = pbVar12;
      param_2[1] = iVar14;
      pbVar5 = pbVar12;
      iVar8 = iVar14;
    }
    iVar14 = iVar8;
    if ((bVar10 & 1) == 0) {
      *param_2 = pbVar11;
      param_2[1] = iVar13;
      uVar4 = 0;
      goto LAB_0193ab78;
    }
    iVar7 = iVar17 + 1;
    *(char *)((int)&local_28 + iVar17) = (char)unaff_r4;
    pbVar12 = pbVar5;
    iVar17 = iVar7;
    if (iVar7 == 4) {
      uVar4 = 1;
      iVar13 = local_28;
LAB_0193ab78:
      *(int *)(param_1 + 1) = iVar13;
      *param_1 = uVar4;
      return;
    }
  } while( true );
}

