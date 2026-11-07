// FUN_01601d5c @ 01601d5c size=432 calls_out=2 calls_in=2
// strings: 

void FUN_01601d5c(int *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2[8] == 0) {
    uVar5 = param_2[3];
    uVar6 = *param_2;
    piVar1 = (int *)param_2[1];
    *param_2 = 0;
    if ((uVar6 & 1) != 0) {
      piVar4 = (int *)param_2[2];
      if (piVar1 == (int *)0x0) {
        for (; piVar1 = piVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
          piVar4 = (int *)piVar1[0x44];
        }
      }
      piVar4 = piVar1;
      piVar2 = (int *)*piVar1;
      if ((int *)*piVar1 != (int *)0x0) {
        do {
          piVar1 = piVar2;
          thunk_FUN_016d3fb4(piVar4);
          piVar4 = piVar1;
          piVar2 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
      }
      thunk_FUN_016d3fb4(piVar1);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] - 1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ab418);
  }
  piVar1 = (int *)param_2[1];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_2[2];
    for (uVar5 = param_2[3]; uVar5 != 0; uVar5 = uVar5 - 1) {
      piVar1 = (int *)piVar1[0x44];
    }
    uVar6 = 0;
    uVar5 = 0;
    *param_2 = 1;
    piVar4 = piVar1;
    if (*(short *)((int)piVar1 + 0x10e) != 0) goto joined_r0x01601db4;
  }
  else {
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    piVar4 = piVar1;
    if (uVar6 < *(ushort *)((int)piVar1 + 0x10e)) goto joined_r0x01601db4;
  }
  do {
    piVar4 = (int *)*piVar1;
    if (piVar4 == (int *)0x0) {
      thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ab3f8);
    }
    uVar6 = (uint)*(ushort *)(piVar1 + 0x43);
    thunk_FUN_016d3fb4();
    uVar5 = uVar5 + 1;
    piVar1 = piVar4;
  } while (*(ushort *)((int)piVar4 + 0x10e) <= uVar6);
joined_r0x01601db4:
  if (uVar5 == 0) {
    uVar3 = uVar6 + 1;
    piVar1 = piVar4;
  }
  else {
    piVar2 = piVar4 + uVar6 + 0x45;
    uVar3 = uVar5;
    do {
      piVar1 = (int *)*piVar2;
      uVar3 = uVar3 - 1;
      piVar2 = piVar1 + 0x44;
    } while (uVar3 != 0);
    uVar3 = 0;
  }
  param_2[1] = (uint)piVar1;
  param_2[2] = 0;
  param_2[3] = uVar3;
  *param_1 = (int)piVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  return;
}

