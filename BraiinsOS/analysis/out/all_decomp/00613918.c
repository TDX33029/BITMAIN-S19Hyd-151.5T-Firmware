// FUN_00613918 @ 00613918 size=220 calls_out=0 calls_in=1
// strings: 

void FUN_00613918(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  
  puVar10 = param_1 + 8;
  iVar13 = 0;
  do {
    uVar12 = puVar10[2];
    uVar7 = puVar10[3];
    if (uVar7 <= (uint)puVar10[-5] && (uint)((uint)puVar10[-6] <= uVar12) <= uVar7 - puVar10[-5]) {
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      uVar3 = puVar10[4];
      uVar4 = puVar10[5];
      uVar6 = puVar10[6];
      uVar8 = puVar10[7];
      iVar5 = iVar13;
      puVar9 = puVar10;
      do {
        puVar11 = puVar9;
        puVar9 = puVar11 + -8;
        *puVar11 = *puVar9;
        puVar11[1] = puVar11[-7];
        puVar11[2] = puVar11[-6];
        puVar11[3] = puVar11[-5];
        puVar11[4] = puVar11[-4];
        puVar11[5] = puVar11[-3];
        puVar11[6] = puVar11[-2];
        puVar11[7] = puVar11[-1];
        if (iVar5 == 0) {
          puVar9 = param_1;
          break;
        }
        iVar5 = iVar5 + 0x20;
      } while (uVar7 <= (uint)puVar11[-0xd] &&
               (uint)((uint)puVar11[-0xe] <= uVar12) <= uVar7 - puVar11[-0xd]);
      *puVar9 = uVar1;
      puVar9[1] = uVar2;
      puVar11[-1] = uVar8;
      puVar11[-2] = uVar6;
      puVar11[-3] = uVar4;
      puVar11[-4] = uVar3;
      puVar11[-6] = uVar12;
      puVar11[-5] = uVar7;
    }
    puVar10 = puVar10 + 8;
    iVar13 = iVar13 + -0x20;
    if (puVar10 == param_1 + param_2 * 8) {
      return;
    }
  } while( true );
}

