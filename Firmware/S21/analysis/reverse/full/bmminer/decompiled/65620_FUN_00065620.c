// FUN_00065620 @ 00065620  size=168  callers=1
// program: bmminer


void FUN_00065620(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_81c [514];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_3 != 0) &&
     (local_81c[0] = param_1, iVar1 = FUN_00068360(param_3,local_81c), iVar1 == 0)) {
    local_10 = 0;
    local_c = 1;
    local_14 = param_2;
    FUN_00068300(param_3,local_81c,4,&local_14,0xc);
  }
  return;
}

