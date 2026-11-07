// FUN_007347c8 @ 007347c8 size=228 calls_out=0 calls_in=1
// strings: 

void FUN_007347c8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar2 = param_1 + 6;
  iVar1 = 0;
  do {
    uVar5 = puVar2[2];
    uVar8 = puVar2[3];
    if (uVar8 <= (uint)puVar2[-3] && (uint)((uint)puVar2[-4] <= uVar5) <= uVar8 - puVar2[-3]) {
      uVar10 = puVar2[4];
      uVar6 = puVar2[5];
      uVar7 = *puVar2;
      uVar11 = puVar2[1];
      puVar4 = puVar2;
      iVar9 = iVar1;
      do {
        puVar3 = puVar4;
        puVar4 = puVar3 + -6;
        *puVar3 = *puVar4;
        puVar3[1] = puVar3[-5];
        puVar3[2] = puVar3[-4];
        puVar3[3] = puVar3[-3];
        puVar3[4] = puVar3[-2];
        puVar3[5] = puVar3[-1];
        if (iVar9 == 0) {
          puVar4 = param_1;
          break;
        }
        iVar9 = iVar9 + 0x18;
      } while (uVar8 <= (uint)puVar3[-9] && (uint)((uint)puVar3[-10] <= uVar5) <= uVar8 - puVar3[-9]
              );
      *puVar4 = uVar7;
      puVar4[1] = uVar11;
      puVar3[-2] = uVar10;
      puVar3[-1] = uVar6;
      puVar3[-4] = uVar5;
      puVar3[-3] = uVar8;
    }
    puVar2 = puVar2 + 6;
    iVar1 = iVar1 + -0x18;
    if (puVar2 == param_1 + param_2 * 6) {
      return;
    }
  } while( true );
}

