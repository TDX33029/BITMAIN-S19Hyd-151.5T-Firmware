// FUN_01599834 @ 01599834 size=272 calls_out=1 calls_in=2
// strings: 

uint FUN_01599834(int param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = 0;
  if ((0xffffff02 < param_2 - 0xfe) && (cVar1 = *(char *)(param_1 + param_2 + -1), cVar1 != '.')) {
    uVar3 = 0;
    uVar5 = 0;
    do {
      if (*(byte *)(param_1 + uVar3) == 0x2e) {
        if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar5,uVar3,param_2,&DAT_01cfc590);
        }
        if ((uVar4 + uVar3) - 0x40 < 0xffffffc1) {
          return 0;
        }
        cVar2 = *(char *)(param_1 + uVar5);
        bVar6 = cVar2 == '-';
        if (!bVar6) {
          cVar2 = *(char *)(param_1 + uVar3 + -1);
        }
        if (bVar6 || cVar2 == '-') {
          return 0;
        }
        uVar5 = uVar3 + 1;
      }
      else if (""[*(byte *)(param_1 + uVar3)] == '\0') {
        return 0;
      }
      uVar3 = uVar3 + 1;
      uVar4 = -uVar5;
    } while (param_2 != uVar3);
    if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar5,param_2,param_2,&DAT_01cfc580);
    }
    uVar4 = 0;
    if (0xffffffc0 < (param_2 - uVar5) - 0x40) {
      uVar4 = (uint)(*(char *)(param_1 + uVar5) != '-' && cVar1 != '-');
    }
  }
  return uVar4;
}

