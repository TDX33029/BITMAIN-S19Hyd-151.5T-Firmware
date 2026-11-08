// FUN_013fa038 @ 013fa038 size=228 calls_out=3 calls_in=1
// strings: 

void FUN_013fa038(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 != 0) {
    iVar8 = param_1[1];
    uVar9 = param_1[2];
    iVar2 = *(int *)(param_2 + 4);
    if (uVar9 != uVar5) {
LAB_013fa0a4:
      if (*param_1 - uVar9 < uVar5) {
        FUN_01401968(param_1,uVar9,uVar5,4,8);
        iVar8 = param_1[1];
        uVar9 = param_1[2];
      }
      FUN_016dd1aa(iVar8 + uVar9 * 8,iVar2,uVar5 << 3);
      param_1[2] = uVar9 + uVar5;
      FUN_013f9548(param_1);
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & *(byte *)(param_2 + 0xc);
      return;
    }
    piVar3 = (int *)(iVar8 + 4);
    piVar4 = (int *)(iVar2 + 4);
    uVar6 = uVar5;
    do {
      iVar1 = piVar4[-1];
      iVar7 = piVar3[-1];
      bVar10 = iVar7 != iVar1;
      if (!bVar10) {
        iVar1 = *piVar4;
        iVar7 = *piVar3;
      }
      if (bVar10 || iVar7 != iVar1) goto LAB_013fa0a4;
      piVar3 = piVar3 + 2;
      piVar4 = piVar4 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

