// FUN_00d91e90 @ 00d91e90 size=180 calls_out=3 calls_in=2
// strings: internal error: entered unreachable code

undefined4 FUN_00d91e90(char *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
  }
  if (param_1[1] != '\0') {
    uVar5 = 1;
    iVar6 = **(int **)(param_1 + 4);
    pcVar2 = "}";
    do {
      uVar3 = *(uint *)(iVar6 + 4);
      uVar4 = uVar3 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar6,pcVar2,uVar4);
      if (uVar3 == 0x7fffffff) {
        uVar1 = FUN_01966f50(2,&DAT_01d2e7b8);
        return uVar1;
      }
      pcVar2 = pcVar2 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
  }
  return 0;
}

