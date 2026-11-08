// FUN_01690f1c @ 01690f1c size=2204 calls_out=8 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01690f1c(uint *param_1,undefined4 param_2,int param_3,byte param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  char ****ppppcVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char ****ppppcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  char ***pppcVar14;
  uint uVar15;
  char ****ppppcVar16;
  char ****ppppcVar17;
  bool bVar18;
  undefined8 uVar19;
  code *local_a0;
  char ****local_98;
  char ****local_94;
  char ****local_90;
  char ****local_8c;
  char ****local_84 [2];
  uint local_7c;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_4c;
  char ****local_44;
  code *local_40;
  byte local_3c;
  char ****local_38;
  undefined4 local_34;
  byte local_2d;
  undefined8 local_2c;
  
  uVar15 = param_1[1];
  local_98 = (char ****)param_1[2];
  uVar12 = param_2;
  if (local_98 == (char ****)0x0) {
    uVar12 = 0;
  }
  if (local_98 == (char ****)0x0 && uVar15 == 0) {
    return uVar12;
  }
  uVar13 = (uint)param_4;
  uVar2 = uVar13;
  if (uVar13 == 2) {
    uVar2 = param_5;
  }
  if (uVar13 == 2 && uVar2 == 0) {
    local_94 = (char ****)param_1[3];
    if ((local_98 == (char ****)0x0) || (pppcVar14 = (char ***)local_98, local_94 == (char ****)0x0)
       ) {
      if (uVar15 != 0) {
        pppcVar14 = (char ***)*param_1;
        goto LAB_01691154;
      }
    }
    else {
LAB_01691154:
      if (*(char *)pppcVar14 == '/') goto LAB_01690f54;
    }
    if (local_98 != (char ****)0x0) {
      local_84[0] = (char ****)&local_98;
      local_84[1] = (char ****)FUN_016924f0;
      iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,local_84);
      if (iVar11 != 0) {
        return 1;
      }
    }
    local_98 = (char ****)*param_1;
    local_84[0] = (char ****)&local_98;
    local_84[1] = (char ****)FUN_016924f0;
    local_94 = (char ****)uVar15;
    uVar12 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,local_84);
  }
  else {
LAB_01690f54:
    local_98 = (char ****)*param_1;
    local_94 = (char ****)param_1[1];
    local_90 = (char ****)param_1[2];
    local_8c = (char ****)param_1[3];
    while( true ) {
      local_40 = (code *)0x0;
      local_44 = (char ****)&local_98;
      FUN_011563f0(local_84,&local_44);
      ppppcVar3 = local_84[1];
      ppppcVar16 = local_90;
      ppppcVar8 = (char ****)(local_7c & 0xff);
      if ((ppppcVar8 == (char ****)0x2) || ((local_7c & 1) != 0)) break;
      if (local_90 == (char ****)0x0) {
        if (local_84[1] < local_84[0]) goto LAB_01691774;
        if (local_84[0] != (char ****)0x0) {
          if (local_84[0] < local_94) {
            if (*(char *)((int)local_98 + (int)local_84[0]) < -0x40) goto LAB_01691774;
          }
          else if (local_84[0] != local_94) goto LAB_01691774;
        }
        ppppcVar8 = local_98;
        if (local_84[1] != (char ****)0x0) {
          if (local_84[1] < local_94) {
            if (*(char *)((int)local_98 + (int)local_84[1]) < -0x40) {
LAB_01691774:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac();
            }
          }
          else if (local_84[1] != local_94) goto LAB_01691774;
        }
LAB_016910b4:
        uVar15 = FUN_01156c50((int)ppppcVar8 + (int)local_84[0],(int)local_84[1] - (int)local_84[0])
        ;
      }
      else {
        if (local_84[1] <= local_8c) {
          if (((local_84[1] < local_84[0]) ||
              (((local_84[0] != (char ****)0x0 && (local_84[0] < local_8c)) &&
               (*(char *)((int)local_90 + (int)local_84[0]) < -0x40)))) ||
             (((ppppcVar8 = local_90, local_84[1] != (char ****)0x0 && (local_84[1] < local_8c)) &&
              (*(char *)((int)local_90 + (int)local_84[1]) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_90,local_8c,local_84[0],local_84[1],&DAT_018adff0);
          }
          goto LAB_016910b4;
        }
        ppppcVar8 = (char ****)((int)local_84[1] - (int)local_8c);
        ppppcVar17 = (char ****)((int)local_84[0] - (int)local_8c);
        if (ppppcVar8 < ppppcVar17) goto LAB_01691788;
        if (local_84[0] != local_8c) {
          if (ppppcVar17 < local_94) {
            if (*(char *)((int)local_98 + (int)ppppcVar17) < -0x40) goto LAB_01691788;
          }
          else if (ppppcVar17 != local_94) goto LAB_01691788;
        }
        if (ppppcVar8 < local_94) {
          if (*(char *)((int)local_98 + (int)ppppcVar8) < -0x40) {
LAB_01691788:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_98,local_94,ppppcVar17,ppppcVar8,&DAT_018adfe0);
          }
        }
        else if (ppppcVar8 != local_94) goto LAB_01691788;
        uVar15 = FUN_01156c50((int)local_98 + (int)ppppcVar17,(int)ppppcVar8 - (int)ppppcVar17);
      }
      ppppcVar8 = (char ****)(uVar15 & 0xff);
      if ((char ****)0x1 < ppppcVar8) break;
      ppppcVar8 = local_94;
      if (ppppcVar16 != (char ****)0x0) {
        ppppcVar8 = (char ****)((int)local_94 + (int)local_8c);
      }
      if ((char ****)((int)ppppcVar3 + 1U) < ppppcVar8) {
        ppppcVar8 = (char ****)((int)ppppcVar3 + 1U);
      }
      FUN_01156e04(&local_98,ppppcVar8);
    }
    if (ppppcVar16 == (char ****)0x0) {
      ppppcVar8 = local_94;
    }
    if (ppppcVar16 != (char ****)0x0 || ppppcVar8 != (char ****)0x0) {
      bVar18 = true;
      bVar1 = 2;
LAB_0169122c:
      if (ppppcVar16 != (char ****)0x0) {
        if (bVar18) goto LAB_01691254;
        goto LAB_016915a4;
      }
      if ((bool)(local_94 != (char ****)0x0 & bVar18)) {
LAB_01691254:
        local_40 = (code *)0x0;
        ppppcVar8 = (char ****)0x0;
        local_44 = (char ****)&local_98;
        while( true ) {
          FUN_011563f0(local_84,&local_44);
          ppppcVar16 = local_84[1];
          if ((char)local_7c == '\x02') break;
          FUN_016917f4(local_84[0],local_84[1],&local_98);
          bVar6 = FUN_01156c50();
          if (1 < bVar6) break;
          ppppcVar8 = ppppcVar16;
        }
        FUN_01156e04(&local_98,ppppcVar8);
        ppppcVar8 = local_90;
        if (local_90 == (char ****)0x0) {
          ppppcVar8 = local_94;
        }
        if (local_90 != (char ****)0x0 || ppppcVar8 != (char ****)0x0) {
          uVar15 = 0;
          local_4c = 0;
          local_54 = 0;
          local_5c = 0;
          local_64 = 0;
          local_6c = 0;
          local_74 = 0;
          local_7c = 0;
          local_84[0] = (char ****)0x0;
          local_2c._4_4_ = 0;
          local_a0 = (code *)0x0;
          bVar6 = 0;
          local_2c._0_4_ = (char ****)&local_98;
          do {
            while( true ) {
              FUN_011563f0(&local_44,&local_2c);
              bVar5 = local_3c;
              pcVar4 = local_40;
              ppppcVar8 = local_44;
              if (local_3c == 2) {
                iVar11 = 0;
                do {
                  do {
                    iVar10 = iVar11;
                    if (iVar10 == 0x40) {
                      FUN_01156e04(&local_98,local_a0);
                      ppppcVar16 = local_90;
                      goto LAB_0169122c;
                    }
                    ppppcVar8 = *(char *****)((int)local_84 + iVar10);
                    iVar11 = iVar10 + 8;
                  } while (ppppcVar8 == (char ****)0x0);
                  iVar10 = *(int *)((int)local_84 + iVar10 + 4U);
                  if (bVar1 == 2) {
                    bVar1 = 0;
                    if ((bVar6 & 1) != 0) {
                      iVar9 = (**(code **)(param_3 + 0x10))(param_2,0x2f);
                      if (iVar9 != 0) {
                        return 1;
                      }
                      bVar1 = iVar10 == 0;
                    }
                  }
                  else {
                    if ((param_5 == 0) && ((bVar1 & 1) != 0)) {
                      iVar9 = (**(code **)(param_3 + 0xc))(param_2,&DAT_00414952,2);
                      bVar1 = 0;
                      if (iVar9 != 0) {
                        return 1;
                      }
                    }
                    iVar9 = (**(code **)(param_3 + 0x10))(param_2,0x2f);
                    if (iVar9 != 0) {
                      return 1;
                    }
                  }
                  if (param_4 == 0) {
                    iVar10 = (**(code **)(param_3 + 0xc))(param_2,ppppcVar8,iVar10);
                    if (iVar10 != 0) {
                      return 1;
                    }
                  }
                  else {
                    local_40 = FUN_016924f0;
                    local_44 = (char ****)&local_2c;
                    local_2c._0_4_ = ppppcVar8;
                    local_2c._4_4_ = iVar10;
                    iVar10 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_44);
                    if (iVar10 != 0) {
                      return 1;
                    }
                  }
                } while( true );
              }
              FUN_016917f4(local_44,local_40,&local_98);
              cVar7 = FUN_01156c50();
              if (cVar7 != '\0') break;
LAB_01691318:
              bVar18 = true;
            }
            if (cVar7 == '\x01') {
              bVar18 = uVar15 == 0;
              uVar15 = uVar15 - 1;
              if (bVar18) {
                uVar15 = 0;
              }
              if (uVar15 < 8) {
                local_84[uVar15 * 2] = (char ****)0x0;
              }
              goto LAB_01691318;
            }
            if (uVar15 < 8) {
              uVar19 = FUN_016917f4(ppppcVar8,pcVar4,&local_98);
              local_84[uVar15 * 2] = (char ****)uVar19;
              *(int *)((int)local_84 + uVar15 * 8 + 4) = (int)((ulonglong)uVar19 >> 0x20);
              bVar18 = false;
              if (uVar15 == 0) {
                bVar6 = bVar5;
              }
              local_a0 = pcVar4;
            }
            uVar15 = uVar15 + 1;
          } while( true );
        }
        if ((param_5 == 0) && ((bVar1 & 1) != 0)) {
          iVar11 = (**(code **)(param_3 + 0xc))(param_2,&DAT_00414954,3);
        }
        else {
          iVar11 = (**(code **)(param_3 + 0x10))(param_2,0x2f);
        }
        if (iVar11 != 0) {
          return 1;
        }
      }
      ppppcVar8 = local_90;
      if (local_90 == (char ****)0x0) {
        ppppcVar8 = local_94;
      }
      if (local_90 == (char ****)0x0 && ppppcVar8 == (char ****)0x0) {
        return 0;
      }
      if (!bVar18) {
LAB_016915a4:
        local_34 = 0;
        local_38 = (char ****)&local_98;
        while( true ) {
          FUN_011563f0(local_84,&local_38);
          uVar15 = local_7c;
          ppppcVar16 = local_84[1];
          ppppcVar8 = local_84[0];
          if ((char)local_7c == '\x02') {
            return 0;
          }
          FUN_016917f4(local_84[0],local_84[1],&local_98);
          local_2d = FUN_01156c50();
          if (local_2d != 2) break;
          uVar19 = FUN_016917f4(ppppcVar8,ppppcVar16,&local_98);
          iVar11 = (int)((ulonglong)uVar19 >> 0x20);
          if (bVar1 == 2) {
            bVar1 = 0;
            if ((uVar15 & 1) != 0) {
              iVar10 = (**(code **)(param_3 + 0x10))(param_2,0x2f);
              if (iVar10 != 0) {
                return 1;
              }
              bVar1 = iVar11 == 0;
            }
          }
          else {
            if ((param_5 == 0) && ((bVar1 & 1) != 0)) {
              iVar10 = (**(code **)(param_3 + 0xc))(param_2,&DAT_00414952,2);
              bVar1 = 0;
              if (iVar10 != 0) {
                return 1;
              }
            }
            iVar10 = (**(code **)(param_3 + 0x10))(param_2,0x2f);
            if (iVar10 != 0) {
              return 1;
            }
          }
          if (param_4 == 0) {
            iVar11 = (**(code **)(param_3 + 0xc))(param_2,(int)uVar19,iVar11);
          }
          else {
            local_40 = FUN_016924f0;
            local_44 = (char ****)&local_2c;
            local_2c = uVar19;
            iVar11 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_44);
          }
          if (iVar11 != 0) {
            return 1;
          }
        }
        FUN_01157724(&local_2d);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0041499b,99,&DAT_018ae020);
    }
    if (param_5 == 0) {
      return 0;
    }
    uVar12 = (**(code **)(param_3 + 0x10))(param_2,0x2f);
  }
  return uVar12;
}

