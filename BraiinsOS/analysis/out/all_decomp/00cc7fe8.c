// FUN_00cc7fe8 @ 00cc7fe8 size=1388 calls_out=20 calls_in=0
// strings: tuner not running | BUG: halt failed

undefined4 FUN_00cc7fe8(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  int local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
    param_1[8] = *param_1;
    param_1[9] = param_1[1];
    param_1[10] = param_1[2];
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined2 *)((int)param_1 + 0x1d) = 1;
switchD_00cc805c_caseD_0:
    puVar10 = param_1 + 0xd;
    *puVar10 = param_1[10];
    param_1[0xb] = param_1[8];
    param_1[0xc] = param_1[9];
    param_1[0xe] = puVar10;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876c8c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876c8c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xf)) {
    case 0:
      goto switchD_00cc805c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018776ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018776ac);
    case 3:
      puVar10 = (undefined4 *)param_1[0xe];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1d)) {
    case 0:
      iVar7 = param_1[0xb];
      cVar2 = *(char *)(param_1 + 10);
      uVar3 = param_1[9];
      goto LAB_00cc8158;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875fc8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875fc8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x14)) {
      case 0:
        cVar2 = *(char *)(param_1 + 0xd);
        uVar3 = param_1[0xc];
        iVar7 = param_1[0xe];
        goto LAB_00cc817c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01875fa8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01875fa8);
      case 3:
        goto switchD_00cc8220_caseD_3;
      }
    }
    goto switchD_00cc8220_caseD_4;
  }
  FUN_00c80dec(&local_30,puVar10,*param_2);
  if ((char)local_28 == '\x03') {
    uVar11 = 3;
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0xf) = 3;
  }
  else {
    FUN_00ac9c30(param_1 + 0xb);
    *(undefined1 *)(param_1 + 0xf) = 1;
    param_1[4] = local_30;
    param_1[5] = uStack_2c;
    param_1[6] = local_28;
    cVar2 = *(char *)(param_1 + 6);
    if (cVar2 != '\x02') {
      uVar3 = param_1[5];
      param_1[9] = uVar3;
      iVar7 = param_1[3];
      *(undefined2 *)((int)param_1 + 0x1d) = 0x100;
      *(char *)(param_1 + 10) = cVar2;
      param_1[8] = param_1[4];
      param_1[0xb] = iVar7;
      *(undefined1 *)(param_1 + 0x1d) = 0;
LAB_00cc8158:
      iVar7 = iVar7 + 8;
      param_1[0xc] = uVar3;
      param_1[0xe] = iVar7;
      *(char *)(param_1 + 0xd) = cVar2;
      *(undefined1 *)((int)param_1 + 0x75) = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
LAB_00cc817c:
      *(char *)(param_1 + 0x16) = cVar2;
      param_1[0x17] = iVar7 + 0x468;
      param_1[0x18] = 0xffffffff;
      param_1[0x15] = uVar3;
      *(undefined1 *)((int)param_1 + 0x51) = 1;
switchD_00cc8220_caseD_3:
      iVar7 = FUN_00c8101c(param_1 + 0x17,param_2);
      if (iVar7 == 0) {
        uVar11 = 3;
LAB_00cc826c:
        *(undefined1 *)(param_1 + 0x14) = uVar11;
        *(undefined1 *)(param_1 + 0x1d) = 3;
        *(undefined1 *)(param_1 + 7) = 4;
        return 1;
      }
      param_1[0xf] = iVar7;
      if (param_1[0x17] != 0) {
        FUN_00c8204c(param_1[0x17],param_1[0x18],1);
        iVar7 = param_1[0xf];
      }
      uVar3 = *(undefined4 *)(iVar7 + 0x24);
      uVar9 = *(undefined4 *)(iVar7 + 0x28);
      uVar12 = *(undefined4 *)(iVar7 + 0x2c);
      param_1[0x10] = *(undefined4 *)(iVar7 + 0x20);
      param_1[0x11] = uVar3;
      param_1[0x12] = uVar9;
      param_1[0x13] = uVar12;
      *(undefined4 *)(iVar7 + 0x20) = 0;
      if (param_1[0x10] == 0) {
        puVar10 = (undefined4 *)FUN_00c70f88("tuner not running",0x11);
        FUN_00c822ec(param_1[0xf]);
        piVar5 = (int *)param_1[0x15];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155edc8(param_1[0x15]);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x19) = 0;
        param_1[0x17] = param_1[0x10];
        *(undefined1 *)((int)param_1 + 0x51) = 0;
switchD_00cc8220_caseD_4:
        uVar13 = FUN_00c9cbd8(param_1 + 0x15,*param_2);
        local_30 = (int)(uVar13 >> 0x20);
        if ((uVar13 & 1) != 0) {
          uVar11 = 4;
          goto LAB_00cc826c;
        }
        FUN_00654988(param_1 + 0x15);
        if (local_30 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("BUG: halt failed",0x10,&local_30,&DAT_01876100,&DAT_01875fb8);
        }
        if (param_1[0x10] != 0) {
          iVar7 = param_1[0x11];
          piVar5 = (int *)(iVar7 + 0x11c);
          do {
            iVar8 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar8 + -1;
          if (iVar8 == 1) {
            FUN_0163b708(iVar7 + 0x108);
          }
          piVar5 = (int *)param_1[0x11];
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d04b1c(param_1[0x11]);
          }
          iVar7 = param_1[0x13];
          DataMemoryBarrier(0xb);
          piVar5 = (int *)(iVar7 + 0x84);
          do {
            iVar8 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar8 + -1;
          DataMemoryBarrier(0xb);
          if (iVar8 == 1) {
            FUN_00c74f48(iVar7 + 0x20);
            puVar4 = (uint *)(iVar7 + 0x48);
            DataMemoryBarrier(0xb);
            do {
              uVar6 = *puVar4;
              bVar1 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar1);
            *puVar4 = uVar6 | 2;
            DataMemoryBarrier(0xb);
            if (uVar6 == 0) {
              iVar8 = *(int *)(iVar7 + 0x40);
              *(undefined4 *)(iVar7 + 0x40) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar4);
              } while (!bVar1);
              *puVar4 = 0;
              if (iVar8 != 0) {
                (**(code **)(iVar8 + 4))(*(undefined4 *)(iVar7 + 0x44));
              }
            }
          }
          piVar5 = (int *)param_1[0x13];
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d04c88(param_1[0x13]);
          }
        }
        puVar10 = (undefined4 *)0x0;
        FUN_00c822ec(param_1[0xf]);
      }
      *(undefined2 *)(param_1 + 0x14) = 1;
      FUN_00c859b0(param_1 + 0xc);
      if (puVar10 != (undefined4 *)0x0) {
        (**(code **)*puVar10)(puVar10);
      }
      piVar5 = (int *)param_1[0xb];
      *(undefined1 *)((int)param_1 + 0x75) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d030dc(param_1[0xb]);
      }
      *(undefined1 *)(param_1 + 0x1d) = 1;
      FUN_00c86b68(param_1 + 9);
      *(undefined1 *)((int)param_1 + 0x1e) = 0;
      FUN_0076b120(param_1[8]);
      *(undefined1 *)((int)param_1 + 0x1e) = 0;
    }
    uVar3 = 0;
    uVar11 = 1;
    if (*(char *)((int)param_1 + 0x1d) != '\0') {
      piVar5 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d030dc(param_1[3]);
        uVar3 = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 7) = uVar11;
  return uVar3;
}

