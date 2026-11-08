// FUN_014f5b4c @ 014f5b4c size=2104 calls_out=12 calls_in=6
// strings: {recursion limit reached} | {recursion limit reached} | closure | `fmt::Error`s should be impossible without a `fmt::Formatter`

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_014f5b4c(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 *local_58;
  int local_54;
  undefined1 *local_50;
  int iStack_4c;
  undefined1 *puStack_48;
  int iStack_44;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  int local_34;
  undefined1 *local_30;
  int local_2c;
  undefined1 *puStack_28;
  int local_24;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = param_1[4];
joined_r0x014f5bc4:
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_00faace8(iVar2,"?",1);
    return uVar3;
  }
  iVar7 = param_1[3];
  param_1[3] = iVar7 + 1U;
  if (500 < iVar7 + 1U) {
    if ((param_1[4] == 0) ||
       (iVar2 = FUN_00faace8(param_1[4],"{recursion limit reached}",0x19), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0;
      return 0;
    }
    return 1;
  }
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  if (uVar8 <= uVar9) {
switchD_014f5c0c_caseD_44:
    if ((param_1[4] == 0) || (iVar2 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return 0;
    }
    return 1;
  }
  cVar11 = *(char *)(iVar2 + uVar9);
  uVar15 = uVar9 + 1;
  param_1[2] = uVar15;
  switch(cVar11) {
  case 'B':
    iVar2 = FUN_014f6448(param_1);
    goto joined_r0x014f5da0;
  case 'C':
    FUN_014f6668(&local_40,param_1);
    iVar2 = local_34;
    puVar16 = local_38;
    if ((char)local_40 == '\x01') {
LAB_014f5dc0:
      iVar2 = param_1[4];
      cVar11 = local_40._1_1_;
      if (local_40._1_1_ != '\0') goto LAB_014f5dd0;
LAB_014f6198:
      if (iVar2 == 0) goto LAB_014f61c8;
      uVar3 = 0x10;
      pcVar6 = &DAT_00564580;
    }
    else {
      local_54 = local_34;
      local_58 = local_38;
      if (*param_1 == 0) {
        if (param_1[4] == 0) {
          return 0;
        }
        uVar3 = FUN_00faace8(param_1[4],"?",1);
        return uVar3;
      }
      FUN_014f67cc(&local_40,param_1);
      if (local_40 != (undefined1 *)0x0) {
        local_50 = local_40;
        iStack_4c = local_3c;
        puStack_48 = local_38;
        iStack_44 = local_34;
        if (param_1[4] != 0) {
          iVar7 = FUN_014f6a3c(&local_50);
          if (iVar7 != 0) {
            return 1;
          }
          puVar5 = (undefined4 *)param_1[4];
          if ((puVar5 != (undefined4 *)0x0 && (puVar16 != (undefined1 *)0x0 || iVar2 != 0)) &&
             ((puVar5[2] & 0x800000) == 0)) {
            iVar2 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_00418df9,1);
            if (iVar2 != 0) {
              return 1;
            }
            iVar2 = FUN_00face00(&local_58,param_1[4]);
            if (iVar2 != 0) {
              return 1;
            }
            iVar2 = (**(code **)(((undefined4 *)param_1[4])[1] + 0xc))
                              (*(undefined4 *)param_1[4],&DAT_00418ec5,1);
            if (iVar2 != 0) {
              return 1;
            }
          }
        }
        goto LAB_014f6140;
      }
LAB_014f6188:
      iVar2 = param_1[4];
      cVar11 = (char)local_3c;
      if ((char)local_3c == '\0') goto LAB_014f6198;
LAB_014f5dd0:
      if (iVar2 == 0) goto LAB_014f61c8;
      uVar3 = 0x19;
      pcVar6 = "{recursion limit reached}";
    }
    iVar2 = FUN_00faace8(iVar2,pcVar6,uVar3);
    if (iVar2 != 0) {
      return 1;
    }
LAB_014f61c8:
    *(char *)(param_1 + 1) = cVar11;
    *param_1 = 0;
    return 0;
  default:
    goto switchD_014f5c0c_caseD_44;
  case 'I':
    iVar7 = FUN_014f5b4c(param_1);
    iVar2 = 1;
    if (iVar7 != 0) {
      return 1;
    }
    if (param_2 != 0) {
      iVar2 = param_1[4];
    }
    if ((param_2 != 0 && iVar2 != 0) && (iVar2 = FUN_00faace8(iVar2,&DAT_00418eb9,2), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],"<",1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_014f7730(param_1);
    goto LAB_014f6108;
  case 'M':
  case 'X':
    if ((uVar15 < uVar8) && (*(char *)(iVar2 + uVar15) == 's')) {
      uVar15 = uVar9 + 2;
      param_1[2] = uVar15;
      if ((uVar8 <= uVar15) || (*(char *)(iVar2 + uVar15) != '_')) {
        uVar9 = 0;
        uVar17 = 0;
        do {
          if (uVar8 == uVar15) break;
          cVar1 = *(char *)(iVar2 + uVar15);
          if (cVar1 == '_') {
            param_1[2] = uVar15 + 1;
            if (uVar17 != 0xffffffff || -uVar17 - 1 < (uint)(uVar9 < 0xfffffffe)) goto LAB_014f605c;
            break;
          }
          bVar14 = cVar1 - 0x30;
          if (9 < (byte)(cVar1 - 0x30U)) {
            if ((byte)(cVar1 + 0x9fU) < 0x1a) {
              bVar14 = cVar1 + 0xa9;
            }
            else {
              if (0x19 < (byte)(cVar1 + 0xbfU)) break;
              bVar14 = cVar1 - 0x1d;
            }
          }
          uVar12 = (uint)((ulonglong)uVar9 * 0x3e);
          uVar9 = (uint)((ulonglong)uVar9 * 0x3e >> 0x20);
          uVar15 = uVar15 + 1;
          param_1[2] = uVar15;
          uVar13 = (uint)((ulonglong)uVar17 * 0x3e);
          uVar10 = uVar9 + uVar13;
          if ((int)((ulonglong)uVar17 * 0x3e >> 0x20) != 0 || CARRY4(uVar9,uVar13)) break;
          uVar13 = (uint)bVar14;
          uVar9 = uVar12 + uVar13;
          uVar17 = uVar10 + CARRY4(uVar12,uVar13);
        } while (!CARRY4(uVar10,(uint)CARRY4(uVar12,uVar13)));
        goto switchD_014f5c0c_caseD_44;
      }
      param_1[2] = uVar9 + 3;
    }
LAB_014f605c:
    iVar2 = param_1[4];
    param_1[4] = 0;
    iVar7 = FUN_014f5b4c(param_1,0);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,&local_40,
                   &DAT_018a7198,&DAT_018a7128);
    }
    param_1[4] = iVar2;
    break;
  case 'N':
    if (uVar8 <= uVar15) goto switchD_014f5c0c_caseD_44;
    puVar16 = (undefined1 *)(uint)*(byte *)(iVar2 + uVar15);
    param_1[2] = uVar9 + 2;
    if (((undefined1 *)0x19 < puVar16 + -0x41) &&
       (puVar4 = puVar16 + -0x61, puVar16 = &DAT_00110000, (undefined1 *)0x19 < puVar4))
    goto switchD_014f5c0c_caseD_44;
    iVar2 = FUN_014f5b4c(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    if (*param_1 == 0) {
      if (param_1[4] == 0) {
        return 0;
      }
      iVar2 = FUN_00faace8(param_1[4],&DAT_00418eb9,2);
      if (iVar2 != 0) {
        return 1;
      }
      if (*param_1 == 0) {
        if (param_1[4] == 0) {
          return 0;
        }
        uVar3 = FUN_00faace8(param_1[4],"?",1);
        return uVar3;
      }
    }
    FUN_014f6668(&local_40,param_1);
    iVar2 = local_34;
    puVar4 = local_38;
    if ((char)local_40 == '\x01') goto LAB_014f5dc0;
    if (*param_1 == 0) {
      iVar2 = param_1[4];
      goto joined_r0x014f5bc4;
    }
    FUN_014f67cc(&local_40,param_1);
    if (local_40 == (undefined1 *)0x0) goto LAB_014f6188;
    local_30 = local_40;
    local_2c = local_3c;
    puStack_28 = local_38;
    local_24 = local_34;
    if (puVar16 != &DAT_00110000) {
      if (param_1[4] == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_00faace8(param_1[4],"::{",3);
        if (iVar7 != 0) {
          return 1;
        }
        iVar7 = param_1[4];
      }
      if (puVar16 == (undefined1 *)0x43) {
        if (iVar7 != 0) {
          uVar3 = 7;
          pcVar6 = "closure";
LAB_014f62cc:
          iVar7 = FUN_00faace8(iVar7,pcVar6,uVar3);
LAB_014f62ec:
          if (iVar7 != 0) {
            return 1;
          }
        }
      }
      else if (puVar16 == (undefined1 *)0x53) {
        if (iVar7 != 0) {
          uVar3 = 4;
          pcVar6 = &DAT_00567144;
          goto LAB_014f62cc;
        }
      }
      else {
        local_40 = puVar16;
        if (iVar7 != 0) {
          iVar7 = FUN_00faaf34(&local_40,iVar7);
          goto LAB_014f62ec;
        }
      }
      iVar7 = param_1[4];
      if (local_2c != 0 || local_24 != 0) {
        if (iVar7 != 0) {
          iVar7 = FUN_00faace8(iVar7,&DAT_00418eb8,1);
          if (iVar7 != 0) {
            return 1;
          }
          if (param_1[4] != 0) {
            iVar7 = FUN_014f6a3c(&local_30);
            if (iVar7 != 0) {
              return 1;
            }
            iVar7 = param_1[4];
            if (iVar7 != 0) goto LAB_014f6314;
          }
        }
        goto LAB_014f6140;
      }
      if (iVar7 == 0) goto LAB_014f6140;
LAB_014f6314:
      iVar7 = FUN_00faace8(iVar7,&DAT_00410f4e,1);
      if (iVar7 != 0) {
        return 1;
      }
      local_3c = iVar2;
      local_40 = puVar4;
      if (param_1[4] == 0) goto LAB_014f6140;
      iVar2 = FUN_00fac4cc(&local_40);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_014f6140;
      pcVar6 = "}";
      goto LAB_014f6128;
    }
    iVar2 = 0;
    if (local_3c != 0 || local_34 != 0) {
      iVar2 = param_1[4];
    }
    if ((local_3c != 0 || local_34 != 0) && iVar2 != 0) {
      iVar2 = FUN_00faace8(iVar2,&DAT_00418eb9,2);
      if (iVar2 != 0) {
        return 1;
      }
      if (param_1[4] != 0) {
        iVar2 = FUN_014f6a3c(&local_30);
        goto joined_r0x014f5da0;
      }
    }
    goto LAB_014f6140;
  case 'Y':
    iVar2 = param_1[4];
  }
  if ((iVar2 != 0) && (iVar2 = FUN_00faace8(iVar2,"<",1), iVar2 != 0)) {
    return 1;
  }
  iVar2 = FUN_014f7080(param_1);
  uVar3 = 1;
  if (iVar2 == 0) {
    if (cVar11 != 'M') {
      if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],&DAT_00568d20,4), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_014f5b4c(param_1,0);
LAB_014f6108:
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      pcVar6 = ">";
LAB_014f6128:
      iVar2 = FUN_00faace8(iVar2,pcVar6,1);
joined_r0x014f5da0:
      if (iVar2 != 0) {
        return 1;
      }
    }
LAB_014f6140:
    uVar3 = 0;
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
      return 0;
    }
  }
  return uVar3;
}

