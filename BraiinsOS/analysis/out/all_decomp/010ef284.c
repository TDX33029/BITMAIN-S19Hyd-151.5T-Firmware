// FUN_010ef284 @ 010ef284 size=3336 calls_out=10 calls_in=0
// strings: 

void FUN_010ef284(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *****pppppuVar4;
  undefined1 uVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  int *local_70;
  undefined1 *local_6c;
  undefined1 *local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *****local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *****local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[1]) {
  case '\0':
    piVar6 = (int *)*param_2;
    *(undefined1 *)((int)param_2 + 0x12) = 0;
    param_2[3] = (int)piVar6;
    if (*(char *)((int)param_2 + 5) == '\0') {
LAB_010ef324:
      param_2[2] = (int)piVar6;
      if (*piVar6 != -0x80000000) {
        iVar9 = piVar6[3];
        *(undefined1 *)(param_2 + 0x10) = 0;
        piVar6 = piVar6 + 6;
        param_2[5] = (int)piVar6;
        *(char *)(param_2 + 4) = (char)iVar9;
LAB_010ef408:
        uVar5 = 0;
        param_2[0xe] = (int)piVar6;
        *(undefined2 *)(param_2 + 0xf) = 0;
LAB_010ef41c:
        param_2[10] = (int)piVar6;
        *(undefined1 *)((int)param_2 + 0x2e) = 0;
        *(undefined1 *)(param_2 + 0xb) = uVar5;
        param_2[6] = 1;
        param_2[7] = 1;
        goto switchD_010ef6a0_caseD_3;
      }
    }
    else {
      param_2[2] = (int)piVar6;
      iVar9 = *piVar6;
joined_r0x010ef398:
      if (iVar9 != -0x80000000) {
        iVar9 = piVar6[3];
        *(undefined1 *)(param_2 + 0x10) = 0;
        piVar6 = piVar6 + 6;
        param_2[5] = (int)piVar6;
        *(char *)(param_2 + 4) = (char)iVar9;
LAB_010ef538:
        uVar5 = 1;
        param_2[0xe] = (int)piVar6;
        *(undefined2 *)(param_2 + 0xf) = 1;
LAB_010ef54c:
        param_2[10] = (int)piVar6;
        *(undefined1 *)((int)param_2 + 0x2e) = 0;
        *(undefined1 *)(param_2 + 0xb) = uVar5;
        param_2[6] = 1;
        param_2[7] = 1;
        goto switchD_010ef6d4_caseD_3;
      }
    }
    local_64 = &DAT_80000004;
    local_60 = piVar6;
LAB_010ef3a4:
    *(undefined1 *)((int)param_2 + 0x12) = 1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018860ac);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018860ac);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x12)) {
    case 0:
      piVar6 = (int *)param_2[3];
      goto LAB_010ef324;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018860dc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018860dc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x10]) {
      case '\0':
        piVar6 = (int *)param_2[5];
        goto LAB_010ef408;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861f4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861f4);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x3d)) {
      case 0:
        uVar5 = (undefined1)param_2[0xf];
        piVar6 = (int *)param_2[0xe];
        goto LAB_010ef41c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861e4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861e4);
      }
switchD_010ef6a0_caseD_3:
      puVar10 = (undefined1 *)((int)param_2 + 0x3d);
      piVar11 = param_2 + 0x10;
      pbVar7 = (byte *)(param_2 + 7);
      FUN_010ee5e8(&local_34,pbVar7);
      pppppuVar4 = local_2c;
      pbVar3 = local_30;
      piVar6 = local_34;
      if (local_34 == (int *)0x80000001) {
        *(undefined1 *)piVar11 = 3;
        *puVar10 = 3;
        *(undefined1 *)((int)param_2 + 0x12) = 3;
        goto LAB_010efcd4;
      }
      FUN_00868aa0(pbVar7);
      if (piVar6 == (int *)&DAT_80000000) {
        pbVar7 = pbVar3;
LAB_010ef75c:
        *(undefined1 *)piVar11 = 1;
        *puVar10 = 1;
      }
      else {
        if (pppppuVar4 != (undefined4 *****)param_2[6]) {
          local_2c = &local_38;
          local_38 = pppppuVar4;
          local_28 = &LAB_00fac484;
          local_30 = &LAB_00fac484;
          local_34 = param_2 + 6;
          FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
          local_58 = local_48;
          uStack_54 = uStack_44;
          uStack_50 = uStack_40;
          pbVar7 = (byte *)FUN_010f66dc(&local_58);
          if (piVar6 != (int *)0x0) {
            thunk_FUN_016d3fb4(pbVar3);
          }
          goto LAB_010ef75c;
        }
        if (pppppuVar4 != (undefined4 *****)&DAT_00000001) {
          bVar1 = 0;
          local_30 = &DAT_00000001;
          local_34 = (int *)&DAT_00000006;
          local_2c = pppppuVar4;
          pbVar7 = (byte *)FUN_010f683c(&local_34);
        }
        else {
          bVar1 = *pbVar3;
        }
        if (piVar6 != (int *)0x0) {
          thunk_FUN_016d3fb4(pbVar3);
        }
        *(undefined1 *)piVar11 = 1;
        *puVar10 = 1;
        if (pppppuVar4 == (undefined4 *****)&DAT_00000001) {
          param_2[5] = param_2[2] + 0x18;
          *(byte *)((int)param_2 + 0x11) = bVar1;
          *(undefined1 *)(param_2 + 0x10) = 0;
          goto switchD_010ef4c0_caseD_0;
        }
      }
      FUN_010f4fd4(&local_64,pbVar7);
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x10]) {
      case '\0':
switchD_010ef4c0_caseD_0:
        iVar9 = param_2[5];
        uVar5 = 0x15;
        *(undefined2 *)(param_2 + 0xf) = 0x15;
        param_2[0xe] = iVar9;
LAB_010ef89c:
        param_2[10] = iVar9;
        *(undefined1 *)((int)param_2 + 0x2e) = 0;
        *(undefined1 *)(param_2 + 0xb) = uVar5;
        param_2[6] = 1;
        param_2[7] = 1;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861f4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861f4);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_2 + 0x3d)) {
        case 0:
          uVar5 = (undefined1)param_2[0xf];
          iVar9 = param_2[0xe];
          goto LAB_010ef89c;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018861e4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018861e4);
        }
      }
      local_6c = (undefined1 *)((int)param_2 + 0x12);
      local_70 = param_2 + 5;
      puVar10 = (undefined1 *)((int)param_2 + 0x3d);
      piVar11 = param_2 + 0x10;
      pbVar7 = (byte *)(param_2 + 7);
      FUN_010ee5e8(&local_34,pbVar7);
      pppppuVar4 = local_2c;
      pbVar3 = local_30;
      piVar6 = local_34;
      if (local_34 == (int *)0x80000001) {
        *(undefined1 *)piVar11 = 3;
        *puVar10 = 3;
        *local_6c = 4;
        goto LAB_010efcd4;
      }
      FUN_00868aa0(pbVar7);
      if (piVar6 == (int *)&DAT_80000000) {
        pbVar7 = pbVar3;
LAB_010efb2c:
        *(undefined1 *)piVar11 = 1;
        *puVar10 = 1;
      }
      else {
        if (pppppuVar4 != (undefined4 *****)param_2[6]) {
          local_2c = &local_38;
          local_38 = pppppuVar4;
          local_28 = &LAB_00fac484;
          local_30 = &LAB_00fac484;
          local_34 = param_2 + 6;
          FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
          local_58 = local_48;
          uStack_54 = uStack_44;
          uStack_50 = uStack_40;
          pbVar7 = (byte *)FUN_010f66dc(&local_58);
          if (piVar6 != (int *)0x0) {
            thunk_FUN_016d3fb4(pbVar3);
          }
          goto LAB_010efb2c;
        }
        if (pppppuVar4 != (undefined4 *****)&DAT_00000001) {
          iVar9 = 0;
          local_30 = &DAT_00000001;
          local_34 = (int *)&DAT_00000006;
          local_2c = pppppuVar4;
          pbVar7 = (byte *)FUN_010f683c(&local_34);
        }
        else {
          bVar1 = *pbVar3;
          local_30 = (byte *)(CONCAT31(CONCAT21(local_30._2_2_,bVar1),(char)((bVar1 & 3) >> 1)) &
                             0xffff01ff);
          local_30._0_3_ = CONCAT12(bVar1 >> 4,(undefined2)local_30);
          iVar9 = (uint)CONCAT12(bVar1 >> 4,(undefined2)local_30) << 8;
        }
        if (piVar6 != (int *)0x0) {
          thunk_FUN_016d3fb4(pbVar3);
        }
        *(undefined1 *)piVar11 = 1;
        *puVar10 = 1;
        if (pppppuVar4 == (undefined4 *****)&DAT_00000001) {
          uVar5 = *(undefined1 *)(param_2[2] + 0x15);
          *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_2 + 0x11);
          *(char *)((int)param_2 + 0x16) = (char)((uint)iVar9 >> 0x18);
          *(short *)local_70 = (short)((uint)iVar9 >> 8);
          *(undefined1 *)(param_2 + 0x12) = 0;
          param_2[7] = param_2[2] + 0x18;
          *(char *)(param_2 + 6) = (char)param_2[4];
          *(undefined1 *)((int)param_2 + 0x17) = uVar5;
          goto switchD_010ef304_caseD_5;
        }
      }
      FUN_010f4fd4(&local_64,pbVar7);
      break;
    case 5:
switchD_010ef304_caseD_5:
      FUN_010f04cc(&local_34,param_2 + 7,param_3);
      pbVar3 = local_30;
      piVar6 = local_34;
      if ((char)local_34 == '\x02') {
        *(undefined1 *)((int)param_2 + 0x12) = 5;
        goto LAB_010efcd4;
      }
      cVar2 = (char)param_2[0x12];
      bVar12 = cVar2 == '\x03';
      if (bVar12) {
        cVar2 = *(char *)((int)param_2 + 0x45);
      }
      if (bVar12 && cVar2 == '\x03') {
        FUN_00868aa0(param_2 + 9);
      }
      if (((uint)piVar6 & 1) != 0) {
        FUN_010f4fd4(&local_64,pbVar3);
        break;
      }
      local_64 = (undefined1 *)0x80000001;
      if (((char)param_2[5] != '\0') ||
         (local_64 = (undefined1 *)0x80000002, *(char *)((int)param_2 + 0x15) != '\0'))
      goto LAB_010ef3a4;
      uVar8 = (uint)*(byte *)((int)param_2 + 0x19);
      if (uVar8 == 0) {
LAB_010efef0:
        local_64 = (undefined1 *)0x80000003;
      }
      else {
LAB_010efd18:
        fVar13 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
        fVar15 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)((int)param_2 + 0x16),(byte)(in_fpscr >> 0x16) & 3
                                  );
        fVar14 = (float)VectorSignedToFloat((int)(char)uVar8,(byte)(in_fpscr >> 0x16) & 3);
        local_64 = (undefined1 *)0x80000005;
        if (*(char *)((int)param_2 + 0x17) != '\0') {
          fVar14 = fVar13 + -64.0;
        }
        fVar13 = -0.0;
        if ((char)param_2[6] != '\0') {
          fVar13 = fVar15 * 0.0625;
        }
        local_60 = (int *)(fVar14 + fVar13);
      }
      goto LAB_010ef3a4;
    }
    *(undefined1 *)((int)param_2 + 0x12) = 1;
    if (local_64 == (undefined1 *)0x80000006) {
LAB_010efcd4:
      *param_1 = 0x80000006;
      *(undefined1 *)(param_2 + 1) = 3;
      return;
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x12)) {
    case 0:
      piVar6 = (int *)param_2[3];
      param_2[2] = (int)piVar6;
      iVar9 = *piVar6;
      goto joined_r0x010ef398;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018860ec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018860ec);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x10]) {
      case '\0':
        piVar6 = (int *)param_2[5];
        goto LAB_010ef538;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861f4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861f4);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x3d)) {
      case 0:
        uVar5 = (undefined1)param_2[0xf];
        piVar6 = (int *)param_2[0xe];
        goto LAB_010ef54c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861e4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861e4);
      }
switchD_010ef6d4_caseD_3:
      puVar10 = (undefined1 *)((int)param_2 + 0x3d);
      piVar11 = param_2 + 0x10;
      pbVar7 = (byte *)(param_2 + 7);
      FUN_010ee5e8(&local_34,pbVar7);
      pppppuVar4 = local_2c;
      pbVar3 = local_30;
      piVar6 = local_34;
      if (local_34 == (int *)0x80000001) {
        *(undefined1 *)piVar11 = 3;
        *puVar10 = 3;
        *(undefined1 *)((int)param_2 + 0x12) = 3;
        goto LAB_010efe80;
      }
      FUN_00868aa0(pbVar7);
      if (piVar6 == (int *)&DAT_80000000) {
        pbVar7 = pbVar3;
LAB_010ef7e8:
        *(undefined1 *)piVar11 = 1;
        *puVar10 = 1;
      }
      else {
        if (pppppuVar4 != (undefined4 *****)param_2[6]) {
          local_2c = &local_38;
          local_38 = pppppuVar4;
          local_28 = &LAB_00fac484;
          local_30 = &LAB_00fac484;
          local_34 = param_2 + 6;
          FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
          local_58 = local_48;
          uStack_54 = uStack_44;
          uStack_50 = uStack_40;
          pbVar7 = (byte *)FUN_010f66dc(&local_58);
          if (piVar6 != (int *)0x0) {
            thunk_FUN_016d3fb4(pbVar3);
          }
          goto LAB_010ef7e8;
        }
        if (pppppuVar4 != (undefined4 *****)&DAT_00000001) {
          bVar1 = 0;
          local_30 = &DAT_00000001;
          local_34 = (int *)&DAT_00000006;
          local_2c = pppppuVar4;
          pbVar7 = (byte *)FUN_010f683c(&local_34);
        }
        else {
          bVar1 = *pbVar3;
        }
        if (piVar6 != (int *)0x0) {
          thunk_FUN_016d3fb4(pbVar3);
        }
        *(undefined1 *)piVar11 = 1;
        *puVar10 = 1;
        if (pppppuVar4 == (undefined4 *****)&DAT_00000001) {
          param_2[5] = param_2[2] + 0x18;
          *(byte *)((int)param_2 + 0x11) = bVar1;
          *(undefined1 *)(param_2 + 0x10) = 0;
          goto switchD_010ef5f8_caseD_0;
        }
      }
      FUN_010f4fd4(&local_64,pbVar7);
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x10]) {
      case '\0':
switchD_010ef5f8_caseD_0:
        iVar9 = param_2[5];
        uVar5 = 0x10;
        *(undefined2 *)(param_2 + 0xf) = 0x10;
        param_2[0xe] = iVar9;
LAB_010ef9f8:
        param_2[10] = iVar9;
        *(undefined1 *)((int)param_2 + 0x2e) = 0;
        *(undefined1 *)(param_2 + 0xb) = uVar5;
        param_2[6] = 1;
        param_2[7] = 1;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861f4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861f4);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_2 + 0x3d)) {
        case 0:
          uVar5 = (undefined1)param_2[0xf];
          iVar9 = param_2[0xe];
          goto LAB_010ef9f8;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018861e4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018861e4);
        }
      }
      piVar11 = param_2 + 0x10;
      puVar10 = (undefined1 *)((int)param_2 + 0x3d);
      pbVar7 = (byte *)(param_2 + 7);
      FUN_010ee5e8(&local_34,pbVar7);
      pppppuVar4 = local_2c;
      pbVar3 = local_30;
      piVar6 = local_34;
      if (local_34 == (int *)0x80000001) {
        *(undefined1 *)piVar11 = 3;
        *puVar10 = 3;
        uVar5 = 4;
        goto LAB_010efe30;
      }
      FUN_00868aa0(pbVar7);
      if (piVar6 == (int *)&DAT_80000000) {
        pbVar7 = pbVar3;
LAB_010efbac:
        *puVar10 = 1;
        *(undefined1 *)piVar11 = 1;
      }
      else {
        if (pppppuVar4 != (undefined4 *****)param_2[6]) {
          local_2c = &local_38;
          local_38 = pppppuVar4;
          local_28 = &LAB_00fac484;
          local_30 = &LAB_00fac484;
          local_34 = param_2 + 6;
          FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
          local_58 = local_48;
          uStack_54 = uStack_44;
          uStack_50 = uStack_40;
          pbVar7 = (byte *)FUN_010f66dc(&local_58);
          if (piVar6 != (int *)0x0) {
            thunk_FUN_016d3fb4(pbVar3);
          }
          goto LAB_010efbac;
        }
        if (pppppuVar4 != (undefined4 *****)&DAT_00000001) {
          iVar9 = 0;
          local_30 = &DAT_00000001;
          local_34 = (int *)&DAT_00000006;
          local_2c = pppppuVar4;
          pbVar7 = (byte *)FUN_010f683c(&local_34);
        }
        else {
          bVar1 = *pbVar3;
          local_30 = (byte *)(CONCAT31(CONCAT21(local_30._2_2_,bVar1),(char)((bVar1 & 3) >> 1)) &
                             0xffff01ff);
          local_30._0_3_ = CONCAT12(bVar1 >> 4,(undefined2)local_30);
          iVar9 = (uint)CONCAT12(bVar1 >> 4,(undefined2)local_30) << 8;
        }
        if (piVar6 != (int *)0x0) {
          thunk_FUN_016d3fb4(pbVar3);
        }
        *(undefined1 *)piVar11 = 1;
        *puVar10 = 1;
        if (pppppuVar4 == (undefined4 *****)&DAT_00000001) {
          uVar5 = *(undefined1 *)(param_2[2] + 0x15);
          *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_2 + 0x11);
          *(char *)((int)param_2 + 0x16) = (char)((uint)iVar9 >> 0x18);
          *(short *)(param_2 + 5) = (short)((uint)iVar9 >> 8);
          *(undefined1 *)(param_2 + 0x12) = 0;
          param_2[7] = param_2[2] + 0x18;
          *(char *)(param_2 + 6) = (char)param_2[4];
          *(undefined1 *)((int)param_2 + 0x17) = uVar5;
          goto switchD_010ef36c_caseD_5;
        }
      }
      FUN_010f4fd4(&local_64,pbVar7);
      break;
    case 5:
switchD_010ef36c_caseD_5:
      FUN_010f04cc(&local_34,param_2 + 7,param_3);
      pbVar3 = local_30;
      piVar6 = local_34;
      if ((char)local_34 == '\x02') {
        uVar5 = 5;
LAB_010efe30:
        *(undefined1 *)((int)param_2 + 0x12) = uVar5;
        goto LAB_010efe80;
      }
      cVar2 = (char)param_2[0x12];
      bVar12 = cVar2 == '\x03';
      if (bVar12) {
        cVar2 = *(char *)((int)param_2 + 0x45);
      }
      if (bVar12 && cVar2 == '\x03') {
        FUN_00868aa0(param_2 + 9);
      }
      if (((uint)piVar6 & 1) == 0) {
        local_64 = (undefined1 *)0x80000002;
        if (((uint)pbVar3 & 0x10000) == 0) {
          if ((char)param_2[5] == '\0') {
            if (*(char *)((int)param_2 + 0x15) == '\0') {
              uVar8 = (uint)*(byte *)((int)param_2 + 0x19);
              if (uVar8 == 0) goto LAB_010efef0;
              goto LAB_010efd18;
            }
          }
          else {
            local_64 = (undefined1 *)0x80000001;
          }
        }
        goto LAB_010ef3a4;
      }
      FUN_010f4fd4(&local_64,pbVar3);
    }
    *(undefined1 *)((int)param_2 + 0x12) = 1;
    if (local_64 == (undefined1 *)0x80000006) {
LAB_010efe80:
      *param_1 = 0x80000006;
      *(undefined1 *)(param_2 + 1) = 4;
      return;
    }
  }
  *param_1 = local_64;
  param_1[1] = local_60;
  param_1[2] = local_5c;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

