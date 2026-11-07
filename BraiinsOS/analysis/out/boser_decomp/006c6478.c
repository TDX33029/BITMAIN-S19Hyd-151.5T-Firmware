// FUN_006c6478 @ 006c6478 size=444 calls_out=1 calls_in=4
// strings: 

void FUN_006c6478(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = *(uint *)(param_1[1] + 8);
  uVar6 = *(uint *)(*param_1 + 8);
  uVar1 = uVar6;
  if (uVar7 < uVar6) {
    uVar1 = uVar7;
  }
  uVar1 = FUN_01bed842(*(undefined4 *)(param_1[1] + 4),*(undefined4 *)(*param_1 + 4),uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar7 - uVar6;
  }
  uVar9 = *(uint *)(param_1[2] + 8);
  uVar7 = *(uint *)(param_1[3] + 8);
  uVar6 = uVar9;
  if (uVar7 < uVar9) {
    uVar6 = uVar7;
  }
  iVar2 = FUN_01bed842(*(undefined4 *)(param_1[3] + 4),*(undefined4 *)(param_1[2] + 4),uVar6);
  uVar6 = 2;
  if (iVar2 == 0) {
    iVar2 = uVar7 - uVar9;
  }
  if (iVar2 < 0) {
    uVar6 = 3;
  }
  uVar9 = *(uint *)(param_1[-((int)uVar1 >> 0x1f)] + 8);
  uVar7 = 3;
  if (iVar2 < 0) {
    uVar7 = 2;
  }
  uVar10 = *(uint *)(param_1[uVar6] + 8);
  uVar4 = uVar9;
  if (uVar10 < uVar9) {
    uVar4 = uVar10;
  }
  iVar2 = FUN_01bed842(*(undefined4 *)(param_1[uVar6] + 4),
                       *(undefined4 *)(param_1[-((int)uVar1 >> 0x1f)] + 4),uVar4);
  uVar4 = ~uVar1;
  if (iVar2 == 0) {
    iVar2 = uVar10 - uVar9;
  }
  uVar10 = *(uint *)(param_1[uVar7] + 8);
  uVar8 = *(uint *)(param_1[-((int)uVar4 >> 0x1f)] + 8);
  uVar9 = uVar6;
  if (iVar2 < 0) {
    uVar9 = uVar4 >> 0x1f;
  }
  uVar5 = uVar8;
  if (uVar10 < uVar8) {
    uVar5 = uVar10;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(param_1[uVar7] + 4),
                       *(undefined4 *)(param_1[-((int)uVar4 >> 0x1f)] + 4),uVar5);
  if (iVar3 == 0) {
    iVar3 = uVar10 - uVar8;
  }
  uVar10 = uVar7;
  uVar8 = -((int)uVar4 >> 0x1f);
  if (iVar3 < 0) {
    uVar10 = uVar4 >> 0x1f;
    uVar9 = uVar7;
    uVar8 = uVar6;
  }
  if (iVar2 < 0) {
    uVar8 = uVar1 >> 0x1f;
  }
  if (iVar2 >= 0) {
    uVar6 = -((int)uVar1 >> 0x1f);
  }
  uVar7 = *(uint *)(param_1[uVar9] + 8);
  uVar4 = *(uint *)(param_1[uVar8] + 8);
  uVar1 = uVar4;
  if (uVar7 < uVar4) {
    uVar1 = uVar7;
  }
  iVar2 = FUN_01bed842(*(undefined4 *)(param_1[uVar9] + 4),*(undefined4 *)(param_1[uVar8] + 4),uVar1
                      );
  if (iVar2 == 0) {
    iVar2 = uVar7 - uVar4;
  }
  *param_2 = param_1[uVar6];
  if (iVar2 < 0) {
    uVar1 = uVar8;
    uVar8 = uVar9;
  }
  else {
    uVar1 = uVar9;
  }
  param_2[1] = param_1[uVar8];
  param_2[2] = param_1[uVar1];
  param_2[3] = param_1[uVar10];
  return;
}

