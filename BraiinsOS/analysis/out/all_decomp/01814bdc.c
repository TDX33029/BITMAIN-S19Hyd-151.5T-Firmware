// FUN_01814bdc @ 01814bdc size=1868 calls_out=5 calls_in=1
// strings: 

int FUN_01814bdc(int *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  
  piVar9 = (int *)*param_1;
  uVar13 = piVar9[1];
  uVar12 = param_1[3] - 5U;
  if ((uint)param_1[0xb] <= param_1[3] - 5U) {
    uVar12 = param_1[0xb];
  }
  uVar1 = (uint)(param_2 == 4);
  uVar6 = uVar13;
  uVar16 = uVar1;
LAB_01814d8c:
  do {
    uVar5 = param_1[0x5af] + 0x2a >> 3;
    if ((uint)piVar9[4] < uVar5) {
LAB_01814fd0:
      bVar15 = false;
      uVar12 = uVar13 - uVar6;
      if (uVar12 != 0) goto LAB_01814fe8;
      uVar12 = param_1[0x1b];
      goto LAB_01814e9c;
    }
    uVar5 = piVar9[4] - uVar5;
    uVar11 = param_1[0x1b] - param_1[0x17];
    uVar7 = uVar11 + uVar6;
    if (uVar7 < 0xffff) {
      uVar8 = uVar7;
    }
    else {
      uVar8 = 0xffff;
    }
    if (uVar5 <= uVar8) {
      uVar8 = uVar5;
    }
    uVar5 = uVar1;
    if (uVar8 < uVar12) {
      if (uVar8 == 0 && param_2 != 4 || (uVar7 != uVar8 || param_2 == 0)) goto LAB_01814fd0;
    }
    else if (uVar7 != uVar8) {
      uVar5 = 0;
    }
    FUN_0181d7b0(param_1,0,0,uVar5);
    *(byte *)(param_1[2] + param_1[5] + -4) = (byte)uVar8;
    bVar2 = (byte)(uVar8 >> 8);
    *(byte *)(param_1[2] + param_1[5] + -3) = bVar2;
    *(byte *)(param_1[2] + param_1[5] + -2) = ~(byte)uVar8;
    *(byte *)(param_1[2] + param_1[5] + -1) = ~bVar2;
    iVar10 = *param_1;
    iVar14 = *(int *)(iVar10 + 0x1c);
    FUN_0181d958(iVar14);
    uVar6 = *(uint *)(iVar14 + 0x14);
    if (*(uint *)(iVar10 + 0x10) <= *(uint *)(iVar14 + 0x14)) {
      uVar6 = *(uint *)(iVar10 + 0x10);
    }
    if (uVar6 != 0) {
      FUN_0181e3d4(*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar14 + 0x10));
      iVar4 = *(int *)(iVar14 + 0x14);
      *(uint *)(iVar10 + 0xc) = *(int *)(iVar10 + 0xc) + uVar6;
      iVar4 = iVar4 - uVar6;
      *(uint *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + uVar6;
      *(uint *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + uVar6;
      iVar3 = *(int *)(iVar10 + 0x10) - uVar6;
      if (iVar4 == 0) {
        uVar6 = *(uint *)(iVar14 + 8);
      }
      *(int *)(iVar10 + 0x10) = iVar3;
      *(int *)(iVar14 + 0x14) = iVar4;
      if (iVar4 == 0) {
        *(uint *)(iVar14 + 0x10) = uVar6;
      }
    }
    piVar9 = (int *)*param_1;
    if (uVar11 != 0) {
      if (uVar8 < uVar11) {
        uVar11 = uVar8;
      }
      uVar8 = uVar8 - uVar11;
      FUN_0181e3d4(piVar9[3],param_1[0xe] + param_1[0x17],uVar11);
      piVar9 = (int *)*param_1;
      iVar10 = param_1[0x17];
      piVar9[3] = piVar9[3] + uVar11;
      piVar9[4] = piVar9[4] - uVar11;
      piVar9[5] = piVar9[5] + uVar11;
      param_1[0x17] = iVar10 + uVar11;
    }
    uVar6 = piVar9[1];
    if (uVar8 != 0) {
      iVar10 = piVar9[3];
      if (uVar8 < uVar6) {
        uVar11 = uVar8;
      }
      else {
        uVar11 = uVar6;
      }
      if (uVar11 != 0) {
        piVar9[1] = uVar6 - uVar11;
        FUN_0181e3d4(iVar10,*piVar9,uVar11);
        if (*(int *)(piVar9[7] + 0x18) == 1) {
          iVar10 = FUN_01814330(piVar9[0xc],iVar10,uVar11);
          piVar9[0xc] = iVar10;
        }
        else if (*(int *)(piVar9[7] + 0x18) == 2) {
          iVar10 = FUN_01814534(piVar9[0xc],iVar10,uVar11);
          piVar9[0xc] = iVar10;
        }
        *piVar9 = *piVar9 + uVar11;
        piVar9[2] = piVar9[2] + uVar11;
        piVar9 = (int *)*param_1;
        iVar10 = piVar9[3];
        uVar6 = piVar9[1];
      }
      piVar9[3] = iVar10 + uVar8;
      piVar9[4] = piVar9[4] - uVar8;
      piVar9[5] = piVar9[5] + uVar8;
      if (uVar5 != 0) break;
      goto LAB_01814d8c;
    }
  } while (uVar5 == 0);
  bVar15 = true;
  uVar12 = uVar13 - uVar6;
  if (uVar12 == 0) {
    uVar12 = param_1[0x1b];
  }
  else {
LAB_01814fe8:
    uVar5 = param_1[0xb];
    iVar10 = param_1[0xe];
    if (uVar12 < uVar5) {
      uVar11 = param_1[0x1b];
      if (param_1[0xf] - uVar11 <= uVar12) {
        param_1[0x1b] = uVar11 - uVar5;
        FUN_0181e3d4(iVar10,iVar10 + uVar5,uVar11 - uVar5);
        uVar11 = param_1[0x1b];
        if ((uint)param_1[0x5ac] < 2) {
          param_1[0x5ac] = param_1[0x5ac] + 1;
        }
        piVar9 = (int *)*param_1;
        iVar10 = param_1[0xe];
        if (uVar11 < (uint)param_1[0x5ad]) {
          param_1[0x5ad] = uVar11;
        }
      }
      FUN_0181e3d4(iVar10 + uVar11,*piVar9 + (uVar6 - uVar13),uVar12);
      uVar13 = param_1[0xb] - param_1[0x5ad];
      if (uVar12 < uVar13) {
        uVar13 = uVar12;
      }
      uVar13 = param_1[0x5ad] + uVar13;
      iVar10 = param_1[0x1b];
      param_1[0x1b] = uVar12 + iVar10;
      uVar12 = uVar12 + iVar10;
    }
    else {
      iVar14 = *piVar9;
      param_1[0x5ac] = 2;
      FUN_0181e3d4(iVar10,iVar14 - uVar5);
      uVar13 = param_1[0xb];
      param_1[0x1b] = uVar13;
      uVar12 = uVar13;
    }
    param_1[0x5ad] = uVar13;
    param_1[0x17] = uVar12;
  }
LAB_01814e9c:
  if ((uint)param_1[0x5b0] < uVar12) {
    param_1[0x5b0] = uVar12;
  }
  if (bVar15) {
    return 3;
  }
  piVar9 = (int *)*param_1;
  uVar13 = piVar9[1];
  if ((param_2 & 0xfffffffb) == 0) {
    uVar5 = param_1[0xf] - uVar12;
    if (uVar5 < uVar13) {
LAB_01814ed4:
      iVar10 = param_1[0xb];
      if (iVar10 <= param_1[0x17]) {
        param_1[0x1b] = uVar12 - iVar10;
        param_1[0x17] = param_1[0x17] - iVar10;
        FUN_0181e3d4(param_1[0xe],param_1[0xe] + iVar10);
        piVar9 = (int *)*param_1;
        if ((uint)param_1[0x5ac] < 2) {
          param_1[0x5ac] = param_1[0x5ac] + 1;
        }
        uVar5 = uVar5 + param_1[0xb];
        uVar12 = param_1[0x1b];
        uVar13 = piVar9[1];
        if (uVar12 < (uint)param_1[0x5ad]) {
          param_1[0x5ad] = uVar12;
        }
      }
    }
    if (uVar13 <= uVar5) {
      uVar5 = uVar13;
    }
    uVar6 = uVar5;
    if (uVar5 != 0) {
LAB_01815194:
      iVar10 = param_1[0xe] + uVar12;
      piVar9[1] = uVar13 - uVar6;
      FUN_0181e3d4(iVar10,*piVar9,uVar6);
      if (*(int *)(piVar9[7] + 0x18) == 1) {
        iVar10 = FUN_01814330(piVar9[0xc],iVar10,uVar6);
        piVar9[0xc] = iVar10;
      }
      else if (*(int *)(piVar9[7] + 0x18) == 2) {
        iVar10 = FUN_01814534(piVar9[0xc],iVar10,uVar6);
        piVar9[0xc] = iVar10;
      }
      iVar10 = param_1[0x5ad];
      uVar11 = param_1[0xb];
      *piVar9 = *piVar9 + uVar6;
      uVar5 = uVar11 - iVar10;
      uVar13 = param_1[0x17];
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      piVar9[2] = piVar9[2] + uVar6;
      uVar12 = uVar6 + param_1[0x1b];
      param_1[0x1b] = uVar12;
      param_1[0x5ad] = iVar10 + uVar5;
      goto LAB_01814efc;
    }
    uVar13 = param_1[0x17];
  }
  else {
    if (uVar13 != 0) {
      uVar5 = param_1[0xf] - uVar12;
      uVar6 = uVar13;
      if (uVar5 < uVar13) goto LAB_01814ed4;
      goto LAB_01815194;
    }
    uVar13 = param_1[0x17];
    if (uVar12 == uVar13) {
      return 1;
    }
  }
  uVar11 = param_1[0xb];
LAB_01814efc:
  if ((uint)param_1[0x5b0] < uVar12) {
    param_1[0x5b0] = uVar12;
  }
  uVar12 = uVar12 - uVar13;
  uVar6 = param_1[3] - (param_1[0x5af] + 0x2a >> 3);
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  if (uVar6 < uVar11) {
    uVar11 = uVar6;
  }
  iVar10 = 0;
  uVar5 = uVar12;
  if (uVar12 < uVar11) {
    uVar11 = uVar1;
    if (uVar12 != 0) {
      uVar11 = 1;
    }
    if (param_2 == 0) {
      uVar11 = 0;
    }
    if (uVar11 == 0) {
      return 0;
    }
    bVar15 = uVar6 == uVar12;
    if (uVar12 <= uVar6) {
      bVar15 = *(int *)(*param_1 + 4) == 0;
    }
    if (!bVar15) {
      return 0;
    }
    iVar10 = uVar1 << 1;
  }
  else {
    if (uVar6 < uVar12) {
      uVar5 = uVar6;
    }
    if (param_2 == 4) {
      bVar15 = uVar6 == uVar12;
      if (uVar12 <= uVar6) {
        bVar15 = *(int *)(*param_1 + 4) == 0;
      }
      uVar16 = (uint)bVar15;
      iVar10 = uVar16 << 1;
    }
    else {
      uVar16 = 0;
    }
  }
  FUN_0181d7b0(param_1,param_1[0xe] + uVar13,uVar5,uVar16,uVar16);
  iVar14 = *param_1;
  iVar3 = *(int *)(iVar14 + 0x1c);
  param_1[0x17] = param_1[0x17] + uVar5;
  FUN_0181d958(iVar3);
  uVar12 = *(uint *)(iVar3 + 0x14);
  if (*(uint *)(iVar14 + 0x10) <= *(uint *)(iVar3 + 0x14)) {
    uVar12 = *(uint *)(iVar14 + 0x10);
  }
  if (uVar12 != 0) {
    FUN_0181e3d4(*(undefined4 *)(iVar14 + 0xc),*(undefined4 *)(iVar3 + 0x10),uVar12);
    iVar4 = *(int *)(iVar3 + 0x14);
    *(uint *)(iVar14 + 0xc) = *(int *)(iVar14 + 0xc) + uVar12;
    iVar4 = iVar4 - uVar12;
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + uVar12;
    *(uint *)(iVar14 + 0x14) = *(int *)(iVar14 + 0x14) + uVar12;
    *(uint *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) - uVar12;
    *(int *)(iVar3 + 0x14) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 8);
    }
  }
  return iVar10;
}

