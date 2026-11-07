// FUN_01474df0 @ 01474df0 size=76 calls_out=0 calls_in=3
// strings: 

uint FUN_01474df0(int *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar1 = param_1[3];
  }
  else {
    bVar3 = iVar2 == 1;
    uVar1 = 0;
    if (bVar3) {
      iVar2 = param_1[5];
    }
    if ((bVar3 && iVar2 == 0) &&
       (uVar1 = param_1[3] - param_1[4], (uint)param_1[3] < (uint)param_1[4])) {
      uVar1 = 0;
    }
  }
  if ((uint)param_1[6] < uVar1) {
    uVar1 = param_1[6];
  }
  return uVar1;
}

