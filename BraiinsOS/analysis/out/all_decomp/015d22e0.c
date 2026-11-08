// FUN_015d22e0 @ 015d22e0 size=252 calls_out=0 calls_in=1
// strings: 

void FUN_015d22e0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  iVar11 = 0;
  puVar1 = param_1;
  puVar5 = param_1 + 6;
  do {
    uVar9 = puVar1[8];
    uVar10 = puVar1[9];
    if (uVar10 <= (uint)puVar1[3] && (uint)((uint)puVar1[2] <= uVar9) <= uVar10 - puVar1[3]) {
      uVar6 = puVar1[10];
      uVar2 = puVar1[0xb];
      uVar3 = *puVar5;
      uVar7 = puVar5[1];
      iVar8 = iVar11;
      puVar1 = puVar5;
      do {
        puVar4 = puVar1;
        puVar1 = puVar4 + -6;
        *puVar4 = *puVar1;
        puVar4[1] = puVar4[-5];
        puVar4[2] = puVar4[-4];
        puVar4[3] = puVar4[-3];
        puVar4[4] = puVar4[-2];
        puVar4[5] = puVar4[-1];
        if (iVar8 == 0) {
          puVar1 = param_1;
          break;
        }
        iVar8 = iVar8 + 0x18;
      } while (uVar10 <= (uint)puVar4[-9] &&
               (uint)((uint)puVar4[-10] <= uVar9) <= uVar10 - puVar4[-9]);
      *puVar1 = uVar3;
      puVar1[1] = uVar7;
      puVar4[-2] = uVar6;
      puVar4[-1] = uVar2;
      puVar4[-4] = uVar9;
      puVar4[-3] = uVar10;
    }
    puVar4 = puVar5 + 6;
    iVar11 = iVar11 + -0x18;
    puVar1 = puVar5;
    puVar5 = puVar4;
    if (puVar4 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

