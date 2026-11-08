// FUN_00a5814c @ 00a5814c size=1904 calls_out=18 calls_in=1
// strings: `Ready` polled after completionConnTask Future polled twice

void FUN_00a5814c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  code *pcVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  uint uVar19;
  char cVar20;
  char *pcVar21;
  undefined4 uVar22;
  int iVar23;
  ushort uVar24;
  undefined4 uVar25;
  undefined2 uVar26;
  bool bVar27;
  undefined8 uVar28;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 *local_58;
  undefined4 *local_54;
  ushort local_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 *local_46;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xe)) {
  case 0:
    param_2[0xb] = param_2[8];
    param_2[0xc] = param_2[9];
    param_2[0xd] = param_2[10];
    param_2[0xf] = *param_2;
    param_2[0x10] = param_2[1];
    param_2[0x11] = param_2[2];
    param_2[0x12] = param_2[3];
    param_2[0x13] = param_2[4];
    param_2[0x14] = param_2[5];
    param_2[0x15] = param_2[6];
    param_2[0x16] = param_2[7];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186cb1c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186cb1c);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x3d)) {
    case 0:
      uVar13 = param_2[0x17];
      uVar22 = param_2[0x18];
      uVar25 = param_2[0x19];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186cb0c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186cb0c);
    case 3:
      uVar4 = (&switchD_00a58294::switchdataD_00a58298)[*(byte *)(param_2 + 0x2e)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0x2e)) {
      case 0:
        uVar13 = param_2[0x22];
        uVar16 = param_2[0x27];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187a1dc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187a1dc);
      case 3:
        goto switchD_00a58294_caseD_3;
      case 4:
        goto switchD_00a58294_caseD_4;
      }
      goto LAB_00a58334;
    }
    goto LAB_00a582ec;
  }
  sVar2 = *(short *)(param_2 + 0xf);
  *(short *)(param_2 + 0xf) = 4;
  if (sVar2 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Ready` polled after completionConnTask Future polled twice",0x1f,&DAT_018a6c40);
  }
  uVar4 = param_2[0x10];
  puVar14 = (undefined4 *)param_2[0x11];
  if (sVar2 != 3) {
    param_2[0x3f] = param_2[0x10];
    param_2[0x40] = (undefined4 *)param_2[0x11];
    *(undefined2 *)((int)param_2 + 0xfa) = *(undefined2 *)((int)param_2 + 0x3e);
    param_2[0x41] = param_2[0x12];
    param_2[0x42] = param_2[0x13];
    param_2[0x43] = param_2[0x14];
    param_2[0x44] = param_2[0x15];
    param_2[0x45] = param_2[0x16];
    *(undefined2 *)(param_2 + 0x3e) = 2;
    if (sVar2 != 2) {
      *(short *)(param_2 + 0xf) = sVar2;
      uVar13 = param_2[0xb];
      uVar22 = param_2[0xc];
      uVar25 = param_2[0xd];
      FUN_016dd1aa((int)param_2 + 0x3e,(undefined2 *)((int)param_2 + 0xfa),0x1e);
      *(undefined1 *)(param_2 + 0x3d) = 0;
      param_2[0x17] = uVar13;
      param_2[0x18] = uVar22;
      param_2[0x19] = uVar25;
LAB_00a582ec:
      local_88 = param_2 + 0xf;
      param_2[0x1a] = *local_88;
      param_2[0x1b] = param_2[0x10];
      param_2[0x1c] = param_2[0x11];
      param_2[0x1d] = param_2[0x12];
      param_2[0x1e] = param_2[0x13];
      param_2[0x1f] = param_2[0x14];
      param_2[0x20] = param_2[0x15];
      param_2[0x21] = param_2[0x16];
      uVar16 = 2;
      param_2[0x22] = uVar13;
      param_2[0x23] = uVar13;
      param_2[0x24] = uVar22;
      param_2[0x25] = uVar25;
      param_2[0x26] = param_2 + 0x1a;
      param_2[0x27] = 2;
      *(undefined1 *)(param_2 + 0x2e) = 0;
LAB_00a58334:
      param_2[0x28] = uVar13;
      param_2[0x29] = uVar16;
      param_2[0x2a] = param_2[0x23];
      param_2[0x2b] = param_2[0x24];
      param_2[0x2c] = param_2[0x25];
      param_2[0x2d] = param_2[0x26];
      do {
        param_2[0x2f] = uVar13;
        param_2[0x30] = uVar16;
        *(undefined1 *)(param_2 + 0x3c) = 0;
switchD_00a58294_caseD_3:
        FUN_00a59a78(&local_40,param_2 + 0x2f,param_3);
        puVar17 = local_38;
        puVar14 = local_3c;
        uVar7 = local_40;
        if (local_40 == 2) {
          uVar15 = 3;
LAB_00a588bc:
          local_8c = param_2 + 0x2e;
          *(undefined1 *)local_8c = uVar15;
          goto LAB_00a588c4;
        }
        uVar4 = (uint)*(byte *)(param_2 + 0x3c);
        bVar27 = uVar4 == 3;
        if (bVar27) {
          uVar4 = (uint)*(byte *)(param_2 + 0x3b);
        }
        if (bVar27 && uVar4 == 3) {
          iVar23 = param_2[0x33];
          pcVar21 = (char *)(iVar23 + 0xc);
          if (*pcVar21 == '\0') {
            bVar27 = (bool)hasExclusiveAccess(pcVar21);
            if (!bVar27) goto LAB_00a58710;
            *pcVar21 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_00a58710:
            FUN_01280da8(pcVar21);
          }
          FUN_0128236c(pcVar21);
          piVar6 = param_2 + 0x34;
          if (*piVar6 == 0) {
            if (*(int **)(iVar23 + 0x10) == piVar6) {
              piVar9 = (int *)param_2[0x35];
              *(int **)(iVar23 + 0x10) = piVar9;
              goto joined_r0x00a58770;
            }
          }
          else {
            piVar9 = (int *)param_2[0x35];
            *(int **)(*piVar6 + 4) = piVar9;
joined_r0x00a58770:
            if (piVar9 == (int *)0x0) {
              if (*(int **)(iVar23 + 0x14) != piVar6) goto LAB_00a58780;
              *(int *)(iVar23 + 0x14) = *piVar6;
            }
            else {
              *piVar9 = *piVar6;
            }
            param_2[0x34] = 0;
            param_2[0x35] = 0;
          }
LAB_00a58780:
          FUN_01282570(pcVar21);
          if (*pcVar21 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar27 = (bool)hasExclusiveAccess(pcVar21);
              if (bVar27) {
                *pcVar21 = '\0';
                goto LAB_00a587c0;
              }
            } while (*pcVar21 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(pcVar21);
LAB_00a587c0:
          uVar4 = 0;
          if (param_2[0x36] != 0) {
            uVar4 = (**(code **)(param_2[0x36] + 0xc))(param_2[0x37]);
          }
        }
        if ((uVar7 & 1) != 0) {
          uVar7 = (uint)puVar14 >> 8 | (int)puVar17 << 0x18;
          goto LAB_00a58810;
        }
        param_2[0x2f] = puVar14;
        param_2[0x30] = puVar17;
switchD_00a58294_caseD_4:
        uVar28 = thunk_FUN_016de0ee(uVar4,0x40);
        iVar23 = (int)uVar28 + (int)((ulonglong)uVar28 >> 0x20);
        puVar14 = (undefined4 *)*param_3;
        if (*(char *)(iVar23 + 0x38) == '\x01') {
LAB_00a58868:
          cVar20 = *(char *)(iVar23 + 0x31);
          cVar8 = *(char *)(iVar23 + 0x30);
          cVar3 = cVar20;
          if (cVar8 == '\x01') {
            if (cVar20 == '\0') {
              uVar15 = 4;
              FUN_016455a4(*puVar14,puVar14[1]);
              goto LAB_00a588bc;
            }
            cVar3 = cVar20 + -1;
          }
          *(char *)(iVar23 + 0x31) = cVar3;
          iVar5 = *(int *)(param_2[0x2a] + 0xc);
        }
        else {
          cVar8 = '\0';
          cVar20 = '\0';
          if (*(char *)(iVar23 + 0x38) != '\x02') {
            FUN_015e8e6c(iVar23,FUN_00a303f4);
            *(undefined1 *)(iVar23 + 0x38) = 1;
            goto LAB_00a58868;
          }
          iVar5 = *(int *)(param_2[0x2a] + 0xc);
        }
        if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ad11c);
        }
        puVar18 = (ushort *)param_2[0x2d];
        uVar24 = *puVar18;
        if (uVar24 == 2) {
          uVar4 = 2;
          local_58._1_3_ = (undefined3)((uint)local_58 >> 8);
          local_58 = (undefined4 *)CONCAT31(local_58._1_3_,2);
          local_54 = (undefined4 *)&DAT_0188b49c;
        }
        else {
          puVar14 = *(undefined4 **)(puVar18 + 2);
          puVar17 = *(undefined4 **)(puVar18 + 4);
          if (uVar24 == 3) {
            uVar4 = (uint)puVar14 & 0xff;
            local_54 = puVar17;
            local_58 = puVar14;
          }
          else {
            local_3c = *(undefined4 **)(puVar18 + 10);
            local_30 = (uint)puVar14 >> 0x10 | (int)puVar17 << 0x10;
            local_4c = puVar18[1];
            uStack_48 = (undefined2)((uint)puVar14 >> 0x10);
            uStack_4a = SUB42(puVar14,0);
            if ((uVar24 & 1) == 0) {
              uVar24 = (ushort)((((uint)puVar14 >> 0x10) << 0x18) >> 0x10) |
                       (ushort)(byte)((uint)puVar14 >> 0x18);
              local_3c = (undefined4 *)CONCAT22(uStack_4a,local_4c);
              local_38 = (undefined4 *)0x0;
              uVar13 = 0x10;
              uVar26 = 2;
              local_34 = (undefined4 *)0x0;
              local_2c = puVar14;
            }
            else {
              uVar24 = puVar18[0xe] << 8 | puVar18[0xe] >> 8;
              uVar13 = 0x1c;
              uVar26 = 10;
              local_30 = *(uint *)(puVar18 + 6);
              local_2c = *(undefined4 **)(puVar18 + 8);
              local_34 = puVar17;
              local_38 = puVar14;
              local_80 = *(undefined4 *)(puVar18 + 0xc);
            }
            local_28 = local_80;
            local_40 = CONCAT22(uVar24,uVar26);
            local_46 = puVar17;
            puVar14 = (undefined4 *)
                      FUN_016d987a(iVar5,param_2[0x2b],param_2[0x2c],0x4000,&local_40,uVar13);
            uVar4 = 4;
            if (puVar14 == (undefined4 *)0xffffffff) {
              puVar14 = (undefined4 *)FUN_016d2bc8();
              puVar14 = (undefined4 *)*puVar14;
              uVar4 = 0;
            }
            local_58 = (undefined4 *)CONCAT31(local_58._1_3_,(char)uVar4);
            local_54 = puVar14;
          }
          if (uVar4 == 4) goto LAB_00a587dc;
        }
        cVar3 = FUN_00a59714(&local_58);
        if (cVar3 != '\r') goto LAB_00a587dc;
        uVar11 = param_2[0x2f];
        bVar1 = *(byte *)(param_2 + 0x30);
        puVar12 = (uint *)(*(int *)(param_2[0x28] + 8) + 0x28);
        DataMemoryBarrier(0xb);
        uVar7 = *(uint *)(*(int *)(param_2[0x28] + 8) + 0x28);
        do {
          while( true ) {
            if ((uint)bVar1 != (uVar7 & 0xffffff) >> 0x10) goto LAB_00a586d4;
            uVar19 = *puVar12;
            if (uVar19 == uVar7) break;
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            uVar7 = uVar19;
          }
          DataMemoryBarrier(0xb);
          bVar27 = (bool)hasExclusiveAccess(puVar12);
          if (bVar27) {
            *puVar12 = uVar7 & (uVar11 & 0x33 ^ 0xff003f);
          }
          DataMemoryBarrier(0xb);
          uVar7 = uVar19;
        } while (!bVar27);
LAB_00a586d4:
        puVar14 = local_54;
        if (cVar8 != '\0') {
          if (*(char *)(iVar23 + 0x38) != '\x01') {
            if (*(char *)(iVar23 + 0x38) == '\x02') goto joined_r0x00a586f8;
            FUN_015e8e6c(iVar23,FUN_01655ec4);
            *(undefined1 *)(iVar23 + 0x38) = 1;
          }
          *(char *)(iVar23 + 0x31) = cVar20;
          *(undefined1 *)(iVar23 + 0x30) = 1;
          puVar14 = local_54;
        }
joined_r0x00a586f8:
        local_54 = puVar14;
        if (uVar4 == 3) {
          uVar13 = *puVar14;
          puVar17 = (undefined4 *)puVar14[1];
          pcVar10 = (code *)*puVar17;
          if (pcVar10 != (code *)0x0) {
            (*pcVar10)(uVar13);
          }
          if (puVar17[1] != 0) {
            thunk_FUN_016d3fb4(uVar13);
          }
          thunk_FUN_016d3fb4(puVar14);
        }
        uVar13 = param_2[0x28];
        uVar16 = param_2[0x29];
      } while( true );
    }
    FUN_015e79d4(&local_40,0x14,&DAT_003b58f7,0x1c);
    uVar4 = local_40;
    puVar14 = local_3c;
  }
LAB_00a58400:
  *param_1 = uVar4;
  param_1[1] = (uint)puVar14;
  *(undefined1 *)(param_2 + 0xe) = 1;
  return;
LAB_00a587dc:
  uVar7 = (uint)local_58 >> 8 | (int)local_54 << 0x18;
  puVar14 = local_58;
  puVar17 = local_54;
LAB_00a58810:
  local_8c = param_2 + 0x2e;
  local_90 = param_2 + 0x3d;
  *(undefined1 *)local_8c = 1;
  if (((uint)puVar14 & 0xff) == 5) {
LAB_00a588c4:
    local_90 = param_2 + 0x3d;
    *(undefined1 *)local_90 = 3;
    *(undefined1 *)param_1 = 5;
    *(undefined1 *)(param_2 + 0xe) = 4;
    return;
  }
  uVar4 = (uint)puVar14 & 0xff | uVar7 << 8;
  puVar14 = (undefined4 *)((uint)puVar17 & 0xffffff00 | uVar7 >> 0x18);
  *(undefined1 *)local_90 = 1;
  goto LAB_00a58400;
}

