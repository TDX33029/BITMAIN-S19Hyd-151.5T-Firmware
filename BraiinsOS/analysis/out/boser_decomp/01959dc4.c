// FUN_01959dc4 @ 01959dc4 size=128 calls_out=1 calls_in=4
// strings: 

void FUN_01959dc4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_28 = 0;
  local_30 = 0;
  uStack_2c = 4;
  FUN_01960798(&local_30,*(int *)(param_2 + 4),*(int *)(param_2 + 8) * 0xd0 + *(int *)(param_2 + 4))
  ;
  iVar4 = *(int *)(param_2 + 0x10);
  for (iVar3 = *(int *)(param_2 + 0x14) * 0xc; iVar3 != 0; iVar3 = iVar3 + -0xc) {
    piVar1 = (int *)(iVar4 + 4);
    piVar2 = (int *)(iVar4 + 8);
    iVar4 = iVar4 + 0xc;
    FUN_01960798(&local_30,*piVar1,*piVar2 * 0xd0 + *piVar1);
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = local_28;
  return;
}

