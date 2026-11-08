// FUN_00b5e990 @ 00b5e990 size=124 calls_out=0 calls_in=1
// strings: 

void FUN_00b5e990(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  
  puVar2 = param_1 + 1;
  iVar7 = 0;
  do {
    puVar5 = (uint *)puVar2[-1];
    puVar6 = (uint *)*puVar2;
    if (*puVar6 < *puVar5) {
      iVar1 = iVar7;
      do {
        iVar4 = iVar1;
        *(uint **)((int)param_1 + iVar4 + 4) = puVar5;
        if (iVar4 == 0) {
          puVar3 = param_1;
          goto LAB_00b5e9a8;
        }
        puVar5 = *(uint **)((int)param_1 + iVar4 + -4);
        iVar1 = iVar4 + -4;
      } while (*puVar6 < *puVar5);
      puVar3 = (undefined4 *)((int)param_1 + iVar4);
LAB_00b5e9a8:
      *puVar3 = puVar6;
    }
    puVar2 = puVar2 + 1;
    iVar7 = iVar7 + 4;
    if (puVar2 == param_1 + param_2) {
      return;
    }
  } while( true );
}

