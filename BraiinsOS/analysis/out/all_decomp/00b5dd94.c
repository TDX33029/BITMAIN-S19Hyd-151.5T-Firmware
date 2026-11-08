// FUN_00b5dd94 @ 00b5dd94 size=192 calls_out=0 calls_in=1
// strings: 

void FUN_00b5dd94(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  puVar3 = param_1 + 3;
  iVar2 = 0;
  do {
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    bVar11 = puVar3[-3] <= uVar6;
    if (uVar6 == puVar3[-3]) {
      bVar11 = puVar3[-2] <= uVar7;
    }
    if (!bVar11) {
      uVar10 = puVar3[2];
      iVar1 = iVar2;
      do {
        iVar5 = iVar1;
        puVar8 = (undefined4 *)((int)param_1 + iVar5);
        puVar8[3] = *puVar8;
        puVar8[4] = puVar8[1];
        puVar8[5] = puVar8[2];
        if (iVar5 == 0) {
          puVar4 = param_1;
          goto LAB_00b5ddb0;
        }
        uVar9 = *(uint *)((int)param_1 + iVar5 + -0xc);
        bVar11 = uVar9 <= uVar6;
        if (uVar6 == uVar9) {
          bVar11 = *(uint *)((int)param_1 + iVar5 + -8) <= uVar7;
        }
        iVar1 = iVar5 + -0xc;
      } while (!bVar11);
      puVar4 = (uint *)((int)param_1 + iVar5);
LAB_00b5ddb0:
      *puVar4 = uVar6;
      puVar4[1] = uVar7;
      puVar4[2] = uVar10;
    }
    puVar3 = puVar3 + 3;
    iVar2 = iVar2 + 0xc;
    if (puVar3 == param_1 + param_2 * 3) {
      return;
    }
  } while( true );
}

