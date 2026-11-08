// FUN_00876e00 @ 00876e00 size=616 calls_out=11 calls_in=0
// strings: 

undefined4 FUN_00876e00(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int local_68;
  undefined4 *local_64;
  undefined8 *local_60;
  undefined1 *local_5c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 2);
    param_1[1] = *param_1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861a20);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861a20);
  case 4:
    goto switchD_00876e1c_caseD_4;
  case 5:
    goto switchD_00876e1c_caseD_5;
  }
  uVar5 = FUN_00875314(param_1 + 4,param_2);
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)(param_1 + 3) = 3;
    return 1;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)((int)param_1 + 0x8c);
  }
  if (bVar4 && cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x11) == '\x03') {
      FUN_00875460((int)param_1 + 0x44);
      *(undefined1 *)((int)param_1 + 0x89) = 0;
    }
    else if ((*(char *)(param_1 + 0x11) == '\0') && (*(int *)((int)param_1 + 0x34) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 7));
    }
  }
  if ((int)(uVar5 >> 0x20) == 0) {
    iVar2 = *(int *)((int)param_1 + 0x14);
    local_64 = &DAT_006043a8;
    local_68 = iVar2 + 0x50;
    local_5c = &LAB_00fb1f30;
    local_60 = param_1 + 1;
    FUN_00600d2c(&local_b8,&DAT_0034450e,&local_68);
    *(int *)((int)param_1 + 0x2c) = iVar2;
    *(undefined4 *)(param_1 + 4) = local_b8;
    *(undefined4 *)((int)param_1 + 0x24) = uStack_b4;
    *(undefined4 *)(param_1 + 5) = uStack_b0;
    *(undefined1 *)((int)param_1 + 0x74) = 0;
switchD_00876e1c_caseD_4:
    piVar3 = (int *)(param_1 + 4);
    uVar5 = FUN_008765cc(piVar3,param_2);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(param_1 + 3) = 4;
      return 1;
    }
    if (*(char *)((int)param_1 + 0x74) == '\x03') {
      FUN_00875460(param_1 + 6);
      *(undefined1 *)((int)param_1 + 0x75) = 0;
    }
    else if ((*(char *)((int)param_1 + 0x74) == '\0') && (*piVar3 != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + 0x24));
    }
    if ((int)(uVar5 >> 0x20) == 0) {
      FUN_01656eb8(&local_68,&DAT_01861a30,0,0,500000000,&DAT_01861a30);
      FUN_016dd1aa(&local_b8,&local_68,0x50);
      FUN_016dd1aa(piVar3,&local_b8,0x50);
switchD_00876e1c_caseD_5:
      iVar2 = FUN_01657fc4(param_1 + 4,*param_2);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 3) = 5;
        return 1;
      }
      FUN_00a07b4c(param_1 + 4);
    }
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return 0;
}

