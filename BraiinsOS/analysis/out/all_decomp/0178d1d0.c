// FUN_0178d1d0 @ 0178d1d0 size=668 calls_out=14 calls_in=2
// strings: 

int * FUN_0178d1d0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  
  local_10 = 0;
  if (((param_2 & 0x10) != 0) && ((param_2 & 8) != 0)) {
    return (int *)0x0;
  }
  iVar1 = FUN_0178ceec(param_1);
  if ((DAT_018dffb8 == 0) && (iVar2 = FUN_0178da6c(iVar1,param_2), iVar2 != 0)) {
    return (int *)0x0;
  }
  iVar2 = FUN_0178cecc();
  if ((iVar2 != 0) && ((param_2 & 0x10) != 0)) {
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_0178c6b4(200);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  if ((param_2 & 4) == 0) {
    local_10 = FUN_0178d0f4(param_2);
    iVar2 = FUN_0178c6b4(local_10);
    piVar3[6] = iVar2;
    piVar3[7] = local_10 + -1;
    if (piVar3[6] == 0) goto LAB_0178d3fc;
    piVar3[8] = 0x80;
  }
  iVar2 = FUN_01791f30(piVar3);
  if (iVar2 == 0) {
    FUN_01791988(*piVar3);
    piVar3[5] = iVar1;
    piVar3[4] = param_2;
    if (((param_2 & 0x20) != 0) || (iVar2 = FUN_0178c760(), iVar2 != 0)) {
      *(byte *)(piVar3 + 0x11) = *(byte *)(piVar3 + 0x11) | 2;
    }
    FUN_0178e758(piVar3,iVar1);
    FUN_0178e290(piVar3,iVar1);
    iVar1 = FUN_0178e03c(piVar3 + 0x12);
    if (iVar1 != 0) {
      piVar3[0x12] = 1;
      piVar3[0x13] = 0;
    }
    if (((param_2 & 0x10) != 0) || (iVar1 = FUN_0178ce48(piVar3,param_2), iVar1 == 0)) {
      return piVar3;
    }
  }
LAB_0178d3fc:
  if (piVar3[6] != 0) {
    FUN_0178c720(piVar3[6],local_10);
  }
  if (*piVar3 != 0) {
    FUN_01791f94(*piVar3);
  }
  FUN_0178c720(piVar3,200);
  return (int *)0x0;
}

