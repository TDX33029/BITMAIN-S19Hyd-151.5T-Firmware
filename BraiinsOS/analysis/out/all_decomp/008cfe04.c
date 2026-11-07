// FUN_008cfe04 @ 008cfe04 size=192 calls_out=1 calls_in=35
// strings: 

void FUN_008cfe04(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    iVar3 = param_1 + iVar4 * 0x1c;
    iVar6 = *(int *)(iVar3 + 0x18);
    iVar5 = *(int *)(iVar3 + 0x14);
    if (iVar6 != 0) {
      piVar2 = (int *)(iVar5 + 0x14);
      do {
        while( true ) {
          if ((piVar2[3] & 0x7fffffffU) != 0) {
            thunk_FUN_016d3fb4(piVar2[4]);
          }
          iVar1 = piVar2[-1];
          bVar7 = iVar1 != 2;
          if (bVar7) {
            iVar1 = *piVar2;
          }
          if (bVar7 && iVar1 != 0) break;
          piVar2 = piVar2 + 0xb;
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) goto LAB_008cfea0;
        }
        thunk_FUN_016d3fb4(piVar2[1]);
        piVar2 = piVar2 + 0xb;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
LAB_008cfea0:
    if (*(int *)(iVar3 + 0x10) != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      return;
    }
  } while( true );
}

