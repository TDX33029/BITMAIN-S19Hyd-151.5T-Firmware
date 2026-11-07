// FUN_00effc88 @ 00effc88 size=456 calls_out=3 calls_in=1
// strings: 

void FUN_00effc88(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_27;
  byte local_26;
  byte local_25;
  
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    puVar8 = (uint *)(param_2 + 8);
    iVar6 = 0;
    iVar4 = param_3;
    do {
      uVar9 = *puVar8;
      iVar7 = 0;
      if (uVar9 != 0) {
        iVar7 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 4;
      iVar4 = iVar4 + -1;
      uVar9 = iVar7 + (uint)(byte)*puVar1 * 2;
      iVar6 = uVar9 + iVar6 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (iVar4 != 0);
    uVar9 = *(uint *)(param_4 + 4) ^ 0x7fffffff;
    if (uVar9 < (uint)(iVar6 + param_3)) {
      param_1[1] = iVar6 + param_3;
      param_1[2] = uVar9;
      uVar5 = 1;
    }
    else {
      iVar4 = param_2;
      do {
        local_27 = 10;
        FUN_01284394(param_4,&local_27,1);
        uVar9 = *(uint *)(iVar4 + 8);
        iVar6 = 0;
        if (uVar9 != 0) {
          iVar6 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        bVar2 = *(byte *)(iVar4 + 0xc);
        iVar10 = 10;
        iVar7 = iVar4 + 0x10;
        uVar3 = iVar6 + (uint)bVar2 * 2;
        do {
          if (uVar3 >> 7 == 0) {
            local_25 = (byte)uVar3;
            FUN_01284394(param_4,&local_25,1);
            break;
          }
          local_26 = (byte)uVar3 | 0x80;
          FUN_01284394(param_4,&local_26,1);
          iVar10 = iVar10 + -1;
          uVar3 = uVar3 >> 7;
        } while (iVar10 != 0);
        if (uVar9 != 0) {
          FUN_01016f10(1,*(undefined4 *)(iVar4 + 4),uVar9,param_4);
        }
        if (bVar2 != 0) {
          FUN_00efe13c(2,*(undefined1 *)(iVar4 + 0xc),param_4);
        }
        iVar4 = iVar7;
      } while (iVar7 != param_2 + param_3 * 0x10);
      uVar5 = 0;
    }
  }
  *param_1 = uVar5;
  return;
}

