// FUN_00e49bec @ 00e49bec size=284 calls_out=4 calls_in=2
// strings: 

void FUN_00e49bec(int *param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar6 = FUN_00e48374(param_2);
  piVar2 = (int *)uVar6;
  if (((uint)(uVar6 >> 0x20) & 0xff) == 2) {
    iVar4 = *param_4;
    uVar7 = *(undefined8 *)(param_4 + 1);
  }
  else {
    piVar5 = piVar2 + 2;
    if (*piVar5 == -0x80000000 || *piVar5 == 0) {
      iVar4 = param_4[1];
      iVar3 = param_4[2];
      *piVar5 = *param_4;
      piVar2[3] = iVar4;
      piVar2[4] = iVar3;
    }
    else {
      thunk_FUN_016d3fb4(piVar2[3]);
      iVar4 = param_4[1];
      iVar3 = param_4[2];
      *piVar5 = *param_4;
      piVar2[3] = iVar4;
      piVar2[4] = iVar3;
    }
    if ((((uVar6 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
      *(undefined1 *)(piVar2 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      uVar7 = CONCAT44(iVar3,piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = 0;
    iVar4 = -0x80000000;
    if (iVar3 == 2) {
      uVar7 = FUN_016d6968(0xf0,piVar2,0x81,1);
    }
  }
  iVar3 = *(int *)(param_3 + 8);
  *param_1 = iVar4;
  *(undefined8 *)(param_1 + 1) = uVar7;
  param_1[3] = param_2 + (iVar3 - 1U & 0xffffffe8) + 0x18;
  param_1[4] = param_3;
  return;
}

