// FUN_01654378 @ 01654378 size=64 calls_out=1 calls_in=2
// strings: 

void FUN_01654378(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 0x10;
  if (0x80000000 < uVar2) {
    iVar1 = uVar2 + 0x7fffffff;
  }
  switch(iVar1) {
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
    return;
  case 0x10:
    goto switchD_01654398_caseD_10;
  }
  param_1 = param_1 + 1;
  uVar2 = *param_1;
switchD_01654398_caseD_10:
  if (uVar2 == 0x80000000) {
    return;
  }
  FUN_0134bd64(uVar2,param_1[1]);
  return;
}

