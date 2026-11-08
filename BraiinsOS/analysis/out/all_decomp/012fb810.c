// FUN_012fb810 @ 012fb810 size=152 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_012fb810(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_1 + 0xa8);
  uVar6 = *(uint *)(param_1 + 0xac);
  if (uVar5 < uVar6) {
LAB_012fb890:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar6,uVar5,&DAT_01890988);
  }
  if (uVar6 != 0) {
    iVar2 = *(int *)(param_1 + 0xa4);
    iVar7 = iVar2 + uVar6 * 0x78;
    do {
      uVar5 = *(uint *)(iVar2 + 0x38);
      uVar6 = *(uint *)(iVar2 + 0x3c);
      if (uVar5 < uVar6) goto LAB_012fb890;
      iVar4 = *(int *)(iVar2 + 0x34);
      iVar3 = uVar6 * 0x1c;
      while (iVar3 != 0) {
        if (*(char *)(iVar4 + 0xc) != '\x01') {
          return 0;
        }
        pcVar1 = (char *)(iVar4 + 0x18);
        iVar3 = iVar3 + -0x1c;
        iVar4 = iVar4 + 0x1c;
        if (*pcVar1 == '\x02') {
          return 0;
        }
      }
      iVar2 = iVar2 + 0x78;
    } while (iVar2 != iVar7);
  }
  return 1;
}

