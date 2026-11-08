// FUN_0124ba7c @ 0124ba7c size=328 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_0124ba7c(int *param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  
  uVar1 = 1;
  if (*param_2 == '\x04') {
    iVar8 = *(int *)(param_2 + 8);
    uVar9 = *(uint *)(param_2 + 0xc);
    iVar5 = param_1[5];
    iVar6 = iVar8;
    if (iVar5 != 0) {
      if (uVar9 <= iVar5 - 1U) {
        return 1;
      }
      iVar6 = iVar8 + iVar5 * 0x18;
    }
    iVar5 = *param_1;
    do {
      while( true ) {
        iVar3 = iVar6;
        if (iVar3 == iVar8 + uVar9 * 0x18) {
          return 1;
        }
        uVar2 = 1;
        iVar6 = iVar3 + 0x18;
        if ((int)*(uint *)(iVar5 + 8) < 0) {
          uVar2 = *(uint *)(iVar5 + 8) ^ 0x80000000;
        }
        if (uVar2 == 0) break;
        if (uVar2 == 1) {
          puVar10 = *(undefined4 **)(iVar5 + 0xc);
          iVar11 = *(int *)(iVar5 + 0x10);
          if (iVar11 == 1) {
            iVar3 = (**(code **)(puVar10[1] + 0x10))(*puVar10,iVar3,param_3);
            if (iVar3 == 0) goto LAB_0124bbac;
          }
          else {
            puVar7 = puVar10 + iVar11 * 8;
            if (iVar11 != 0) {
              do {
                iVar11 = (**(code **)(puVar10[1] + 0x10))(*puVar10,iVar3,param_3);
                if (iVar11 == 0) goto LAB_0124bbac;
                puVar10 = puVar10 + 8;
              } while (puVar10 != puVar7);
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
            if (iVar4 == 0) goto LAB_0124bbac;
          }
        }
      }
    } while (*(int *)(iVar5 + 0xc) == 0);
LAB_0124bbac:
    uVar1 = 0;
  }
  return uVar1;
}

