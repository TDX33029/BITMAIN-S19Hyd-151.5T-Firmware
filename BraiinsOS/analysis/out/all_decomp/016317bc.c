// FUN_016317bc @ 016317bc size=168 calls_out=3 calls_in=2
// strings: 

void FUN_016317bc(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 != 0) {
    iVar8 = 0;
    do {
      piVar1 = (int *)(param_1 + iVar8 * 8);
      iVar7 = *piVar1;
      iVar8 = iVar8 + 1;
      iVar6 = piVar1[1];
      if (iVar6 != 0) {
        puVar5 = (undefined4 *)(iVar7 + 0xc);
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          if (1 < *(ushort *)(puVar5 + -3)) {
            if (*(ushort *)(puVar5 + -3) == 2) {
              FUN_01631910(puVar5);
            }
            else {
              uVar2 = *puVar5;
              iVar3 = puVar5[1];
              FUN_016317bc(uVar2,iVar3);
              if (iVar3 != 0) {
                thunk_FUN_016d3fb4(uVar2);
              }
            }
          }
          puVar5 = puVar5 + 5;
        } while (iVar6 != iVar4);
        thunk_FUN_016d3fb4(iVar7);
      }
    } while (iVar8 != param_2);
  }
  return;
}

