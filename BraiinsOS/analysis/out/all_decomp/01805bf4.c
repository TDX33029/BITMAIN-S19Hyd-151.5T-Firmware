// FUN_01805bf4 @ 01805bf4 size=1360 calls_out=5 calls_in=2
// strings: 

void FUN_01805bf4(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 local_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar11 = param_1[0x10];
  param_1[0xe] = 0;
  if (param_1[7] == 0) {
    if (param_3 < 9) {
      param_1[0xe] = 1;
    }
    iVar3 = param_1[0xf];
    if (*(int *)(iVar3 + 0x404) == 2) {
      param_1[0xe] = 0;
      if (iVar11 != 2) {
        param_1[6] = 0;
        iVar11 = 0;
        do {
          while (iVar6 = FUN_0179632c(iVar3,iVar11), iVar6 != 0) {
            iVar3 = param_1[0xf];
            iVar6 = 1 << (0xbU - iVar6 & 0xff);
            *(int *)(*param_1 + iVar11 * 4) = iVar6;
            iVar11 = iVar11 + 1;
            param_1[6] = param_1[6] + iVar6;
            if (iVar11 == 0x100) goto LAB_01805f10;
          }
          iVar3 = param_1[0xf];
          *(undefined4 *)(*param_1 + iVar11 * 4) = 1;
          iVar11 = iVar11 + 1;
          param_1[6] = param_1[6] + 1;
        } while (iVar11 != 0x100);
      }
LAB_01805f10:
      iVar6 = param_1[1];
      iVar11 = iVar6 + -4;
      if (*(ushort *)(iVar3 + 0xcb8) == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = (4 << (*(ushort *)(iVar3 + 0xcb8) - 1 & 0xff)) + 4;
      }
      param_1[7] = 0;
      iVar9 = iVar3 + iVar9;
      while( true ) {
        uVar15 = *(int *)(iVar9 + 0xcbc) + 0xffffU >> 0x10;
        if (uVar15 == 0) {
          *(undefined4 *)(iVar11 + 4) = 1;
          param_1[7] = param_1[7] + 1;
        }
        else {
          iVar2 = 1 << (10 - uVar15 & 0xff);
          *(int *)(iVar11 + 4) = iVar2;
          param_1[7] = param_1[7] + iVar2;
        }
        if (iVar6 + 0x8c == iVar11 + 4) break;
        iVar11 = iVar11 + 4;
        iVar9 = iVar9 + 8;
      }
      iVar6 = param_1[2];
      iVar11 = iVar6 + -4;
      if (*(ushort *)(iVar3 + 0x70c) == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = (4 << (*(ushort *)(iVar3 + 0x70c) - 1 & 0xff)) + 4;
      }
      param_1[8] = 0;
      iVar9 = iVar3 + iVar9;
      while( true ) {
        uVar15 = *(int *)(iVar9 + 0x710) + 0xffffU >> 0x10;
        if (uVar15 == 0) {
          *(undefined4 *)(iVar11 + 4) = 1;
          param_1[8] = param_1[8] + 1;
        }
        else {
          iVar2 = 1 << (10 - uVar15 & 0xff);
          *(int *)(iVar11 + 4) = iVar2;
          param_1[8] = param_1[8] + iVar2;
        }
        if (iVar6 + 0xd0 == iVar11 + 4) break;
        iVar11 = iVar11 + 4;
        iVar9 = iVar9 + 8;
      }
      uVar15 = (uint)*(ushort *)(iVar3 + 0x408);
      param_1[9] = 0;
      if (uVar15 != 0) {
        iVar11 = 4 << (uVar15 - 1 & 0xff);
      }
      else {
        iVar11 = 8;
      }
      iVar6 = param_1[3];
      if (uVar15 != 0) {
        iVar11 = iVar11 + 4;
      }
      iVar3 = iVar3 + iVar11;
      iVar11 = iVar6 + -4;
      while( true ) {
        uVar15 = *(int *)(iVar3 + 0x40c) + 0xffffU >> 0x10;
        if (uVar15 == 0) {
          *(undefined4 *)(iVar11 + 4) = 1;
          param_1[9] = param_1[9] + 1;
        }
        else {
          iVar9 = 1 << (10 - uVar15 & 0xff);
          *(int *)(iVar11 + 4) = iVar9;
          param_1[9] = param_1[9] + iVar9;
        }
        if (iVar6 + 0x7c == iVar11 + 4) break;
        iVar11 = iVar11 + 4;
        iVar3 = iVar3 + 8;
      }
    }
    else {
      if (iVar11 != 2) {
        local_20 = 0xff;
        FUN_01794d04(*param_1,&local_20,param_2,param_3);
        iVar3 = *param_1;
        iVar11 = 0;
        puVar10 = (uint *)(iVar3 + -4);
        do {
          puVar10 = puVar10 + 1;
          uVar15 = *puVar10 >> 8;
          if (*puVar10 != 0) {
            uVar15 = uVar15 + 1;
          }
          iVar11 = iVar11 + uVar15;
          *puVar10 = uVar15;
        } while (puVar10 != (uint *)(iVar3 + 0x3fc));
        param_1[6] = iVar11;
      }
      FUN_016dd1aa(param_1[1],&DAT_004520e0,0x90);
      piVar12 = (int *)&DAT_004520dc;
      iVar11 = 0;
      do {
        piVar12 = piVar12 + 1;
        iVar11 = iVar11 + *piVar12;
      } while (piVar12 != (int *)&UNK_0045216c);
      puVar4 = (undefined4 *)param_1[2];
      param_1[7] = iVar11;
      puVar13 = puVar4;
      do {
        *puVar13 = 1;
        puVar14 = puVar13 + 2;
        puVar13[1] = 1;
        puVar13 = puVar14;
      } while (puVar14 != puVar4 + 0x34);
      puVar4[0x34] = 1;
      param_1[8] = 0x35;
      FUN_016dd1aa(param_1[3],&DAT_00452060,0x80);
      piVar12 = (int *)&UNK_0045205c;
      iVar11 = 0;
      do {
        piVar12 = piVar12 + 1;
        iVar11 = iVar11 + *piVar12;
      } while (piVar12 != (int *)&DAT_004520dc);
      param_1[9] = iVar11;
    }
  }
  else {
    if (iVar11 != 2) {
      uVar15 = 0;
      puVar7 = (uint *)(*param_1 + -4);
      puVar5 = (uint *)(*param_1 + 0x3fc);
      puVar10 = puVar7;
      do {
        puVar10 = puVar10 + 1;
        uVar15 = uVar15 + *puVar10;
      } while (puVar5 != puVar10);
      uVar1 = uVar15 >> 0xc;
      if (0x1fff < uVar15) {
        uVar15 = 0;
        do {
          puVar7 = puVar7 + 1;
          uVar8 = (*puVar7 >> (0x1fU - LZCOUNT(uVar1) & 0xff)) + 1;
          *puVar7 = uVar8;
          uVar15 = uVar15 + uVar8;
        } while (puVar5 != puVar7);
      }
      param_1[6] = uVar15;
    }
    uVar15 = 0;
    puVar7 = (uint *)(param_1[1] + -4);
    puVar5 = (uint *)(param_1[1] + 0x8c);
    puVar10 = puVar7;
    do {
      puVar10 = puVar10 + 1;
      uVar15 = uVar15 + *puVar10;
    } while (puVar10 != puVar5);
    uVar1 = uVar15 >> 0xb;
    if (0xfff < uVar15) {
      uVar15 = 0;
      do {
        puVar7 = puVar7 + 1;
        uVar8 = (*puVar7 >> (0x1fU - LZCOUNT(uVar1) & 0xff)) + 1;
        *puVar7 = uVar8;
        uVar15 = uVar15 + uVar8;
      } while (puVar7 != puVar5);
    }
    param_1[7] = uVar15;
    uVar15 = 0;
    puVar7 = (uint *)(param_1[2] + -4);
    puVar5 = (uint *)(param_1[2] + 0xd0);
    puVar10 = puVar7;
    do {
      puVar10 = puVar10 + 1;
      uVar15 = uVar15 + *puVar10;
    } while (puVar10 != puVar5);
    uVar1 = uVar15 >> 0xb;
    if (0xfff < uVar15) {
      uVar15 = 0;
      do {
        puVar7 = puVar7 + 1;
        uVar8 = (*puVar7 >> (0x1fU - LZCOUNT(uVar1) & 0xff)) + 1;
        *puVar7 = uVar8;
        uVar15 = uVar15 + uVar8;
      } while (puVar7 != puVar5);
    }
    param_1[8] = uVar15;
    uVar15 = 0;
    puVar7 = (uint *)(param_1[3] + -4);
    puVar5 = (uint *)(param_1[3] + 0x7c);
    puVar10 = puVar7;
    do {
      puVar10 = puVar10 + 1;
      uVar15 = uVar15 + *puVar10;
    } while (puVar5 != puVar10);
    uVar1 = uVar15 >> 0xb;
    if (0xfff < uVar15) {
      uVar15 = 0;
      do {
        puVar7 = puVar7 + 1;
        uVar8 = (*puVar7 >> (0x1fU - LZCOUNT(uVar1) & 0xff)) + 1;
        *puVar7 = uVar8;
        uVar15 = uVar15 + uVar8;
      } while (puVar5 != puVar7);
    }
    param_1[9] = uVar15;
  }
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  FUN_01805860(param_1,param_4);
  return;
}

