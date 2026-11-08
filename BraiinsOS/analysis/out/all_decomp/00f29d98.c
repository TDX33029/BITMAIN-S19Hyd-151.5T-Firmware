// FUN_00f29d98 @ 00f29d98 size=172 calls_out=2 calls_in=1
// strings: 

void FUN_00f29d98(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 == param_2) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  uVar1 = (uint)(param_3 - param_2) >> 5;
  iVar8 = uVar1 * -0x55555555;
  iVar5 = uVar1 * -0x55555554;
  iVar4 = thunk_FUN_016d4a50(iVar5);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar5);
  }
  iVar5 = 0;
  while( true ) {
    piVar6 = *(int **)(param_2 + iVar5 * 0x60 + 0x50);
    do {
      iVar7 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar7 + 1;
    if (iVar7 < 0) break;
    *(int **)(iVar4 + iVar5 * 4) = piVar6;
    iVar5 = iVar5 + 1;
    if (iVar5 == iVar8) {
      *param_1 = iVar8;
      param_1[1] = iVar4;
      param_1[2] = iVar5;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0xf29e34);
  (*pcVar2)();
}

