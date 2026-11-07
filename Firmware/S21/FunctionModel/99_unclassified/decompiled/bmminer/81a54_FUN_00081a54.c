// FUN_00081a54 @ 00081a54  size=76  callers=1
// program: bmminer


undefined4 FUN_00081a54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = FUN_00083990(param_2,param_3,param_4,auStack_10);
  if (iVar1 == 0) {
    uVar2 = FUN_00083a4c(param_1,auStack_10,5);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

