// FUN_012b10f8 @ 012b10f8 size=116 calls_out=1 calls_in=4
// strings: 

undefined4 FUN_012b10f8(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)*param_1;
  if ((undefined4 *)*param_1 == puVar5) {
    return 0;
  }
  while ((puVar2 = puVar1, param_3 != puVar2[1] ||
         (iVar3 = thunk_FUN_01bed842(param_2,*puVar2,param_3), iVar3 != 0))) {
    puVar1 = puVar2 + 3;
    if (puVar2 + 3 == puVar5) {
      uVar4 = 0;
LAB_012b1164:
      *param_1 = (int)(puVar2 + 3);
      return uVar4;
    }
  }
  uVar4 = 1;
  goto LAB_012b1164;
}

