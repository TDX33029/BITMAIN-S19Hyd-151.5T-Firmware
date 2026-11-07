// FUN_014fa97c @ 014fa97c size=1572 calls_out=5 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_014fa97c(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  int iVar15;
  byte *******pppppppbVar16;
  undefined1 *puVar17;
  code *pcVar18;
  byte *******pppppppbVar19;
  bool bVar20;
  code *local_4c;
  byte *******local_40;
  code *local_3c;
  code *local_38;
  undefined4 uStack_34;
  byte local_2d;
  undefined1 local_2c;
  undefined1 local_2b [2];
  undefined1 local_29;
  byte *******local_28;
  
  pcVar18 = (code *)param_1[1];
  if (pcVar18 == (code *)0x0) {
    return 0;
  }
  local_4c = (code *)*param_1;
  uVar8 = *param_2;
  iVar11 = param_2[1];
LAB_014fa9d0:
  FUN_014faff8(&local_40,local_4c,pcVar18,0x25);
  uVar5 = uStack_34;
  pcVar1 = local_38;
  if (local_40 == (byte *******)0x0) {
    uVar8 = (**(code **)(iVar11 + 0xc))(uVar8,local_4c,pcVar18);
    return uVar8;
  }
  iVar6 = (**(code **)(iVar11 + 0xc))(uVar8,local_40,local_3c);
  if (iVar6 != 0) {
    return 1;
  }
  FUN_014fa404(&local_40,pcVar1,uVar5);
  pcVar3 = local_38;
  pcVar1 = local_3c;
  local_4c = local_3c;
  uVar9 = (uint)local_40 & 0xff;
  local_2d = (byte)local_40;
  if ((char)(byte)local_40 < '\0') {
    puVar12 = (undefined1 *)0x2;
    pppppppbVar19 = (byte *******)(local_2b + 1);
    if (uVar9 - 0xc2 < 0x1e) {
LAB_014faab0:
      local_29 = 0;
      local_2b = (undefined1  [2])0x0;
      local_2c = (byte)local_40;
      iVar6 = 1;
LAB_014faadc:
      pcVar4 = local_38;
      pcVar2 = local_3c;
      puVar17 = (undefined1 *)(iVar6 + -1);
      if (local_38 == (code *)0x0) {
LAB_014faeb8:
        if (puVar17 < puVar12) {
          iVar15 = 0;
          do {
            if (iVar6 == iVar15) {
              return 0;
            }
            local_28 = (byte *******)(&local_2c + iVar15);
            local_3c = (code *)&DAT_014fa918;
            local_40 = (byte *******)&local_28;
            iVar7 = FUN_012fa178(uVar8,iVar11,&DAT_004a5a98,&local_40);
            iVar15 = iVar15 + 1;
          } while (iVar7 == 0);
          return 1;
        }
        puVar13 = &DAT_01cfa734;
LAB_014faf78:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,puVar17,puVar12,puVar13);
      }
      local_4c = local_3c + 1;
      puVar14 = (undefined1 *)(uint)(byte)*local_3c;
      if (0x7fffffff < (uint)(int)(char)*local_3c) {
        if (puVar14 < (undefined1 *)0xe0) {
          puVar14 = (undefined1 *)((byte)local_3c[1] & 0x3f | ((uint)puVar14 & 0x1f) << 6);
          local_4c = local_3c + 2;
        }
        else {
          uVar9 = (byte)local_3c[2] & 0x3f | ((byte)local_3c[1] & 0x3f) << 6;
          if (puVar14 < (undefined1 *)0xf0) {
            puVar14 = (undefined1 *)(uVar9 | ((uint)puVar14 & 0x1f) << 0xc);
            local_4c = local_3c + 3;
          }
          else {
            puVar14 = (undefined1 *)
                      ((byte)local_3c[3] & 0x3f | uVar9 << 6 | ((uint)puVar14 & 7) << 0x12);
            if (puVar14 == &DAT_00110000) goto LAB_014faeb8;
            local_4c = local_3c + 4;
          }
        }
      }
      pcVar18 = local_3c + ((int)local_38 - (int)local_4c);
      if (puVar14 != (undefined1 *)0x25) {
        if (puVar14 == &DAT_00110000) goto LAB_014faeb8;
        if (puVar12 <= puVar17) {
          puVar13 = &DAT_01cfa754;
          goto LAB_014faf78;
        }
        iVar15 = 0;
        while (iVar6 != iVar15) {
          local_28 = (byte *******)(&local_2c + iVar15);
          local_3c = (code *)&DAT_014fa918;
          local_40 = (byte *******)&local_28;
          iVar7 = FUN_012fa178(uVar8,iVar11,&DAT_004a5a98,&local_40);
          iVar15 = iVar15 + 1;
          if (iVar7 != 0) {
            return 1;
          }
        }
        iVar6 = (**(code **)(iVar11 + 0x10))(uVar8,puVar14);
        goto LAB_014fad0c;
      }
      FUN_014fa404(&local_40,local_4c,pcVar18);
      pcVar18 = local_38;
      local_4c = local_3c;
      if ((char)(byte)local_40 < -0x40) goto code_r0x014fab88;
      if (puVar12 <= puVar17) {
        puVar13 = &DAT_01cfa744;
        goto LAB_014faf78;
      }
      iVar15 = 0;
      while( true ) {
        local_4c = pcVar2;
        pcVar18 = pcVar4;
        if (iVar6 == iVar15) break;
        local_28 = (byte *******)(&local_2c + iVar15);
        local_3c = (code *)&DAT_014fa918;
        local_40 = (byte *******)&local_28;
        iVar7 = FUN_012fa178(uVar8,iVar11,&DAT_004a5a98,&local_40);
        iVar15 = iVar15 + 1;
        if (iVar7 != 0) {
          return 1;
        }
      }
      goto LAB_014fac08;
    }
    puVar12 = (undefined1 *)0x3;
    pppppppbVar19 = (byte *******)&local_29;
    if (((uint)local_40 & 0xf0) == 0xe0) goto LAB_014faab0;
    puVar12 = (undefined1 *)0x4;
    pppppppbVar19 = (byte *******)&local_28;
    if (uVar9 - 0xf0 < 5) goto LAB_014faab0;
LAB_014faa54:
    local_40 = (byte *******)&local_2d;
    local_3c = FUN_012fd6b4;
    iVar6 = FUN_012fa178(uVar8,iVar11,&DAT_004a5a98,&local_40);
  }
  else {
    if ((""[uVar9] & 2U) == 0) goto LAB_014faa54;
    iVar6 = (**(code **)(iVar11 + 0x10))(uVar8);
  }
  pcVar18 = pcVar3;
  if (iVar6 != 0) {
    return 1;
  }
  goto LAB_014fac08;
code_r0x014fab88:
  (&local_2c)[iVar6] = (byte)local_40;
  pppppppbVar16 = (byte *******)(local_2b + iVar6);
  iVar6 = iVar6 + 1;
  if (pppppppbVar16 == pppppppbVar19) goto code_r0x014faba8;
  goto LAB_014faadc;
code_r0x014faba8:
  uVar9 = (uint)local_2c;
  if (puVar12 == (undefined1 *)0x2) {
    uVar9 = (uVar9 & 0x1f) << 6;
    pppppppbVar16 = (byte *******)local_2b;
  }
  else if (puVar12 == (undefined1 *)0x3) {
    uVar9 = (local_2b[0] & 0x3f) << 6 | (uVar9 & 0xf) << 0xc;
    pppppppbVar16 = (byte *******)(local_2b + 1);
  }
  else {
    uVar9 = (local_2b[0] & 0x3f) << 0xc | (uVar9 & 7) << 0x12 | (local_2b[1] & 0x3f) << 6;
    pppppppbVar16 = (byte *******)&local_29;
  }
  puVar10 = (undefined1 *)(uVar9 | *(byte *)pppppppbVar16 & 0x3f);
  puVar14 = *(undefined1 **)
             ("[validity] at least two bytes should follow the `%` in a valid IRI reference" +
             (int)puVar12 * 4 + 0x46);
  bVar20 = puVar14 <= puVar10;
  puVar17 = puVar12;
  if (bVar20) {
    puVar14 = (undefined1 *)((uVar9 ^ 0xd800) - 0x110000);
    puVar17 = (undefined1 *)0xffef0800;
  }
  if ((!(bVar20 && puVar17 <= puVar14)) || (puVar10 == &DAT_00110000)) {
    pcVar18 = (code *)((int)puVar12 * 3 + -3);
    if (pcVar18 < pcVar3) {
      if ((char)pcVar1[(int)pcVar18] < -0x40) goto LAB_014faf84;
    }
    else if (pcVar3 != pcVar18) {
LAB_014faf84:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(pcVar1,pcVar3,pcVar18,pcVar3,&DAT_01cfa724);
    }
    local_4c = pcVar1 + (int)pcVar18;
    pcVar18 = pcVar3 + -(int)pcVar18;
    pppppppbVar16 = (byte *******)&local_2c;
    while (pppppppbVar16 != pppppppbVar19) {
      local_3c = (code *)&DAT_014fa918;
      local_40 = (byte *******)&local_28;
      local_28 = pppppppbVar16;
      iVar6 = FUN_012fa178(uVar8,iVar11,&DAT_004a5a98,&local_40);
      pppppppbVar16 = (byte *******)((int)pppppppbVar16 + 1);
      if (iVar6 != 0) {
        return 1;
      }
    }
  }
  else if ((uVar9 < 0x80) && ((""[(int)puVar10] & 2U) != 0)) {
    iVar6 = (**(code **)(iVar11 + 0x10))(uVar8);
LAB_014fad0c:
    if (iVar6 != 0) {
      return 1;
    }
  }
  else {
    pppppppbVar16 = (byte *******)&local_2c;
    while( true ) {
      if (pppppppbVar16 == pppppppbVar19) break;
      local_3c = (code *)&DAT_014fa918;
      local_40 = (byte *******)&local_28;
      local_28 = pppppppbVar16;
      iVar6 = FUN_012fa178(uVar8,iVar11,&DAT_004a5a98,&local_40);
      pppppppbVar16 = (byte *******)((int)pppppppbVar16 + 1);
      if (iVar6 != 0) {
        return 1;
      }
    }
  }
LAB_014fac08:
  if (pcVar18 == (code *)0x0) {
    return 0;
  }
  goto LAB_014fa9d0;
}

