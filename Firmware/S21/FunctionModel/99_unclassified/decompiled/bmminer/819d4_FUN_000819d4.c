// FUN_000819d4 @ 000819d4  size=60  callers=0
// program: bmminer


undefined4 FUN_000819d4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = FUN_00083a00(auStack_10);
  if (iVar1 == 0) {
    uVar2 = FUN_00083a4c(param_1,auStack_10,5);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

