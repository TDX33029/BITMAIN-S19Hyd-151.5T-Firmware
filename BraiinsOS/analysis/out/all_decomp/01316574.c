// FUN_01316574 @ 01316574 size=188 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01316574(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x60);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar5 = *(uint *)(iVar2 + 8);
    uVar6 = *(uint *)(iVar2 + 0xc);
    if (uVar5 < uVar6) {
LAB_0131660c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar6,uVar5,&DAT_01890988);
    }
    if (uVar6 != 0) {
      iVar2 = *(int *)(iVar2 + 4);
      iVar7 = iVar2 + uVar6 * 0x78;
      do {
        uVar5 = *(uint *)(iVar2 + 0x38);
        uVar6 = *(uint *)(iVar2 + 0x3c);
        if (uVar5 < uVar6) goto LAB_0131660c;
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
  }
  return 1;
}

