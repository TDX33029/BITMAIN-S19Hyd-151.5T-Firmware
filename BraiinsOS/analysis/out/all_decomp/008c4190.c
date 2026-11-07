// FUN_008c4190 @ 008c4190 size=176 calls_out=0 calls_in=8
// strings: 

void FUN_008c4190(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar8 = param_1 + 4;
  iVar9 = 0;
  do {
    uVar2 = puVar8[3];
    if (uVar2 < (uint)puVar8[-1]) {
      uVar3 = *puVar8;
      uVar5 = puVar8[1];
      uVar7 = puVar8[2];
      iVar1 = iVar9;
      do {
        iVar4 = iVar1;
        puVar6 = (undefined4 *)((int)param_1 + iVar4);
        puVar6[4] = *puVar6;
        puVar6[5] = puVar6[1];
        puVar6[6] = puVar6[2];
        puVar6[7] = puVar6[3];
        if (iVar4 == 0) {
          puVar6 = param_1;
          goto LAB_008c41b4;
        }
        iVar1 = iVar4 + -0x10;
      } while (uVar2 < *(uint *)((int)param_1 + iVar4 + -4));
      puVar6 = (undefined4 *)((int)param_1 + iVar4);
LAB_008c41b4:
      *puVar6 = uVar3;
      puVar6[1] = uVar5;
      puVar6[2] = uVar7;
      *(uint *)((int)param_1 + iVar4 + 0xc) = uVar2;
    }
    puVar8 = puVar8 + 4;
    iVar9 = iVar9 + 0x10;
    if (puVar8 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

