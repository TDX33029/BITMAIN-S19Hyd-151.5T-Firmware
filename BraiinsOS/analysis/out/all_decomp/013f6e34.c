// FUN_013f6e34 @ 013f6e34 size=192 calls_out=0 calls_in=2
// strings: 

void FUN_013f6e34(undefined2 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  pbVar6 = (byte *)(param_1 + 1);
  iVar9 = 0;
  do {
    bVar1 = pbVar6[1];
    bVar2 = *pbVar6;
    uVar4 = *(undefined2 *)pbVar6;
    bVar10 = pbVar6[-2] <= bVar2;
    if (bVar2 == pbVar6[-2]) {
      bVar10 = pbVar6[-1] <= bVar1;
    }
    if (!bVar10) {
      iVar5 = iVar9;
      do {
        iVar8 = iVar5;
        ((undefined2 *)((int)param_1 + iVar8))[1] = *(undefined2 *)((int)param_1 + iVar8);
        if (iVar8 == 0) {
          puVar7 = param_1;
          goto LAB_013f6e4c;
        }
        bVar3 = *(byte *)((int)param_1 + iVar8 + -2);
        bVar10 = bVar3 <= bVar2;
        if (bVar2 == bVar3) {
          bVar10 = *(byte *)((int)param_1 + iVar8 + -1) <= bVar1;
        }
        iVar5 = iVar8 + -2;
      } while (!bVar10);
      puVar7 = (undefined2 *)((int)param_1 + iVar8);
LAB_013f6e4c:
      *puVar7 = uVar4;
    }
    pbVar6 = pbVar6 + 2;
    iVar9 = iVar9 + 2;
    if (pbVar6 == (byte *)(param_1 + param_2)) {
      return;
    }
  } while( true );
}

