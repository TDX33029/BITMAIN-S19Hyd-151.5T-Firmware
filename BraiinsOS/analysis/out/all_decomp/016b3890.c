// FUN_016b3890 @ 016b3890 size=328 calls_out=3 calls_in=3
// strings: 

int FUN_016b3890(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x14);
  uVar5 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0) {
    if (uVar2 < uVar5) {
      if (*(char *)(iVar6 + uVar2) < -0x40) {
LAB_016b38c4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar6,uVar5,uVar2,uVar5,&DAT_018af080);
      }
    }
    else if (uVar5 != uVar2) goto LAB_016b38c4;
  }
  if (2 < uVar5 - uVar2) {
    iVar1 = thunk_FUN_016dd50a(&DAT_00418646,iVar6 + uVar2,3);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x24);
    if (uVar2 == uVar5) {
      return 0;
    }
    if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar5,&DAT_018aed68);
    }
    if (*(char *)(iVar6 + uVar2) == ':') {
      uVar3 = uVar2 + 1;
      uVar4 = *(int *)(param_1 + 0x28) - 1;
      if ((uVar2 < uVar4) && ((uVar5 <= uVar3 || (-0x41 < *(char *)(iVar6 + uVar3))))) {
        if (uVar4 < uVar5) {
          if (-0x41 < *(char *)(iVar6 + uVar4)) {
LAB_016b39b4:
            return iVar6 + uVar3;
          }
        }
        else if (uVar4 == uVar5) goto LAB_016b39b4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar6,uVar5,uVar3,uVar4,&DAT_018aedb8);
    }
  }
  return 0;
}

