// FUN_000576b0 @ 000576b0  size=68  callers=2
// program: bmminer


undefined4 FUN_000576b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = FUN_00059658(param_2,auStack_10);
  if (iVar1 == 0) {
    uVar2 = FUN_00059768(param_1,auStack_10,5);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

