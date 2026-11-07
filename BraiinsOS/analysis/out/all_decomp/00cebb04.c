// FUN_00cebb04 @ 00cebb04 size=580 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_00cebb04(int *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 9)) {
  case 0:
    piVar3 = (int *)param_1[1];
    *param_1 = (int)piVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)param_1 + 10);
    do {
      iVar5 = *piVar3;
      puVar6 = (uint *)(iVar5 + 0x98);
      uVar4 = *(uint *)(iVar5 + 0x98);
      if ((uVar4 < 0xfffffff0) && ((uVar4 & 8) == 0)) {
        if (*puVar6 != uVar4) {
          ClearExclusiveLocal();
          goto LAB_00cebc40;
        }
        bVar1 = (bool)hasExclusiveAccess(puVar6);
        if (!bVar1) goto LAB_00cebc40;
        *puVar6 = uVar4 + 0x10;
        DataMemoryBarrier(0xb);
      }
      else {
LAB_00cebc40:
        FUN_0127d66c(puVar6);
      }
      FUN_0128236c(puVar6);
      FUN_0128236c((uint)puVar6 | 1);
      DataMemoryBarrier(0xb);
      cVar2 = *(char *)(iVar5 + 0x9c);
      FUN_01282570(puVar6);
      FUN_01282570((uint)puVar6 | 1);
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar4 - 0x10;
      if ((uVar4 & 0xfffffff2) == 0x12) {
        FUN_0127d34c(puVar6);
      }
      if ((bool)(char)param_1[2] != (cVar2 == '\x04')) {
        *(undefined1 *)((int)param_1 + 9) = 1;
        return 0;
      }
      piVar3 = (int *)*param_1;
      param_1[3] = (int)piVar3;
      *(undefined1 *)(param_1 + 0x11) = 0;
LAB_00cebccc:
      iVar5 = *piVar3;
      *(undefined1 *)((int)param_1 + 0x21) = 0;
      param_1[6] = iVar5 + 8;
      param_1[7] = (int)(piVar3 + 1);
switchD_00cebb5c_caseD_3:
      cVar2 = FUN_00cebe20(param_1 + 4,param_2);
      if (cVar2 == '\x02') {
        *(undefined1 *)(param_1 + 0x11) = 3;
        *(undefined1 *)((int)param_1 + 9) = 3;
        return 1;
      }
      if (*(char *)((int)param_1 + 0x21) == '\x04') {
        FUN_0163bdc0(param_1 + 9);
        if (param_1[0xd] != 0) {
          (**(code **)(param_1[0xd] + 0xc))(param_1[0xe]);
        }
        *(undefined1 *)(param_1 + 8) = 0;
      }
      *(undefined1 *)(param_1 + 0x11) = 1;
      if (cVar2 != '\0') goto LAB_00cebd6c;
      piVar3 = (int *)*param_1;
    } while( true );
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01877340);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01877340);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x11]) {
    case '\0':
      piVar3 = (int *)param_1[3];
      goto LAB_00cebccc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018acd5c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018acd5c);
    case '\x03':
      goto switchD_00cebb5c_caseD_3;
    }
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[3]) {
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01877268);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01877268);
    }
  }
switchD_00cebb84_caseD_0:
  *(undefined1 *)(param_1 + 3) = 3;
  *(undefined1 *)((int)param_1 + 9) = 4;
  return 1;
LAB_00cebd6c:
  *(undefined1 *)(param_1 + 3) = 0;
  goto switchD_00cebb84_caseD_0;
}

