// FUN_00b5db8c @ 00b5db8c size=180 calls_out=0 calls_in=0
// strings: 

void FUN_00b5db8c(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  
  puVar11 = param_1 + 6;
  iVar10 = 0;
  do {
    uVar12 = *puVar11;
    if (uVar12 < puVar11[-6]) {
      uVar2 = puVar11[1];
      uVar3 = puVar11[2];
      uVar5 = puVar11[3];
      uVar8 = puVar11[4];
      uVar9 = puVar11[5];
      iVar1 = iVar10;
      do {
        iVar6 = iVar1;
        puVar7 = (undefined4 *)((int)param_1 + iVar6);
        puVar7[6] = *puVar7;
        puVar7[7] = puVar7[1];
        puVar7[8] = puVar7[2];
        puVar7[9] = puVar7[3];
        puVar7[10] = puVar7[4];
        puVar7[0xb] = puVar7[5];
        if (iVar6 == 0) {
          puVar4 = param_1;
          goto LAB_00b5dbb4;
        }
        iVar1 = iVar6 + -0x18;
      } while (uVar12 < (uint)puVar7[-6]);
      puVar4 = (uint *)((int)param_1 + iVar6);
LAB_00b5dbb4:
      *puVar4 = uVar12;
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
      puVar4[3] = uVar5;
      puVar4[4] = uVar8;
      puVar4[5] = uVar9;
    }
    puVar11 = puVar11 + 6;
    iVar10 = iVar10 + 0x18;
    if (puVar11 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

