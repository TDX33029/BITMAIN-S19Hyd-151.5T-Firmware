// FUN_01a6a190 @ 01a6a190 size=104 calls_out=0 calls_in=7
// strings: 

undefined8 FUN_01a6a190(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    iVar2 = param_1[2];
    uVar3 = param_1[3];
  }
  else if (*param_1 == 1) {
    uVar3 = param_1[3];
    uVar1 = param_1[4];
    if (uVar3 < (uint)param_1[4]) {
      uVar1 = uVar3;
    }
    if (param_1[5] != 0) {
      uVar1 = uVar3;
    }
    iVar2 = param_1[2] + uVar1;
    uVar3 = uVar3 - uVar1;
  }
  else {
    iVar2 = 1;
    uVar3 = 0;
  }
  if ((uint)param_1[6] < uVar3) {
    uVar3 = param_1[6];
  }
  return CONCAT44(uVar3,iVar2);
}

