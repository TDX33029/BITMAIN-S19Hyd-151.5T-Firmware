// FUN_0061361c @ 0061361c size=132 calls_out=0 calls_in=2
// strings: 

void FUN_0061361c(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
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
        iVar5 = iVar1;
        puVar7 = (undefined4 *)((int)param_1 + iVar5);
        puVar7[2] = *puVar7;
        puVar7[3] = puVar7[1];
        if (iVar5 == 0) {
          puVar4 = param_1;
          goto LAB_00613634;
        }
        iVar1 = iVar5 + -8;
      } while (uVar6 < *(uint *)((int)param_1 + iVar5 + -8));
      puVar4 = (uint *)((int)param_1 + iVar5);
LAB_00613634:
      *puVar4 = uVar6;
      puVar4[1] = uVar8;
    }
    puVar3 = puVar3 + 2;
    iVar2 = iVar2 + 8;
    if (puVar3 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}

