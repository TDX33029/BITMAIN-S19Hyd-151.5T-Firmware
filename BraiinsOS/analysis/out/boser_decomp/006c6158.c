// FUN_006c6158 @ 006c6158 size=164 calls_out=1 calls_in=3
// strings: 

void FUN_006c6158(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = *param_2;
  iVar5 = param_2[-1];
  uVar8 = *(uint *)(iVar4 + 8);
  uVar7 = *(uint *)(iVar5 + 8);
  uVar3 = uVar7;
  if (uVar8 < uVar7) {
    uVar3 = uVar8;
  }
  iVar2 = FUN_01bed842(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar5 + 4),uVar3);
  if (iVar2 == 0) {
    iVar2 = uVar8 - uVar7;
  }
  piVar1 = param_2 + -1;
  if (iVar2 < 0) {
    do {
      piVar6 = piVar1;
      piVar6[1] = iVar5;
      if (piVar6 == param_1) break;
      uVar7 = *(uint *)(iVar4 + 8);
      iVar5 = piVar6[-1];
      uVar8 = *(uint *)(iVar5 + 8);
      uVar3 = uVar8;
      if (uVar7 < uVar8) {
        uVar3 = uVar7;
      }
      iVar2 = FUN_01bed842(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar5 + 4),uVar3);
      if (iVar2 == 0) {
        iVar2 = uVar7 - uVar8;
      }
      piVar1 = piVar6 + -1;
    } while (iVar2 < 0);
    *piVar6 = iVar4;
  }
  return;
}

