// FUN_00e630dc @ 00e630dc size=152 calls_out=3 calls_in=0
// strings: 

void FUN_00e630dc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  int local_24;
  char local_20;
  char local_1f;
  int *local_1c;
  
  iStack_34 = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  piVar4 = param_2 + 3;
  *param_2 = iStack_34 + 1;
  local_38 = 1;
  iStack_30 = iVar1;
  local_24 = iVar2;
  FUN_014db6fc(&local_20,piVar4);
  if (local_20 == '\x01') {
    piVar4 = local_1c;
  }
  else {
    if (local_1f != '\x01') {
      uVar3 = 0;
      goto LAB_00e63168;
    }
    uVar5 = FUN_00e68114(&local_38,*piVar4);
    piVar4 = (int *)(uVar5 >> 0x20);
    if ((uVar5 & 1) == 0) {
      uVar3 = 1;
      goto LAB_00e63168;
    }
  }
  FUN_0196bf0c(iVar2,iVar1);
  uVar3 = 2;
LAB_00e63168:
  *param_1 = uVar3;
  param_1[1] = piVar4;
  return;
}

