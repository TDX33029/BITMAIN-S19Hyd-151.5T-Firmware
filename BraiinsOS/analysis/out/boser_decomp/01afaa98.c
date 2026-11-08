// FUN_01afaa98 @ 01afaa98 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_01afaa98(undefined2 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = param_2[3];
  uVar7 = param_2[2];
  iVar2 = *param_2;
  uVar5 = param_2[1];
  uVar1 = uVar7;
  if (iVar6 != 0) {
    uVar1 = 0xffffffff;
  }
  uVar4 = uVar5 - uVar1;
  iVar3 = param_3[2];
  if (uVar5 < uVar1) {
    uVar4 = 0;
  }
  uVar1 = *param_3 - iVar3;
  if ((uint)-iVar6 < (uint)(uVar7 <= uVar5)) {
    uVar5 = uVar7;
  }
  if (uVar1 < uVar4) {
    iVar3 = FUN_016091a8(param_3,iVar3,uVar4,1,1);
    if (iVar3 != -0x7fffffff) {
      *param_1 = 0x2601;
      return;
    }
    iVar3 = param_3[2];
    uVar1 = *param_3 - iVar3;
  }
  if (uVar1 < uVar4) {
    FUN_016092cc(param_3,iVar3,uVar4,1,1);
    iVar3 = param_3[2];
  }
  FUN_01bed4e2(param_3[1] + iVar3,iVar2 + uVar5,uVar4);
  *(uint *)(param_1 + 2) = uVar4;
  param_2[2] = uVar7 + uVar4;
  param_2[3] = iVar6 + (uint)CARRY4(uVar7,uVar4);
  param_3[2] = iVar3 + uVar4;
  *(undefined1 *)param_1 = 4;
  return;
}

