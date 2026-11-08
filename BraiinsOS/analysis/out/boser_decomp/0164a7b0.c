// FUN_0164a7b0 @ 0164a7b0 size=152 calls_out=1 calls_in=2
// strings: 

void FUN_0164a7b0(uint *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d066fc);
  }
  if (param_4 != 0) {
    uVar4 = 0;
    puVar1 = param_1;
    uVar3 = param_4;
    do {
      uVar5 = *puVar1;
      uVar7 = *param_3;
      uVar6 = uVar7 + uVar5;
      *puVar1 = uVar6 + uVar4;
      uVar4 = (uint)(CARRY4(uVar7,uVar5) || CARRY4(uVar6,uVar4));
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
    if (uVar4 != 0) {
      iVar2 = param_2 * 4 + param_4 * -4;
      puVar1 = param_1 + param_4;
      do {
        if (iVar2 == 0) {
          return;
        }
        uVar3 = *puVar1;
        iVar2 = iVar2 + -4;
        *puVar1 = uVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (0xfffffffe < uVar3);
    }
  }
  return;
}

