// FUN_019d0ea4 @ 019d0ea4 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_019d0ea4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = param_1[1];
  *param_1 = 0;
  if (iVar3 == 1) {
    iVar1 = FUN_019d0d20(param_3,iVar4,&DAT_01d28b64);
    *(undefined4 *)(iVar1 + 8) = 1;
    *(int *)(iVar1 + 0xc) = param_2;
  }
  piVar2 = (int *)FUN_019d0d20(param_3,param_2,&DAT_01d28b74);
  *piVar2 = iVar3;
  piVar2[1] = iVar4;
  *param_1 = 1;
  param_1[1] = param_2;
  return;
}

