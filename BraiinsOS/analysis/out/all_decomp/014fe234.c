// FUN_014fe234 @ 014fe234 size=196 calls_out=1 calls_in=3
// strings: 

void FUN_014fe234(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = param_2[2];
  iVar2 = *param_2;
  uVar3 = param_2[1];
  uVar7 = uVar3;
  if (uVar3 < uVar4) {
    uVar7 = uVar4;
  }
  uVar1 = uVar4;
  do {
    uVar6 = uVar1;
    if (uVar7 == uVar6) goto LAB_014fe2b8;
    uVar5 = (uint)*(byte *)(iVar2 + uVar6);
    param_2[2] = uVar6 + 1;
    uVar1 = uVar6 + 1;
  } while (uVar5 - 0x30 < 10 || uVar5 - 0x61 < 6);
  if (uVar5 == 0x5f) {
    if (uVar4 != 0) {
      if (uVar4 < uVar3) {
        if (*(char *)(iVar2 + uVar4) < -0x40) goto LAB_014fe2e8;
      }
      else if (uVar4 != uVar3) goto LAB_014fe2e8;
    }
    if (uVar3 < uVar6) {
LAB_014fe2e8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac();
    }
    *param_1 = iVar2 + uVar4;
    param_1[1] = uVar6 - uVar4;
  }
  else {
LAB_014fe2b8:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}

