// FUN_014057b8 @ 014057b8 size=512 calls_out=5 calls_in=1
// strings: assertion failed: size <= proto::MAX_WINDOW_SIZE | negative Window

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014057b8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *local_20;
  undefined1 local_1c;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: size <= proto::MAX_WINDOW_SIZE",0x30,&DAT_018a6bd0);
  }
  piVar6 = (int *)(param_1 + 8);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_014057ec;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_014057ec:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (cVar1 != '\0') {
    local_1c = (undefined1)uVar7;
    local_20 = piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_018a4108,&DAT_018a5aec);
  }
  iVar4 = *(int *)(param_1 + 100);
  uVar5 = iVar4 + *(int *)(param_1 + 0xbc);
  if (!SCARRY4(iVar4,*(int *)(param_1 + 0xbc))) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("negative Window",0x1f,&DAT_01882d3c);
    }
    if (uVar5 < param_2) {
      iVar3 = param_2 - uVar5;
      if (SCARRY4(iVar4,iVar3)) goto LAB_014058a0;
    }
    else {
      iVar3 = -(uVar5 - param_2);
      if (SBORROW4(iVar4,uVar5 - param_2)) goto LAB_014058a0;
    }
    iVar4 = iVar4 + iVar3;
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 100) = iVar4;
    if ((iVar3 < iVar4) && (iVar3 / 2 <= iVar4 - iVar3)) {
      iVar4 = *(int *)(param_1 + 0xe8);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(param_1 + 0xec));
      }
    }
  }
LAB_014058a0:
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = 0;
  if (iVar4 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar6,0x81,1,param_5);
    return;
  }
  return;
}

