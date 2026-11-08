// FUN_01b6d618 @ 01b6d618 size=236 calls_out=4 calls_in=3
// strings: 

int FUN_01b6d618(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_28;
  int local_24;
  
  iVar4 = 0;
  local_24 = DAT_01d53560;
  local_28 = 1;
  while (iVar1 = FUN_01be6c3c(0x180,param_1,param_2,param_3 ^ 1), iVar1 == -1) {
    piVar2 = (int *)FUN_01be3244();
    if (*piVar2 != 4) {
      uVar3 = (param_3 ^ 1) & 1;
      if (iVar4 == 9) {
        uVar3 = 1;
      }
      if (uVar3 != 0) break;
      iVar4 = iVar4 + 1;
      FUN_01b6d54c(&local_28);
    }
  }
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

