// FUN_01a4ceac @ 01a4ceac size=204 calls_out=0 calls_in=1
// strings: 

void FUN_01a4ceac(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  puVar12 = param_1 + 6;
  iVar5 = 0;
  do {
    uVar11 = puVar12[4];
    if (uVar11 < (uint)puVar12[-2]) {
      uVar2 = *puVar12;
      uVar4 = puVar12[1];
      uVar7 = puVar12[2];
      uVar10 = puVar12[3];
      uVar3 = puVar12[5];
      iVar1 = iVar5;
      do {
        iVar8 = iVar1;
        puVar6 = (undefined4 *)((int)param_1 + iVar8);
        puVar6[6] = *puVar6;
        puVar6[7] = puVar6[1];
        puVar6[8] = puVar6[2];
        puVar6[9] = puVar6[3];
        puVar6[10] = puVar6[4];
        puVar6[0xb] = puVar6[5];
        if (iVar8 == 0) {
          puVar9 = param_1;
          goto LAB_01a4cf3c;
        }
        iVar1 = iVar8 + -0x18;
      } while (uVar11 < (uint)puVar6[-2]);
      puVar9 = (undefined4 *)((int)param_1 + iVar8);
LAB_01a4cf3c:
      *puVar9 = uVar2;
      puVar9[1] = uVar4;
      puVar9[2] = uVar7;
      puVar9[3] = uVar10;
      puVar6[4] = uVar11;
      puVar6[5] = uVar3;
    }
    puVar12 = puVar12 + 6;
    iVar5 = iVar5 + 0x18;
    if (puVar12 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

