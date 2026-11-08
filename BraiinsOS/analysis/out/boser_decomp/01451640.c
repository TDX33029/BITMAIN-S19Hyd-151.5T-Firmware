// FUN_01451640 @ 01451640 size=128 calls_out=0 calls_in=3
// strings: 

void FUN_01451640(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  puVar3 = param_1 + 2;
  iVar2 = 0;
  do {
    uVar6 = *puVar3;
    if (uVar6 < puVar3[-2]) {
      uVar8 = puVar3[1];
      iVar1 = iVar2;
      do {
        iVar4 = iVar1;
        puVar7 = (undefined4 *)((int)param_1 + iVar4);
        puVar7[2] = *puVar7;
        puVar7[3] = puVar7[1];
        if (iVar4 == 0) {
          puVar5 = param_1;
          goto LAB_014516a8;
        }
        iVar1 = iVar4 + -8;
      } while (uVar6 < *(uint *)((int)param_1 + iVar4 + -8));
      puVar5 = (uint *)((int)param_1 + iVar4);
LAB_014516a8:
      *puVar5 = uVar6;
      puVar5[1] = uVar8;
    }
    puVar3 = puVar3 + 2;
    iVar2 = iVar2 + 8;
    if (puVar3 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}

