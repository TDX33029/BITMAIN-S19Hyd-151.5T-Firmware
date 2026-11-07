// FUN_00e63020 @ 00e63020 size=164 calls_out=3 calls_in=0
// strings: 

void FUN_00e63020(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  int local_24;
  char local_20;
  char local_1f;
  undefined4 local_1c;
  
  iStack_34 = *param_2;
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  *param_2 = iStack_34 + 1;
  local_38 = 1;
  iStack_30 = iVar3;
  local_24 = iVar4;
  FUN_014db6fc(&local_20,param_2 + 3);
  if (local_20 == '\x01') {
LAB_00e63064:
    FUN_0196bf0c(iVar4,iVar3);
    *(undefined4 *)(param_1 + 4) = local_1c;
    uVar1 = 1;
  }
  else {
    cVar2 = '\x03';
    if (local_1f == '\x01') {
      FUN_00e787fc(&local_20,&local_38,param_2[3]);
      if (local_20 == '\x01') goto LAB_00e63064;
      cVar2 = local_1f;
    }
    param_1[1] = cVar2;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

