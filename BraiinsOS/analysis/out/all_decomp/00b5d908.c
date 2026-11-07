// FUN_00b5d908 @ 00b5d908 size=204 calls_out=0 calls_in=3
// strings: 

void FUN_00b5d908(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  puVar9 = param_1 + 4;
  iVar11 = 0;
  do {
    uVar5 = *puVar9;
    uVar10 = puVar9[1];
    bVar12 = puVar9[-4] <= uVar5;
    if (uVar5 == puVar9[-4]) {
      bVar12 = puVar9[-3] <= uVar10;
    }
    if (!bVar12) {
      uVar7 = puVar9[2];
      uVar8 = puVar9[3];
      iVar1 = iVar11;
      do {
        iVar4 = iVar1;
        puVar6 = (undefined4 *)((int)param_1 + iVar4);
        puVar6[4] = *puVar6;
        puVar6[5] = puVar6[1];
        puVar6[6] = puVar6[2];
        puVar6[7] = puVar6[3];
        if (iVar4 == 0) {
          puVar3 = param_1;
          goto LAB_00b5d920;
        }
        uVar2 = *(uint *)((int)param_1 + iVar4 + -0x10);
        bVar12 = uVar2 <= uVar5;
        if (uVar5 == uVar2) {
          bVar12 = *(uint *)((int)param_1 + iVar4 + -0xc) <= uVar10;
        }
        iVar1 = iVar4 + -0x10;
      } while (!bVar12);
      puVar3 = (uint *)((int)param_1 + iVar4);
LAB_00b5d920:
      *puVar3 = uVar5;
      puVar3[1] = uVar10;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
    }
    puVar9 = puVar9 + 4;
    iVar11 = iVar11 + 0x10;
    if (puVar9 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

