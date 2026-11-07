// FUN_0007920c @ 0007920c  size=128  callers=0
// program: bmminer


undefined4 FUN_0007920c(undefined4 param_1,char *param_2,undefined4 param_3)

{
  FILE *__stream;
  int iVar1;
  undefined4 uVar2;
  
  __stream = fopen(param_2,"w");
  if (__stream == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0007918c(param_1,__stream,param_3);
    iVar1 = fclose(__stream);
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

