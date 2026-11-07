// FUN_0167036c @ 0167036c size=216 calls_out=0 calls_in=1
// strings: 

void FUN_0167036c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  
  puVar10 = param_1 + 6;
  iVar4 = 0;
  do {
    uVar11 = puVar10[4];
    if (uVar11 < (uint)puVar10[-2]) {
      uVar3 = puVar10[1];
      uVar8 = puVar10[2];
      uVar12 = *puVar10;
      uVar2 = puVar10[3];
      uVar7 = puVar10[5];
      iVar1 = iVar4;
      do {
        iVar6 = iVar1;
        puVar9 = (undefined4 *)((int)param_1 + iVar6);
        puVar9[6] = *puVar9;
        puVar9[7] = puVar9[1];
        puVar9[8] = puVar9[2];
        puVar9[9] = puVar9[3];
        puVar9[10] = puVar9[4];
        puVar9[0xb] = puVar9[5];
        if (iVar6 == 0) {
          puVar5 = param_1;
          goto LAB_01670390;
        }
        iVar1 = iVar6 + -0x18;
      } while (uVar11 < (uint)puVar9[-2]);
      puVar5 = (undefined4 *)((int)param_1 + iVar6);
LAB_01670390:
      puVar5[3] = uVar2;
      *puVar5 = uVar12;
      puVar5[1] = uVar3;
      puVar5[2] = uVar8;
      puVar9[4] = uVar11;
      puVar9[5] = uVar7;
    }
    puVar10 = puVar10 + 6;
    iVar4 = iVar4 + 0x18;
    if (puVar10 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

