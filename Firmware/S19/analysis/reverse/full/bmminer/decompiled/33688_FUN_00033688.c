// FUN_00033688 @ 00033688  size=236  callers=1
// program: bmminer


void FUN_00033688(int *param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  
  uVar2 = param_1[1];
  piVar4 = param_1 + 2;
  bVar11 = (uVar2 & 0x3f) < 0x38;
  if (bVar11) {
    iVar1 = 0x40;
  }
  else {
    iVar1 = 0x80;
  }
  uVar6 = uVar2 + *param_1;
  if (bVar11) {
    iVar3 = 0x3c;
  }
  else {
    iVar3 = 0x7c;
  }
  if (bVar11) {
    iVar7 = 0x3d;
    iVar8 = 0x3e;
    iVar9 = 0x3f;
    uVar10 = 1;
  }
  else {
    iVar7 = 0x7d;
    iVar8 = 0x7e;
    iVar9 = 0x7f;
    uVar10 = 2;
  }
  memset((void *)((int)piVar4 + uVar2),0,iVar1 - uVar2);
  *(undefined1 *)((int)param_1 + param_1[1] + 8) = 0x80;
  *(char *)((int)piVar4 + iVar9) = (char)uVar6 * '\b';
  *(char *)((int)piVar4 + iVar8) = (char)((uVar6 & 0x1fffffff) >> 5);
  *(char *)((int)piVar4 + iVar7) = (char)((uVar6 & 0x1fffffff) >> 0xd);
  *(char *)((int)piVar4 + iVar3) = (char)((uVar6 & 0x1fffffff) >> 0x15);
  FUN_000333b0(param_1,piVar4,uVar10);
  piVar4 = param_1 + 0x22;
  do {
    param_2[3] = (char)*piVar4;
    piVar5 = piVar4 + 1;
    param_2[2] = (char)((uint)*piVar4 >> 8);
    param_2[1] = (char)*(undefined2 *)((int)piVar4 + 2);
    *param_2 = *(undefined1 *)((int)piVar4 + 3);
    piVar4 = piVar5;
    param_2 = param_2 + 4;
  } while (param_1 + 0x2a != piVar5);
  return;
}

