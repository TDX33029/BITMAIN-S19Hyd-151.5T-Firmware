// FUN_016d3496 @ 016d3496 size=28 calls_out=1 calls_in=79
// strings: 

uint FUN_016d3496(uint param_1)

{
  int iVar1;
  int *piVar2;
  
  if (0xfffff000 < param_1) {
    piVar2 = (int *)FUN_016d2bc8();
    iVar1 = -param_1;
    param_1 = 0xffffffff;
    *piVar2 = iVar1;
  }
  return param_1;
}

