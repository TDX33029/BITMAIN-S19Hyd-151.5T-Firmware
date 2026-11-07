// FUN_01afa680 @ 01afa680 size=176 calls_out=0 calls_in=2
// strings: 

void FUN_01afa680(undefined4 *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = (uint *)(param_2 + 2);
  uVar5 = *puVar1;
  iVar6 = param_2[3];
  uVar4 = param_2[1];
  uVar2 = uVar5;
  if (iVar6 != 0) {
    uVar2 = 0xffffffff;
  }
  uVar3 = uVar4 - uVar2;
  if (uVar4 < uVar2) {
    uVar3 = 0;
  }
  uVar2 = uVar5;
  if ((uint)(uVar5 <= uVar4) <= (uint)-iVar6) {
    uVar2 = uVar4;
  }
  if (uVar3 < 4) {
    *puVar1 = uVar4;
    param_2[3] = 0;
    *param_1 = 2;
    param_1[1] = &DAT_01d30824;
    return;
  }
  param_1[1] = *(undefined4 *)(*param_2 + uVar2);
  *(undefined1 *)param_1 = 4;
  *puVar1 = uVar5 + 4;
  param_2[3] = iVar6 + (uint)(0xfffffffb < uVar5);
  return;
}

