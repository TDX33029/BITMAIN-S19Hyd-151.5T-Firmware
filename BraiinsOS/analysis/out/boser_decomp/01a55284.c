// FUN_01a55284 @ 01a55284 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_01a55284(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_01a4e594(param_2,param_3);
  iVar3 = 0;
  if (iVar2 == 0) {
    piVar1 = (int *)*param_2;
    do {
      piVar4 = piVar1;
      if (piVar4 == (int *)param_2[1]) goto LAB_01a552d4;
      iVar2 = *piVar4;
      *param_2 = piVar4 + 0x30;
      piVar1 = piVar4 + 0x30;
    } while (iVar2 == 0);
    iVar3 = piVar4[0x1d];
    param_1[1] = piVar4[0x1e];
    param_1[2] = (int)piVar4;
  }
LAB_01a552d4:
  *param_1 = iVar3;
  return;
}

