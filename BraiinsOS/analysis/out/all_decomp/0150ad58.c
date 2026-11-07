// FUN_0150ad58 @ 0150ad58 size=2812 calls_out=7 calls_in=0
// strings: ProtocolNames | ProtocolNames

void FUN_0150ad58(undefined1 *param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  int local_5c;
  undefined1 local_58 [16];
  int *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  
  iVar12 = param_3[2];
  iVar7 = iVar12;
  if ((uint)(*param_3 - iVar12) < 2) {
    FUN_0154e5f8(param_3,iVar12,2,1,1);
    iVar7 = param_3[2];
  }
  param_3[2] = iVar7 + 2;
  *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
  local_70 = 0x19191919;
  local_6c = 0x19191919;
  local_68 = 0x19191919;
  local_64 = 0x19191919;
  local_60 = param_3;
  local_5c = iVar12;
  if (param_2 != 0) {
    puVar5 = param_1 + param_2 * 0x14;
    do {
      uVar8 = 0x23;
      uVar9 = 0x13;
      uVar6 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*param_1) {
      case 0:
        iVar7 = param_3[2];
        if ((uint)(*param_3 - iVar7) < 2) {
          FUN_0154e5f8(param_3,iVar7,2,1,1);
          iVar7 = param_3[2];
        }
        iVar12 = iVar7 + 2;
        param_3[2] = iVar12;
        *(undefined2 *)(param_3[1] + iVar7) = 0xb00;
        iVar7 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar7 = param_3[2];
        }
        uVar6 = *(undefined4 *)(param_1 + 8);
        uVar8 = *(undefined4 *)(param_1 + 0xc);
        param_3[2] = iVar7 + 2;
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_58[0] = 0x19;
        local_48 = param_3;
        local_44 = iVar12;
        FUN_0150c4a4(uVar6,uVar8,param_3);
        break;
      case 1:
        goto switchD_0150ade8_caseD_1;
      case 2:
        uVar6 = 0x17;
        goto switchD_0150ade8_caseD_1;
      case 3:
        iVar7 = param_3[2];
        if ((uint)(*param_3 - iVar7) < 2) {
          FUN_0154e5f8(param_3,iVar7,2,1,1);
          iVar7 = param_3[2];
        }
        iVar12 = iVar7 + 2;
        param_3[2] = iVar12;
        *(undefined2 *)(param_3[1] + iVar7) = 0x1ff;
        iVar13 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar13 = param_3[2];
        }
        iVar11 = iVar13 + 2;
        uVar6 = *(undefined4 *)(param_1 + 8);
        uVar15 = *(uint *)(param_1 + 0xc);
        param_3[2] = iVar11;
        *(undefined2 *)(param_3[1] + iVar13) = 0xffff;
        iVar7 = *param_3;
        local_58[0] = 0x19;
        local_48 = param_3;
        local_44 = iVar12;
        if (iVar11 == iVar7) {
          FUN_006029c0(param_3);
          iVar7 = *param_3;
        }
        iVar13 = iVar13 + 3;
        *(char *)(param_3[1] + iVar11) = (char)uVar15;
        param_3[2] = iVar13;
        if ((uint)(iVar7 - iVar13) < uVar15) {
          FUN_0154e5f8(param_3,iVar13,uVar15,1,1);
LAB_0150ba80:
          iVar13 = param_3[2];
        }
        goto LAB_0150b294;
      case 4:
        iVar7 = param_3[2];
        if ((uint)(*param_3 - iVar7) < 2) {
          FUN_0154e5f8(param_3,iVar7,2,1,1);
          iVar7 = param_3[2];
        }
        iVar12 = iVar7 + 2;
        param_3[2] = iVar12;
        *(undefined2 *)(param_3[1] + iVar7) = 0x1000;
        iVar7 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar7 = param_3[2];
        }
        iVar13 = iVar7 + 2;
        param_3[2] = iVar13;
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_58[0] = 0x19;
        iVar7 = iVar13;
        local_48 = param_3;
        local_44 = iVar12;
        if ((uint)(*param_3 - iVar13) < 2) {
          FUN_0154e5f8(param_3,iVar13,2,1,1);
          iVar7 = param_3[2];
        }
        uVar6 = *(undefined4 *)(param_1 + 8);
        uVar15 = *(uint *)(param_1 + 0xc);
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_3c = 0x16;
        local_38 = "ProtocolNames";
        local_34 = 0xd;
        local_40 = 0x1a;
        iVar12 = *param_3;
        iVar11 = iVar7 + 2;
        param_3[2] = iVar11;
        local_30 = param_3;
        local_2c = iVar13;
        if (iVar11 == iVar12) {
          FUN_006029c0(param_3);
          iVar12 = *param_3;
        }
        iVar7 = iVar7 + 3;
        *(char *)(param_3[1] + iVar11) = (char)uVar15;
        param_3[2] = iVar7;
        if ((uint)(iVar12 - iVar7) < uVar15) {
          FUN_0154e5f8(param_3,iVar7,uVar15,1,1);
          iVar7 = param_3[2];
        }
        FUN_016dd1aa(param_3[1] + iVar7,uVar6,uVar15);
        param_3[2] = iVar7 + uVar15;
        FUN_0152f8f8(&local_40);
        break;
      case 5:
        iVar7 = param_3[2];
        if ((uint)(*param_3 - iVar7) < 2) {
          FUN_0154e5f8(param_3,iVar7,2,1,1);
          iVar7 = param_3[2];
        }
        iVar12 = iVar7 + 2;
        param_3[2] = iVar12;
        *(undefined2 *)(param_3[1] + iVar7) = 0x3300;
        iVar7 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar7 = param_3[2];
        }
        param_3[2] = iVar7 + 2;
        uVar3 = *(undefined2 *)(param_1 + 0x12);
        uVar4 = *(ushort *)(param_1 + 0x10);
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_58[0] = 0x19;
                    /* WARNING: Could not recover jumptable at 0x0150b330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        local_48 = param_3;
        local_44 = iVar12;
        (*(code *)(&DAT_0150b334 + *(int *)(&DAT_0150b334 + (uint)uVar4 * 4)))(uVar3);
        return;
      case 6:
        iVar7 = param_3[2];
        if ((uint)(*param_3 - iVar7) < 2) {
          FUN_0154e5f8(param_3,iVar7,2,1,1);
          iVar7 = param_3[2];
        }
        iVar12 = iVar7 + 2;
        param_3[2] = iVar12;
        *(undefined2 *)(param_3[1] + iVar7) = 0x2900;
        iVar7 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar7 = param_3[2];
        }
        iVar13 = iVar7 + 2;
        param_3[2] = iVar13;
        uVar4 = *(ushort *)(param_1 + 2);
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_58[0] = 0x19;
        local_48 = param_3;
        local_44 = iVar12;
        if ((uint)(*param_3 - iVar13) < 2) {
          FUN_0154e5f8(param_3,iVar13,2,1,1);
          iVar13 = param_3[2];
        }
        param_3[2] = iVar13 + 2;
        *(ushort *)(param_3[1] + iVar13) = uVar4 << 8 | uVar4 >> 8;
        break;
      case 7:
        uVar6 = 0x15;
        goto switchD_0150ade8_caseD_1;
      case 8:
        uVar6 = 5;
        goto switchD_0150ade8_caseD_1;
      case 9:
        goto switchD_0150ade8_caseD_9;
      case 10:
        uVar9 = 0x12;
        goto switchD_0150ade8_caseD_9;
      case 0xb:
        iVar7 = param_3[2];
        if ((uint)(*param_3 - iVar7) < 2) {
          FUN_0154e5f8(param_3,iVar7,2,1,1);
          iVar7 = param_3[2];
        }
        iVar12 = iVar7 + 2;
        param_3[2] = iVar12;
        *(undefined2 *)(param_3[1] + iVar7) = 0x2b00;
        iVar7 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar7 = param_3[2];
        }
        param_3[2] = iVar7 + 2;
        uVar3 = *(undefined2 *)(param_1 + 4);
        uVar4 = *(ushort *)(param_1 + 2);
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_58[0] = 0x19;
                    /* WARNING: Could not recover jumptable at 0x0150afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        local_48 = param_3;
        local_44 = iVar12;
        (*(code *)(&DAT_0150afb4 + *(int *)(&DAT_0150afb4 + (uint)uVar4 * 4)))(uVar3);
        return;
      case 0xc:
        goto switchD_0150ade8_caseD_c;
      case 0xd:
        uVar8 = 0x27;
        goto switchD_0150ade8_caseD_c;
      case 0xe:
        uVar6 = 0x19;
switchD_0150ade8_caseD_1:
        FUN_0152ab04(uVar6,0x23,param_3);
        iVar12 = param_3[2];
        iVar7 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar7 = param_3[2];
        }
        param_3[2] = iVar7 + 2;
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_58[0] = 0x19;
        local_48 = param_3;
        local_44 = iVar12;
        break;
      case 0xf:
        iVar7 = param_3[2];
        if ((uint)(*param_3 - iVar7) < 2) {
          FUN_0154e5f8(param_3,iVar7,2,1,1);
          iVar7 = param_3[2];
        }
        iVar12 = iVar7 + 2;
        param_3[2] = iVar12;
        *(undefined2 *)(param_3[1] + iVar7) = 0xdfe;
        iVar7 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar7 = param_3[2];
        }
        iVar14 = iVar7 + 2;
        iVar11 = *(int *)(param_1 + 8);
        iVar13 = *(int *)(param_1 + 0xc);
        param_3[2] = iVar14;
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_58[0] = 0x19;
        iVar7 = iVar14;
        local_48 = param_3;
        local_44 = iVar12;
        if ((uint)(*param_3 - iVar14) < 2) {
          FUN_0154e5f8(param_3,iVar14,2,1,1);
          iVar7 = param_3[2];
        }
        param_3[2] = iVar7 + 2;
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_40 = 0x19191919;
        local_3c = 0x19191919;
        local_38 = (char *)0x19191919;
        local_34 = 0x19191919;
        local_30 = param_3;
        local_2c = iVar14;
        if (iVar13 != 0) {
          iVar13 = iVar13 * 0x3c;
          do {
            FUN_015173fc(iVar11,param_3);
            iVar11 = iVar11 + 0x3c;
            iVar13 = iVar13 + -0x3c;
          } while (iVar13 != 0);
        }
        FUN_0152f8f8(&local_40);
        break;
      case 0x10:
        FUN_0152ab04(*(undefined2 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x12),param_3);
        iVar12 = param_3[2];
        iVar7 = iVar12;
        if ((uint)(*param_3 - iVar12) < 2) {
          FUN_0154e5f8(param_3,iVar12,2,1,1);
          iVar7 = param_3[2];
        }
        iVar13 = iVar7 + 2;
        uVar6 = *(undefined4 *)(param_1 + 8);
        uVar15 = *(uint *)(param_1 + 0xc);
        param_3[2] = iVar13;
        *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
        local_58[0] = 0x19;
        local_48 = param_3;
        local_44 = iVar12;
        if ((uint)(*param_3 - iVar13) < uVar15) {
          FUN_0154e5f8(param_3,iVar13,uVar15,1,1);
          goto LAB_0150ba80;
        }
LAB_0150b294:
        FUN_016dd1aa(param_3[1] + iVar13,uVar6,uVar15);
        iVar13 = iVar13 + uVar15;
LAB_0150b6c0:
        param_3[2] = iVar13;
      }
      FUN_0152f8f8(local_58);
      param_1 = param_1 + 0x14;
    } while (param_1 != puVar5);
  }
  FUN_0152f8f8(&local_70);
  return;
switchD_0150ade8_caseD_c:
  FUN_0152ab04(uVar8,uVar8,param_3);
  iVar12 = param_3[2];
  iVar7 = iVar12;
  if ((uint)(*param_3 - iVar12) < 2) {
    FUN_0154e5f8(param_3,iVar12,2,1,1);
    iVar7 = param_3[2];
  }
  iVar13 = iVar7 + 2;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar15 = *(uint *)(param_1 + 0xc);
  param_3[2] = iVar13;
  *(undefined2 *)(param_3[1] + iVar7) = 0xffff;
  local_58[0] = 0x19;
  local_48 = param_3;
  local_44 = iVar12;
  if ((uint)(*param_3 - iVar13) < uVar15) {
    FUN_0154e5f8(param_3,iVar13,uVar15,1,1);
    iVar13 = param_3[2];
  }
  FUN_016dd1aa(param_3[1] + iVar13,uVar6,uVar15);
  iVar13 = param_3[2] + uVar15;
  goto LAB_0150b6c0;
switchD_0150ade8_caseD_9:
  FUN_0152ab04(uVar9,0x23,param_3);
  iVar7 = param_3[2];
  iVar13 = iVar7;
  if ((uint)(*param_3 - iVar7) < 2) {
    FUN_0154e5f8(param_3,iVar7,2,1,1);
    iVar13 = param_3[2];
  }
  iVar12 = iVar13 + 2;
  cVar1 = param_1[1];
  uVar2 = param_1[2];
  param_3[2] = iVar12;
  *(undefined2 *)(param_3[1] + iVar13) = 0xffff;
  local_58[0] = 0x19;
  uVar10 = 0;
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      uVar10 = uVar2;
    }
    else {
      uVar10 = 2;
    }
  }
  local_48 = param_3;
  local_44 = iVar7;
  if (iVar12 == *param_3) {
    FUN_006029c0(param_3);
  }
  *(undefined1 *)(param_3[1] + iVar12) = uVar10;
  iVar13 = iVar13 + 3;
  goto LAB_0150b6c0;
}

