// FUN_00f65be8 @ 00f65be8 size=1812 calls_out=4 calls_in=2
// strings: invalid offset second | invalid offset minute | invalid offset hour | remaining data after parsing TZ string | remaining data after parsing TZ string | DST start and end rules must be provided

void FUN_00f65be8(undefined4 *param_1,char *param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 uVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  char *local_74;
  uint local_70;
  uint local_6c;
  char *local_68;
  char *local_64;
  uint local_60;
  int local_5c;
  char *pcStack_58;
  char *local_40;
  char *local_3c;
  char *local_38;
  uint local_34;
  undefined4 local_30;
  char *local_2c;
  
  iVar18 = 0x3b9aca05;
  if (param_3 == 0) {
    local_70 = 0;
    local_6c = 0;
    local_74 = param_2;
LAB_00f65c90:
    uVar15 = local_6c;
LAB_00f65c98:
    iVar13 = 1;
    if ((local_70 != 0) && (cVar1 = *local_74, cVar1 == '+' || cVar1 == '-')) {
      local_6c = local_6c + 1;
      local_70 = local_70 - 1;
      local_74 = local_74 + 1;
      if (cVar1 == '-') {
        iVar13 = -1;
      }
    }
    FUN_00f66314(&local_40,&local_74);
    if (local_40 == (char *)0x0) {
      if ((char *)0x18 < local_3c) {
        uVar14 = 0x13;
        local_38 = "invalid offset hour";
        local_2c = local_3c;
LAB_00f65e8c:
        *param_1 = local_38;
        *(undefined1 *)((int)param_1 + 0x2d) = 3;
        param_1[1] = uVar14;
        param_1[2] = iVar18;
        param_1[3] = local_2c;
        return;
      }
      uVar14 = 0x15;
      if ((char *)0x3b < local_38) {
        local_38 = "invalid offset minute";
        local_2c = local_3c;
        goto LAB_00f65e8c;
      }
      if (0x3b < local_34) {
        local_38 = "invalid offset second";
        local_2c = local_3c;
        goto LAB_00f65e8c;
      }
      pcVar8 = (char *)(((int)local_3c * 0xe10 + (int)local_38 * 0x3c + local_34) * iVar13);
    }
    else {
      pcVar8 = local_38;
      if (local_30 != 0x3b9aca10) {
        uVar14 = local_34;
        iVar18 = local_30;
        goto LAB_00f65e8c;
      }
    }
    if (local_70 == 0) {
      FUN_00f6785c(&local_40,-(int)pcVar8,0,param_2,uVar15);
      if (local_40 == (char *)0x0) {
        local_68 = local_3c;
        local_64 = local_38;
        local_60 = local_34;
        local_5c = local_30;
        ppcVar7 = &local_68;
        uVar5 = 2;
      }
      else {
        local_64 = local_38;
        local_60 = local_34;
        local_5c = local_30;
        pcStack_58 = local_2c;
        ppcVar7 = (char **)((uint)&local_68 | 4);
        uVar5 = 3;
      }
      pcVar16 = *ppcVar7;
      pcVar11 = ppcVar7[1];
      pcVar6 = ppcVar7[2];
      pcVar8 = ppcVar7[3];
      *(undefined1 *)((int)param_1 + 0x2d) = uVar5;
      *param_1 = pcVar16;
      param_1[1] = pcVar11;
      param_1[2] = pcVar6;
      param_1[3] = pcVar8;
      return;
    }
    if (*local_74 != '<') {
      uVar14 = 0;
      do {
        if (((byte)local_74[uVar14] & 0xdf) - 0x5b < 0xffffffe6) {
          iVar18 = local_70 - uVar14;
          goto LAB_00f65ee8;
        }
        uVar14 = uVar14 + 1;
      } while (local_70 != uVar14);
      iVar18 = 0;
      uVar14 = local_70;
LAB_00f65ee8:
      local_6c = local_6c + uVar14;
      local_70 = iVar18;
      pcVar11 = local_74 + uVar14;
      pcVar16 = local_74;
joined_r0x00f65f00:
      local_74 = pcVar11;
      if (local_70 == 0) {
LAB_00f6605c:
        *(undefined1 *)((int)param_1 + 0x2d) = 3;
        uVar9 = 0x3b9aca0e;
        pcVar6 = "DST start and end rules must be provided";
        uVar10 = 0x28;
LAB_00f66074:
        *param_1 = pcVar6;
        param_1[1] = uVar10;
        param_1[2] = uVar9;
        return;
      }
      if (*local_74 == ',') {
        pcVar11 = pcVar8 + -0xe10;
      }
      else {
        FUN_00f66470(&local_40,&local_74);
        if (local_38 != (char *)0x3b9aca10) {
          *(undefined1 *)((int)param_1 + 0x2d) = 3;
          *param_1 = local_40;
          param_1[1] = local_3c;
          param_1[2] = local_38;
          param_1[3] = local_34;
          return;
        }
        pcVar11 = local_40;
        if (local_70 == 0) goto LAB_00f6605c;
      }
      local_70 = local_70 + -1;
      local_6c = local_6c + 1;
      if (*local_74 == ',') {
        local_74 = local_74 + 1;
        FUN_00f6658c(&local_40,&local_74,param_4);
        pcVar3 = local_3c;
        pcVar2 = local_40;
        if (local_38 != (char *)0x3b9aca10) {
          *(undefined1 *)((int)param_1 + 0x2d) = 3;
          *param_1 = local_40;
          param_1[1] = local_3c;
          param_1[2] = local_38;
          param_1[3] = local_34;
          return;
        }
        if (local_70 == 0) {
          pcVar6 = (char *)0x2501;
        }
        else {
          local_70 = local_70 + -1;
          local_6c = local_6c + 1;
          pcVar6 = (char *)0x1501;
          if (*local_74 == ',') {
            local_74 = local_74 + 1;
            FUN_00f6658c(&local_40,&local_74,param_4);
            pcVar4 = local_3c;
            pcVar6 = local_40;
            if (local_38 != (char *)0x3b9aca10) {
              *(undefined1 *)((int)param_1 + 0x2d) = 3;
              *param_1 = local_40;
              param_1[1] = local_3c;
              param_1[2] = local_38;
              param_1[3] = local_34;
              return;
            }
            if (local_70 != 0) {
              *(undefined1 *)((int)param_1 + 0x2d) = 3;
              *param_1 = "remaining data after parsing TZ string";
              param_1[1] = 0x26;
              param_1[2] = 0x3b9aca05;
              return;
            }
            FUN_00f6785c(&local_40,-(int)pcVar8,0,param_2,uVar15);
            if (local_40 == (char *)0x1) {
              *param_1 = local_38;
              param_1[1] = local_34;
              param_1[2] = local_30;
              param_1[3] = local_2c;
              *(undefined1 *)((int)param_1 + 0x2d) = 3;
              return;
            }
            local_68 = local_3c;
            local_64 = local_38;
            local_60 = local_34;
            local_5c = local_30;
            FUN_00f6785c(&local_40,-(int)pcVar11,1,pcVar16,uVar14);
            if (local_40 == (char *)0x1) {
              *(undefined1 *)(param_1 + 2) = (undefined1)local_30;
              *param_1 = local_38;
              param_1[1] = local_34;
              param_1[3] = local_2c;
              *(undefined2 *)((int)param_1 + 10) = local_30._2_2_;
              *(char *)((int)param_1 + 9) = local_30._1_1_;
              *(undefined1 *)((int)param_1 + 0x2d) = 3;
              return;
            }
            pcVar8 = pcVar4;
            if ((int)pcVar4 < 0) {
              pcVar8 = (char *)-(int)pcVar4;
            }
            pcVar16 = pcVar3;
            if ((int)pcVar3 < 0) {
              pcVar16 = (char *)-(int)pcVar3;
            }
            pcVar11 = (char *)0x3b9aca0c;
            pcVar12 = "invalid DST start or end time";
            pcVar17 = (char *)0x1d;
            if ((pcVar16 < (char *)0x93a80) && (pcVar8 < (char *)0x93a80)) {
              if (local_30._1_1_ != '\x02') {
                *(char *)((int)param_1 + 0x2d) = local_30._1_1_;
                *param_1 = pcVar3;
                param_1[1] = pcVar4;
                param_1[2] = pcVar2;
                *(undefined2 *)((int)param_1 + 0x2e) = local_30._2_2_;
                param_1[8] = local_3c;
                param_1[9] = local_38;
                param_1[10] = local_34;
                *(undefined1 *)(param_1 + 0xb) = (undefined1)local_30;
                param_1[3] = pcVar6;
                param_1[4] = local_68;
                param_1[5] = local_64;
                param_1[6] = local_60;
                param_1[7] = local_5c;
                return;
              }
              pcVar11 = pcVar2;
              pcVar12 = pcVar3;
              pcVar17 = pcVar4;
            }
            *param_1 = pcVar12;
            param_1[1] = pcVar17;
            param_1[2] = pcVar11;
            param_1[3] = pcVar6;
            *(undefined1 *)((int)param_1 + 0x2d) = 3;
            return;
          }
        }
        uVar10 = 1;
        *(undefined1 *)((int)param_1 + 0x2d) = 3;
        uVar9 = 0x3b9aca06;
        goto LAB_00f66074;
      }
      *(undefined1 *)((int)param_1 + 0x2d) = 3;
      uVar9 = 0x1501;
      goto LAB_00f65d68;
    }
    local_70 = local_70 - 1;
    if (local_70 != 0) {
      pcVar16 = local_74 + 1;
      uVar14 = 0;
      do {
        if (pcVar16[uVar14] == '>') {
          local_70 = local_70 + ~uVar14;
          local_6c = local_6c + uVar14 + 2;
          pcVar11 = pcVar16 + uVar14 + 1;
          goto joined_r0x00f65f00;
        }
        uVar14 = uVar14 + 1;
      } while (local_70 != uVar14);
    }
  }
  else {
    if (*param_2 != '<') {
      local_6c = 0;
      do {
        if (((byte)param_2[local_6c] & 0xdf) - 0x5b < 0xffffffe6) {
          local_70 = param_3 - local_6c;
          local_74 = param_2 + local_6c;
          goto LAB_00f65c90;
        }
        local_6c = local_6c + 1;
      } while (param_3 != local_6c);
      local_70 = 0;
      local_74 = param_2 + param_3;
      local_6c = param_3;
      goto LAB_00f65c90;
    }
    param_3 = param_3 - 1;
    if (param_3 != 0) {
      param_2 = param_2 + 1;
      uVar15 = 0;
      do {
        if (param_2[uVar15] == '>') {
          local_6c = uVar15 + 2;
          local_70 = param_3 + ~uVar15;
          local_74 = param_2 + uVar15 + 1;
          goto LAB_00f65c98;
        }
        uVar15 = uVar15 + 1;
      } while (param_3 != uVar15);
    }
  }
  *(undefined1 *)((int)param_1 + 0x2d) = 3;
  uVar9 = 0x2501;
LAB_00f65d68:
  *param_1 = uVar9;
  param_1[1] = 1;
  param_1[2] = 0x3b9aca06;
  return;
}

