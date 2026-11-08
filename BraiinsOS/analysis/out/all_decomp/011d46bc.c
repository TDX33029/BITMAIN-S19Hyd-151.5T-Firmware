// FUN_011d46bc @ 011d46bc size=372 calls_out=0 calls_in=0
// strings: 

bool FUN_011d46bc(uint *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  bVar12 = true;
  if (*param_2 == '\x04') {
    uVar4 = *param_1;
    uVar7 = param_1[1];
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar6 = *(int *)(param_2 + 8);
      uVar11 = param_1[2];
      uVar10 = 0;
      uVar8 = 0;
      iVar3 = iVar6 + *(int *)(param_2 + 0xc) * 0x18;
      do {
        uVar1 = 1;
        if ((int)*(uint *)(uVar11 + 8) < 0) {
          uVar1 = *(uint *)(uVar11 + 8) ^ 0x80000000;
        }
        if (uVar1 == 0) {
          if ((*(int *)(uVar11 + 0xc) == 0) ||
             (iVar9 = (**(code **)(*(int *)(uVar11 + 0x10) + 0x10))
                                (*(int *)(uVar11 + 0xc),iVar6,param_3), iVar9 != 0)) {
LAB_011d4710:
            bVar12 = 0xfffffffe < uVar10;
            uVar10 = uVar10 + 1;
            uVar8 = uVar8 + bVar12;
            if (uVar7 < uVar8 || uVar8 - uVar7 < (uint)(uVar4 <= uVar10)) {
              return true;
            }
          }
        }
        else if (uVar1 == 1) {
          puVar5 = *(undefined4 **)(uVar11 + 0xc);
          iVar9 = *(int *)(uVar11 + 0x10) << 5;
          do {
            if (iVar9 == 0) goto LAB_011d4710;
            iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,iVar6,param_3);
            iVar9 = iVar9 + -0x20;
            puVar5 = puVar5 + 8;
          } while (iVar2 != 0);
        }
        else {
          puVar5 = *(undefined4 **)(uVar11 + 0x10);
          iVar9 = *(int *)(uVar11 + 0x14) << 5;
          do {
            if (iVar9 == 0) goto LAB_011d4710;
            iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,iVar6,param_3);
            iVar9 = iVar9 + -0x20;
            puVar5 = puVar5 + 8;
          } while (iVar2 != 0);
        }
        iVar6 = iVar6 + 0x18;
      } while (iVar6 != iVar3);
    }
    bVar12 = uVar4 == 0 && uVar7 == 0;
  }
  return bVar12;
}

