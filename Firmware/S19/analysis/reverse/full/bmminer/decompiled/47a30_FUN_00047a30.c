// FUN_00047a30 @ 00047a30  size=68  callers=1
// program: bmminer


void FUN_00047a30(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_c;
  
  if ((param_2 == 0) || (local_c = param_1, iVar1 = FUN_00048bec(param_2,&local_c), iVar1 != 1)) {
    return;
  }
  FUN_00048c0c(param_2,&local_c);
  return;
}

