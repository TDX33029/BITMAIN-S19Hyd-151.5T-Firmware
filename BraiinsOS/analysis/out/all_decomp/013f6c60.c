// FUN_013f6c60 @ 013f6c60 size=184 calls_out=0 calls_in=2
// strings: 

void FUN_013f6c60(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  puVar3 = param_1 + 2;
  iVar8 = 0;
  do {
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    bVar10 = puVar3[-2] <= uVar6;
    if (uVar6 == puVar3[-2]) {
      bVar10 = puVar3[-1] <= uVar7;
    }
    if (!bVar10) {
      iVar1 = iVar8;
      do {
        iVar5 = iVar1;
        puVar2 = (undefined4 *)((int)param_1 + iVar5);
        puVar2[2] = *puVar2;
        puVar2[3] = puVar2[1];
        if (iVar5 == 0) {
          puVar4 = param_1;
          goto LAB_013f6c78;
        }
        uVar9 = *(uint *)((int)param_1 + iVar5 + -8);
        bVar10 = uVar9 <= uVar6;
        if (uVar6 == uVar9) {
          bVar10 = *(uint *)((int)param_1 + iVar5 + -4) <= uVar7;
        }
        iVar1 = iVar5 + -8;
      } while (!bVar10);
      puVar4 = (uint *)((int)param_1 + iVar5);
LAB_013f6c78:
      *puVar4 = uVar6;
      puVar4[1] = uVar7;
    }
    puVar3 = puVar3 + 2;
    iVar8 = iVar8 + 8;
    if (puVar3 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}

