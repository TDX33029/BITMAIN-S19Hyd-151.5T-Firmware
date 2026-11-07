// FUN_00f005a0 @ 00f005a0 size=832 calls_out=3 calls_in=1
// strings: 

void FUN_00f005a0(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  undefined1 local_2c;
  byte local_2b;
  byte local_2a [3];
  byte local_27 [3];
  
  uVar7 = 0;
  if (*param_2 != -0x80000000) {
    uVar1 = FUN_00f008e0(param_2);
    uVar3 = *(uint *)(param_3 + 4) ^ 0x7fffffff;
    uVar1 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    if (uVar3 < uVar1) {
      uVar7 = 1;
      param_1[1] = uVar1;
      param_1[2] = uVar3;
    }
    else {
      iVar8 = 10;
      local_2c = 10;
      FUN_01284394(param_3,&local_2c,1);
      uVar1 = FUN_00f008e0(param_2);
      do {
        if (uVar1 >> 7 == 0) {
          local_2a[0] = (byte)uVar1;
          FUN_01284394(param_3,local_2a,1);
          break;
        }
        local_2b = (byte)uVar1 | 0x80;
        FUN_01284394(param_3,&local_2b,1);
        iVar8 = iVar8 + -1;
        uVar1 = uVar1 >> 7;
      } while (iVar8 != 0);
      if (param_2[3] != -0x7fffffff) {
        if (param_2[3] == -0x80000000) {
          local_27[1] = 10;
          FUN_01284394(param_3,local_27 + 1,1);
          local_27[2] = 0;
          FUN_01284394(param_3,local_27 + 2,1);
        }
        else {
          local_2a[1] = 0x12;
          FUN_01284394(param_3,local_2a + 1,1);
          uVar1 = param_2[5];
          iVar8 = 0;
          iVar4 = 0;
          if (uVar1 != 0) {
            iVar4 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          uVar3 = param_2[8];
          if (uVar3 != 0) {
            iVar8 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          uVar12 = param_2[0xb];
          iVar6 = 0;
          iVar5 = 0;
          if (uVar12 != 0) {
            iVar6 = uVar12 + ((LZCOUNT(uVar12 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          iVar14 = param_2[0xe];
          iVar9 = param_2[0xd];
          if (iVar14 != 0) {
            iVar10 = iVar14;
            puVar13 = (uint *)(iVar9 + 8);
            do {
              iVar10 = iVar10 + -1;
              iVar5 = *puVar13 + iVar5 + ((LZCOUNT(*puVar13 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
              puVar13 = puVar13 + 3;
            } while (iVar10 != 0);
          }
          iVar10 = 10;
          uVar2 = iVar8 + iVar4 + iVar6 + iVar14 + iVar5;
          do {
            if (uVar2 >> 7 == 0) {
              local_27[0] = (byte)uVar2;
              FUN_01284394(param_3,local_27,1);
              break;
            }
            local_2a[2] = (byte)uVar2 | 0x80;
            FUN_01284394(param_3,local_2a + 2,1);
            iVar10 = iVar10 + -1;
            uVar2 = uVar2 >> 7;
          } while (iVar10 != 0);
          if (uVar1 != 0) {
            FUN_01016f10(1,param_2[4],uVar1,param_3);
          }
          if (uVar3 != 0) {
            FUN_01016f10(2,param_2[7],uVar3,param_3);
          }
          if (uVar12 != 0) {
            FUN_01016f10(3,param_2[10],uVar12,param_3);
          }
          if (iVar14 != 0) {
            iVar14 = iVar14 * 0xc;
            puVar11 = (undefined4 *)(iVar9 + 4);
            do {
              FUN_01016f10(4,*puVar11,puVar11[1],param_3);
              puVar11 = puVar11 + 3;
              iVar14 = iVar14 + -0xc;
            } while (iVar14 != 0);
          }
        }
      }
      uVar7 = 0;
      if (param_2[2] != 0) {
        FUN_01016f10(3,param_2[1],param_2[2],param_3);
      }
    }
  }
  *param_1 = uVar7;
  return;
}

