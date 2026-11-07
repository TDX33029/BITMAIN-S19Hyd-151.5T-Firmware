// FUN_015e51f8 @ 015e51f8 size=908 calls_out=2 calls_in=4
// strings: 

void FUN_015e51f8(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *unaff_r8;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  bool bVar14;
  
  pbVar2 = (byte *)(uint)*(byte *)(param_2 + 7);
  uVar12 = 10;
  if (pbVar2 != (byte *)0x3) {
    unaff_r8 = (byte *)(uint)*(byte *)((int)param_2 + 0x1d);
  }
  if (pbVar2 == (byte *)0x3 || unaff_r8 == (byte *)0x3) {
    *param_1 = 10;
    return;
  }
  uVar13 = *param_1;
  uVar5 = (uint)*(byte *)((int)param_2 + 0x1e);
  uVar10 = param_2[1];
  if ((*(byte *)((int)param_2 + 0x1e) & 1) == 0) {
    uVar5 = *(uint *)(param_1 + 8);
    pbVar6 = *(byte **)(param_1 + 4);
    pbVar8 = (byte *)*param_2;
LAB_015e531c:
    pbVar7 = pbVar8;
    pbVar8 = pbVar7;
    uVar11 = uVar10;
LAB_015e5324:
    do {
      if (unaff_r8 < pbVar2) {
        *(uint *)(param_1 + 8) = uVar5;
        *(byte **)(param_1 + 4) = pbVar6;
        *param_1 = 10;
        return;
      }
      if (pbVar2 != &DAT_00000001) goto LAB_015e5378;
      pbVar2 = &SUB_00000002;
      *(undefined1 *)(param_2 + 7) = 2;
      if (uVar11 != 0) {
        if (uVar11 == 1) {
          pbVar8 = (byte *)(uint)*pbVar7;
          uVar11 = 1;
          if (pbVar8 != &DAT_0000002e) goto LAB_015e5324;
        }
        else {
          pbVar8 = (byte *)(uint)*pbVar7;
          bVar14 = pbVar8 != &DAT_0000002e;
          if (!bVar14) {
            pbVar8 = (byte *)(uint)pbVar7[1];
          }
          if (bVar14 || pbVar8 != &DAT_0000002f) goto LAB_015e5324;
        }
        *(byte **)(param_1 + 4) = pbVar6;
        if (uVar10 != 0) {
          pbVar6 = (byte *)(uVar10 - 1);
          uVar12 = 7;
          pbVar2 = pbVar7 + 1;
        }
        *(uint *)(param_1 + 8) = uVar5;
        if (uVar10 != 0) {
          *param_2 = pbVar2;
          param_2[1] = pbVar6;
          *param_1 = uVar12;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(1,0,0,&DAT_018ab570);
      }
    } while( true );
  }
  uVar9 = *(uint *)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 4);
  pbVar8 = (byte *)*param_2;
  uVar11 = uVar10;
  do {
    pbVar7 = pbVar8;
    if (unaff_r8 < pbVar2) {
      *(byte **)(param_1 + 4) = pbVar6;
      *(uint *)(param_1 + 8) = uVar9;
      *param_1 = 10;
      return;
    }
    if (pbVar2 == &DAT_00000001) {
      bVar14 = uVar11 != 0;
      pbVar2 = &SUB_00000002;
      if (bVar14) {
        uVar5 = uVar11 - 1;
        uVar12 = 6;
      }
      *(byte **)(param_1 + 4) = pbVar6;
      *(undefined1 *)(param_2 + 7) = 2;
      if (bVar14) {
        pbVar2 = pbVar7 + 1;
      }
      *(uint *)(param_1 + 8) = uVar9;
      if (bVar14) {
        *param_2 = pbVar2;
        param_2[1] = uVar5;
        *param_1 = uVar12;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(1,0,0,&DAT_018ab580);
    }
    if (pbVar2 != &SUB_00000002) {
      *(byte **)(param_1 + 4) = pbVar6;
      *(uint *)(param_1 + 8) = uVar9;
LAB_015e5528:
      *param_1 = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ab5a0);
    }
    if (uVar11 == 0) {
      *(byte **)(param_1 + 4) = pbVar6;
      *(uint *)(param_1 + 8) = uVar9;
      *param_1 = 10;
      *(undefined1 *)(param_2 + 7) = 3;
      return;
    }
    uVar9 = 0;
    do {
      uVar5 = 1;
      if (pbVar7[uVar9] == 0x2f) {
        iVar3 = 1;
        goto LAB_015e5290;
      }
      uVar9 = uVar9 + 1;
    } while (uVar11 != uVar9);
    iVar3 = 0;
    uVar9 = uVar11;
LAB_015e5290:
    uVar13 = 10;
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        if (*pbVar7 != 0x2e) goto LAB_015e52d4;
      }
      else {
        if (uVar9 == 2) {
          bVar1 = *pbVar7;
          bVar14 = bVar1 != 0x2e;
          if (!bVar14) {
            bVar1 = pbVar7[1];
          }
          if (bVar14 || bVar1 != 0x2e) goto LAB_015e52d4;
          uVar13 = 8;
        }
        else {
LAB_015e52d4:
          uVar13 = 9;
        }
        uVar5 = 0;
      }
    }
    uVar4 = iVar3 + uVar9;
    if (uVar11 < uVar4) {
      *(byte **)(param_1 + 4) = pbVar7;
      *(uint *)(param_1 + 8) = uVar9;
LAB_015e5554:
      *param_1 = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar4,uVar11,uVar11,&DAT_018ab590);
    }
    uVar11 = uVar11 - uVar4;
    pbVar2 = &SUB_00000002;
    *param_2 = pbVar7 + uVar4;
    param_2[1] = uVar11;
    pbVar6 = pbVar7;
    pbVar8 = pbVar7 + uVar4;
    if (uVar5 == 0) {
      *(byte **)(param_1 + 4) = pbVar7;
      *(uint *)(param_1 + 8) = uVar9;
      *param_1 = uVar13;
      return;
    }
  } while( true );
LAB_015e5378:
  if (pbVar2 != &SUB_00000002) {
    *(uint *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 4) = pbVar6;
    goto LAB_015e5528;
  }
  if (uVar11 == 0) {
    *(uint *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 4) = pbVar6;
    *param_1 = 10;
    *(undefined1 *)(param_2 + 7) = 3;
    return;
  }
  uVar5 = 0;
  do {
    bVar14 = true;
    if (pbVar7[uVar5] == 0x2f) {
      iVar3 = 1;
      uVar13 = 10;
      if (uVar5 != 0) goto LAB_015e53d0;
      goto LAB_015e5408;
    }
    uVar5 = uVar5 + 1;
  } while (uVar11 != uVar5);
  iVar3 = 0;
  uVar13 = 10;
  uVar5 = uVar11;
  if (uVar11 == 0) goto LAB_015e5408;
LAB_015e53d0:
  uVar13 = 10;
  if (uVar5 == 2) {
    bVar1 = *pbVar7;
    bVar14 = bVar1 == 0x2e;
    if (bVar14) {
      bVar1 = pbVar7[1];
    }
    if (!bVar14 || bVar1 != 0x2e) goto LAB_015e5400;
    uVar13 = 8;
  }
  else {
    if (uVar5 == 1) {
      pbVar8 = (byte *)(uint)*pbVar7;
    }
    if (uVar5 == 1 && pbVar8 == &DAT_0000002e) goto LAB_015e5408;
LAB_015e5400:
    uVar13 = 9;
  }
  bVar14 = false;
LAB_015e5408:
  uVar4 = iVar3 + uVar5;
  if (uVar11 < uVar4) {
    *(uint *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 4) = pbVar7;
    goto LAB_015e5554;
  }
  uVar10 = uVar11 - uVar4;
  pbVar2 = &SUB_00000002;
  *param_2 = pbVar7 + uVar4;
  param_2[1] = uVar10;
  pbVar6 = pbVar7;
  pbVar8 = pbVar7 + uVar4;
  if (!bVar14) {
    *(uint *)(param_1 + 8) = uVar5;
    *(byte **)(param_1 + 4) = pbVar7;
    *param_1 = uVar13;
    return;
  }
  goto LAB_015e531c;
}

