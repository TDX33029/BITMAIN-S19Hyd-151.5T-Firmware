// FUN_014146a0 @ 014146a0 size=240 calls_out=1 calls_in=21
// strings: internal error: entered unreachable code

undefined4 FUN_014146a0(char *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (*param_1 == '\x01') {
    cVar2 = *param_2;
    if (cVar2 == '\x01') {
      if (param_1[1] == '\0') {
        if (param_2[1] == '\0') {
          return 1;
        }
        return 0;
      }
      if (param_2[1] == '\0') {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (*param_1 != '\x02') goto LAB_01414778;
    cVar2 = *param_2;
    if (cVar2 == '\x02') {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
      if (iVar1 != *(int *)(*(int *)(param_2 + 4) + 8)) {
        return 0;
      }
      pbVar5 = *(byte **)(*(int *)(param_2 + 4) + 4);
      pbVar6 = *(byte **)(*(int *)(param_1 + 4) + 4);
      do {
        if (iVar1 == 0) {
          return 1;
        }
        uVar3 = (uint)*pbVar5;
        iVar1 = iVar1 + -1;
        uVar4 = (uint)*pbVar6;
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar4 == uVar3);
      return 0;
    }
  }
  if (cVar2 != '\0') {
    return 0;
  }
LAB_01414778:
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf4290);
}

