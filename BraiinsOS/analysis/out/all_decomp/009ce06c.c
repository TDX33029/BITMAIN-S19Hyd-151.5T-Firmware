// FUN_009ce06c @ 009ce06c size=228 calls_out=0 calls_in=1
// strings: 

void FUN_009ce06c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  puVar9 = param_1 + 2;
  iVar7 = 0;
  do {
    uVar10 = puVar9[-2];
    iVar5 = puVar9[-1];
    uVar1 = (**(code **)(puVar9[1] + 0x28))(*puVar9);
    uVar2 = (**(code **)(iVar5 + 0x28))(uVar10);
    if (uVar1 < uVar2) {
      uVar10 = *puVar9;
      iVar3 = puVar9[1];
      iVar5 = iVar7;
      do {
        iVar8 = iVar5;
        puVar4 = (undefined4 *)((int)param_1 + iVar8);
        puVar4[2] = *puVar4;
        puVar4[3] = puVar4[1];
        if (iVar8 == 0) {
          puVar4 = param_1;
          goto LAB_009ce090;
        }
        uVar6 = *(undefined4 *)((int)param_1 + iVar8 + -8);
        iVar5 = *(int *)((int)param_1 + iVar8 + -4);
        uVar1 = (**(code **)(iVar3 + 0x28))(uVar10);
        uVar2 = (**(code **)(iVar5 + 0x28))(uVar6);
        iVar5 = iVar8 + -8;
      } while (uVar1 < uVar2);
      puVar4 = (undefined4 *)((int)param_1 + iVar8);
LAB_009ce090:
      *puVar4 = uVar10;
      puVar4[1] = iVar3;
    }
    puVar9 = puVar9 + 2;
    iVar7 = iVar7 + 8;
    if (puVar9 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}

