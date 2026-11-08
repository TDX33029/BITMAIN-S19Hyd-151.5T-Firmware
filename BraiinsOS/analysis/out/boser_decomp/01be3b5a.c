// FUN_01be3b5a @ 01be3b5a size=28 calls_out=1 calls_in=81
// strings: 

uint FUN_01be3b5a(uint param_1)

{
  int iVar1;
  int *piVar2;
  
  if (0xfffff000 < param_1) {
    piVar2 = (int *)FUN_01be3244();
    iVar1 = -param_1;
    param_1 = 0xffffffff;
    *piVar2 = iVar1;
  }
  return param_1;
}

