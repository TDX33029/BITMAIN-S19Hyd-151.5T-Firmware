// FUN_006d8e5c @ 006d8e5c size=1240 calls_out=11 calls_in=0
// strings: assertion failed: next.is_notified() | assertion failed: self.ref_count() > 0 | assertion failed: curr.is_running() | assertion failed: self.0 <= isize::MAX as usize | internal error: entered unreachable code: unexpected stage | assertion failed: prev.ref_count() >= 1

void FUN_006d8e5c(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined *local_1340;
  uint *local_133c;
  undefined **local_1338;
  undefined **local_1334;
  undefined4 local_1330;
  uint local_1328 [2];
  uint local_1320;
  uint local_131c;
  uint local_1318;
  undefined4 local_1314;
  undefined4 local_9a8 [609];
  
  DataMemoryBarrier(0xb);
  uVar8 = *param_1;
  do {
    if ((uVar8 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: next.is_notified()",0x24,&DAT_018ad23c);
    }
    if ((uVar8 & 3) == 0) {
      uVar6 = (uVar8 & 0x3f) >> 5;
      uVar7 = uVar8 & 0xfffffff8 | 1;
      uVar5 = *param_1;
    }
    else {
      if (uVar8 < 0x40) goto LAB_006d91dc;
      uVar7 = uVar8 - 0x40;
      uVar6 = 2;
      if (uVar7 < 0x40) {
        uVar6 = 3;
      }
      uVar5 = *param_1;
    }
    if (uVar5 == uVar8) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar7;
          DataMemoryBarrier(0xb);
          switch(uVar6) {
          case 1:
            local_9a8[0] = 2;
            FUN_0067e848(param_1 + 6,local_9a8);
            local_1320 = param_1[8];
            local_131c = param_1[9];
            local_1314 = extraout_r1;
            goto LAB_006d917c;
          case 2:
            goto switchD_006d8f20_caseD_2;
          case 3:
            goto switchD_006d8f20_caseD_3;
          }
          puVar10 = param_1 + 10;
          uVar12 = 0;
          local_1340 = &DAT_018acf5c;
          local_1338 = &local_1340;
          local_1330 = 0;
          puVar2 = param_1 + 6;
          local_133c = param_1;
          local_1334 = local_1338;
          if (*puVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,
                         &DAT_018ace94);
          }
          uVar14 = thunk_FUN_016de0ee(puVar2,0x40);
          iVar9 = (int)uVar14 + (int)((ulonglong)uVar14 >> 0x20);
          puVar11 = param_1 + 8;
          uVar7 = *puVar11;
          uVar8 = param_1[9];
          if (*(char *)(iVar9 + 0x38) == '\x01') {
LAB_006d8fb8:
            uVar12 = *(undefined4 *)(iVar9 + 0x18);
            uVar13 = *(undefined4 *)(iVar9 + 0x1c);
            *(uint *)(iVar9 + 0x18) = uVar7;
            *(uint *)(iVar9 + 0x1c) = uVar8;
          }
          else {
            uVar13 = 0;
            if (*(char *)(iVar9 + 0x38) != '\x02') {
              FUN_015e8e6c(iVar9,FUN_01655ec4);
              *(undefined1 *)(iVar9 + 0x38) = 1;
              goto LAB_006d8fb8;
            }
          }
          iVar3 = FUN_0066c7b0(param_1 + 0xc,&local_1338);
          if (*(char *)(iVar9 + 0x38) == '\x01') {
LAB_006d9260:
            cVar4 = '\x01';
            *(undefined4 *)(iVar9 + 0x18) = uVar12;
            *(undefined4 *)(iVar9 + 0x1c) = uVar13;
          }
          else {
            if (*(char *)(iVar9 + 0x38) != '\x02') {
              FUN_015e8e6c(iVar9,FUN_01655ec4);
              *(undefined1 *)(iVar9 + 0x38) = 1;
              goto LAB_006d9260;
            }
            cVar4 = '\x02';
          }
          if (iVar3 != 0) {
            uVar8 = *param_1;
            DataMemoryBarrier(0xb);
            goto LAB_006d9014;
          }
          uVar8 = *puVar11;
          uVar7 = param_1[9];
          local_9a8[0] = 2;
          if (cVar4 == '\x01') {
LAB_006d92ac:
            uVar12 = *(undefined4 *)(iVar9 + 0x18);
            uVar13 = *(undefined4 *)(iVar9 + 0x1c);
            *(uint *)(iVar9 + 0x18) = uVar8;
            *(uint *)(iVar9 + 0x1c) = uVar7;
          }
          else {
            uVar12 = 0;
            uVar13 = 0;
            if (cVar4 != '\x02') {
              FUN_015e8e6c(iVar9,FUN_01655ec4);
              *(undefined1 *)(iVar9 + 0x38) = 1;
              goto LAB_006d92ac;
            }
          }
          FUN_0065da44(puVar10);
          FUN_016dd1aa(puVar10,local_9a8,0x980);
          local_1318 = (uint)*(byte *)(iVar9 + 0x38);
          local_1314 = extraout_r1_01;
          if (local_1318 == 1) {
LAB_006d92fc:
            *(undefined4 *)(iVar9 + 0x18) = uVar12;
            *(undefined4 *)(iVar9 + 0x1c) = uVar13;
          }
          else if (local_1318 != 2) {
            FUN_015e8e6c(iVar9,FUN_01655ec4);
            local_1318 = 1;
            *(undefined1 *)(iVar9 + 0x38) = 1;
            local_1314 = extraout_r1_02;
            goto LAB_006d92fc;
          }
          local_131c = 0;
          local_1320 = 0;
          local_1328[0] = 1;
          FUN_0067e848(puVar2,local_1328);
          goto LAB_006d932c;
        }
        uVar5 = *param_1;
      } while (uVar5 == uVar8);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar8 = uVar5;
  } while( true );
LAB_006d9014:
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: curr.is_running()",0x23,&DAT_018ad22c);
  }
  if ((uVar8 & 0x20) != 0) {
    uVar12 = 3;
    local_9a8[0] = 0;
LAB_006d90d8:
    switch(uVar12) {
    case 0:
      break;
    case 1:
      FUN_01659ec0(param_1[6],param_1);
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar8 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar8 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
      }
      if ((uVar8 & 0xffffffc0) == 0x40) {
switchD_006d8f20_caseD_3:
        FUN_00645c6c(param_1);
      }
      break;
    case 2:
      goto switchD_006d8f20_caseD_3;
    case 3:
      local_9a8[0] = 2;
      FUN_0067e848(puVar2,local_9a8);
      local_1320 = *puVar11;
      local_131c = param_1[9];
      local_1314 = extraout_r1_00;
LAB_006d917c:
      local_1318 = 0;
      local_1328[0] = 1;
      FUN_0067e848(param_1 + 6,local_1328);
LAB_006d932c:
      FUN_00652078(param_1);
      return;
    }
switchD_006d8f20_caseD_2:
    return;
  }
  if ((uVar8 & 4) == 0) {
    if (uVar8 < 0x40) {
LAB_006d91dc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.ref_count() > 0",0x26,&DAT_018ad2cc);
    }
    local_1328[0] = (uVar8 & 0xffffffde) - 0x40;
    uVar12 = 0;
    if (local_1328[0] < 0x40) {
      uVar12 = 2;
    }
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.0 <= isize::MAX as usize",0x2f,&DAT_018ad2dc);
    }
    local_1328[0] = (uVar8 & 0xffffffde) + 0x40;
    uVar12 = 1;
  }
  local_9a8[0] = 1;
  uVar7 = *param_1;
  if (*param_1 == uVar8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = local_1328[0];
        DataMemoryBarrier(0xb);
        goto LAB_006d90d8;
      }
      uVar7 = *param_1;
    } while (*param_1 == uVar8);
  }
  uVar8 = uVar7;
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  goto LAB_006d9014;
}

