// FUN_011a1634 @ 011a1634 size=164 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_011a1634(undefined4 param_1,char *param_2)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  double dVar7;
  
  if ((*param_2 == '\x04') && (iVar1 = *(int *)(param_2 + 0xc), iVar1 != 0)) {
    iVar3 = *(int *)(param_2 + 8);
    pdVar5 = (double *)(iVar3 + 0x10);
    do {
      if (*(char *)(pdVar5 + -2) != '\x02') {
        return 0;
      }
      uVar4 = *(uint *)((int)pdVar5 + -4);
      if ((uVar4 != 0 || uVar4 < (1 < *(uint *)(pdVar5 + -1))) &&
         (dVar7 = *pdVar5,
         uVar6 = FUN_016d62a0(SUB84(dVar7,0),uVar4 - (1 >= *(uint *)(pdVar5 + -1))),
         dVar7 - (double)CONCAT44(extraout_s1,uVar6) != 0.0)) {
        return 0;
      }
      pdVar2 = pdVar5 + 1;
      pdVar5 = pdVar5 + 3;
    } while (pdVar2 != (double *)(iVar3 + iVar1 * 0x18));
  }
  return 1;
}

