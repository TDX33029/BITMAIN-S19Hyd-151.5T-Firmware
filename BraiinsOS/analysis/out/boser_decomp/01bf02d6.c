// FUN_01bf02d6 @ 01bf02d6 size=92 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01bf02d6(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_198 [64];
  char cStack_158;
  char local_157 [331];
  
  iVar2 = FUN_01be6c6c(auStack_198);
  if (iVar2 == 0) {
    pcVar5 = (char *)(param_1 + -1);
    if (&DAT_00000040 < param_2) {
      param_2 = &DAT_00000041;
    }
    pcVar6 = &cStack_158;
    pcVar7 = pcVar5 + (int)param_2;
    do {
      pcVar4 = pcVar5 + (1 - param_1);
      uVar3 = 0;
      if (pcVar5 == pcVar7) {
        if (param_2 == pcVar4 && pcVar4 != (char *)0x0) {
          pcVar4[param_1 + -1] = '\0';
          return 0;
        }
        return 0;
      }
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar5 = pcVar5 + 1;
      *pcVar5 = cVar1;
    } while (cVar1 != '\0');
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

