// FUN_012af518 @ 012af518 size=112 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_012af518(uint param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_14 [4];
  int local_10;
  int local_c;
  
  uVar3 = 0;
  if ((param_1 & 1) != 0) {
    FUN_012bad98(auStack_14);
    local_c = local_c * 0x24;
    do {
      uVar3 = 0;
      if (local_c == 0) break;
      uVar3 = 1;
      piVar1 = (int *)(local_10 + 0xc);
      local_c = local_c + -0x24;
      pcVar2 = (char *)(local_10 + 0x20);
      local_10 = local_10 + 0x24;
    } while ((*pcVar2 != '\0') || (*piVar1 == -0x80000000));
    FUN_01298844(auStack_14);
  }
  return uVar3;
}

