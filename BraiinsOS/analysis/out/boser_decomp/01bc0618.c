// FUN_01bc0618 @ 01bc0618 size=212 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_01bc0618(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_24 [5];
  
  piVar4 = local_24;
  piVar3 = param_2 + 4;
  local_24[4] = DAT_01d53560;
  piVar5 = piVar4;
  do {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_2 = param_2 + 2;
    *piVar5 = iVar1;
    piVar5[1] = iVar2;
    piVar5 = piVar5 + 2;
  } while (param_2 != piVar3);
  do {
    iVar1 = *piVar4;
    iVar2 = piVar4[1];
    piVar4 = piVar4 + 2;
    *param_1 = iVar1;
    param_1[1] = iVar2;
    param_1 = param_1 + 2;
  } while (piVar4 != local_24 + 4);
  if (local_24[4] != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

