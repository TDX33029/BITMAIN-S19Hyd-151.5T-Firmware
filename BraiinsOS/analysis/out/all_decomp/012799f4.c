// FUN_012799f4 @ 012799f4 size=224 calls_out=1 calls_in=1
// strings: Cannot subtract b from a because b is larger than a.

void FUN_012799f4(uint *param_1,uint param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar3 = param_2;
  if (param_4 < param_2) {
    uVar3 = param_4;
  }
  if (uVar3 != 0) {
    puVar8 = param_1 + uVar3;
    puVar2 = param_3;
    uVar4 = uVar3;
    uVar7 = 0;
    do {
      uVar6 = *param_1 - *puVar2;
      uVar5 = (uint)(*param_1 < *puVar2 || uVar6 < uVar7);
      *param_1 = uVar6 - uVar7;
      uVar4 = uVar4 - 1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
      uVar7 = uVar5;
    } while (uVar4 != 0);
    if (uVar5 != 0) {
      if (param_4 < param_2) {
        iVar1 = param_2 * 4 + uVar3 * -4;
        do {
          uVar4 = *puVar8;
          *puVar8 = uVar4 - 1;
          if (uVar4 != 0) goto LAB_01279a94;
          puVar8 = puVar8 + 1;
          iVar1 = iVar1 + -4;
        } while (iVar1 != 0);
      }
      goto LAB_01279ab8;
    }
  }
LAB_01279a94:
  iVar1 = param_4 * 4 + uVar3 * -4;
  puVar2 = param_3 + uVar3;
  do {
    if (iVar1 == 0) {
      return;
    }
    uVar3 = *puVar2;
    iVar1 = iVar1 + -4;
    puVar2 = puVar2 + 1;
  } while (uVar3 == 0);
LAB_01279ab8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478("Cannot subtract b from a because b is larger than a.",0x69,&DAT_0188b744);
}

