// FUN_01007358 @ 01007358 size=964 calls_out=6 calls_in=2
// strings: 

void FUN_01007358(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  undefined1 *puVar17;
  int local_30;
  undefined1 *local_2c;
  uint local_28;
  
  iVar2 = param_2[1];
  uVar13 = 10;
  uVar3 = param_2[4];
  uVar4 = param_2[6];
  iVar5 = param_2[7];
  uVar9 = *(undefined1 *)((int)param_2 + 0x21);
  iVar1 = param_2[8];
  iVar11 = *param_2;
  uVar15 = param_2[2];
  puVar12 = (undefined1 *)param_2[3];
  puVar17 = (undefined1 *)param_2[5];
  puVar6 = (undefined1 *)FUN_016d38c8(10,1);
  if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,10);
  }
  bVar16 = 0;
  local_28 = 10;
  local_30 = 10;
  local_2c = puVar6;
  if (iVar11 != -0x80000000) {
    FUN_01007854(&local_30,10,2);
    iVar14 = local_28 + 2;
    *(short *)(local_2c + local_28) = (short)uVar15;
    local_28 = iVar14;
    if ((uint)(local_30 - iVar14) < uVar15) {
      FUN_01007854(&local_30,iVar14,uVar15);
    }
    uVar13 = local_28;
    puVar6 = local_2c;
    FUN_016dd1aa(local_2c + local_28,iVar2);
    uVar13 = uVar13 + uVar15;
    bVar16 = 4;
    local_28 = uVar13;
    if (iVar11 != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  if (puVar12 != (undefined1 *)0x0) {
    bVar16 = bVar16 | 8;
    if (local_30 - uVar13 < uVar3) {
      FUN_01007854(&local_30,uVar13);
      puVar6 = local_2c;
    }
    else {
      local_28 = uVar13;
      if (uVar3 == 0) {
        *puVar12 = 0;
        goto joined_r0x010074c0;
      }
    }
    uVar13 = 0;
    do {
      puVar6[uVar13 + local_28] = puVar12[uVar13];
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
    uVar13 = local_28 + uVar13;
    local_28 = uVar13;
    thunk_FUN_016d3fb4(puVar12);
  }
joined_r0x010074c0:
  if (puVar17 != (undefined1 *)0x0) {
    bVar16 = bVar16 | 0x10;
    if (local_30 - uVar13 < uVar4) {
      FUN_01007854(&local_30,uVar13);
    }
    else {
      local_28 = uVar13;
      if (uVar4 == 0) {
        *puVar17 = 0;
        goto LAB_01007548;
      }
    }
    uVar13 = 0;
    do {
      local_2c[uVar13 + local_28] = puVar17[uVar13];
      uVar13 = uVar13 + 1;
    } while (uVar4 != uVar13);
    uVar13 = local_28 + uVar13;
    local_28 = uVar13;
    thunk_FUN_016d3fb4(puVar17);
  }
LAB_01007548:
  if (uVar13 == 0) {
    uVar7 = 0;
    puVar10 = &DAT_01881f44;
  }
  else {
    *local_2c = 0x1f;
    if (uVar13 == 1) {
      uVar7 = 1;
      puVar10 = &DAT_01881f54;
    }
    else {
      local_2c[1] = 0x8b;
      if (uVar13 < 3) {
        uVar7 = 2;
        puVar10 = &DAT_01881f64;
      }
      else {
        local_2c[2] = 8;
        if (uVar13 == 3) {
          uVar7 = 3;
          puVar10 = &DAT_01881f74;
        }
        else {
          local_2c[3] = bVar16;
          if (uVar13 < 5) {
            uVar7 = 4;
            puVar10 = &DAT_01881f84;
          }
          else {
            local_2c[4] = (char)iVar5;
            if (uVar13 == 5) {
              uVar7 = 5;
              puVar10 = &DAT_01881f94;
            }
            else {
              local_2c[5] = (char)((uint)iVar5 >> 8);
              if (uVar13 < 7) {
                uVar7 = 6;
                puVar10 = &DAT_01881fa4;
              }
              else {
                local_2c[6] = (char)((uint)iVar5 >> 0x10);
                if (uVar13 == 7) {
                  uVar7 = 7;
                  puVar10 = &DAT_01881fb4;
                }
                else {
                  local_2c[7] = (char)((uint)iVar5 >> 0x18);
                  if (uVar13 < 9) {
                    uVar7 = 8;
                    puVar10 = &DAT_01881fc4;
                  }
                  else {
                    uVar8 = 0;
                    if (8 < param_3) {
                      uVar8 = 2;
                    }
                    local_2c[8] = uVar8;
                    if (uVar13 != 9) {
                      *param_1 = local_30;
                      param_1[1] = (int)local_2c;
                      param_1[2] = local_28;
                      if ((char)iVar1 == '\0') {
                        uVar9 = 0xff;
                      }
                      local_2c[9] = uVar9;
                      return;
                    }
                    uVar7 = 9;
                    puVar10 = &DAT_01881fd4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar7,uVar7,puVar10);
}

