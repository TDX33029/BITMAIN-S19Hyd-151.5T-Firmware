// FUN_007345a8 @ 007345a8 size=208 calls_out=0 calls_in=1
// strings: 

void FUN_007345a8(uint *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  
  puVar12 = param_1 + 6;
  iVar3 = 0;
  do {
    uVar13 = *puVar12;
    uVar11 = puVar12[1];
    if (uVar11 <= puVar12[-5] && (uint)(puVar12[-6] <= uVar13) <= uVar11 - puVar12[-5]) {
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar6 = puVar12[4];
      uVar9 = puVar12[5];
      iVar7 = iVar3;
      puVar10 = puVar12;
      do {
        puVar8 = puVar10 + -6;
        *puVar10 = *puVar8;
        puVar10[1] = puVar10[-5];
        puVar10[2] = puVar10[-4];
        puVar10[3] = puVar10[-3];
        puVar10[4] = puVar10[-2];
        puVar10[5] = puVar10[-1];
        if (iVar7 == 0) {
          puVar8 = param_1;
          break;
        }
        puVar1 = puVar10 + -0xc;
        puVar2 = puVar10 + -0xb;
        iVar7 = iVar7 + 0x18;
        puVar10 = puVar8;
      } while (uVar11 <= *puVar2 && (uint)(*puVar1 <= uVar13) <= uVar11 - *puVar2);
      *puVar8 = uVar13;
      puVar8[1] = uVar11;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8[4] = uVar6;
      puVar8[5] = uVar9;
    }
    puVar12 = puVar12 + 6;
    iVar3 = iVar3 + -0x18;
    if (puVar12 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

