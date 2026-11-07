// FUN_012c0694 @ 012c0694 size=104 calls_out=1 calls_in=0
// strings: 

void FUN_012c0694(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_012b116c(param_2,param_3);
  if ((iVar1 == 0) && (puVar2 = (undefined4 *)*param_2, puVar2 != (undefined4 *)param_2[1])) {
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    *param_2 = (int)(puVar2 + 2);
    *(undefined1 *)(param_1 + 8) = 0;
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 0x80000000;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    return;
  }
  *param_1 = 0x80000000;
  return;
}

