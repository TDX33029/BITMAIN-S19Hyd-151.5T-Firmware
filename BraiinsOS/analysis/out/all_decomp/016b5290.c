// FUN_016b5290 @ 016b5290 size=356 calls_out=4 calls_in=3
// strings: 

void FUN_016b5290(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 <= param_3) {
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  if ((param_3 != 0) && (*(char *)(iVar4 + param_3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(iVar4,uVar2,param_3,uVar2,&DAT_018af010);
  }
  uVar3 = uVar2 - param_3;
  uVar1 = uVar3;
  do {
    uVar5 = FUN_00fb737c(0x2f,iVar4 + param_3,uVar1);
    uVar1 = (uint)(uVar5 >> 0x20);
    if ((uVar5 & 1) == 0) break;
    if ((uVar1 < uVar3) && (*(char *)(iVar4 + param_3 + uVar1) == '/')) {
      uVar1 = param_3 + uVar1 + 1;
      if (param_2 == '\0') {
        if ((uVar1 < uVar2) && (*(char *)(iVar4 + uVar1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar4,uVar2,uVar1,uVar2,&DAT_018af030);
        }
        if (((uVar2 - uVar1 == 2) && ((*(byte *)(iVar4 + uVar1) & 0xdf) - 0x41 < 0x1a)) &&
           (((byte *)(iVar4 + uVar1))[1] == 0x3a)) {
          return;
        }
      }
      if ((uVar1 < uVar2) && (*(char *)(iVar4 + uVar1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00418707,0x30,&DAT_018af040);
      }
      *(uint *)(param_1 + 8) = uVar1;
      return;
    }
  } while (uVar1 <= uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_018af020);
}

