// FUN_011d3b38 @ 011d3b38 size=312 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_011d3b38(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (*param_2 == '\x04') {
    iVar6 = *(int *)(param_2 + 8);
    iVar8 = *(int *)(param_2 + 0xc);
    iVar3 = *param_1;
    iVar7 = iVar6;
    do {
      while( true ) {
        if (iVar7 == iVar6 + iVar8 * 0x18) {
          return 0;
        }
        uVar1 = 1;
        iVar5 = iVar7 + 0x18;
        if ((int)*(uint *)(iVar3 + 8) < 0) {
          uVar1 = *(uint *)(iVar3 + 8) ^ 0x80000000;
        }
        if (uVar1 == 0) break;
        if (uVar1 == 1) {
          puVar9 = *(undefined4 **)(iVar3 + 0xc);
          iVar10 = *(int *)(iVar3 + 0x10);
          if (iVar10 == 1) {
            iVar10 = (**(code **)(puVar9[1] + 0x10))(*puVar9,iVar7,param_3);
            iVar7 = iVar5;
            if (iVar10 != 0) {
              return 1;
            }
          }
          else {
            if (iVar10 == 0) {
              return 1;
            }
            puVar4 = puVar9 + iVar10 * 8;
            while (iVar10 = (**(code **)(puVar9[1] + 0x10))(*puVar9,iVar7,param_3), iVar10 != 0) {
              puVar9 = puVar9 + 8;
              if (puVar9 == puVar4) {
                return 1;
              }
            }
            iVar7 = iVar5;
          }
        }
        else {
          puVar9 = *(undefined4 **)(iVar3 + 0x10);
          iVar10 = *(int *)(iVar3 + 0x14) << 5;
          do {
            if (iVar10 == 0) {
              return 1;
            }
            iVar2 = (**(code **)(puVar9[1] + 0x10))(*puVar9,iVar7,param_3);
            iVar10 = iVar10 + -0x20;
            puVar9 = puVar9 + 8;
          } while (iVar2 != 0);
          iVar7 = iVar5;
        }
      }
      iVar7 = iVar5;
    } while (*(int *)(iVar3 + 0xc) != 0);
  }
  return 1;
}

