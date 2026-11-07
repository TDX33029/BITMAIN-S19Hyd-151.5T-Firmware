// FUN_0199f1dc @ 0199f1dc size=864 calls_out=2 calls_in=3
// strings: internal error: entered unreachable code

void FUN_0199f1dc(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *unaff_r8;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  bool bVar15;
  
  pbVar2 = (byte *)(uint)*(byte *)(param_2 + 7);
  uVar13 = 10;
  if (pbVar2 != &DAT_00000003) {
    unaff_r8 = (byte *)(uint)*(byte *)((int)param_2 + 0x1d);
  }
  if (pbVar2 == &DAT_00000003 || unaff_r8 == &DAT_00000003) {
    *param_1 = 10;
    return;
  }
  uVar14 = *param_1;
  uVar5 = (uint)*(byte *)((int)param_2 + 0x1e);
  uVar11 = param_2[1];
  if ((*(byte *)((int)param_2 + 0x1e) & 1) == 0) {
    uVar5 = *(uint *)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 4);
    pbVar9 = (byte *)*param_2;
LAB_0199f2f8:
    pbVar8 = pbVar9;
    pbVar9 = pbVar8;
    uVar12 = uVar11;
LAB_0199f300:
    do {
      if (unaff_r8 < pbVar2) {
        *(uint *)(param_1 + 8) = uVar5;
        *(byte **)(param_1 + 4) = pbVar7;
        *param_1 = 10;
        return;
      }
      if (pbVar2 != &DAT_00000001) goto LAB_0199f354;
      pbVar2 = (byte *)0x2;
      *(undefined1 *)(param_2 + 7) = 2;
      if (uVar12 != 0) {
        if (uVar12 == 1) {
          pbVar9 = (byte *)(uint)*pbVar8;
          uVar12 = 1;
          if (pbVar9 != &DAT_0000002e) goto LAB_0199f300;
        }
        else {
          pbVar9 = (byte *)(uint)*pbVar8;
          bVar15 = pbVar9 != &DAT_0000002e;
          if (!bVar15) {
            pbVar9 = (byte *)(uint)pbVar8[1];
          }
          if (bVar15 || pbVar9 != &DAT_0000002f) goto LAB_0199f300;
        }
        *(byte **)(param_1 + 4) = pbVar7;
        if (uVar11 != 0) {
          pbVar7 = (byte *)(uVar11 - 1);
          uVar13 = 7;
          pbVar2 = pbVar8 + 1;
        }
        *(uint *)(param_1 + 8) = uVar5;
        if (uVar11 != 0) {
          *param_2 = pbVar2;
          param_2[1] = pbVar7;
          *param_1 = uVar13;
          return;
        }
        puVar6 = &DAT_01d28144;
        goto LAB_0199f440;
      }
    } while( true );
  }
  uVar10 = *(uint *)(param_1 + 8);
  pbVar7 = *(byte **)(param_1 + 4);
  pbVar9 = (byte *)*param_2;
  uVar12 = uVar11;
  do {
    pbVar8 = pbVar9;
    if (unaff_r8 < pbVar2) {
      *(byte **)(param_1 + 4) = pbVar7;
      *(uint *)(param_1 + 8) = uVar10;
      *param_1 = 10;
      return;
    }
    if (pbVar2 == &DAT_00000001) {
      bVar15 = uVar12 != 0;
      pbVar2 = (byte *)0x2;
      if (bVar15) {
        uVar5 = uVar12 - 1;
        uVar13 = 6;
      }
      *(byte **)(param_1 + 4) = pbVar7;
      *(undefined1 *)(param_2 + 7) = 2;
      if (bVar15) {
        pbVar2 = pbVar8 + 1;
      }
      *(uint *)(param_1 + 8) = uVar10;
      if (bVar15) {
        *param_2 = pbVar2;
        param_2[1] = uVar5;
        *param_1 = uVar13;
        return;
      }
      puVar6 = &DAT_01d28154;
LAB_0199f440:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(1,0,0,puVar6);
    }
    if (pbVar2 != (byte *)0x2) {
      *(byte **)(param_1 + 4) = pbVar7;
      *(uint *)(param_1 + 8) = uVar10;
LAB_0199f4e0:
      *param_1 = uVar14;
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d28174);
    }
    if (uVar12 == 0) {
      *(byte **)(param_1 + 4) = pbVar7;
      *(uint *)(param_1 + 8) = uVar10;
LAB_0199f468:
      *param_1 = 10;
      *(undefined1 *)(param_2 + 7) = 3;
      return;
    }
    uVar10 = 0;
    do {
      uVar5 = 1;
      if (pbVar8[uVar10] == 0x2f) {
        iVar3 = 1;
        goto LAB_0199f274;
      }
      uVar10 = uVar10 + 1;
    } while (uVar12 != uVar10);
    iVar3 = 0;
    uVar10 = uVar12;
LAB_0199f274:
    uVar14 = 10;
    if (uVar10 != 0) {
      if (uVar10 == 1) {
        if (*pbVar8 != 0x2e) goto LAB_0199f2b8;
      }
      else {
        if (uVar10 == 2) {
          bVar1 = *pbVar8;
          bVar15 = bVar1 != 0x2e;
          if (!bVar15) {
            bVar1 = pbVar8[1];
          }
          if (bVar15 || bVar1 != 0x2e) goto LAB_0199f2b8;
          uVar14 = 8;
        }
        else {
LAB_0199f2b8:
          uVar14 = 9;
        }
        uVar5 = 0;
      }
    }
    uVar4 = iVar3 + uVar10;
    if (uVar12 < uVar4) {
      *(byte **)(param_1 + 4) = pbVar8;
      *(uint *)(param_1 + 8) = uVar10;
LAB_0199f50c:
      *param_1 = uVar14;
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar4,uVar12,uVar12,&DAT_01d28164);
    }
    uVar12 = uVar12 - uVar4;
    pbVar2 = (byte *)0x2;
    *param_2 = pbVar8 + uVar4;
    param_2[1] = uVar12;
    pbVar7 = pbVar8;
    pbVar9 = pbVar8 + uVar4;
  } while (uVar5 != 0);
  *(byte **)(param_1 + 4) = pbVar8;
  *(uint *)(param_1 + 8) = uVar10;
LAB_0199f480:
  *param_1 = uVar14;
  return;
LAB_0199f354:
  if (pbVar2 != (byte *)0x2) {
    *(uint *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 4) = pbVar7;
    goto LAB_0199f4e0;
  }
  if (uVar12 == 0) {
    *(uint *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 4) = pbVar7;
    goto LAB_0199f468;
  }
  uVar5 = 0;
  do {
    bVar15 = true;
    if (pbVar8[uVar5] == 0x2f) {
      iVar3 = 1;
      goto LAB_0199f394;
    }
    uVar5 = uVar5 + 1;
  } while (uVar12 != uVar5);
  iVar3 = 0;
  uVar5 = uVar12;
LAB_0199f394:
  uVar14 = 10;
  if (uVar5 == 0) goto LAB_0199f3d8;
  if (uVar5 == 2) {
    bVar1 = *pbVar8;
    bVar15 = bVar1 == 0x2e;
    if (bVar15) {
      bVar1 = pbVar8[1];
    }
    if (!bVar15 || bVar1 != 0x2e) goto LAB_0199f3d0;
    uVar14 = 8;
  }
  else {
    if (uVar5 == 1) {
      pbVar9 = (byte *)(uint)*pbVar8;
    }
    if (uVar5 == 1 && pbVar9 == &DAT_0000002e) goto LAB_0199f3d8;
LAB_0199f3d0:
    uVar14 = 9;
  }
  bVar15 = false;
LAB_0199f3d8:
  uVar4 = iVar3 + uVar5;
  if (uVar12 < uVar4) {
    *(uint *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 4) = pbVar8;
    goto LAB_0199f50c;
  }
  uVar11 = uVar12 - uVar4;
  pbVar2 = (byte *)0x2;
  *param_2 = pbVar8 + uVar4;
  param_2[1] = uVar11;
  pbVar7 = pbVar8;
  pbVar9 = pbVar8 + uVar4;
  if (!bVar15) goto LAB_0199f478;
  goto LAB_0199f2f8;
LAB_0199f478:
  *(uint *)(param_1 + 8) = uVar5;
  *(byte **)(param_1 + 4) = pbVar8;
  goto LAB_0199f480;
}

