// FUN_01286cfc @ 01286cfc size=184 calls_out=1 calls_in=1
// strings: 

void FUN_01286cfc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  while (iVar5 != param_2) {
    iVar6 = iVar5 + 1;
    iVar4 = param_1 + iVar5 * 0x1c;
    iVar1 = *(int *)(iVar4 + 0x10);
    iVar5 = iVar6;
    if (iVar1 != -0x80000000) {
      iVar7 = *(int *)(iVar4 + 0x18);
      iVar6 = *(int *)(iVar4 + 0x14);
      if (iVar7 != 0) {
        puVar3 = (uint *)(iVar6 + 0x18);
        do {
          if ((*puVar3 & 0x7fffffff) == 0) {
            uVar2 = puVar3[3];
          }
          else {
            thunk_FUN_016d3fb4(puVar3[1]);
            uVar2 = puVar3[3];
          }
          if ((uVar2 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar3[4]);
          }
          puVar3 = puVar3 + 0xc;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar1 = *(int *)(iVar4 + 0x10);
      }
      if (iVar1 != 0) {
        thunk_FUN_016d3fb4(iVar6);
      }
    }
  }
  return;
}

