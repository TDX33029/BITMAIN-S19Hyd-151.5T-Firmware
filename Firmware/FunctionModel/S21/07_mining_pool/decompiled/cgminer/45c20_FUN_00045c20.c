// FUN_00045c20 @ 00045c20  size=108  callers=6
// program: cgminer


undefined4 FUN_00045c20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [12];
  
  iVar1 = FUN_000483cc(auStack_1c);
  if (iVar1 == 0) {
    iVar1 = FUN_00045ba8(param_1,&LAB_00044f60,auStack_1c,param_2);
    uVar2 = 0;
    if (iVar1 == 0) {
      FUN_00048440(auStack_1c);
      uVar2 = FUN_00048374();
    }
    FUN_00048400(auStack_1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

