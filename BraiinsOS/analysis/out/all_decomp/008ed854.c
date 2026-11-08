// FUN_008ed854 @ 008ed854 size=1104 calls_out=9 calls_in=0
// strings: assertion failed: next.is_notified() | assertion failed: self.ref_count() > 0 | assertion failed: curr.is_running() | assertion failed: self.0 <= isize::MAX as usize | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_008ed854(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined *local_420;
  uint *local_41c;
  undefined **local_418;
  undefined **local_414;
  undefined4 local_410;
  uint local_408 [2];
  uint local_400;
  uint local_3fc;
  undefined8 local_3f8;
  undefined4 local_218 [125];
  
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
      if (uVar10 < 0x40) goto LAB_008edbcc;
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
            local_218[0] = 2;
            FUN_008dd848(param_1 + 6,local_218);
            local_400 = param_1[8];
            local_3fc = param_1[9];
            local_3f8._4_4_ = extraout_r1;
            goto LAB_008edb6c;
          case 2:
            goto switchD_008ed918_caseD_2;
          case 3:
            goto switchD_008ed918_caseD_3;
          }
          uVar8 = 0;
          local_420 = &DAT_018acf5c;
          local_418 = &local_420;
          local_410 = 0;
          puVar2 = param_1 + 6;
          local_41c = param_1;
          local_414 = local_418;
          if (param_1[10] != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,
                         &DAT_018ace94);
          }
          uVar11 = thunk_FUN_016de0ee(puVar2,0x40);
          iVar7 = (int)uVar11 + (int)((ulonglong)uVar11 >> 0x20);
          uVar10 = param_1[8];
          uVar6 = param_1[9];
          if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_008ed9ac:
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
              goto LAB_008ed9ac;
            }
          }
          iVar3 = FUN_008d8fdc(param_1 + 0xc,&local_418);
          if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_008edc50:
            *(undefined4 *)(iVar7 + 0x18) = uVar8;
            *(undefined4 *)(iVar7 + 0x1c) = uVar9;
          }
          else if (*(char *)(iVar7 + 0x38) != '\x02') {
            FUN_015e8e6c(iVar7,FUN_01655ec4);
            *(undefined1 *)(iVar7 + 0x38) = 1;
            goto LAB_008edc50;
          }
          if (iVar3 != 0) {
            uVar10 = *param_1;
            DataMemoryBarrier(0xb);
            goto LAB_008eda04;
          }
          local_218[0] = 2;
          local_3f8 = FUN_008dd848(puVar2,local_218);
          local_3fc = 0;
          local_400 = 0;
          local_408[0] = 1;
          FUN_008dd848(puVar2,local_408);
          goto LAB_008edc9c;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar10);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar10 = uVar4;
  } while( true );
LAB_008eda04:
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: curr.is_running()",0x23,&DAT_018ad22c);
  }
  if ((uVar10 & 0x20) != 0) {
    uVar8 = 3;
    local_218[0] = 0;
LAB_008edac8:
    switch(uVar8) {
    case 0:
      break;
    case 1:
      FUN_01659ec0(param_1[6],param_1);
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
switchD_008ed918_caseD_3:
        FUN_008e6060(param_1);
      }
      break;
    case 2:
      goto switchD_008ed918_caseD_3;
    case 3:
      local_218[0] = 2;
      FUN_008dd848(puVar2,local_218);
      local_400 = param_1[8];
      local_3fc = param_1[9];
      local_3f8._4_4_ = extraout_r1_00;
LAB_008edb6c:
      local_3f8._0_4_ = 0;
      local_408[0] = 1;
      FUN_008dd848(param_1 + 6,local_408);
LAB_008edc9c:
      FUN_008e66bc(param_1);
      return;
    }
switchD_008ed918_caseD_2:
    return;
  }
  if ((uVar10 & 4) == 0) {
    if (uVar10 < 0x40) {
LAB_008edbcc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.ref_count() > 0",0x26,&DAT_018ad2cc);
    }
    local_408[0] = (uVar10 & 0xffffffde) - 0x40;
    uVar8 = 0;
    if (local_408[0] < 0x40) {
      uVar8 = 2;
    }
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.0 <= isize::MAX as usize",0x2f,&DAT_018ad2dc);
    }
    local_408[0] = (uVar10 & 0xffffffde) + 0x40;
    uVar8 = 1;
  }
  local_218[0] = 1;
  uVar6 = *param_1;
  if (*param_1 == uVar10) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = local_408[0];
        DataMemoryBarrier(0xb);
        goto LAB_008edac8;
      }
      uVar6 = *param_1;
    } while (*param_1 == uVar10);
  }
  uVar10 = uVar6;
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  goto LAB_008eda04;
}

