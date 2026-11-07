// FUN_00b5d808 @ 00b5d808 size=256 calls_out=0 calls_in=2
// strings: 

void FUN_00b5d808(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  puVar10 = param_1 + 6;
  iVar7 = 0;
  do {
    uVar11 = puVar10[1];
    uVar12 = *puVar10;
    bVar13 = puVar10[-6] <= uVar12;
    if (uVar12 == puVar10[-6]) {
      bVar13 = puVar10[-5] <= uVar11;
    }
    if (!bVar13) {
      uVar2 = puVar10[2];
      uVar5 = puVar10[3];
      uVar8 = puVar10[4];
      uVar9 = puVar10[5];
      iVar1 = iVar7;
      do {
        iVar6 = iVar1;
        puVar3 = (undefined4 *)((int)param_1 + iVar6);
        puVar3[6] = *puVar3;
        puVar3[7] = puVar3[1];
        puVar3[8] = puVar3[2];
        puVar3[9] = puVar3[3];
        puVar3[10] = puVar3[4];
        puVar3[0xb] = puVar3[5];
        if (iVar6 == 0) {
          puVar4 = param_1;
          goto LAB_00b5d82c;
        }
        bVar13 = (uint)puVar3[-6] <= uVar12;
        if (uVar12 == puVar3[-6]) {
          bVar13 = (uint)puVar3[-5] <= uVar11;
        }
        iVar1 = iVar6 + -0x18;
      } while (!bVar13);
      puVar4 = (uint *)((int)param_1 + iVar6);
LAB_00b5d82c:
      *puVar4 = uVar12;
      puVar4[2] = uVar2;
      puVar4[3] = uVar5;
      puVar4[4] = uVar8;
      puVar4[1] = uVar11;
      puVar4[5] = uVar9;
    }
    puVar10 = puVar10 + 6;
    iVar7 = iVar7 + 0x18;
    if (puVar10 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

