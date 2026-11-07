// FUN_0127b750 @ 0127b750 size=176 calls_out=1 calls_in=1
// strings: 

void FUN_0127b750(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  
  if (param_2 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188b834);
  }
  if (param_4 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar5 = *(uint *)(param_1 + uVar3 * 4);
      uVar7 = *(uint *)(param_3 + uVar3 * 4);
      uVar6 = uVar7 + uVar5;
      *(uint *)(param_1 + uVar3 * 4) = uVar6 + uVar4;
      uVar4 = (uint)(CARRY4(uVar7,uVar5) || CARRY4(uVar6,uVar4));
      uVar3 = uVar3 + 1;
    } while (param_4 != uVar3);
    if (uVar4 != 0 && param_4 != param_2) {
      iVar1 = param_2 * 4 + param_4 * -4;
      piVar8 = (int *)(param_1 + param_4 * 4);
      do {
        iVar1 = iVar1 + -4;
        iVar2 = *piVar8;
        *piVar8 = iVar2 + 1;
        if (iVar2 != -1) {
          return;
        }
        piVar8 = piVar8 + 1;
      } while (iVar1 != 0);
    }
  }
  return;
}

