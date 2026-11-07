// FUN_007f3300 @ 007f3300 size=152 calls_out=0 calls_in=1
// strings: 

void FUN_007f3300(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  
  puVar8 = param_1 + 5;
  iVar11 = 0;
  do {
    uVar9 = *puVar8;
    if (uVar9 < puVar8[-5]) {
      uVar3 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      uVar7 = puVar8[4];
      iVar1 = iVar11;
      do {
        iVar4 = iVar1;
        puVar10 = (undefined4 *)((int)param_1 + iVar4);
        puVar10[5] = *puVar10;
        puVar10[6] = puVar10[1];
        puVar10[7] = puVar10[2];
        puVar10[8] = puVar10[3];
        puVar10[9] = puVar10[4];
        if (iVar4 == 0) {
          puVar2 = param_1;
          goto LAB_007f3320;
        }
        iVar1 = iVar4 + -0x14;
      } while (uVar9 < (uint)puVar10[-5]);
      puVar2 = (uint *)((int)param_1 + iVar4);
LAB_007f3320:
      *puVar2 = uVar9;
      puVar2[1] = uVar3;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar2[4] = uVar7;
    }
    puVar8 = puVar8 + 5;
    iVar11 = iVar11 + 0x14;
    if (puVar8 == param_1 + param_2 * 5) {
      return;
    }
  } while( true );
}

