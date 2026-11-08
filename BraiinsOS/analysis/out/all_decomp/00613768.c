// FUN_00613768 @ 00613768 size=200 calls_out=0 calls_in=1
// strings: 

void FUN_00613768(uint *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  
  puVar10 = param_1 + 6;
  iVar3 = 0;
  do {
    uVar12 = *puVar10;
    uVar11 = puVar10[1];
    if (uVar11 <= puVar10[-5] && (uint)(puVar10[-6] <= uVar12) <= uVar11 - puVar10[-5]) {
      uVar4 = puVar10[2];
      uVar6 = puVar10[3];
      uVar8 = puVar10[4];
      uVar9 = puVar10[5];
      puVar5 = puVar10;
      iVar7 = iVar3;
      do {
        puVar13 = puVar5 + -6;
        *puVar5 = *puVar13;
        puVar5[1] = puVar5[-5];
        puVar5[2] = puVar5[-4];
        puVar5[3] = puVar5[-3];
        puVar5[4] = puVar5[-2];
        puVar5[5] = puVar5[-1];
        if (iVar7 == 0) {
          puVar13 = param_1;
          break;
        }
        puVar1 = puVar5 + -0xc;
        puVar2 = puVar5 + -0xb;
        iVar7 = iVar7 + 0x18;
        puVar5 = puVar13;
      } while (uVar11 <= *puVar2 && (uint)(*puVar1 <= uVar12) <= uVar11 - *puVar2);
      *puVar13 = uVar12;
      puVar13[1] = uVar11;
      puVar13[2] = uVar4;
      puVar13[3] = uVar6;
      puVar13[4] = uVar8;
      puVar13[5] = uVar9;
    }
    puVar10 = puVar10 + 6;
    iVar3 = iVar3 + -0x18;
    if (puVar10 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

