// FUN_01417e0c @ 01417e0c size=236 calls_out=2 calls_in=3
// strings: 

bool FUN_01417e0c(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = param_3 - 3;
  if (param_3 < 3) {
    uVar2 = 0;
  }
  if (param_2 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,param_2,param_2,&DAT_01cf4428);
  }
  uVar6 = 3;
  if (param_3 < 3) {
    uVar6 = param_3;
  }
  uVar5 = ~param_3 + param_2 + uVar6;
  uVar8 = param_2 - uVar2;
  for (uVar4 = 1; iVar7 = ((param_3 - param_2) - uVar6) + uVar4, iVar7 != 1; uVar4 = uVar4 + 1) {
    iVar3 = param_1 + uVar2 + uVar4;
    cVar1 = *(char *)(iVar3 + -1);
    if (cVar1 == '\n') {
      if ((uVar4 < uVar8) && (*(char *)(param_1 + uVar2 + uVar4) == '\n')) break;
    }
    else if (cVar1 == '\r') {
      if (uVar8 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar4,uVar8,uVar8,&DAT_01cf4438);
      }
      if ((2 < uVar5) && (iVar3 = thunk_FUN_01bed842(iVar3,&DAT_00477ece,3), iVar3 == 0)) break;
    }
    uVar5 = uVar5 - 1;
  }
  return iVar7 != 1;
}

