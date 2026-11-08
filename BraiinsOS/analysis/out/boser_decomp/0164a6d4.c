// FUN_0164a6d4 @ 0164a6d4 size=212 calls_out=1 calls_in=4
// strings: Cannot subtract b from a because b is larger than a.

void FUN_0164a6d4(uint *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = param_2;
  if (param_4 < param_2) {
    uVar3 = param_4;
  }
  if (uVar3 != 0) {
    puVar1 = param_1;
    puVar4 = param_3;
    uVar5 = uVar3;
    uVar8 = 0;
    do {
      uVar7 = *puVar1 - *puVar4;
      uVar6 = (uint)(*puVar1 < *puVar4 || uVar7 < uVar8);
      *puVar1 = uVar7 - uVar8;
      uVar5 = uVar5 - 1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
      uVar8 = uVar6;
    } while (uVar5 != 0);
    if (uVar6 != 0) {
      iVar2 = param_2 * 4 + uVar3 * -4;
      puVar1 = param_1 + uVar3;
      do {
        if (iVar2 == 0) goto LAB_0164a78c;
        uVar5 = *puVar1;
        iVar2 = iVar2 + -4;
        *puVar1 = uVar5 - 1;
        puVar1 = puVar1 + 1;
      } while (uVar5 == 0);
    }
  }
  iVar2 = param_4 * 4 + uVar3 * -4;
  puVar1 = param_3 + uVar3;
  do {
    if (iVar2 == 0) {
      return;
    }
    uVar3 = *puVar1;
    iVar2 = iVar2 + -4;
    puVar1 = puVar1 + 1;
  } while (uVar3 == 0);
LAB_0164a78c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Cannot subtract b from a because b is larger than a.",0x69,&DAT_01d066dc);
}

