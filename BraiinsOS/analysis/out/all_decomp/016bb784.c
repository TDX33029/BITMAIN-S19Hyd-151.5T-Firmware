// FUN_016bb784 @ 016bb784 size=1660 calls_out=2 calls_in=2
// strings: 

bool FUN_016bb784(ushort *param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  uint uVar15;
  ushort local_3c [4];
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  ushort *local_2c;
  code *local_28;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  local_3c[2] = uVar1 << 8 | uVar1 >> 8;
  uVar3 = param_1[7];
  local_3c[1] = uVar2 << 8 | uVar2 >> 8;
  uVar4 = param_1[6];
  local_2e = uVar3 << 8 | uVar3 >> 8;
  uVar5 = param_1[5];
  local_30 = uVar4 << 8 | uVar4 >> 8;
  uVar6 = param_1[4];
  local_32 = uVar5 << 8 | uVar5 >> 8;
  uVar7 = param_1[3];
  local_34 = uVar6 << 8 | uVar6 >> 8;
  uVar8 = *param_1;
  local_3c[3] = uVar7 << 8 | uVar7 >> 8;
  local_3c[0] = uVar8 << 8 | uVar8 >> 8;
  if (uVar8 == 0) {
    if (uVar2 == 0) {
      uVar13 = 0;
      goto joined_r0x016bb878;
    }
    uVar13 = 0xffffffff;
    if (uVar1 == 0) {
      uVar13 = 2;
    }
    uVar15 = 0;
    iVar11 = 1;
    if (uVar7 == 0) goto LAB_016bb860;
LAB_016bb894:
    uVar10 = 0xffffffff;
    uVar9 = uVar15;
    iVar12 = iVar11;
    if ((-1 < (int)uVar13) && (iVar12 = 3 - uVar13, uVar9 = uVar13, iVar12 <= iVar11)) {
      uVar9 = uVar15;
    }
joined_r0x016bb8d0:
    uVar13 = uVar9;
    if (uVar6 == 0) goto LAB_016bb8b4;
LAB_016bb8d4:
    uVar15 = 0xffffffff;
    if ((-1 < (int)uVar10) && (iVar12 < (int)(4 - uVar10))) {
      iVar12 = 4 - uVar10;
      uVar13 = uVar10;
    }
  }
  else {
    uVar13 = 0xffffffff;
    if (uVar2 == 0) {
      uVar13 = 1;
    }
joined_r0x016bb878:
    if (uVar1 == 0) {
      iVar11 = -1;
      if ((int)uVar13 < 0) {
        uVar13 = 2;
      }
      uVar15 = 0xffffffff;
      if (uVar7 != 0) goto LAB_016bb894;
LAB_016bb860:
      uVar10 = uVar13;
      uVar9 = uVar15;
      iVar12 = iVar11;
      if ((int)uVar13 < 0) {
        uVar10 = 3;
      }
      goto joined_r0x016bb8d0;
    }
    iVar12 = -1;
    if (uVar13 < 0x80000000) {
      iVar12 = 2 - uVar13;
    }
    uVar10 = 0xffffffff;
    if (uVar7 == 0) {
      uVar10 = 3;
    }
    if (uVar6 != 0) goto LAB_016bb8d4;
LAB_016bb8b4:
    if ((int)uVar10 < 0) {
      uVar10 = 4;
    }
    uVar15 = uVar10;
  }
  if (uVar5 == 0) {
    uVar10 = uVar15;
    if ((int)uVar15 < 0) {
      uVar10 = 5;
    }
    if (uVar4 == 0) goto LAB_016bb974;
LAB_016bb91c:
    if ((-1 < (int)uVar10) && (iVar12 < (int)(6 - uVar10))) {
      iVar12 = 6 - uVar10;
      uVar13 = uVar10;
    }
    uVar10 = 0xffffffff;
    uVar15 = 0xffffffff;
    if (uVar3 != 0) goto LAB_016bb940;
LAB_016bb988:
    if ((int)uVar10 < 0) {
      uVar10 = 7;
    }
  }
  else {
    uVar10 = 0xffffffff;
    if ((-1 < (int)uVar15) && (iVar12 < (int)(5 - uVar15))) {
      iVar12 = 5 - uVar15;
      uVar13 = uVar15;
    }
    if (uVar4 != 0) goto LAB_016bb91c;
LAB_016bb974:
    if ((int)uVar10 < 0) {
      uVar10 = 6;
    }
    uVar15 = uVar10;
    if (uVar3 == 0) goto LAB_016bb988;
LAB_016bb940:
    uVar10 = 0xffffffff;
    if ((-1 < (int)uVar15) && (iVar12 < (int)(7 - uVar15))) {
      iVar12 = 7 - uVar15;
      uVar13 = uVar15;
    }
  }
  iVar11 = 8 - uVar10;
  if (iVar12 < iVar11) {
    uVar15 = uVar10;
  }
  else {
    uVar15 = uVar13;
    iVar11 = iVar12;
  }
  if (0x7fffffff < uVar10) {
    iVar11 = iVar12;
    uVar15 = uVar13;
  }
  uVar13 = uVar15 + iVar11;
  if (iVar11 < 2) {
    uVar15 = 0xffffffff;
    uVar13 = 0xfffffffe;
  }
  if ((int)uVar13 < 8) {
    uVar10 = 0;
    if (uVar15 != 0) goto LAB_016bba48;
    do {
      pcVar14 = *(code **)(param_3 + 0xc);
      iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
      if (iVar11 != 0) {
        return true;
      }
      if ((uVar15 == 0) && (iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1), iVar11 != 0)) {
        return true;
      }
      uVar10 = uVar13;
      if (7 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar13,8,&DAT_018af090);
      }
LAB_016bba48:
      do {
        local_2c = local_3c + uVar10;
        local_28 = FUN_00facd10;
        iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
        if (iVar11 != 0) {
          return true;
        }
        if (uVar10 == 7) {
          return false;
        }
        iVar11 = (**(code **)(param_3 + 0xc))(param_2,&DAT_00418eb8,1);
        if (iVar11 != 0) {
          return true;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar15);
    } while( true );
  }
  if (uVar15 == 0) {
    pcVar14 = *(code **)(param_3 + 0xc);
    iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
    if (iVar11 != 0) {
      return true;
    }
    iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
LAB_016bbb88:
    return iVar11 != 0;
  }
  local_2c = local_3c;
  local_28 = FUN_00facd10;
  iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
  if (iVar11 == 0) {
    pcVar14 = *(code **)(param_3 + 0xc);
    iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
    if (iVar11 == 0) {
      if (uVar15 != 1) {
        local_2c = local_3c + 1;
        local_28 = FUN_00facd10;
        iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
        if (iVar11 != 0) {
          return true;
        }
        iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
        if (iVar11 != 0) {
          return true;
        }
        if (uVar15 != 2) {
          local_2c = local_3c + 2;
          local_28 = FUN_00facd10;
          iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
          if (iVar11 != 0) {
            return true;
          }
          iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
          if (iVar11 != 0) {
            return true;
          }
          if (uVar15 != 3) {
            local_2c = local_3c + 3;
            local_28 = FUN_00facd10;
            iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
            if (iVar11 != 0) {
              return true;
            }
            iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
            if (iVar11 != 0) {
              return true;
            }
            if (uVar15 != 4) {
              local_2c = &local_34;
              local_28 = FUN_00facd10;
              iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
              if (iVar11 != 0) {
                return true;
              }
              iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
              if (iVar11 != 0) {
                return true;
              }
              if (uVar15 != 5) {
                local_2c = &local_32;
                local_28 = FUN_00facd10;
                iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
                if (iVar11 != 0) {
                  return true;
                }
                iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
                if (iVar11 != 0) {
                  return true;
                }
                if (uVar15 != 6) {
                  local_2c = &local_30;
                  local_28 = FUN_00facd10;
                  iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
                  if (iVar11 != 0) {
                    return true;
                  }
                  iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
                  if (iVar11 != 0) {
                    return true;
                  }
                  if (uVar15 != 7) {
                    local_2c = &local_2e;
                    local_28 = FUN_00facd10;
                    iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_2c);
                    if (iVar11 == 0) {
                      return false;
                    }
                    return true;
                  }
                }
              }
            }
          }
        }
      }
      iVar11 = (*pcVar14)(param_2,&DAT_00418eb8,1);
      goto LAB_016bbb88;
    }
  }
  return true;
}

