// FUN_018a45bc @ 018a45bc size=196 calls_out=1 calls_in=3
// strings: 

void FUN_018a45bc(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar6 = uVar2;
  if (uVar2 < uVar3) {
    uVar6 = uVar3;
  }
  uVar1 = uVar3;
  do {
    uVar5 = uVar1;
    if (uVar6 == uVar5) goto LAB_018a4654;
    uVar4 = (uint)*(byte *)(iVar7 + uVar5);
    param_2[2] = uVar5 + 1;
    uVar1 = uVar5 + 1;
  } while (uVar4 - 0x30 < 10 || uVar4 - 0x61 < 6);
  if (uVar4 == 0x5f) {
    if (uVar5 < uVar3) goto LAB_018a4640;
    if (uVar3 != 0) {
      if (uVar3 < uVar2) {
        if (*(char *)(iVar7 + uVar3) < -0x40) {
LAB_018a4640:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar7);
        }
      }
      else if (uVar3 != uVar2) goto LAB_018a4640;
    }
    *param_1 = iVar7 + uVar3;
    param_1[1] = uVar5 - uVar3;
  }
  else {
LAB_018a4654:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}

