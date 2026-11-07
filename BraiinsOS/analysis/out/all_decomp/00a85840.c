// FUN_00a85840 @ 00a85840 size=564 calls_out=11 calls_in=0
// strings: 

longlong FUN_00a85840(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 **local_1c8;
  code *local_1c4;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined8 local_e0;
  undefined4 *local_28;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)(param_1 + 5) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186db14);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186db14);
  }
  uVar12 = *param_1;
  uVar10 = param_1[1];
  iVar11 = *(int *)(param_1[4] + 0x18);
  uVar9 = param_1[2];
  uVar1 = *(undefined1 *)(param_1 + 3);
  piVar7 = (int *)(iVar11 + 8);
  uVar2 = *(undefined1 *)((int)param_1 + 0xf);
  uVar3 = *(undefined2 *)((int)param_1 + 0xd);
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar7);
      goto LAB_00a858a4;
    }
    bVar4 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar4);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_00a858a4:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
  }
  local_e0 = FUN_00a6bd58(uVar1,1);
  puVar8 = (undefined4 *)0x0;
  local_f4 = 0;
  local_f8 = 7;
  local_f0 = uVar12;
  local_ec = uVar10;
  local_e8 = uVar9;
  local_e4 = uVar1;
  local_e3 = uVar3;
  local_e1 = uVar2;
  FUN_00a8a8ec(&local_1c8,*(undefined4 *)(iVar11 + 0x10),&local_f8);
  if (local_1c8 != (undefined4 **)0x8 || local_1c4 != (code *)0x0) {
    FUN_016dd1aa(&local_f8,&local_1c8,0xd0);
    puVar8 = (undefined4 *)FUN_00a3648c(&local_f8);
  }
  if ((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
    iVar5 = FUN_015bf3f8();
    if (iVar5 == 0) {
      *(undefined1 *)(iVar11 + 0xc) = 1;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar7;
    bVar4 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar4);
  *piVar7 = 0;
  if (iVar11 == 2) {
    FUN_016d6968(0xf0,piVar7,0x81,1);
  }
  if (puVar8 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    local_1c4 = FUN_00604528;
    local_1c8 = &local_28;
    local_28 = puVar8;
    FUN_00600d2c(&local_f8,&DAT_00588b71,&local_1c8);
    uVar6 = FUN_00ac0530(&local_f8);
    (**(code **)*local_28)();
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return (ulonglong)uVar6 << 0x20;
}

