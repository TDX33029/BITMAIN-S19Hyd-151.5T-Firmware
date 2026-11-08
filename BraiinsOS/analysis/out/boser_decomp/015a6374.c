// FUN_015a6374 @ 015a6374 size=352 calls_out=2 calls_in=2
// strings: 

void FUN_015a6374(int *param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  bool bVar10;
  
  uVar7 = *(uint *)(param_2 + 0x14);
  puVar8 = *(uint **)(param_2 + 0x10);
  uVar4 = 0;
  if (uVar7 != 0) {
    puVar5 = puVar8;
    do {
      uVar1 = *puVar5;
      uVar2 = uVar4 + 1;
      bVar10 = uVar1 <= param_3;
      if (param_3 <= uVar1) {
        bVar10 = param_4 <= uVar1;
      }
      if (!bVar10) {
        if (uVar2 < uVar7) {
          iVar3 = (uVar7 - 1) - uVar4;
          puVar5 = puVar5 + 1;
          do {
            uVar7 = *puVar5;
            bVar10 = uVar7 <= param_3;
            if (param_3 <= uVar7) {
              bVar10 = param_4 <= uVar7;
            }
            if (bVar10) {
              puVar8[uVar4] = uVar7;
              uVar4 = uVar4 + 1;
            }
            iVar3 = iVar3 + -1;
            puVar5 = puVar5 + 1;
          } while (iVar3 != 0);
        }
        *(uint *)(param_2 + 0x14) = uVar4;
        goto LAB_015a63c8;
      }
      uVar4 = uVar2;
      puVar5 = puVar5 + 1;
    } while (uVar7 != uVar2);
    uVar4 = uVar7;
  }
LAB_015a63c8:
  iVar9 = param_5[2];
  iVar3 = 0;
  if (param_3 <= param_4) {
    iVar3 = param_4 - param_3;
  }
  if (uVar4 != 0) {
    uVar7 = iVar9 - iVar3;
    iVar3 = uVar4 << 2;
    do {
      uVar4 = *puVar8;
      if (param_4 < uVar4) {
        if (uVar7 < 0x80000000 == CARRY4(uVar4,uVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cfc628);
        }
        *puVar8 = uVar4 + uVar7;
      }
      iVar3 = iVar3 + -4;
      puVar8 = puVar8 + 1;
    } while (iVar3 != 0);
  }
  iVar3 = param_5[1];
  uVar4 = *(uint *)(param_2 + 8);
  iVar6 = *param_5;
  if (uVar4 < param_4) {
    param_3 = 0;
  }
  else if (param_3 <= param_4) {
    param_1[8] = iVar3 + iVar9;
    iVar9 = *(int *)(param_2 + 4);
    *(uint *)(param_2 + 8) = param_3;
    *param_1 = iVar9 + param_3;
    param_1[1] = iVar9 + param_4;
    param_1[2] = param_2;
    param_1[3] = param_4;
    param_1[4] = uVar4 - param_4;
    param_1[5] = iVar3;
    param_1[6] = iVar3;
    param_1[7] = iVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(param_3,param_4,uVar4,&DAT_01d2fe30);
}

