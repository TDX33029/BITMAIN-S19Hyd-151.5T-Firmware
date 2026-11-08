// FUN_014f925c @ 014f925c size=908 calls_out=5 calls_in=1
// strings: 

undefined1 * FUN_014f925c(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  char *local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_47;
  byte local_45;
  byte *local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  code *local_34;
  byte **local_30;
  undefined1 *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  
  uVar4 = param_1[4];
  if ((uint)param_1[1] < uVar4) {
    return (undefined1 *)0x110001;
  }
  pbVar5 = (byte *)*param_1;
  uVar9 = param_1[1] - uVar4;
  pbVar8 = pbVar5 + uVar4;
  *param_1 = pbVar8;
  param_1[1] = uVar9;
  if (uVar4 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a7078);
  }
  uVar6 = (uint)*pbVar5;
  uVar4 = uVar6 - 0x30;
  if (0x39 < uVar6) {
    uVar4 = (uVar6 - 0x41 & 0xffffffdf) + 10;
  }
  if (uVar4 < 0x10) {
    uVar7 = (uint)pbVar5[1];
    uVar6 = uVar7 - 0x30;
    if (0x39 < uVar7) {
      uVar6 = (uVar7 - 0x41 & 0xffffffdf) + 10;
    }
    if (uVar6 < 0x10) {
      uVar6 = uVar6 | uVar4 << 4;
      local_48 = (char)uVar6;
      if (-1 < local_48) {
        local_4c = 1;
        local_45 = 0;
        local_47 = 0;
        goto LAB_014f930c;
      }
      if (uVar6 < 0xc0) {
        return &DAT_00110000;
      }
      local_4c = 2;
      bVar2 = false;
      if (0xdf < uVar6) {
        if (uVar6 < 0xf0) {
          local_4c = 3;
          bVar2 = true;
        }
        else {
          local_4c = 4;
          if (0xf7 < uVar6) {
            return &DAT_00110000;
          }
        }
      }
      local_50 = &local_48;
      local_45 = 0;
      local_47 = 0;
      if (uVar9 < 2) {
        return &DAT_00110000;
      }
      uVar4 = (uint)*pbVar8;
      uVar7 = uVar4 - 0x30;
      if (0x39 < uVar4) {
        uVar7 = (uVar4 - 0x41 & 0xffffffdf) + 10;
      }
      *param_1 = pbVar8 + 2;
      param_1[1] = uVar9 - 2;
      if (uVar7 < 0x10) {
        uVar4 = (uint)pbVar8[1];
        uVar10 = uVar4 - 0x30;
        if (0x39 < uVar4) {
          uVar10 = (uVar4 - 0x41 & 0xffffffdf) + 10;
        }
        if (uVar10 < 0x10) {
          bVar1 = (byte)uVar10 | (byte)(uVar7 << 4);
          local_47 = (ushort)bVar1;
          if (uVar6 < 0xe0) goto LAB_014f930c;
          if (uVar9 - 2 < 2) {
            return &DAT_00110000;
          }
          uVar6 = (uint)pbVar8[2];
          uVar4 = uVar6 - 0x30;
          if (0x39 < uVar6) {
            uVar4 = (uVar6 - 0x41 & 0xffffffdf) + 10;
          }
          *param_1 = pbVar8 + 4;
          param_1[1] = uVar9 - 4;
          if (uVar4 < 0x10) {
            uVar7 = (uint)pbVar8[3];
            uVar6 = uVar7 - 0x30;
            if (0x39 < uVar7) {
              uVar6 = (uVar7 - 0x41 & 0xffffffdf) + 10;
            }
            if (uVar6 < 0x10) {
              local_47 = CONCAT11((byte)uVar6 | (byte)(uVar4 << 4),bVar1);
              if (bVar2) {
LAB_014f930c:
                local_50 = &local_48;
                FUN_00fab1e0(&local_38,local_50);
                if (local_38 == (undefined1 *)0x1) {
                  return &DAT_00110000;
                }
                local_40 = (int)local_30;
                local_44 = (byte *)local_34;
                if (local_30 != (byte **)0x0) {
                  pbVar5 = (byte *)(local_34 + 1);
                  puVar3 = (undefined1 *)(uint)(byte)*local_34;
                  if (0x7fffffff < (uint)(int)(char)*local_34) {
                    if (puVar3 < (undefined1 *)0xe0) {
                      puVar3 = (undefined1 *)((byte)local_34[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6)
                      ;
                      pbVar5 = (byte *)(local_34 + 2);
                    }
                    else {
                      uVar4 = (byte)local_34[2] & 0x3f | ((byte)local_34[1] & 0x3f) << 6;
                      if (puVar3 < (undefined1 *)0xf0) {
                        puVar3 = (undefined1 *)(uVar4 | ((uint)puVar3 & 0x1f) << 0xc);
                        pbVar5 = (byte *)(local_34 + 3);
                      }
                      else {
                        puVar3 = (undefined1 *)
                                 ((byte)local_34[3] & 0x3f | uVar4 << 6 | ((uint)puVar3 & 7) << 0x12
                                 );
                        pbVar5 = (byte *)(local_34 + 4);
                      }
                    }
                  }
                  if (((code *)pbVar5 == local_34 + (int)local_30) && (puVar3 != &DAT_00110000)) {
                    return puVar3;
                  }
                }
                local_3c = FUN_014f98ec(local_34);
                local_28 = &local_3c;
                local_30 = &local_44;
                local_24 = &LAB_00fac484;
                local_2c = &LAB_0157a210;
                local_34 = FUN_010a70dc;
                local_38 = (undefined1 *)&local_50;
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_00588ed7,&local_38,&DAT_018a7098);
              }
              if (uVar9 - 4 < 2) {
                return &DAT_00110000;
              }
              uVar6 = (uint)pbVar8[4];
              *param_1 = pbVar8 + 6;
              param_1[1] = uVar9 - 6;
              uVar4 = uVar6 - 0x30;
              if (0x39 < uVar6) {
                uVar4 = (uVar6 - 0x41 & 0xffffffdf) + 10;
              }
              if (uVar4 < 0x10) {
                uVar6 = (uint)pbVar8[5];
                uVar9 = uVar6 - 0x30;
                if (0x39 < uVar6) {
                  uVar9 = (uVar6 - 0x41 & 0xffffffdf) + 10;
                }
                if (uVar9 < 0x10) {
                  local_45 = (byte)uVar9 | (byte)(uVar4 << 4);
                  goto LAB_014f930c;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_018a7088);
}

