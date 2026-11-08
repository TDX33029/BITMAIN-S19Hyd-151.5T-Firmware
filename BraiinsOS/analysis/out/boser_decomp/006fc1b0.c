// FUN_006fc1b0 @ 006fc1b0 size=80 calls_out=0 calls_in=2
// strings: 

void FUN_006fc1b0(undefined4 *param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_r12;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == -0x80000000) {
    puVar3 = *(uint **)(param_2 + 0x10);
    piVar1 = (int *)(param_2 + 0x14);
    in_r12 = *(undefined4 *)(param_2 + 0x1c);
    param_4 = puVar3 + 1;
    param_2 = ~*puVar3 & 0x80808080;
    iVar2 = (int)puVar3 + *piVar1 + 1;
  }
  else {
    puVar3 = (uint *)0x0;
  }
  *param_1 = puVar3;
  param_1[1] = param_2;
  param_1[2] = param_4;
  param_1[3] = iVar2;
  param_1[4] = in_r12;
  return;
}

