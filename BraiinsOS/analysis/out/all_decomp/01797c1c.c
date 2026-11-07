// FUN_01797c1c @ 01797c1c size=2048 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01797c1c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((uint)(param_5 - iVar3) < 0xa0000001) {
    return CONCAT44(param_2,param_1);
  }
  uVar7 = param_4 - iVar3;
  uVar8 = *(uint *)(param_3 + 0x1c);
  uVar4 = *(uint *)(param_3 + 8);
  if (5 < uVar8) {
    uVar4 = uVar4 - 1;
  }
  uVar4 = 1 << (uVar4 & 0xff);
  uVar5 = 1 << (*(uint *)(param_3 + 4) & 0xff);
  uVar1 = uVar4 - 1 & uVar7;
  if (uVar1 < 2) {
    uVar6 = uVar4;
    if (uVar4 < 2) {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 0;
  }
  if (uVar5 < uVar4) {
    uVar5 = uVar4;
  }
  iVar10 = uVar1 + uVar5 + uVar6;
  uVar4 = uVar7 - iVar10;
  *(uint *)(param_1 + 4) = iVar3 + uVar4;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar4;
  uVar5 = uVar4 + 2;
  if (*(uint *)(param_1 + 0x10) < uVar5) {
    iVar3 = 2;
  }
  else {
    iVar3 = (*(uint *)(param_1 + 0x10) - uVar7) + iVar10;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  uVar1 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_1 + 0xc) < uVar5) {
    iVar3 = 2;
  }
  else {
    iVar3 = (*(uint *)(param_1 + 0xc) - uVar7) + iVar10;
  }
  *(int *)(param_1 + 0xc) = iVar3;
  iVar3 = 1 << (*(uint *)(param_3 + 0xc) & 0xff);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(uint *)(param_2 + 0x10) = uVar1;
  if (0xf < iVar3) {
    puVar9 = *(uint **)(param_1 + 0x5c);
    iVar2 = 0;
    iVar11 = iVar10 - uVar7;
    while( true ) {
      iVar2 = iVar2 + 1;
      if (*puVar9 < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + *puVar9;
      }
      *puVar9 = uVar8;
      if (puVar9[1] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[1];
      }
      puVar9[1] = uVar8;
      if (puVar9[2] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[2];
      }
      puVar9[2] = uVar8;
      if (puVar9[3] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[3];
      }
      puVar9[3] = uVar8;
      if (puVar9[4] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[4];
      }
      puVar9[4] = uVar8;
      if (puVar9[5] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[5];
      }
      puVar9[5] = uVar8;
      if (puVar9[6] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[6];
      }
      puVar9[6] = uVar8;
      if (puVar9[7] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[7];
      }
      puVar9[7] = uVar8;
      if (puVar9[8] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[8];
      }
      puVar9[8] = uVar8;
      if (puVar9[9] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[9];
      }
      puVar9[9] = uVar8;
      if (puVar9[10] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[10];
      }
      puVar9[10] = uVar8;
      if (puVar9[0xb] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[0xb];
      }
      puVar9[0xb] = uVar8;
      if (puVar9[0xc] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[0xc];
      }
      puVar9[0xc] = uVar8;
      if (puVar9[0xd] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[0xd];
      }
      puVar9[0xd] = uVar8;
      if (puVar9[0xe] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar11 + puVar9[0xe];
      }
      puVar9[0xe] = uVar8;
      if (puVar9[0xf] < uVar5) {
        puVar9[0xf] = 0;
      }
      else {
        puVar9[0xf] = iVar11 + puVar9[0xf];
      }
      if (iVar3 >> 4 <= iVar2) break;
      puVar9 = puVar9 + 0x10;
    }
    uVar8 = *(uint *)(param_3 + 0x1c);
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    if (uVar8 == 1) goto LAB_01798038;
    if (2 < uVar8 - 3) goto LAB_0179820c;
    if (*(int *)(param_3 + 0x84) == 1) goto LAB_01798038;
    iVar3 = 1 << (*(uint *)(param_3 + 8) & 0xff);
  }
  else {
LAB_0179820c:
    iVar3 = 1 << (*(uint *)(param_3 + 8) & 0xff);
    if (uVar8 == 6) {
      if (0xf < iVar3) {
        puVar9 = *(uint **)(param_1 + 100);
        iVar11 = 0;
        iVar2 = iVar10 - uVar7;
        do {
          uVar8 = *puVar9;
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          *puVar9 = uVar8;
          uVar8 = puVar9[1];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[1] = uVar8;
          uVar8 = puVar9[2];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[2] = uVar8;
          uVar8 = puVar9[3];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[3] = uVar8;
          uVar8 = puVar9[4];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[4] = uVar8;
          uVar8 = puVar9[5];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[5] = uVar8;
          uVar8 = puVar9[6];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[6] = uVar8;
          uVar8 = puVar9[7];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[7] = uVar8;
          uVar8 = puVar9[8];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[8] = uVar8;
          uVar8 = puVar9[9];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[9] = uVar8;
          uVar8 = puVar9[10];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[10] = uVar8;
          uVar8 = puVar9[0xb];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[0xb] = uVar8;
          uVar8 = puVar9[0xc];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[0xc] = uVar8;
          uVar8 = puVar9[0xd];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[0xd] = uVar8;
          uVar8 = puVar9[0xe];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          puVar9[0xe] = uVar8;
          uVar8 = puVar9[0xf];
          if (uVar8 != 1) {
            if (uVar8 < uVar5) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + iVar2;
            }
          }
          iVar11 = iVar11 + 1;
          puVar9[0xf] = uVar8;
          puVar9 = puVar9 + 0x10;
        } while (iVar11 < iVar3 >> 4);
      }
      goto LAB_01798038;
    }
  }
  if (0xf < iVar3) {
    iVar11 = 0;
    puVar9 = *(uint **)(param_1 + 100);
    iVar2 = iVar10 - uVar7;
    while( true ) {
      iVar11 = iVar11 + 1;
      if (*puVar9 < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + *puVar9;
      }
      *puVar9 = uVar8;
      if (puVar9[1] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[1];
      }
      puVar9[1] = uVar8;
      if (puVar9[2] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[2];
      }
      puVar9[2] = uVar8;
      if (puVar9[3] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[3];
      }
      puVar9[3] = uVar8;
      if (puVar9[4] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[4];
      }
      puVar9[4] = uVar8;
      if (puVar9[5] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[5];
      }
      puVar9[5] = uVar8;
      if (puVar9[6] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[6];
      }
      puVar9[6] = uVar8;
      if (puVar9[7] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[7];
      }
      puVar9[7] = uVar8;
      if (puVar9[8] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[8];
      }
      puVar9[8] = uVar8;
      if (puVar9[9] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[9];
      }
      puVar9[9] = uVar8;
      if (puVar9[10] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[10];
      }
      puVar9[10] = uVar8;
      if (puVar9[0xb] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[0xb];
      }
      puVar9[0xb] = uVar8;
      if (puVar9[0xc] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[0xc];
      }
      puVar9[0xc] = uVar8;
      if (puVar9[0xd] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[0xd];
      }
      puVar9[0xd] = uVar8;
      if (puVar9[0xe] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[0xe];
      }
      puVar9[0xe] = uVar8;
      if (puVar9[0xf] < uVar5) {
        puVar9[0xf] = 0;
      }
      else {
        puVar9[0xf] = iVar2 + puVar9[0xf];
      }
      if (iVar3 >> 4 <= iVar11) break;
      puVar9 = puVar9 + 0x10;
    }
  }
LAB_01798038:
  if ((*(uint *)(param_1 + 0x20) != 0) &&
     (iVar3 = 1 << (*(uint *)(param_1 + 0x20) & 0xff), 0xf < iVar3)) {
    iVar11 = 0;
    puVar9 = *(uint **)(param_1 + 0x60);
    iVar2 = iVar10 - uVar7;
    while( true ) {
      iVar11 = iVar11 + 1;
      if (*puVar9 < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + *puVar9;
      }
      *puVar9 = uVar8;
      if (puVar9[1] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[1];
      }
      puVar9[1] = uVar8;
      if (puVar9[2] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[2];
      }
      puVar9[2] = uVar8;
      if (puVar9[3] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[3];
      }
      puVar9[3] = uVar8;
      if (puVar9[4] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[4];
      }
      puVar9[4] = uVar8;
      if (puVar9[5] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[5];
      }
      puVar9[5] = uVar8;
      if (puVar9[6] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[6];
      }
      puVar9[6] = uVar8;
      if (puVar9[7] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[7];
      }
      puVar9[7] = uVar8;
      if (puVar9[8] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[8];
      }
      puVar9[8] = uVar8;
      if (puVar9[9] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[9];
      }
      puVar9[9] = uVar8;
      if (puVar9[10] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[10];
      }
      puVar9[10] = uVar8;
      if (puVar9[0xb] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[0xb];
      }
      puVar9[0xb] = uVar8;
      if (puVar9[0xc] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[0xc];
      }
      puVar9[0xc] = uVar8;
      if (puVar9[0xd] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[0xd];
      }
      puVar9[0xd] = uVar8;
      if (puVar9[0xe] < uVar5) {
        uVar8 = 0;
      }
      else {
        uVar8 = iVar2 + puVar9[0xe];
      }
      puVar9[0xe] = uVar8;
      if (puVar9[0xf] < uVar5) {
        puVar9[0xf] = 0;
      }
      else {
        puVar9[0xf] = iVar2 + puVar9[0xf];
      }
      if (iVar3 >> 4 <= iVar11) break;
      puVar9 = puVar9 + 0x10;
    }
  }
  if (uVar1 < *(uint *)(param_2 + 0xc)) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0xc);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(uint *)(param_1 + 0x1c) < uVar4) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(uint *)(param_1 + 0x1c) - uVar7) + iVar10;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = iVar10;
  return 0;
}

