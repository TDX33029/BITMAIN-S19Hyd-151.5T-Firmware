// FUN_019b89ec @ 019b89ec size=420 calls_out=2 calls_in=2
// strings: 

void FUN_019b89ec(int *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2[8] == 0) {
    uVar6 = param_2[3];
    uVar5 = *param_2;
    piVar1 = (int *)param_2[1];
    *param_2 = 0;
    if ((uVar5 & 1) != 0) {
      piVar2 = (int *)param_2[2];
      if (piVar1 == (int *)0x0) {
        for (; piVar1 = piVar2, uVar6 != 0; uVar6 = uVar6 - 1) {
          piVar2 = (int *)piVar1[0x44];
        }
      }
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
      if ((int *)*piVar1 != (int *)0x0) {
        do {
          piVar1 = piVar3;
          thunk_FUN_01be4678(piVar2);
          piVar2 = piVar1;
          piVar3 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
      }
      thunk_FUN_01be4678(piVar1);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] - 1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d28014);
  }
  piVar1 = (int *)param_2[1];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_2[2];
    for (uVar6 = param_2[3]; uVar6 != 0; uVar6 = uVar6 - 1) {
      piVar1 = (int *)piVar1[0x44];
    }
    uVar6 = 0;
    uVar5 = 0;
    *param_2 = 1;
  }
  else {
    uVar5 = param_2[2];
    uVar6 = param_2[3];
  }
  if (*(ushort *)((int)piVar1 + 0x10e) <= uVar6) {
    do {
      piVar2 = (int *)*piVar1;
      if (piVar2 == (int *)0x0) {
        thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d27ff4);
      }
      uVar6 = (uint)*(ushort *)(piVar1 + 0x43);
      thunk_FUN_01be4678();
      uVar5 = uVar5 + 1;
      piVar1 = piVar2;
    } while (*(ushort *)((int)piVar2 + 0x10e) <= uVar6);
  }
  if (uVar5 == 0) {
    uVar4 = uVar6 + 1;
    piVar2 = piVar1;
  }
  else {
    piVar3 = piVar1 + uVar6 + 0x45;
    uVar4 = uVar5;
    do {
      piVar2 = (int *)*piVar3;
      uVar4 = uVar4 - 1;
      piVar3 = piVar2 + 0x44;
    } while (uVar4 != 0);
    uVar4 = 0;
  }
  param_2[1] = (uint)piVar2;
  param_2[2] = 0;
  param_2[3] = uVar4;
  *param_1 = (int)piVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  return;
}

