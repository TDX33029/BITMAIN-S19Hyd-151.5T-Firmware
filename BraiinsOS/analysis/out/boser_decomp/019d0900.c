// FUN_019d0900 @ 019d0900 size=232 calls_out=3 calls_in=11
// strings: 

void FUN_019d0900(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = (int *)FUN_01663bcc();
  piVar7 = piVar1 + 2;
  uVar2 = piVar1[0x42];
  do {
    if (uVar2 < 0x3f) {
      uVar5 = uVar2 + 2;
      piVar1[0x42] = uVar5;
      iVar6 = piVar7[uVar2];
      iVar4 = (piVar7 + uVar2)[1];
    }
    else {
      if (uVar2 == 0x3f) {
        iVar6 = piVar1[0x41];
        FUN_01663d68(piVar1 + 0x44,piVar7);
        uVar5 = 1;
        iVar4 = piVar1[2];
      }
      else {
        FUN_01663d68(piVar1 + 0x44,piVar7);
        iVar6 = piVar1[2];
        uVar5 = 2;
        iVar4 = piVar1[3];
      }
      piVar1[0x42] = uVar5;
    }
    uVar2 = uVar5;
  } while (iVar6 == 0 && iVar4 == 0);
  iVar3 = *piVar1;
  *(undefined1 *)(param_1 + 6) = param_7;
  *piVar1 = iVar3 + -1;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = iVar6;
  param_1[5] = iVar4;
  if (iVar3 + -1 == 0) {
    FUN_01663bac(piVar1);
    return;
  }
  return;
}

