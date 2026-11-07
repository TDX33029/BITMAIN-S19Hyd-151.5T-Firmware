// FUN_0190adf0 @ 0190adf0 size=220 calls_out=5 calls_in=1
// strings: 

void FUN_0190adf0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = 0xe;
  if ((int)*param_1 < 0) {
    uVar2 = *param_1 ^ 0x80000000;
  }
  if (uVar2 < 0xe) {
    return;
  }
  switch(uVar2) {
  case 0xe:
    if (((char)param_1[3] == '\0') && (param_1[4] != 0x80000000)) {
      FUN_0134bd64(param_1[4],param_1[5]);
    }
    FUN_006a41c0(param_1);
    return;
  case 0xf:
  case 0x11:
    goto switchD_0190ae24_caseD_f;
  case 0x10:
    if (-0x7fffffff < (int)param_1[4]) {
      FUN_0134aee0(param_1[4],param_1[5],4,4);
    }
    uVar2 = param_1[2];
    FUN_018e3dd8(uVar2,param_1[3]);
    FUN_0134aee0(param_1[1],uVar2,4,0xc);
    return;
  default:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[1],param_1[2]);
      return;
    }
switchD_0190ae24_caseD_f:
    return;
  }
}

