// FUN_016da32c @ 016da32c size=680 calls_out=3 calls_in=1
// strings: 

undefined1 * FUN_016da32c(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  
  if (*(char *)(*param_1 + 100) == '\0') {
    puVar12 = (undefined1 *)FUN_016d923c(param_1);
    return puVar12;
  }
  pbVar13 = (byte *)param_1[2];
  puVar12 = &DAT_00110000;
  pbVar7 = *(byte **)(*param_1 + 0x50);
  if (pbVar7 == pbVar13) {
    return puVar12;
  }
  uVar2 = FUN_016d4a28(param_1);
  iVar4 = 1;
  if (0x7f < uVar2) {
    iVar4 = 2;
  }
  if ((0x7ff < uVar2) && (iVar4 = 4, uVar2 < 0x10000)) {
    iVar4 = 3;
  }
  iVar3 = param_1[1];
  pbVar7 = pbVar7 + iVar4;
  if (pbVar7 == (byte *)0x0) {
LAB_016da3bc:
    pbVar10 = pbVar7 + iVar3;
    pbVar8 = (byte *)0x0;
    bVar6 = false;
LAB_016da3d4:
    pbVar9 = pbVar8;
    pbVar8 = pbVar10;
    if (pbVar10 != pbVar13 + iVar3) {
      do {
        pbVar10 = pbVar8 + 1;
        uVar2 = (uint)*pbVar8;
        if (0x7fffffff < (uint)(int)(char)*pbVar8) {
          if (uVar2 < 0xe0) {
            uVar2 = pbVar8[1] & 0x3f | (uVar2 & 0x1f) << 6;
            pbVar10 = pbVar8 + 2;
          }
          else {
            uVar11 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
            if (uVar2 < 0xf0) {
              uVar2 = uVar11 | (uVar2 & 0x1f) << 0xc;
              pbVar10 = pbVar8 + 3;
            }
            else {
              pbVar10 = pbVar8 + 4;
              uVar2 = pbVar8[3] & 0x3f | uVar11 << 6 | (uVar2 & 7) << 0x12;
            }
          }
        }
        pbVar8 = pbVar10 + ((int)pbVar9 - (int)pbVar8);
        if ((4 < uVar2 - 9) && (uVar2 != 0x20)) {
          if (uVar2 < 0x80) goto LAB_016da4e8;
          uVar11 = uVar2 >> 8;
          if (uVar11 < 0x20) {
            if (uVar11 == 0) {
              bVar1 = (&DAT_00533bcd)[uVar2 & 0xff] & 1;
joined_r0x016da4e4:
              if (bVar1 == 0) goto LAB_016da4e8;
            }
            else if ((uVar11 != 0x16) || (uVar2 != 0x1680)) goto LAB_016da4e8;
          }
          else {
            if (uVar11 == 0x20) {
              bVar1 = (&DAT_00533bcd)[uVar2 & 0xff] & 2;
              goto joined_r0x016da4e4;
            }
            if ((uVar11 != 0x30) || (uVar2 != 0x3000)) goto LAB_016da4e8;
          }
        }
        pbVar9 = pbVar8;
        pbVar8 = pbVar10;
        if (pbVar10 == pbVar13 + iVar3) break;
      } while( true );
    }
    goto LAB_016da514;
  }
  if (pbVar7 < pbVar13) {
    if (-0x41 < (char)pbVar7[iVar3]) goto LAB_016da3bc;
  }
  else if (pbVar7 == pbVar13) goto LAB_016da3bc;
  puVar5 = &DAT_01d09ce8;
  goto LAB_016da53c;
LAB_016da4e8:
  uVar11 = 0x23;
  if (bVar6) {
    uVar11 = 10;
  }
  bVar6 = (bool)(uVar2 == 0x23 & (bVar6 ^ 1U));
  if (uVar2 != uVar11) goto code_r0x016da510;
  goto LAB_016da3d4;
code_r0x016da510:
  pbVar7 = pbVar9 + (int)pbVar7;
LAB_016da514:
  if (pbVar7 == (byte *)0x0) {
LAB_016da550:
    if (pbVar7 != pbVar13) {
      pbVar7 = pbVar7 + iVar3;
      puVar12 = (undefined1 *)(uint)*pbVar7;
      if (0x7fffffff < (uint)(int)(char)*pbVar7) {
        if (puVar12 < (undefined1 *)0xe0) {
          puVar12 = (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
        }
        else {
          uVar2 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
          if (puVar12 < (undefined1 *)0xf0) {
            puVar12 = (undefined1 *)(uVar2 | ((uint)puVar12 & 0x1f) << 0xc);
          }
          else {
            puVar12 = (undefined1 *)(pbVar7[3] & 0x3f | uVar2 << 6 | ((uint)puVar12 & 7) << 0x12);
          }
        }
      }
    }
    return puVar12;
  }
  if (pbVar7 < pbVar13) {
    if (-0x41 < (char)pbVar7[iVar3]) goto LAB_016da550;
  }
  else if (pbVar7 == pbVar13) goto LAB_016da550;
  puVar5 = &DAT_01d09cf8;
LAB_016da53c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(iVar3,pbVar13,pbVar7,pbVar13,puVar5);
}

