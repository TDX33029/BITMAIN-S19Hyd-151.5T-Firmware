// FUN_01aebeb0 @ 01aebeb0 size=264 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01aebeb0(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar1 = 0;
  iVar6 = *param_1;
  uVar8 = 1;
  *param_1 = 0;
  uVar3 = param_1[1];
  if (iVar6 == 0) {
    iVar6 = param_1[2];
    uVar3 = 0;
    uVar7 = param_1[3];
    do {
      if (uVar7 == uVar1) {
        uVar8 = 0;
        goto LAB_01aebf88;
      }
      pcVar2 = (char *)(iVar6 + uVar1);
      uVar1 = uVar1 + 1;
      uVar3 = (int)*pcVar2 & 0x7fU | uVar3 << 8;
    } while (*pcVar2 < 0);
    if ((char)param_1[4] == '\0') {
      if (uVar7 < uVar1) {
        puVar5 = &DAT_01d30424;
        goto LAB_01aebfa8;
      }
      param_1[2] = iVar6 + uVar1;
      param_1[3] = uVar7 - uVar1;
    }
    else {
      if (uVar3 < 0x28) {
        uVar4 = 0;
      }
      else if (uVar3 < 0x50) {
        uVar3 = uVar3 - 0x28;
        uVar4 = 1;
      }
      else {
        uVar3 = uVar3 - 0x50;
        uVar4 = 2;
      }
      if (uVar7 < uVar1) {
        puVar5 = &DAT_01d30434;
LAB_01aebfa8:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar1,uVar7,uVar7,puVar5);
      }
      uVar8 = 1;
      *(undefined1 *)(param_1 + 4) = 0;
      *param_1 = 1;
      param_1[1] = uVar3;
      param_1[2] = iVar6 + uVar1;
      param_1[3] = uVar7 - uVar1;
      uVar3 = uVar4;
    }
  }
LAB_01aebf88:
  return CONCAT44(uVar3,uVar8);
}

