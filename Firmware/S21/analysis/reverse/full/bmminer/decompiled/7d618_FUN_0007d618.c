// FUN_0007d618 @ 0007d618  size=224  callers=4
// program: bmminer


undefined4 FUN_0007d618(char *param_1,undefined4 param_2,undefined4 param_3)

{
  FILE *__stream;
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  FUN_00080fa8(param_3,param_1);
  if (param_1 == (char *)0x0) {
    FUN_0007b2bc(param_3,0,4,"wrong arguments");
    uVar3 = 0;
  }
  else {
    __stream = fopen(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      FUN_0007b2bc(param_3,0,3,"unable to open %s: %s",param_1,pcVar2);
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0007d410(__stream,param_2,param_3);
      fclose(__stream);
    }
  }
  return uVar3;
}

