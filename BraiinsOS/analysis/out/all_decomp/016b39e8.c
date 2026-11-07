// FUN_016b39e8 @ 016b39e8 size=288 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_016b39e8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    if (uVar3 < uVar4) {
      if (*(char *)(iVar5 + uVar3) < -0x40) {
LAB_016b3a1c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar5,uVar4,uVar3,uVar4,&DAT_018af080);
      }
    }
    else if (uVar4 != uVar3) goto LAB_016b3a1c;
  }
  if ((uVar4 - uVar3 < 3) || (iVar1 = thunk_FUN_016dd50a(&DAT_00418646,iVar5 + uVar3,3), iVar1 != 0)
     ) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar3 = uVar3 + 3;
  if (uVar2 <= uVar3) {
    return 1;
  }
  if (uVar3 != 0) {
    if (uVar3 < uVar4) {
      if (*(char *)(iVar5 + uVar3) < -0x40) goto LAB_016b3ad4;
    }
    else if (uVar3 != uVar4) goto LAB_016b3ad4;
  }
  if (uVar2 < uVar4) {
    if (-0x41 < *(char *)(iVar5 + uVar2)) {
LAB_016b3af0:
      return CONCAT44(uVar2 - uVar3,iVar5 + uVar3);
    }
  }
  else if (uVar2 == uVar4) goto LAB_016b3af0;
LAB_016b3ad4:
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac(iVar5,uVar4,uVar3,uVar2,&DAT_018aedb8);
}

