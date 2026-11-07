// FUN_00b992b4 @ 00b992b4 size=192 calls_out=1 calls_in=2
// strings: 

int * FUN_00b992b4(int *param_1,int *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar3 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (int *)FUN_00b992b4(param_1,param_1 + uVar1 * 0x20,param_1 + iVar3 * 8,uVar1);
    param_2 = (int *)FUN_00b992b4(param_2,param_2 + uVar1 * 0x20,param_2 + iVar3 * 8,uVar1);
    param_3 = (int *)FUN_00b992b4(param_3,param_3 + uVar1 * 0x20,param_3 + iVar3 * 8,uVar1);
  }
  iVar3 = *param_2;
  if ((*param_1 != 4 && iVar3 == 4) != (iVar3 != 4 && *param_3 == 4)) {
    param_2 = param_3;
  }
  piVar2 = param_1;
  if ((iVar3 == 4) == (*param_3 == 4)) {
    piVar2 = param_2;
  }
  if (*param_1 == 4) {
    piVar2 = param_2;
  }
  return piVar2;
}

