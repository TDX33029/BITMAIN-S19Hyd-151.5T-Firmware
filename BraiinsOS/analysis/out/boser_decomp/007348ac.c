// FUN_007348ac @ 007348ac size=224 calls_out=0 calls_in=1
// strings: 

void FUN_007348ac(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  puVar11 = param_1 + 8;
  iVar9 = 0;
  do {
    uVar7 = puVar11[2];
    uVar8 = puVar11[3];
    if (uVar8 <= (uint)puVar11[-5] && (uint)((uint)puVar11[-6] <= uVar7) <= uVar8 - puVar11[-5]) {
      uVar1 = *puVar11;
      uVar3 = puVar11[1];
      uVar2 = puVar11[4];
      uVar4 = puVar11[5];
      uVar6 = puVar11[6];
      uVar10 = puVar11[7];
      iVar5 = iVar9;
      puVar13 = puVar11;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + -8;
        *puVar12 = *puVar13;
        puVar12[1] = puVar12[-7];
        puVar12[2] = puVar12[-6];
        puVar12[3] = puVar12[-5];
        puVar12[4] = puVar12[-4];
        puVar12[5] = puVar12[-3];
        puVar12[6] = puVar12[-2];
        puVar12[7] = puVar12[-1];
        if (iVar5 == 0) {
          puVar13 = param_1;
          break;
        }
        iVar5 = iVar5 + 0x20;
      } while (uVar8 <= (uint)puVar12[-0xd] &&
               (uint)((uint)puVar12[-0xe] <= uVar7) <= uVar8 - puVar12[-0xd]);
      *puVar13 = uVar1;
      puVar13[1] = uVar3;
      puVar12[-6] = uVar7;
      puVar12[-5] = uVar8;
      puVar12[-4] = uVar2;
      puVar12[-3] = uVar4;
      puVar12[-2] = uVar6;
      puVar12[-1] = uVar10;
    }
    puVar11 = puVar11 + 8;
    iVar9 = iVar9 + -0x20;
    if (puVar11 == param_1 + param_2 * 8) {
      return;
    }
  } while( true );
}

