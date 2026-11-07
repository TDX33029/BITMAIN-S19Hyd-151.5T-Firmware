// FUN_0004fe20 @ 0004fe20  size=64  callers=1
// program: bmminer


undefined4 FUN_0004fe20(void)

{
  int iVar1;
  undefined4 uVar2;
  char local_9 [5];
  
  iVar1 = FUN_0004fd58(local_9);
  if ((iVar1 == 0) && (local_9[0] != '\0')) {
    uVar2 = DAT_0050fc20;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

