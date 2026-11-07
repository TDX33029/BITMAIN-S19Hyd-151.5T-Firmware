// FUN_00b87024 @ 00b87024 size=2300 calls_out=7 calls_in=2
// strings: 

void FUN_00b87024(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  uint *local_e8;
  uint *local_e0;
  uint *local_dc;
  uint local_d4;
  undefined1 auStack_d0 [172];
  
  if (0x20 < param_2) {
    local_e8 = param_6;
    local_d4 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_00b867e0(param_1,local_d4,param_3,param_4,1);
          return;
        }
        puVar5 = param_1 + (local_d4 >> 3) * 0xa8;
        if (local_d4 < 0x40) {
          uVar2 = param_1[(local_d4 >> 3) * 0x126];
          uVar7 = *puVar5;
          uVar14 = *param_1;
          if (uVar14 < uVar7 != uVar7 < uVar2) {
            puVar5 = param_1 + (local_d4 >> 3) * 0x126;
          }
          if (uVar14 < uVar7 != uVar14 < uVar2) {
            puVar5 = param_1;
          }
        }
        else {
          puVar5 = (uint *)FUN_00b8794c(param_1,puVar5);
        }
        param_5 = param_5 + -1;
        FUN_016dd1aa(auStack_d0,puVar5,0xa8);
        uVar2 = (uint)((int)puVar5 - (int)param_1) >> 3;
        uVar7 = uVar2 * 0x3cf3cf3d;
        if ((local_e8 != (uint *)0x0) && (*puVar5 <= *local_e8)) break;
        if (param_4 < local_d4) goto LAB_00b87908;
        puVar6 = param_3 + local_d4 * 0x2a;
        param_2 = 0;
        puVar13 = param_1 + uVar2 * 2;
        puVar3 = param_1;
        uVar14 = uVar7;
        if (puVar13 <= param_1) goto LAB_00b8738c;
LAB_00b87354:
        do {
          puVar16 = puVar3 + 0x2a;
          puVar6 = puVar6 + -0x2a;
          puVar10 = puVar6;
          if (*puVar3 < *puVar5) {
            puVar10 = param_3;
          }
          iVar4 = param_2 * 0x2a;
          if (*puVar3 < *puVar5) {
            param_2 = param_2 + 1;
          }
          FUN_016dd1aa(puVar10 + iVar4,puVar3,0xa8);
          puVar3 = puVar16;
        } while (puVar16 < puVar13);
LAB_00b8738c:
        if (uVar14 != local_d4) goto code_r0x00b87398;
        FUN_016dd1aa(param_1,param_3,param_2 * 0xa8);
        iVar4 = local_d4 - param_2;
        if (iVar4 != 0) {
          puVar13 = param_1 + param_2 * 0x2a;
          puVar3 = param_3 + local_d4 * 0x2a + -0x2a;
          iVar9 = iVar4;
          do {
            FUN_016dd1aa(puVar13,puVar3,0xa8);
            puVar3 = puVar3 + -0x2a;
            puVar13 = puVar13 + 0x2a;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (param_2 == 0) break;
        if (local_d4 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b87024(param_1 + param_2 * 0x2a,iVar4,param_3,param_4,param_5,auStack_d0);
        local_d4 = param_2;
        if (param_2 < 0x21) goto LAB_00b87040;
      }
      if (param_4 < local_d4) goto LAB_00b87908;
      puVar13 = param_3 + local_d4 * 0x2a;
      uVar14 = 0;
      puVar6 = param_1 + uVar2 * 2;
      puVar3 = param_1;
      if (puVar6 <= param_1) goto LAB_00b874c8;
LAB_00b87490:
      do {
        puVar16 = puVar3 + 0x2a;
        puVar13 = puVar13 + -0x2a;
        puVar10 = puVar13;
        if (*puVar3 <= *puVar5) {
          puVar10 = param_3;
        }
        iVar4 = uVar14 * 0x2a;
        if (*puVar3 <= *puVar5) {
          uVar14 = uVar14 + 1;
        }
        FUN_016dd1aa(puVar10 + iVar4,puVar3,0xa8);
        puVar3 = puVar16;
      } while (puVar16 < puVar6);
LAB_00b874c8:
      if (uVar7 != local_d4) goto code_r0x00b874d4;
      FUN_016dd1aa(param_1,param_3,uVar14 * 0xa8);
      param_2 = local_d4 - uVar14;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar14 * 0x2a;
      puVar3 = param_3 + local_d4 * 0x2a + -0x2a;
      uVar2 = param_2;
      puVar5 = param_1;
      do {
        FUN_016dd1aa(puVar5,puVar3,0xa8);
        puVar3 = puVar3 + -0x2a;
        puVar5 = puVar5 + 0x2a;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      if (local_d4 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar14,local_d4,local_d4,&DAT_018af348);
      }
      local_e8 = (uint *)0x0;
      local_d4 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_00b87040:
  uVar2 = param_2 >> 1;
  if (uVar2 != 0) {
    if (param_2 < 8) {
      FUN_016dd1aa(param_3,param_1,0xa8);
      FUN_016dd1aa(param_3 + uVar2 * 0x2a,param_1 + uVar2 * 0x2a,0xa8);
      uVar7 = 1;
    }
    else {
      iVar4 = 0x1f8;
      if (param_1[0x7e] < param_1[0x54]) {
        iVar4 = 0x150;
      }
      puVar5 = (uint *)((int)param_1 + iVar4);
      iVar4 = 0x150;
      if (param_1[0x7e] < param_1[0x54]) {
        iVar4 = 0x1f8;
      }
      puVar13 = param_1 + (short)(ushort)(*param_1 <= param_1[0x2a]) * 0x2a;
      puVar10 = (uint *)((int)param_1 + iVar4);
      puVar6 = param_1 + (short)(ushort)(*param_1 > param_1[0x2a]) * 0x2a;
      puVar3 = puVar13;
      if (*puVar5 < *puVar13) {
        puVar3 = puVar10;
      }
      puVar11 = puVar10;
      puVar16 = puVar6;
      if (*puVar10 < *puVar6) {
        puVar11 = puVar13;
        puVar16 = puVar10;
        puVar3 = puVar6;
      }
      if (*puVar5 < *puVar13) {
        puVar11 = puVar5;
      }
      else {
        puVar13 = puVar5;
      }
      uVar7 = *puVar11;
      uVar14 = *puVar3;
      FUN_016dd1aa(param_3,puVar16,0xa8);
      if (uVar7 < uVar14) {
        puVar5 = puVar3;
      }
      else {
        puVar5 = puVar11;
        puVar11 = puVar3;
      }
      FUN_016dd1aa(param_3 + 0x2a,puVar11,0xa8);
      FUN_016dd1aa(param_3 + 0x54,puVar5,0xa8);
      FUN_016dd1aa(param_3 + 0x7e,puVar13,0xa8);
      iVar9 = 0x150;
      puVar5 = param_1 + uVar2 * 0x2a;
      iVar4 = 0x1f8;
      if (puVar5[0x7e] < puVar5[0x54]) {
        iVar4 = 0x150;
        iVar9 = 0x1f8;
      }
      puVar6 = (uint *)((int)puVar5 + iVar4);
      uVar14 = *puVar6;
      puVar13 = puVar5 + (short)(ushort)(*puVar5 <= puVar5[0x2a]) * 0x2a;
      uVar7 = *puVar13;
      puVar10 = (uint *)((int)puVar5 + iVar9);
      puVar5 = puVar5 + (short)(ushort)(*puVar5 > puVar5[0x2a]) * 0x2a;
      puVar3 = puVar13;
      if (uVar14 < uVar7) {
        puVar3 = puVar10;
      }
      puVar11 = puVar10;
      puVar16 = puVar5;
      if (*puVar10 < *puVar5) {
        puVar11 = puVar13;
        puVar16 = puVar10;
        puVar3 = puVar5;
      }
      if (uVar14 < uVar7) {
        puVar11 = puVar6;
      }
      uVar17 = *puVar3;
      uVar15 = *puVar11;
      if (uVar14 >= uVar7) {
        puVar13 = puVar6;
      }
      puVar5 = param_3 + uVar2 * 0x2a;
      FUN_016dd1aa(puVar5,puVar16,0xa8);
      if (uVar15 < uVar17) {
        puVar6 = puVar3;
      }
      else {
        puVar6 = puVar11;
        puVar11 = puVar3;
      }
      FUN_016dd1aa(puVar5 + 0x2a,puVar11,0xa8);
      FUN_016dd1aa(puVar5 + 0x54,puVar6,0xa8);
      FUN_016dd1aa(puVar5 + 0x7e,puVar13,0xa8);
      uVar7 = 4;
    }
    if (uVar7 < uVar2) {
      iVar4 = (short)uVar7 * 0xa8;
      uVar14 = uVar7;
      do {
        FUN_016dd1aa(param_3 + uVar14 * 0x2a,param_1 + uVar14 * 0x2a,0xa8);
        uVar15 = param_3[uVar14 * 0x2a];
        if (uVar15 < (param_3 + uVar14 * 0x2a)[-0x2a]) {
          FUN_016dd1aa(auStack_d0,param_1 + uVar14 * 0x2a + 1,0xa4);
          iVar9 = iVar4;
          do {
            puVar12 = (undefined1 *)((int)param_3 + iVar9);
            FUN_016dd1aa(puVar12,puVar12 + -0xa8,0xa8);
            if (iVar9 == 0xa8) {
              puVar5 = param_3;
              goto LAB_00b875f8;
            }
            iVar9 = iVar9 + -0xa8;
          } while (uVar15 < *(uint *)(puVar12 + -0x150));
          puVar5 = (uint *)((int)param_3 + iVar9);
LAB_00b875f8:
          *puVar5 = uVar15;
          FUN_016dd1aa(puVar5 + 1,auStack_d0,0xa4);
        }
        uVar14 = uVar14 + 1;
        iVar4 = iVar4 + 0xa8;
      } while (uVar14 != uVar2);
    }
    puVar5 = param_3 + uVar2 * 0x2a;
    if (uVar7 < param_2 - uVar2) {
      iVar4 = (int)(short)uVar7;
      local_dc = (uint *)0xa8;
      local_e0 = puVar5;
      do {
        FUN_016dd1aa(puVar5 + uVar7 * 0x2a,param_1 + uVar2 * 0x2a + uVar7 * 0x2a,0xa8);
        uVar14 = puVar5[uVar7 * 0x2a];
        if (uVar14 < (puVar5 + uVar7 * 0x2a)[-0x2a]) {
          FUN_016dd1aa(auStack_d0,param_1 + uVar2 * 0x2a + uVar7 * 0x2a + 1,0xa4);
          puVar3 = local_e0;
          puVar13 = local_dc;
          do {
            puVar6 = puVar3 + iVar4 * 0x2a;
            FUN_016dd1aa(puVar6,puVar6 + -0x2a,0xa8);
            if ((uint *)(iVar4 * 0xa8) == puVar13) {
              puVar3 = puVar5;
              goto LAB_00b876e0;
            }
            puVar13 = (uint *)((int)puVar13 + 0xa8);
            puVar3 = puVar3 + -0x2a;
          } while (uVar14 < puVar6[-0x54]);
          puVar3 = puVar3 + iVar4 * 0x2a;
LAB_00b876e0:
          *puVar3 = uVar14;
          FUN_016dd1aa(puVar3 + 1,auStack_d0,0xa4);
        }
        uVar7 = uVar7 + 1;
        local_dc = (uint *)((int)local_dc + -0xa8);
        local_e0 = local_e0 + 0x2a;
      } while (uVar7 != param_2 - uVar2);
    }
    iVar4 = 0;
    local_dc = param_3 + param_2 * 0x2a + -0x2a;
    puVar3 = puVar5 + -0x2a;
    do {
      bVar18 = *param_3 <= *puVar5;
      puVar13 = puVar5;
      if (bVar18) {
        puVar13 = param_3;
      }
      FUN_016dd1aa((int)param_1 + iVar4,puVar13,0xa8);
      puVar5 = puVar5 + (short)(ushort)!bVar18 * 0x2a;
      param_3 = param_3 + (short)(ushort)bVar18 * 0x2a;
      iVar8 = 0;
      iVar9 = 0;
      if (*local_dc < *puVar3) {
        iVar9 = -1;
      }
      else {
        iVar8 = -1;
      }
      puVar13 = puVar3 + iVar9 * 0x2a;
      if (*local_dc >= *puVar3) {
        puVar3 = local_dc;
      }
      FUN_016dd1aa((int)param_1 + ((param_2 * 0xa8 + -0xa8) - iVar4),puVar3);
      local_dc = local_dc + iVar8 * 0x2a;
      uVar2 = uVar2 - 1;
      iVar4 = iVar4 + 0xa8;
      puVar3 = puVar13;
    } while (uVar2 != 0);
    puVar13 = puVar13 + 0x2a;
    puVar3 = (uint *)0x0;
    puVar6 = puVar5;
    if ((param_2 & 1) != 0) {
      bVar18 = puVar13 <= param_3;
      puVar6 = puVar5 + (short)(ushort)bVar18 * 0x2a;
      if (!bVar18) {
        puVar5 = param_3;
      }
      FUN_016dd1aa((int)param_1 + iVar4,puVar5,0xa8);
      puVar3 = (uint *)&DAT_000000a8;
      param_3 = param_3 + (short)(ushort)!bVar18 * 0x2a;
    }
    if (param_3 == puVar13) {
      puVar3 = local_dc + 0x2a;
    }
    if (param_3 != puVar13 || puVar6 != puVar3) {
      FUN_00fb7254();
LAB_00b87908:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb87908);
      (*pcVar1)();
    }
  }
  return;
code_r0x00b87398:
  puVar6 = puVar6 + -0x2a;
  FUN_016dd1aa(puVar6 + param_2 * 0x2a,puVar3,0xa8);
  puVar3 = puVar3 + 0x2a;
  puVar13 = param_1 + local_d4 * 0x2a;
  uVar14 = local_d4;
  if (puVar3 < puVar13) goto LAB_00b87354;
  goto LAB_00b8738c;
code_r0x00b874d4:
  FUN_016dd1aa(param_3 + uVar14 * 0x2a,puVar3,0xa8);
  puVar3 = puVar3 + 0x2a;
  uVar14 = uVar14 + 1;
  puVar13 = puVar13 + -0x2a;
  puVar6 = param_1 + local_d4 * 0x2a;
  uVar7 = local_d4;
  if (puVar3 < puVar6) goto LAB_00b87490;
  goto LAB_00b874c8;
}

