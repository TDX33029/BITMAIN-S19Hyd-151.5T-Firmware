// FUN_01528ac8 @ 01528ac8 size=136 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01528ac8(undefined4 param_1,char *param_2)

{
  double *pdVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_s1;
  double dVar5;
  
  if (*param_2 == '\x04') {
    pcVar2 = *(char **)(param_2 + 8);
    pdVar1 = (double *)(pcVar2 + 0x10);
    for (iVar3 = *(int *)(param_2 + 0xc) * 0x18; iVar3 != 0; iVar3 = iVar3 + -0x18) {
      if (*pcVar2 != '\x02') {
        return 0;
      }
      if ((*(int *)(pcVar2 + 8) == 2 && *(int *)(pcVar2 + 0xc) == 0) &&
         (dVar5 = *pdVar1, uVar4 = FUN_01be6548(SUB84(dVar5,0)),
         dVar5 - (double)CONCAT44(extraout_s1,uVar4) != 0.0)) {
        return 0;
      }
      pcVar2 = pcVar2 + 0x18;
      pdVar1 = pdVar1 + 3;
    }
  }
  return 1;
}

