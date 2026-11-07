// FUN_006e8018 @ 006e8018 size=436 calls_out=3 calls_in=1
// strings: 

void FUN_006e8018(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  uVar5 = param_1[9];
  if (uVar5 < param_4) {
    if ((param_5 == 0 || uVar5 <= param_3) && (param_5 != 0 && param_3 != uVar5)) {
LAB_006e81ac:
      if (*param_2 < 2) {
        FUN_0134bd64(param_2[1],param_2[2]);
        return;
      }
      return;
    }
    iVar1 = 0xc;
    if (param_5 != 0) {
      iVar1 = 0x18;
    }
    piVar7 = (int *)((int)param_1 + iVar1);
    iVar1 = piVar7[2];
    if (iVar1 == *piVar7) {
      FUN_018fa978(piVar7);
    }
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar8 = param_2[3];
    puVar2 = (uint *)(piVar7[1] + iVar1 * 0x10);
    *puVar2 = *param_2;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    piVar7[2] = iVar1 + 1;
    if (param_5 != 0) {
      return;
    }
    iVar1 = param_1[5];
    param_1[9] = param_4;
    param_1[5] = 0;
    if (iVar1 != 0) {
      puVar9 = (undefined4 *)(param_1[4] + 4);
      do {
        if ((uint)puVar9[-1] < 2) {
          FUN_0134bd64(*puVar9,puVar9[1]);
        }
        puVar9 = puVar9 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = param_1[8];
    param_1[8] = 0;
    if (iVar1 != 0) {
      puVar9 = (undefined4 *)(param_1[7] + 4);
      do {
        if ((uint)puVar9[-1] < 2) {
          FUN_0134bd64(*puVar9,puVar9[1]);
        }
        puVar9 = puVar9 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    param_1[2] = 0;
    if (*param_1 == 0) {
      FUN_016f5378(param_1);
    }
    puVar3 = (undefined2 *)param_1[1];
    param_1[2] = 1;
  }
  else {
    if (param_4 != uVar5) goto LAB_006e81ac;
    iVar1 = 0xc;
    if (param_5 != 0) {
      iVar1 = 0x18;
    }
    piVar7 = (int *)((int)param_1 + iVar1);
    iVar1 = piVar7[2];
    if (iVar1 == *piVar7) {
      FUN_018fa978(piVar7);
    }
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar8 = param_2[3];
    puVar2 = (uint *)(piVar7[1] + iVar1 * 0x10);
    *puVar2 = *param_2;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    iVar4 = *param_1;
    iVar10 = param_1[2];
    piVar7[2] = iVar1 + 1;
    if (iVar10 == iVar4) {
      FUN_016f5378(param_1);
    }
    param_1[2] = iVar10 + 1;
    puVar3 = (undefined2 *)(param_1[1] + iVar10 * 2);
  }
  *puVar3 = 0x4f4f;
  return;
}

