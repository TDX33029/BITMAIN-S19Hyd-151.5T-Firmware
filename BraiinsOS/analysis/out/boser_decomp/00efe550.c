// FUN_00efe550 @ 00efe550 size=1100 calls_out=5 calls_in=2
// strings: 

void FUN_00efe550(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  char local_2b [3];
  byte local_28 [3];
  byte local_25;
  
  local_2e = 0x12;
  FUN_01284394(param_2,&local_2e,1);
  local_2d = FUN_00efe384(param_1);
  FUN_01284394(param_2,&local_2d,1);
  iVar2 = *param_1;
  if (iVar2 != 3) {
    if (iVar2 == 0) {
      local_2c = 10;
      FUN_01284394(param_2,&local_2c,1);
      if (param_1[1] == 1) {
        puVar7 = (uint *)(param_1 + 2);
        if (*puVar7 == 0) {
          cVar1 = '\x02';
        }
        else {
          cVar1 = (char)((LZCOUNT(*puVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x03';
        }
        local_2b[0] = '\0';
        cVar8 = '\0';
        if (param_1[3] != 0) {
          cVar8 = (char)((LZCOUNT(param_1[3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
        }
        if (param_1[4] != 0) {
          local_2b[0] = (char)((LZCOUNT(param_1[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
        }
        local_2b[0] = cVar8 + cVar1 + local_2b[0];
        FUN_01284394(param_2,local_2b,1);
        uVar4 = 1;
        goto LAB_00efe984;
      }
      local_2b[0] = '\0';
      FUN_01284394(param_2,local_2b,1);
    }
    else {
      if (iVar2 == 1) {
        local_2b[1] = 0x12;
        FUN_01284394(param_2,local_2b + 1,1);
        iVar11 = param_1[1];
        iVar5 = 0;
        iVar2 = 0;
        if (iVar11 == 1) {
          uVar3 = param_1[2];
          uVar9 = LZCOUNT(uVar3 | 1) | 0x20;
          if ((int)uVar3 < 0) {
            uVar9 = LZCOUNT((int)uVar3 >> 0x1f);
          }
          iVar2 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        iVar12 = param_1[3];
        if (iVar12 == 1) {
          if (param_1[4] == 0) {
            iVar6 = 2;
          }
          else {
            iVar6 = ((LZCOUNT(param_1[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
          }
          iVar5 = 0;
          iVar10 = 0;
          if (param_1[5] != 0) {
            iVar10 = ((LZCOUNT(param_1[5] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          if (param_1[6] != 0) {
            iVar5 = ((LZCOUNT(param_1[6] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          iVar5 = iVar10 + iVar6 + iVar5;
        }
        iVar6 = 10;
        uVar3 = iVar5 + iVar2;
        do {
          if (uVar3 >> 7 == 0) {
            local_28[0] = (byte)uVar3;
            FUN_01284394(param_2,local_28,1);
            break;
          }
          local_2b[2] = (byte)uVar3 | 0x80;
          FUN_01284394(param_2,local_2b + 2,1);
          iVar6 = iVar6 + -1;
          uVar3 = uVar3 >> 7;
        } while (iVar6 != 0);
        if (iVar11 != 0) {
          FUN_00efca88(1,param_1[2],param_2);
        }
      }
      else {
        local_28[1] = 0x1a;
        FUN_01284394(param_2,local_28 + 1,1);
        iVar11 = param_1[1];
        iVar5 = 0;
        iVar2 = 0;
        if (iVar11 == 1) {
          iVar2 = ((LZCOUNT(param_1[2] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        iVar12 = param_1[3];
        if (iVar12 == 1) {
          if (param_1[4] == 0) {
            iVar6 = 2;
          }
          else {
            iVar6 = ((LZCOUNT(param_1[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
          }
          iVar5 = 0;
          iVar10 = 0;
          if (param_1[5] != 0) {
            iVar10 = ((LZCOUNT(param_1[5] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          if (param_1[6] != 0) {
            iVar5 = ((LZCOUNT(param_1[6] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          iVar5 = iVar10 + iVar6 + iVar5;
        }
        iVar6 = 10;
        uVar3 = iVar5 + iVar2;
        do {
          if (uVar3 >> 7 == 0) {
            local_25 = (byte)uVar3;
            FUN_01284394(param_2,&local_25,1);
            break;
          }
          local_28[2] = (byte)uVar3 | 0x80;
          FUN_01284394(param_2,local_28 + 2,1);
          iVar6 = iVar6 + -1;
          uVar3 = uVar3 >> 7;
        } while (iVar6 != 0);
        if (iVar11 != 0) {
          FUN_00efc9fc(1,param_1[2],param_2);
        }
      }
      if (iVar12 != 0) {
        puVar7 = (uint *)(param_1 + 4);
        uVar4 = 2;
LAB_00efe984:
        FUN_00f073dc(uVar4,puVar7,param_2);
        return;
      }
    }
  }
  return;
}

