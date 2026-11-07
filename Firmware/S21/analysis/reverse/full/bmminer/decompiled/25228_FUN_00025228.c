// FUN_00025228 @ 00025228  size=160  callers=1
// program: bmminer


uint FUN_00025228(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14 [2];
  
  local_14[0] = 0;
  if (DAT_000be8e8 == 2) {
    iVar3 = (&DAT_000c0430)[param_1];
    iVar1 = FUN_0002a514();
    iVar2 = FUN_0002a554();
    local_14[0] = (iVar2 * iVar1 * iVar3) / 1000 + local_14[0];
  }
  else {
    FUN_0001d998(param_1,(undefined1)DAT_000c94e8,local_14);
  }
  return (uint)(DAT_000be5f8 * local_14[0]) / 100;
}

