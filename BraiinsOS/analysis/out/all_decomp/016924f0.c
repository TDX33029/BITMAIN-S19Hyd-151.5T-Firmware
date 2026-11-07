// FUN_016924f0 @ 016924f0 size=2024 calls_out=4 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_016924f0(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined1 *puVar13;
  int iVar14;
  byte *******pppppppbVar15;
  code *pcVar16;
  byte *******pppppppbVar17;
  undefined4 uVar18;
  int iVar19;
  bool bVar20;
  byte local_39;
  undefined1 local_38;
  undefined1 local_37 [2];
  undefined1 local_35;
  undefined4 *******local_34;
  code *local_30;
  code *local_2c;
  byte *******local_28;
  
  if ((code *)param_1[1] == (code *)0x0) {
    return 0;
  }
  pcVar16 = (code *)*param_1;
  uVar18 = *param_2;
  iVar19 = param_2[1];
  pcVar12 = (code *)param_1[1];
LAB_01692528:
  do {
    pcVar10 = (code *)0x0;
    while (pcVar16[(int)pcVar10] != (code)0x25) {
      pcVar10 = pcVar10 + 1;
      if (pcVar12 == pcVar10) {
        uVar18 = (**(code **)(iVar19 + 0xc))(uVar18,pcVar16,pcVar12);
        return uVar18;
      }
    }
    pcVar8 = pcVar10;
    if (pcVar10 == (code *)0x0) {
LAB_0169256c:
      pcVar8 = pcVar8 + 1;
      if (pcVar8 < pcVar12) {
        if ((char)pcVar16[(int)pcVar8] < -0x40) goto LAB_01692cb0;
        pcVar6 = pcVar8;
      }
      else {
        pcVar6 = pcVar12;
        if (pcVar8 != pcVar12) {
LAB_01692cb0:
          puVar4 = &DAT_01888dcc;
          goto LAB_01692c9c;
        }
      }
    }
    else {
      if (pcVar10 < pcVar12) {
        if ((char)pcVar16[(int)pcVar10] < -0x40) goto LAB_01692cbc;
        goto LAB_0169256c;
      }
      if (pcVar10 != pcVar12) {
LAB_01692cbc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pcVar16,pcVar12,0,pcVar10,&DAT_01888dbc);
      }
      pcVar6 = (code *)0x0;
      pcVar8 = pcVar12;
      if (pcVar12 != (code *)0xffffffff) goto LAB_0169256c;
    }
    iVar2 = (**(code **)(iVar19 + 0xc))(uVar18,pcVar16,pcVar10);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_01157178(&local_34,pcVar16 + (int)pcVar6,(int)pcVar12 - (int)pcVar6);
    pcVar10 = local_2c;
    pcVar16 = local_30;
    uVar5 = (uint)local_34 & 0xff;
    local_39 = (byte)local_34;
    if ((char)(byte)local_34 < '\0') {
      puVar9 = (undefined1 *)0x2;
      pppppppbVar17 = (byte *******)(local_37 + 1);
      if (uVar5 - 0xc2 < 0x1e) {
LAB_0169267c:
        local_35 = 0;
        local_37 = (undefined1  [2])0x0;
        local_38 = (byte)local_34;
        iVar2 = 1;
        pcVar8 = local_30;
        pcVar12 = local_2c;
LAB_016926a8:
        puVar13 = (undefined1 *)(iVar2 + -1);
        if (pcVar12 == (code *)0x0) {
LAB_01692ae0:
          if (puVar9 <= puVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,puVar13,puVar9,&DAT_018ae058);
          }
          local_28 = (byte *******)&local_38;
          local_30 = FUN_01692460;
          local_34 = &local_28;
          iVar14 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
          if (iVar14 != 0) {
            return 1;
          }
          if (puVar13 == (undefined1 *)0x0) {
            return 0;
          }
          local_28 = (byte *******)local_37;
          local_30 = FUN_01692460;
          local_34 = &local_28;
          iVar14 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
          if (iVar14 != 0) {
            return 1;
          }
          if (iVar2 == 2) {
            return 0;
          }
          local_28 = (byte *******)(local_37 + 1);
          local_30 = FUN_01692460;
          local_34 = &local_28;
          iVar14 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
          if (iVar14 != 0) {
            return 1;
          }
          if (iVar2 == 3) {
            return 0;
          }
          local_28 = (byte *******)&local_35;
          local_30 = FUN_01692460;
          local_34 = &local_28;
          iVar14 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
          if (iVar14 != 0) {
            return 1;
          }
          if (iVar2 == 4) {
            return 0;
          }
          local_28 = (byte *******)&local_34;
          local_30 = FUN_01692460;
          local_34 = &local_28;
          FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
          return 1;
        }
        pcVar6 = pcVar8 + 1;
        puVar11 = (undefined1 *)(uint)(byte)*pcVar8;
        if (0x7fffffff < (uint)(int)(char)*pcVar8) {
          if (puVar11 < (undefined1 *)0xe0) {
            puVar11 = (undefined1 *)((byte)pcVar8[1] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
            pcVar6 = pcVar8 + 2;
          }
          else {
            uVar5 = (byte)pcVar8[2] & 0x3f | ((byte)pcVar8[1] & 0x3f) << 6;
            if (puVar11 < &DAT_000000f0) {
              puVar11 = (undefined1 *)(uVar5 | ((uint)puVar11 & 0x1f) << 0xc);
              pcVar6 = pcVar8 + 3;
            }
            else {
              puVar11 = (undefined1 *)
                        ((byte)pcVar8[3] & 0x3f | uVar5 << 6 | ((uint)puVar11 & 7) << 0x12);
              pcVar6 = pcVar8 + 4;
            }
          }
        }
        if (puVar11 != (undefined1 *)0x25) {
          if (puVar11 == &DAT_00110000) goto LAB_01692ae0;
          if (puVar9 <= puVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,puVar13,puVar9,&DAT_018ae078);
          }
          iVar14 = 0;
          while (iVar2 != iVar14) {
            local_28 = (byte *******)(&local_38 + iVar14);
            local_30 = FUN_01692460;
            local_34 = &local_28;
            iVar3 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
            iVar14 = iVar14 + 1;
            if (iVar3 != 0) {
              return 1;
            }
          }
          iVar2 = (**(code **)(iVar19 + 0x10))(uVar18,puVar11);
          pcVar16 = pcVar6;
          pcVar12 = pcVar8 + ((int)pcVar12 - (int)pcVar6);
          goto joined_r0x01692914;
        }
        FUN_01157178(&local_34);
        pcVar1 = local_2c;
        pcVar6 = local_30;
        if ((char)(byte)local_34 < -0x40) break;
        if (puVar9 <= puVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,puVar13,puVar9,&DAT_018ae068);
        }
        iVar14 = 0;
        while (pcVar16 = pcVar8, iVar2 != iVar14) {
          local_28 = (byte *******)(&local_38 + iVar14);
          local_30 = FUN_01692460;
          local_34 = &local_28;
          iVar3 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
          iVar14 = iVar14 + 1;
          if (iVar3 != 0) {
            return 1;
          }
        }
        goto LAB_01692a80;
      }
      puVar9 = (undefined1 *)0x3;
      pppppppbVar17 = (byte *******)&local_35;
      if (((uint)local_34 & 0xf0) == 0xe0) goto LAB_0169267c;
      puVar9 = (undefined1 *)0x4;
      pppppppbVar17 = (byte *******)&local_34;
      if (uVar5 - 0xf0 < 5) goto LAB_0169267c;
      local_34 = (undefined4 *******)&local_39;
      local_30 = FUN_00facbd0;
      iVar2 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
      if (iVar2 != 0) {
        return 1;
      }
    }
    else {
      if (((&DAT_004149d6)[uVar5] & 2) == 0) {
        local_34 = (undefined4 *******)&local_39;
        local_30 = FUN_00facbd0;
        iVar2 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
      }
      else {
        iVar2 = (**(code **)(iVar19 + 0x10))(uVar18);
      }
      if (iVar2 != 0) {
        return 1;
      }
    }
    pcVar12 = pcVar10;
    if (pcVar10 == (code *)0x0) {
      return 0;
    }
  } while( true );
  (&local_38)[iVar2] = (byte)local_34;
  pppppppbVar15 = (byte *******)(local_37 + iVar2);
  iVar2 = iVar2 + 1;
  pcVar8 = pcVar6;
  pcVar12 = pcVar1;
  if (pppppppbVar15 == pppppppbVar17) goto LAB_0169287c;
  goto LAB_016926a8;
LAB_0169287c:
  uVar5 = (uint)local_38;
  if (puVar9 == (undefined1 *)0x2) {
    uVar5 = (uVar5 & 0x1f) << 6;
    pppppppbVar15 = (byte *******)local_37;
  }
  else if (puVar9 == (undefined1 *)0x3) {
    uVar5 = (local_37[0] & 0x3f) << 6 | (uVar5 & 0xf) << 0xc;
    pppppppbVar15 = (byte *******)(local_37 + 1);
  }
  else {
    uVar5 = (local_37[0] & 0x3f) << 0xc | (uVar5 & 7) << 0x12 | (local_37[1] & 0x3f) << 6;
    pppppppbVar15 = (byte *******)&local_35;
  }
  puVar7 = (undefined1 *)(uVar5 | *(byte *)pppppppbVar15 & 0x3f);
  puVar11 = *(undefined1 **)
             ("assertion failed: head.len() + tail.len() <= 8PrefixLenErrorDotDotDotNormal" +
             (int)puVar9 * 4 + 0x45);
  bVar20 = puVar11 <= puVar7;
  puVar13 = puVar9;
  if (bVar20) {
    puVar11 = (undefined1 *)((uVar5 ^ 0xd800) - 0x110000);
    puVar13 = (undefined1 *)0xffef0800;
  }
  if ((!(bVar20 && puVar13 <= puVar11)) || (puVar7 == &DAT_00110000)) {
    pcVar8 = (code *)((int)puVar9 * 3 + -3);
    if (pcVar8 < pcVar10) {
      if ((char)pcVar16[(int)pcVar8] < -0x40) goto LAB_01692c94;
      pcVar12 = pcVar10 + -(int)pcVar8;
    }
    else {
      pcVar12 = (code *)0x0;
      if (pcVar10 != pcVar8) {
LAB_01692c94:
        puVar4 = &DAT_018ae048;
        pcVar12 = pcVar10;
LAB_01692c9c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pcVar16,pcVar12,pcVar8,pcVar12,puVar4);
      }
    }
    pcVar16 = pcVar16 + (int)pcVar8;
    pppppppbVar15 = (byte *******)&local_38;
    while (pppppppbVar15 != pppppppbVar17) {
      local_30 = FUN_01692460;
      local_34 = &local_28;
      local_28 = pppppppbVar15;
      iVar2 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
      pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 1);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  else {
    pcVar16 = pcVar6;
    if ((uVar5 < 0x80) && (((&DAT_004149d6)[(int)puVar7] & 2) != 0)) {
      iVar2 = (**(code **)(iVar19 + 0x10))(uVar18);
joined_r0x01692914:
      if (iVar2 != 0) {
        return 1;
      }
    }
    else {
      pppppppbVar15 = (byte *******)&local_38;
      while (pppppppbVar15 != pppppppbVar17) {
        local_30 = FUN_01692460;
        local_34 = &local_28;
        local_28 = pppppppbVar15;
        iVar2 = FUN_00fa948c(uVar18,iVar19,&DAT_004149cc,&local_34);
        pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 1);
        if (iVar2 != 0) {
          return 1;
        }
      }
    }
  }
LAB_01692a80:
  if (pcVar12 == (code *)0x0) {
    return 0;
  }
  goto LAB_01692528;
}

