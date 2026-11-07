// FUN_00d21790 @ 00d21790 size=1156 calls_out=9 calls_in=0
// strings: assertion failed: next.is_notified() | assertion failed: self.ref_count() > 0 | assertion failed: curr.is_running() | assertion failed: self.0 <= isize::MAX as usize | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_00d21790(uint *param_1)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar5;
  undefined4 extraout_r2;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined *local_18a0;
  uint *local_189c;
  undefined **local_1898;
  undefined **local_1894;
  undefined4 local_1890;
  uint local_1888 [2];
  uint local_1880;
  uint local_187c;
  uint local_1878;
  undefined4 local_1874;
  int local_c58;
  uint *local_c54;
  uint *local_c50;
  
  DataMemoryBarrier(0xb);
  uVar10 = *param_1;
  do {
    if ((uVar10 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: next.is_notified()",0x24,&DAT_018ad23c);
    }
    if ((uVar10 & 3) == 0) {
      uVar5 = (uVar10 & 0x3f) >> 5;
      uVar6 = uVar10 & 0xfffffff8 | 1;
      uVar4 = *param_1;
    }
    else {
      if (uVar10 < 0x40) goto LAB_00d21b28;
      uVar6 = uVar10 - 0x40;
      uVar5 = 2;
      if (uVar6 < 0x40) {
        uVar5 = 3;
      }
      uVar4 = *param_1;
    }
    if (uVar4 == uVar10) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar6;
          DataMemoryBarrier(0xb);
          switch(uVar5) {
          case 1:
            local_c58 = 2;
            FUN_00cc0b4c(param_1 + 6,&local_c58);
            local_1880 = param_1[8];
            local_187c = param_1[9];
            local_1874 = extraout_r1;
            goto LAB_00d21ac8;
          case 2:
            goto switchD_00d21854_caseD_2;
          case 3:
            goto switchD_00d21854_caseD_3;
          }
          uVar8 = 0;
          local_18a0 = &DAT_018acf5c;
          local_1898 = &local_18a0;
          local_1890 = 0;
          puVar3 = param_1 + 6;
          local_189c = param_1;
          local_1894 = local_1898;
          if (param_1[10] != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,
                         &DAT_018ace94);
          }
          uVar11 = thunk_FUN_016de0ee(puVar3,0x40);
          iVar7 = (int)uVar11 + (int)((ulonglong)uVar11 >> 0x20);
          uVar10 = param_1[8];
          uVar6 = param_1[9];
          if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_00d218e8:
            uVar8 = *(undefined4 *)(iVar7 + 0x18);
            uVar9 = *(undefined4 *)(iVar7 + 0x1c);
            *(uint *)(iVar7 + 0x18) = uVar10;
            *(uint *)(iVar7 + 0x1c) = uVar6;
          }
          else {
            uVar9 = 0;
            if (*(char *)(iVar7 + 0x38) != '\x02') {
              FUN_015e8e6c(iVar7,FUN_01655ec4);
              *(undefined1 *)(iVar7 + 0x38) = 1;
              goto LAB_00d218e8;
            }
          }
          cVar2 = FUN_00cbdb78(param_1 + 0xc,&local_1898);
          if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_00d21bac:
            *(undefined4 *)(iVar7 + 0x18) = uVar8;
            *(undefined4 *)(iVar7 + 0x1c) = uVar9;
          }
          else if (*(char *)(iVar7 + 0x38) != '\x02') {
            FUN_015e8e6c(iVar7,FUN_01655ec4);
            *(undefined1 *)(iVar7 + 0x38) = 1;
            goto LAB_00d21bac;
          }
          if (cVar2 == '\x02') {
            uVar10 = *param_1;
            DataMemoryBarrier(0xb);
            goto LAB_00d21944;
          }
          local_c58 = 2;
          FUN_00cc0b4c(puVar3,&local_c58);
          local_1888[0] = 1;
          local_187c = 0;
          local_1880 = 0;
          local_1878 = CONCAT13((char)((uint)extraout_r2 >> 0x10),CONCAT21((short)extraout_r2,cVar2)
                               ) & 0xffffff01;
          local_1874 = extraout_r1_01;
          FUN_00cc0b4c(puVar3,local_1888);
          goto LAB_00d21c0c;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar10);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar10 = uVar4;
  } while( true );
LAB_00d21944:
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: curr.is_running()",0x23,&DAT_018ad22c);
  }
  if ((uVar10 & 0x20) != 0) {
    uVar8 = 3;
    local_c58 = 0;
LAB_00d21a08:
    switch(uVar8) {
    case 0:
      break;
    case 1:
      local_1888[0] = CONCAT31(local_1888[0]._1_3_,1);
      local_c50 = local_1888;
      local_c58 = param_1[6] + 8;
      local_c54 = param_1;
      FUN_0164511c(&local_c58);
      DataMemoryBarrier(0xb);
      do {
        uVar10 = *param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar10 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar10 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
      }
      if ((uVar10 & 0xffffffc0) == 0x40) {
switchD_00d21854_caseD_3:
        FUN_00ae0700(param_1);
      }
      break;
    case 2:
      goto switchD_00d21854_caseD_3;
    case 3:
      local_c58 = 2;
      FUN_00cc0b4c(puVar3,&local_c58);
      local_1880 = param_1[8];
      local_187c = param_1[9];
      local_1874 = extraout_r1_00;
LAB_00d21ac8:
      local_1878 = 0;
      local_1888[0] = 1;
      FUN_00cc0b4c(param_1 + 6,local_1888);
LAB_00d21c0c:
      FUN_00ae98a4(param_1);
      return;
    }
switchD_00d21854_caseD_2:
    return;
  }
  if ((uVar10 & 4) == 0) {
    if (uVar10 < 0x40) {
LAB_00d21b28:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.ref_count() > 0",0x26,&DAT_018ad2cc);
    }
    local_1888[0] = (uVar10 & 0xffffffde) - 0x40;
    uVar8 = 0;
    if (local_1888[0] < 0x40) {
      uVar8 = 2;
    }
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.0 <= isize::MAX as usize",0x2f,&DAT_018ad2dc);
    }
    local_1888[0] = (uVar10 & 0xffffffde) + 0x40;
    uVar8 = 1;
  }
  local_c58 = 1;
  uVar6 = *param_1;
  if (*param_1 == uVar10) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = local_1888[0];
        DataMemoryBarrier(0xb);
        goto LAB_00d21a08;
      }
      uVar6 = *param_1;
    } while (*param_1 == uVar10);
  }
  uVar10 = uVar6;
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  goto LAB_00d21944;
}

