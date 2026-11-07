// FUN_010da284 @ 010da284 size=596 calls_out=4 calls_in=1
// strings: capacity overflow

void FUN_010da284(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  iVar10 = param_2[5];
  puVar13 = (uint *)(param_1 + 0xf0);
  uVar17 = *puVar13;
  uVar16 = param_2[6] - iVar10;
  pbVar11 = (byte *)*param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[4];
  uVar2 = 0x3b;
  uVar7 = uVar17;
  if (0x3b < uVar17) {
    uVar7 = *(uint *)(param_1 + 4);
    uVar2 = uVar17;
  }
  pbVar8 = (byte *)param_2[1];
  iVar9 = param_2[2];
  if (uVar2 - uVar7 < uVar16) {
    if (CARRY4(uVar7,uVar16)) {
LAB_010da4c0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("capacity overflow",0x11,&DAT_0188b950);
    }
    uVar2 = 0xffffffff >> LZCOUNT((uVar7 + uVar16) - 1);
    if (uVar7 + uVar16 < 2) {
      uVar2 = 0;
    }
    if (0xfffffffe < uVar2) goto LAB_010da4c0;
    iVar1 = FUN_010d974c(param_1,uVar2 + 1);
    if (iVar1 != -0x7fffffff) {
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874();
      }
      goto LAB_010da4c0;
    }
    uVar17 = *puVar13;
  }
  puVar3 = (uint *)(param_1 + 4);
  if (uVar17 < 0x3c) {
    uVar2 = 0x3b;
    puVar4 = puVar13;
    uVar7 = uVar17;
    puVar6 = puVar3;
    if (0x3a < uVar17) goto LAB_010da3d8;
  }
  else {
    uVar7 = *(uint *)(param_1 + 4);
    puVar4 = puVar3;
    puVar6 = *(uint **)(param_1 + 8);
    uVar2 = uVar17;
    if (uVar17 <= uVar7) goto LAB_010da3d8;
  }
  iVar1 = (iVar10 + uVar2) - uVar7;
  pbVar12 = pbVar11;
  do {
    if (uVar14 < uVar15) {
      piVar5 = (int *)(iVar9 + uVar14 * 8);
      if (iVar10 != *piVar5) {
        if (pbVar12 == pbVar8) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        goto LAB_010da3b8;
      }
      uVar16 = piVar5[1];
      uVar14 = uVar14 + 1;
      pbVar11 = pbVar12;
    }
    else {
      if (pbVar12 == pbVar8) {
        *puVar4 = uVar7;
        return;
      }
LAB_010da3b8:
      pbVar11 = pbVar12 + 1;
      uVar16 = (uint)*pbVar12;
      if (uVar16 - 0x41 < 0x1a) {
        uVar16 = uVar16 | 0x20;
      }
    }
    puVar6[uVar7] = uVar16;
    uVar7 = uVar7 + 1;
    iVar10 = iVar10 + 1;
    pbVar12 = pbVar11;
  } while (uVar2 != uVar7);
  uVar7 = uVar2;
  iVar10 = iVar1;
LAB_010da3d8:
  *puVar4 = uVar7;
  if (uVar15 <= uVar14) goto LAB_010da420;
LAB_010da3e8:
  piVar5 = (int *)(iVar9 + uVar14 * 8);
  if (iVar10 != *piVar5) {
    pbVar12 = pbVar11;
    if (pbVar11 != pbVar8) goto LAB_010da434;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = piVar5[1];
  uVar14 = uVar14 + 1;
  uVar7 = *puVar13;
  if (0x3b < uVar7) goto LAB_010da450;
  do {
    puVar4 = puVar3;
    puVar6 = puVar13;
    uVar16 = 0x3b;
    uVar17 = uVar7;
    while( true ) {
      if (uVar17 == uVar16) {
        FUN_010d990c();
        uVar17 = *(uint *)(param_1 + 4);
        puVar4 = *(uint **)(param_1 + 8);
        puVar6 = puVar3;
      }
      puVar4[uVar17] = uVar2;
      iVar10 = iVar10 + 1;
      *puVar6 = *puVar6 + 1;
      if (uVar14 < uVar15) goto LAB_010da3e8;
LAB_010da420:
      pbVar12 = pbVar11;
      if (pbVar11 == pbVar8) {
        return;
      }
LAB_010da434:
      pbVar11 = pbVar12 + 1;
      uVar2 = (uint)*pbVar12;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      uVar7 = *puVar13;
      if (uVar7 < 0x3c) break;
LAB_010da450:
      uVar17 = *(uint *)(param_1 + 4);
      puVar4 = *(uint **)(param_1 + 8);
      puVar6 = puVar3;
      uVar16 = uVar7;
    }
  } while( true );
}

