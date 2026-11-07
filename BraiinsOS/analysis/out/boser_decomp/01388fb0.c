// FUN_01388fb0 @ 01388fb0 size=568 calls_out=4 calls_in=0
// strings: 

void FUN_01388fb0(uint *param_1,int param_2,uint *param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,byte param_8)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if ((char)param_3[8] == '\x01') {
    if (param_8 == 2) {
      uVar2 = param_3[1];
      uVar4 = param_3[2];
      uVar6 = param_3[3];
      param_1[1] = *param_3;
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      param_1[4] = uVar6;
      uVar2 = param_3[5];
      uVar4 = param_3[6];
      uVar6 = param_3[7];
      uVar7 = param_3[8];
      param_1[5] = param_3[4];
      param_1[6] = uVar2;
      param_1[7] = uVar4;
      param_1[8] = uVar6;
      param_1[9] = uVar7;
      uVar2 = 4;
    }
    else {
      param_1[1] = param_7;
      uVar2 = param_3[1];
      uVar4 = param_3[2];
      uVar6 = param_3[3];
      param_1[2] = *param_3;
      param_1[3] = uVar2;
      param_1[4] = uVar4;
      param_1[5] = uVar6;
      uVar2 = param_3[5];
      uVar4 = param_3[6];
      uVar6 = param_3[7];
      uVar7 = param_3[8];
      param_1[6] = param_3[4];
      param_1[7] = uVar2;
      param_1[8] = uVar4;
      param_1[9] = uVar6;
      param_1[10] = uVar7;
      uVar2 = (uint)(param_8 ^ 1);
    }
  }
  else {
    iVar1 = FUN_01388e98(param_3);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + iVar1;
    iVar1 = FUN_0138920c(param_2,0);
    if (param_5 != 0 && iVar1 == 1) {
      uVar2 = *(uint *)(param_2 + 0x1c);
      do {
        param_5 = param_5 - 1;
        uVar4 = uVar2 & param_6 - 1;
        if (*(uint *)(param_2 + 8) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar4,*(uint *)(param_2 + 8),&DAT_01cebf94);
        }
        piVar3 = (int *)(*(int *)(param_2 + 4) + uVar4 * 0xc);
      } while (((*piVar3 == 0) || ((uVar4 - (piVar3[2] & uVar2) & uVar2) < param_5)) &&
              (param_6 = uVar4, param_5 != 0));
    }
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    FUN_01383c50(param_2 + 0xc);
    uVar2 = *(uint *)(param_2 + 8);
    if (uVar2 <= param_6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_6,uVar2,&DAT_01cebfa4);
    }
    iVar1 = *(int *)(param_2 + 4);
    iVar11 = *(int *)(param_2 + 0x20);
    puVar5 = (uint *)(iVar1 + param_6 * 0xc);
    uVar7 = *puVar5;
    uVar6 = puVar5[1];
    uVar4 = puVar5[2];
    *puVar5 = 1;
    puVar5[2] = param_4;
    puVar5[1] = -iVar11;
    if ((uVar7 & 1) != 0) {
      uVar7 = param_6 + 1;
      while( true ) {
        do {
          uVar8 = uVar7;
          uVar7 = 0;
        } while (uVar2 <= uVar8);
        puVar5 = (uint *)(iVar1 + uVar8 * 0xc);
        uVar9 = *puVar5;
        uVar10 = puVar5[1];
        uVar7 = puVar5[2];
        *puVar5 = 1;
        puVar5[1] = uVar6;
        puVar5[2] = uVar4;
        if ((uVar9 & 1) == 0) break;
        uVar4 = uVar7;
        uVar6 = uVar10;
        uVar7 = uVar8 + 1;
      }
    }
    if (param_8 == 2) {
      uVar2 = 2;
      param_7 = 0;
    }
    else {
      param_1[2] = 0;
      uVar2 = 3;
    }
    param_1[1] = param_7;
  }
  *param_1 = uVar2;
  return;
}

