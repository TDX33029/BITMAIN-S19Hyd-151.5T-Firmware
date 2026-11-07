// FUN_0005294c @ 0005294c  size=108  callers=0
// program: bmminer


undefined4 FUN_0005294c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [12];
  
  iVar1 = FUN_000550f8(auStack_1c);
  if (iVar1 == 0) {
    iVar1 = FUN_000528d4(param_1,&LAB_00051c8c,auStack_1c,param_2);
    uVar2 = 0;
    if (iVar1 == 0) {
      FUN_0005516c(auStack_1c);
      uVar2 = FUN_000550a0();
    }
    FUN_0005512c(auStack_1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

