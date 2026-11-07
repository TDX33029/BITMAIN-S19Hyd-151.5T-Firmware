// FUN_011d3fd0 @ 011d3fd0 size=360 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_011d3fd0(uint *param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar1 = 1;
  if (*param_2 == '\x04') {
    if (*(int *)(param_2 + 0xc) == 0) {
      return 0;
    }
    iVar8 = *(int *)(param_2 + 8);
    uVar12 = param_1[2];
    uVar11 = 0;
    iVar2 = iVar8 + *(int *)(param_2 + 0xc) * 0x18;
    uVar3 = *param_1;
    uVar9 = 0;
    uVar4 = param_1[1];
    do {
      uVar5 = 1;
      if ((int)*(uint *)(uVar12 + 8) < 0) {
        uVar5 = *(uint *)(uVar12 + 8) ^ 0x80000000;
      }
      if (uVar5 == 0) {
        if ((*(int *)(uVar12 + 0xc) == 0) ||
           (iVar10 = (**(code **)(*(int *)(uVar12 + 0x10) + 0x10))
                               (*(int *)(uVar12 + 0xc),iVar8,param_3), iVar10 != 0)) {
LAB_011d402c:
          bVar13 = 0xfffffffe < uVar11;
          uVar11 = uVar11 + 1;
          uVar9 = uVar9 + bVar13;
          if (uVar4 <= uVar9 && (uint)(uVar11 <= uVar3) <= uVar4 - uVar9) {
            return 0;
          }
        }
      }
      else if (uVar5 == 1) {
        puVar7 = *(undefined4 **)(uVar12 + 0xc);
        iVar10 = *(int *)(uVar12 + 0x10) << 5;
        do {
          if (iVar10 == 0) goto LAB_011d402c;
          iVar6 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar8,param_3);
          iVar10 = iVar10 + -0x20;
          puVar7 = puVar7 + 8;
        } while (iVar6 != 0);
      }
      else {
        puVar7 = *(undefined4 **)(uVar12 + 0x10);
        iVar10 = *(int *)(uVar12 + 0x14) << 5;
        do {
          if (iVar10 == 0) goto LAB_011d402c;
          iVar6 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar8,param_3);
          iVar10 = iVar10 + -0x20;
          puVar7 = puVar7 + 8;
        } while (iVar6 != 0);
      }
      iVar8 = iVar8 + 0x18;
    } while (iVar8 != iVar2);
    uVar1 = 0;
    if (uVar11 != 0 || uVar9 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

