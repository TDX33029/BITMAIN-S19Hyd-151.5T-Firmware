// FUN_0086b838 @ 0086b838 size=792 calls_out=11 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x0086bac8) */
/* WARNING: Removing unreachable block (ram,0x0086babc) */
/* WARNING: Removing unreachable block (ram,0x0086bad4) */
/* WARNING: Removing unreachable block (ram,0x0086bb08) */
/* WARNING: Removing unreachable block (ram,0x0086bb14) */
/* WARNING: Removing unreachable block (ram,0x0086bae0) */
/* WARNING: Removing unreachable block (ram,0x0086bae8) */
/* WARNING: Removing unreachable block (ram,0x0086baf0) */
/* WARNING: Removing unreachable block (ram,0x0086baf8) */
/* WARNING: Removing unreachable block (ram,0x0086bafc) */
/* WARNING: Removing unreachable block (ram,0x0086bb1c) */
/* WARNING: Removing unreachable block (ram,0x0086bb24) */

longlong FUN_0086b838(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined *local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_68 [20];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x19]) {
  case '\0':
    iVar3 = param_1[0x18];
    *param_1 = iVar3;
    *(undefined1 *)(param_1 + 2) = 0;
LAB_0086b87c:
    param_1[1] = iVar3;
    *(undefined1 *)((int)param_1 + 0x4a) = *(undefined1 *)(iVar3 + 9);
    *(undefined1 *)((int)param_1 + 0x49) = 0;
    *(undefined2 *)((int)param_1 + 0x47) = 0x100;
    *(undefined4 *)((int)param_1 + 0x43) = 0x1000000;
    param_1[0xe] = iVar3 + 0x10;
switchD_0086b8d8_caseD_3:
    uVar7 = FUN_0086b490(param_1 + 3,param_2);
    local_b0 = (int)(uVar7 >> 0x20);
    if ((uVar7 & 1) != 0) {
      uVar2 = 3;
      goto LAB_0086b9ec;
    }
    FUN_0086b3e4(param_1 + 3);
    if (local_b0 != 0) {
      local_68[0] = 3;
      local_b4 = 0x21;
      local_b8 = &DAT_00344292;
      uVar4 = FUN_0080807c(&local_b8,local_68);
      goto LAB_0086ba90;
    }
    FUN_01656eb8(local_68,&DAT_005649c0,0,0,
                 *(undefined4 *)(&DAT_005649c0 + (uint)*(byte *)(param_1[1] + 0xb) * 4),
                 &DAT_0186157c);
    FUN_016dd1aa(&local_b8,local_68,0x50);
    FUN_016dd1aa(param_1 + 4,&local_b8,0x50);
switchD_0086b8d8_caseD_4:
    iVar3 = FUN_01657fc4(param_1 + 4,*param_2);
    if (iVar3 != 0) {
      uVar2 = 4;
      goto LAB_0086b9ec;
    }
    FUN_00a07b4c(param_1 + 4);
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[3] = param_1[1];
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861218);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861218);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[2]) {
    case '\0':
      iVar3 = *param_1;
      goto LAB_0086b87c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186156c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186156c);
    case '\x03':
      goto switchD_0086b8d8_caseD_3;
    case '\x04':
      goto switchD_0086b8d8_caseD_4;
    }
  }
  uVar7 = FUN_008681f4(param_1 + 3,param_2);
  puVar5 = (undefined4 *)(uVar7 >> 0x20);
  if ((uVar7 & 1) != 0) {
    uVar2 = 5;
LAB_0086b9ec:
    *(undefined1 *)(param_1 + 2) = uVar2;
    *(undefined1 *)(param_1 + 0x19) = 3;
    return CONCAT44(param_2,1);
  }
  if ((char)param_1[5] == '\x03') {
    if ((char)param_1[0x11] == '\x03') {
      cVar1 = *(char *)((int)param_1 + 0x41);
      iVar3 = 0x14;
LAB_0086ba5c:
      if (cVar1 == '\x03') {
        FUN_00868aa0((int)(param_1 + 3) + iVar3);
      }
    }
  }
  else if ((char)param_1[5] == '\x04') {
    cVar1 = (char)param_1[0x13];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x12];
    }
    if (bVar6 && cVar1 == '\x03') {
      cVar1 = *(char *)((int)param_1 + 0x45);
      iVar3 = 0x18;
      goto LAB_0086ba5c;
    }
  }
  uVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(puVar5);
  }
LAB_0086ba90:
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  return (ulonglong)uVar4 << 0x20;
}

