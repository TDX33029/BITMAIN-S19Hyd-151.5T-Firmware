// FUN_01242000 @ 01242000 size=292 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_01242000(int *param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  
  uVar1 = 1;
  if (*param_2 == '\x04') {
    iVar7 = *(int *)(param_2 + 8);
    iVar9 = *(int *)(param_2 + 0xc);
    iVar5 = *param_1;
    iVar8 = iVar7;
    do {
      while( true ) {
        iVar3 = iVar8;
        if (iVar3 == iVar7 + iVar9 * 0x18) {
          return 1;
        }
        uVar2 = 1;
        iVar8 = iVar3 + 0x18;
        if ((int)*(uint *)(iVar5 + 8) < 0) {
          uVar2 = *(uint *)(iVar5 + 8) ^ 0x80000000;
        }
        if (uVar2 == 0) break;
        if (uVar2 == 1) {
          puVar10 = *(undefined4 **)(iVar5 + 0xc);
          iVar11 = *(int *)(iVar5 + 0x10);
          if (iVar11 == 1) {
            iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,iVar3,param_3);
            if (iVar3 == 0) goto LAB_0124210c;
          }
          else {
            puVar6 = puVar10 + iVar11 * 8;
            if (iVar11 != 0) {
              do {
                iVar11 = (**(code **)(puVar10[1] + 0x10))(*puVar10,iVar3,param_3);
                if (iVar11 == 0) goto LAB_0124210c;
                puVar10 = puVar10 + 8;
              } while (puVar10 != puVar6);
            }
          }
        }
        else {
          puVar10 = *(undefined4 **)(iVar5 + 0x10);
          iVar11 = *(int *)(iVar5 + 0x14) << 5;
          while (iVar11 != 0) {
            iVar4 = (**(code **)(puVar10[1] + 0x10))(*puVar10,iVar3,param_3);
            iVar11 = iVar11 + -0x20;
            puVar10 = puVar10 + 8;
            if (iVar4 == 0) goto LAB_0124210c;
          }
        }
      }
    } while (*(int *)(iVar5 + 0xc) == 0);
LAB_0124210c:
    uVar1 = 0;
  }
  return uVar1;
}

