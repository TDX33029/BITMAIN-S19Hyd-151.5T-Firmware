// FUN_00b5df18 @ 00b5df18 size=160 calls_out=0 calls_in=0
// strings: 

void FUN_00b5df18(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  
  puVar9 = param_1 + 4;
  iVar10 = 0;
  do {
    uVar2 = *puVar9;
    if (uVar2 < puVar9[-4]) {
      uVar4 = puVar9[1];
      uVar6 = puVar9[2];
      uVar8 = puVar9[3];
      iVar1 = iVar10;
      do {
        iVar5 = iVar1;
        puVar7 = (undefined4 *)((int)param_1 + iVar5);
        puVar7[4] = *puVar7;
        puVar7[5] = puVar7[1];
        puVar7[6] = puVar7[2];
        puVar7[7] = puVar7[3];
        if (iVar5 == 0) {
          puVar3 = param_1;
          goto LAB_00b5df34;
        }
        iVar1 = iVar5 + -0x10;
      } while (uVar2 < *(uint *)((int)param_1 + iVar5 + -0x10));
      puVar3 = (uint *)((int)param_1 + iVar5);
LAB_00b5df34:
      *puVar3 = uVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar6;
      puVar3[3] = uVar8;
    }
    puVar9 = puVar9 + 4;
    iVar10 = iVar10 + 0x10;
    if (puVar9 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

