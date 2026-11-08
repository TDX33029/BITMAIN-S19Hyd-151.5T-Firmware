// FUN_0165ba20 @ 0165ba20 size=180 calls_out=1 calls_in=2
// strings: 

void FUN_0165ba20(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = param_2[-2];
  iVar5 = *param_2;
  uVar7 = *(uint *)(iVar2 + 8);
  uVar8 = *(uint *)(iVar5 + 8);
  uVar3 = uVar7;
  if (uVar8 < uVar7) {
    uVar3 = uVar8;
  }
  uVar3 = FUN_01bed842(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar2 + 4),uVar3);
  if (uVar3 == 0) {
    uVar3 = uVar8 - uVar7;
  }
  if (0x7fffffff < uVar3) {
    iVar2 = param_2[1];
    piVar1 = param_2 + -2;
    do {
      piVar6 = piVar1;
      piVar6[2] = *piVar6;
      piVar6[3] = piVar6[1];
      if (piVar6 == param_1) break;
      uVar7 = *(uint *)(iVar5 + 8);
      iVar4 = piVar6[-2];
      uVar8 = *(uint *)(iVar4 + 8);
      uVar3 = uVar8;
      if (uVar7 < uVar8) {
        uVar3 = uVar7;
      }
      iVar4 = FUN_01bed842(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar4 + 4),uVar3);
      if (iVar4 == 0) {
        iVar4 = uVar7 - uVar8;
      }
      piVar1 = piVar6 + -2;
    } while (iVar4 < 0);
    *piVar6 = iVar5;
    piVar6[1] = iVar2;
  }
  return;
}

