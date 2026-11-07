// FUN_010301d0 @ 010301d0 size=84 calls_out=0 calls_in=0
// strings: 

void FUN_010301d0(undefined4 *param_1,int *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (puVar3 == (undefined4 *)param_2[1]) goto LAB_01030218;
    puVar3 = puVar3 + 3;
    *param_2 = (int)puVar3;
  }
  if (puVar3 == (undefined4 *)param_2[1]) {
LAB_01030218:
    uVar1 = 0x255;
  }
  else {
    *param_2 = (int)(puVar3 + 3);
    uVar1 = *(undefined2 *)(puVar3 + 2);
    uVar2 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar2;
  }
  *(undefined2 *)(param_1 + 2) = uVar1;
  return;
}

