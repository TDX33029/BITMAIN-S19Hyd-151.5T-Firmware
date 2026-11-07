// FUN_009ce170 @ 009ce170 size=148 calls_out=0 calls_in=1
// strings: 

void FUN_009ce170(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  puVar3 = param_1 + 2;
  iVar2 = 0;
  do {
    puVar5 = (uint *)*puVar3;
    if (*puVar5 < *(uint *)puVar3[-2]) {
      uVar7 = puVar3[1];
      iVar1 = iVar2;
      do {
        iVar4 = iVar1;
        puVar6 = (undefined4 *)((int)param_1 + iVar4);
        puVar6[2] = *puVar6;
        puVar6[3] = puVar6[1];
        if (iVar4 == 0) {
          puVar6 = param_1;
          goto LAB_009ce188;
        }
        iVar1 = iVar4 + -8;
      } while (*puVar5 < **(uint **)((int)param_1 + iVar4 + -8));
      puVar6 = (undefined4 *)((int)param_1 + iVar4);
LAB_009ce188:
      *puVar6 = puVar5;
      puVar6[1] = uVar7;
    }
    puVar3 = puVar3 + 2;
    iVar2 = iVar2 + 8;
    if (puVar3 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}

