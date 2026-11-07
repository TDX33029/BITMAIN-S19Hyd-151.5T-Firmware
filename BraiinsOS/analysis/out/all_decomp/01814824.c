// FUN_01814824 @ 01814824 size=952 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01814824(int *param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar6 = param_1[0xb];
  uVar9 = param_1[0x1d];
  iVar1 = iVar6;
  do {
    uVar10 = param_1[0x1b];
    uVar4 = (param_1[0xf] - uVar10) - uVar9;
    if (uVar10 < (uint)(iVar6 + -0x106 + iVar1)) {
      piVar7 = (int *)*param_1;
      uVar9 = piVar7[1];
    }
    else {
      FUN_0181e3d4(param_1[0xe],param_1[0xe] + iVar6,((uVar10 + iVar6) - param_1[0xf]) + uVar9);
      iVar1 = param_1[0x13];
      uVar10 = param_1[0x1b] - iVar6;
      param_1[0x1c] = param_1[0x1c] - iVar6;
      uVar9 = param_1[0xb];
      puVar3 = (ushort *)(param_1[0x11] + iVar1 * 2);
      param_1[0x1b] = uVar10;
      param_1[0x17] = param_1[0x17] - iVar6;
      if (uVar10 < (uint)param_1[0x5ad]) {
        param_1[0x5ad] = uVar10;
      }
      do {
        while( true ) {
          puVar3 = puVar3 + -1;
          if (*puVar3 < uVar9) break;
          iVar1 = iVar1 + -1;
          *puVar3 = *puVar3 - (short)uVar9;
          if (iVar1 == 0) goto LAB_018149ac;
        }
        iVar1 = iVar1 + -1;
        *puVar3 = 0;
      } while (iVar1 != 0);
LAB_018149ac:
      puVar3 = (ushort *)(param_1[0x10] + uVar9 * 2);
      uVar2 = uVar9;
      do {
        while( true ) {
          puVar3 = puVar3 + -1;
          if (*puVar3 < uVar9) break;
          uVar2 = uVar2 - 1;
          *puVar3 = *puVar3 - (short)uVar9;
          if (uVar2 == 0) goto LAB_018149dc;
        }
        uVar2 = uVar2 - 1;
        *puVar3 = 0;
      } while (uVar2 != 0);
LAB_018149dc:
      uVar4 = uVar4 + iVar6;
      piVar7 = (int *)*param_1;
      uVar9 = piVar7[1];
    }
    if (uVar9 == 0) {
LAB_018149ec:
      uVar9 = param_1[0x5b0];
      uVar10 = param_1[0xf];
      if (uVar9 < uVar10) {
        uVar4 = param_1[0x1b] + param_1[0x1d];
        if (uVar9 < uVar4) {
          uVar10 = uVar10 - uVar4;
          if (0x101 < uVar10) {
            uVar10 = 0x102;
          }
          FUN_0181e4c0(param_1[0xe] + uVar4,uVar10);
          param_1[0x5b0] = uVar10 + uVar4;
          return 0;
        }
        if (uVar9 < uVar4 + 0x102) {
          uVar4 = (uVar4 - uVar9) + 0x102;
          if (uVar10 - uVar9 <= uVar4) {
            uVar4 = uVar10 - uVar9;
          }
          FUN_0181e4c0(param_1[0xe] + uVar9,uVar4);
          param_1[0x5b0] = param_1[0x5b0] + uVar4;
          return 0;
        }
      }
      return 0;
    }
    iVar1 = param_1[0x1d];
    if (uVar9 <= uVar4) {
      uVar4 = uVar9;
    }
    if (uVar4 != 0) {
      iVar1 = param_1[0xe] + iVar1 + uVar10;
      piVar7[1] = uVar9 - uVar4;
      FUN_0181e3d4(iVar1,*piVar7,uVar4);
      if (*(int *)(piVar7[7] + 0x18) == 1) {
        iVar1 = FUN_01814330(piVar7[0xc],iVar1,uVar4);
        piVar7[0xc] = iVar1;
      }
      else if (*(int *)(piVar7[7] + 0x18) == 2) {
        iVar1 = FUN_01814534(piVar7[0xc],iVar1,uVar4);
        piVar7[0xc] = iVar1;
      }
      iVar1 = param_1[0x1d];
      *piVar7 = *piVar7 + uVar4;
      piVar7[2] = piVar7[2] + uVar4;
    }
    uVar9 = uVar4 + iVar1;
    param_1[0x1d] = uVar9;
    if (2 < uVar9 + param_1[0x5ad]) {
      uVar2 = param_1[0x1b];
      uVar10 = uVar2 - param_1[0x5ad];
      uVar11 = param_1[0x16];
      uVar8 = param_1[0x15];
      uVar4 = (uint)*(byte *)(param_1[0xe] + uVar10);
      param_1[0x12] = uVar4;
      pbVar5 = (byte *)(param_1[0xe] + uVar10) + 1;
      uVar4 = ((uint)*pbVar5 ^ uVar4 << (uVar11 & 0xff)) & uVar8;
      param_1[0x12] = uVar4;
      do {
        if (uVar10 == uVar2) break;
        pbVar5 = pbVar5 + 1;
        iVar1 = param_1[0x11];
        uVar4 = ((uint)*pbVar5 ^ uVar4 << (uVar11 & 0xff)) & uVar8;
        param_1[0x12] = uVar4;
        *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar10) * 2) =
             *(undefined2 *)(iVar1 + uVar4 * 2);
        *(short *)(iVar1 + uVar4 * 2) = (short)uVar10;
        uVar10 = uVar10 + 1;
        param_1[0x5ad] = uVar2 - uVar10;
      } while (2 < (uVar9 + uVar2) - uVar10);
    }
    if ((0x105 < uVar9) || (*(int *)(*param_1 + 4) == 0)) goto LAB_018149ec;
    iVar1 = param_1[0xb];
  } while( true );
}

