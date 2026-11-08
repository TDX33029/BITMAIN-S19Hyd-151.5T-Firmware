// FUN_012244cc @ 012244cc size=552 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_012244cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  piVar9 = *(int **)(param_1 + 4);
  uVar1 = *(uint *)(param_1 + 8);
  piVar7 = piVar9;
  uVar12 = 0;
  do {
    while( true ) {
      uVar11 = uVar12;
      if (piVar7 == piVar9 + uVar1 * 5) goto LAB_012246e4;
      piVar10 = piVar7 + 5;
      iVar2 = *piVar7;
      uVar3 = 1;
      uVar12 = uVar11 + 1;
      if ((int)*(uint *)(iVar2 + 8) < 0) {
        uVar3 = *(uint *)(iVar2 + 8) ^ 0x80000000;
      }
      piVar7 = piVar10;
      if (uVar3 == 0) break;
      if (uVar3 == 1) {
        iVar4 = *(int *)(iVar2 + 0x10);
        puVar5 = *(undefined4 **)(iVar2 + 0xc);
        if (iVar4 == 1) {
          iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
          if (iVar2 != 0) goto LAB_012245e4;
        }
        else {
          if (iVar4 == 0) goto LAB_012245e4;
          puVar6 = puVar5 + iVar4 * 8;
          while (iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3), iVar2 != 0) {
            puVar5 = puVar5 + 8;
            if (puVar5 == puVar6) goto LAB_012245e4;
          }
        }
      }
      else {
        puVar5 = *(undefined4 **)(iVar2 + 0x10);
        iVar2 = *(int *)(iVar2 + 0x14) << 5;
        do {
          if (iVar2 == 0) goto LAB_012245e4;
          iVar4 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
          iVar2 = iVar2 + -0x20;
          puVar5 = puVar5 + 8;
        } while (iVar4 != 0);
      }
    }
  } while (*(int *)(iVar2 + 0xc) != 0);
LAB_012245e4:
  uVar8 = 1;
  if (uVar11 < uVar1) {
    piVar7 = piVar9 + uVar11 * 5;
    do {
      while( true ) {
        piVar7 = piVar7 + 5;
        if (piVar7 == piVar9 + uVar1 * 5) {
          return 1;
        }
        iVar2 = *piVar7;
        uVar12 = 1;
        if ((int)*(uint *)(iVar2 + 8) < 0) {
          uVar12 = *(uint *)(iVar2 + 8) ^ 0x80000000;
        }
        if (uVar12 == 0) break;
        if (uVar12 == 1) {
          iVar4 = *(int *)(iVar2 + 0x10);
          puVar5 = *(undefined4 **)(iVar2 + 0xc);
          if (iVar4 == 1) {
            iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
            if (iVar2 != 0) goto LAB_012246e4;
          }
          else {
            if (iVar4 == 0) goto LAB_012246e4;
            puVar6 = puVar5 + iVar4 * 8;
            while (iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3), iVar2 != 0) {
              puVar5 = puVar5 + 8;
              if (puVar5 == puVar6) goto LAB_012246e4;
            }
          }
        }
        else {
          puVar5 = *(undefined4 **)(iVar2 + 0x10);
          iVar2 = *(int *)(iVar2 + 0x14) << 5;
          do {
            if (iVar2 == 0) goto LAB_012246e4;
            iVar4 = (**(code **)(puVar5[1] + 0x10))(*puVar5,param_2,param_3);
            iVar2 = iVar2 + -0x20;
            puVar5 = puVar5 + 8;
          } while (iVar4 != 0);
        }
      }
    } while (*(int *)(iVar2 + 0xc) != 0);
LAB_012246e4:
    uVar8 = 0;
  }
  return uVar8;
}

