// FUN_0156f85c @ 0156f85c size=312 calls_out=1 calls_in=4
// strings: 

bool FUN_0156f85c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_r4;
  int *piVar6;
  undefined4 unaff_r5;
  int *piVar7;
  
  iVar4 = *param_2;
  iVar2 = *param_1;
  if ((((iVar2 != iVar4) &&
       ((*(int *)(iVar2 + 0x10) != *(int *)(iVar4 + 0x10) ||
        (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar4 + 0xc)),
        iVar2 != 0)))) || (param_1[2] != param_2[2])) ||
     (iVar2 = thunk_FUN_01bed842(param_1[1] + 8,param_2[1] + 8), iVar2 != 0)) {
    return false;
  }
  piVar6 = (int *)0x0;
  if (param_1[3] != 0) {
    piVar6 = param_1 + 3;
  }
  piVar5 = (int *)0x0;
  if (param_2[3] != 0) {
    piVar5 = param_2 + 3;
  }
  while( true ) {
    if (piVar6 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      iVar2 = *piVar6;
      piVar6 = (int *)(iVar2 + 0xc);
      if (*piVar6 == 0) {
        piVar6 = (int *)0x0;
      }
      piVar1 = (int *)(*(int *)(iVar2 + 8) + 8);
    }
    if (piVar5 == (int *)0x0) break;
    piVar3 = (int *)(*piVar5 + 0xc);
    piVar7 = (int *)0x0;
    if (*piVar3 != 0) {
      piVar7 = piVar3;
    }
    if (piVar1 == (int *)0x0) goto LAB_01566518;
    iVar2 = *(int *)(*piVar5 + 8);
    iVar4 = *(int *)(iVar2 + 0x10);
    if (piVar1[2] != iVar4) {
      return false;
    }
    iVar2 = thunk_FUN_01bed842(piVar1[1],*(undefined4 *)(iVar2 + 0xc),piVar1[2],iVar4,unaff_r4,
                               unaff_r5);
    piVar5 = piVar7;
    if (iVar2 != 0) {
      return false;
    }
  }
  piVar5 = piVar1;
LAB_01566518:
  return piVar5 == (int *)0x0;
}

