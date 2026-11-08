// FUN_01314598 @ 01314598 size=104 calls_out=1 calls_in=0
// strings: 

bool FUN_01314598(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x3c);
  if (*(uint *)(param_1 + 0x38) < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar4,*(uint *)(param_1 + 0x38),&DAT_01890988);
  }
  iVar3 = *(int *)(param_1 + 0x34);
  iVar2 = uVar4 * 0x1c;
  do {
    iVar5 = iVar2;
    if ((iVar5 == 0) || (*(char *)(iVar3 + 0xc) != '\x01')) break;
    pcVar1 = (char *)(iVar3 + 0x18);
    iVar3 = iVar3 + 0x1c;
    iVar2 = iVar5 + -0x1c;
  } while (*pcVar1 != '\x02');
  return iVar5 == 0;
}

