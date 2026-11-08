// FUN_01bede5e @ 01bede5e size=686 calls_out=4 calls_in=3
// strings: 

uint * FUN_01bede5e(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  ushort *puVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  uint *puVar21;
  bool bVar22;
  uint local_454;
  char *local_44c;
  uint auStack_448 [8];
  uint auStack_428 [260];
  undefined4 uStack_18;
  
  if ((byte)*param_2 == 0) {
    return param_1;
  }
  uStack_18 = param_4;
  puVar7 = (uint *)FUN_01bedada();
  if (puVar7 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (*(byte *)((int)param_2 + 1) == 0) {
    return puVar7;
  }
  if (*(byte *)((int)puVar7 + 1) == 0) {
    return (uint *)0x0;
  }
  if (*(byte *)((int)param_2 + 2) == 0) {
    pbVar4 = (byte *)((int)puVar7 + 1);
    uVar19 = ((ushort)*puVar7 & 0xff) << 8 | (uint)(ushort)((ushort)*puVar7 >> 8);
    while (*pbVar4 != 0) {
      if (uVar19 == (((ushort)*param_2 & 0xff) << 8 | (uint)(ushort)((ushort)*param_2 >> 8))) {
        return (uint *)(pbVar4 + -1);
      }
      pbVar4 = pbVar4 + 1;
      uVar19 = (uint)*pbVar4 | (uVar19 & 0xff) << 8;
    }
  }
  else if (*(byte *)((int)puVar7 + 2) != 0) {
    if (*(byte *)((int)param_2 + 3) == 0) {
      puVar16 = (ushort *)((int)puVar7 + 2);
      uVar19 = (uint)*(byte *)((int)puVar7 + 2) << 8 | (uint)*(byte *)((int)puVar7 + 1) << 0x10 |
               (uint)(byte)*puVar7 << 0x18;
      while( true ) {
        if ((byte)*puVar16 == 0) {
          return (uint *)0x0;
        }
        if (((uint)*(byte *)((int)param_2 + 2) << 8 | (uint)*(byte *)((int)param_2 + 1) << 0x10 |
            (uint)(byte)*param_2 << 0x18) == uVar19) break;
        puVar16 = (ushort *)((int)puVar16 + 1);
        uVar19 = (uVar19 | *(byte *)puVar16) << 8;
      }
      return (uint *)(puVar16 + -1);
    }
    if (*(byte *)((int)puVar7 + 3) != 0) {
      if ((byte)param_2[1] != 0) {
        pbVar17 = (byte *)((int)puVar7 + -1);
        FUN_01bed93e(auStack_448,0,0x20,uStack_18);
        uVar19 = 0;
        pbVar4 = (byte *)((int)param_2 + -1);
        while( true ) {
          pbVar4 = pbVar4 + 1;
          uVar11 = (uint)*pbVar4;
          bVar1 = *pbVar4 >> 5;
          if (uVar11 == 0) break;
          pbVar17 = pbVar17 + 1;
          uVar19 = uVar19 + 1;
          if (*pbVar17 == 0) {
            return (uint *)0x0;
          }
          auStack_428[uVar11] = uVar19;
          auStack_448[bVar1] = 1 << (uVar11 & 0x1f) | auStack_448[bVar1];
        }
        uVar18 = 0xffffffff;
        uVar8 = 1;
        local_454 = 1;
        uVar11 = 0;
        uVar12 = local_454;
        while( true ) {
          local_454 = uVar12;
          uVar10 = uVar11 + uVar8;
          if (uVar19 <= uVar10) break;
          bVar1 = *(byte *)((int)param_2 + uVar8 + uVar18);
          bVar22 = *(byte *)((int)param_2 + uVar10) <= bVar1;
          if (bVar1 == *(byte *)((int)param_2 + uVar10)) {
            uVar12 = local_454;
            if (uVar8 == local_454) {
              uVar8 = 1;
              uVar11 = uVar10;
            }
            else {
              uVar8 = uVar8 + 1;
            }
          }
          else {
            uVar12 = uVar11;
            if (bVar22) {
              uVar12 = uVar10 - uVar18;
            }
            uVar8 = 1;
            if (!bVar22) {
              uVar18 = uVar12;
            }
            local_454 = 1;
            uVar11 = uVar10;
            if (!bVar22) {
              uVar11 = uVar12 + 1;
              uVar12 = local_454;
            }
          }
        }
        uVar10 = 1;
        uVar8 = 1;
        uVar11 = 0;
        uVar12 = 0xffffffff;
        while( true ) {
          uVar9 = uVar11;
          uVar11 = uVar9 + uVar8;
          if (uVar19 <= uVar11) break;
          bVar1 = *(byte *)((int)param_2 + uVar12 + uVar8);
          if (bVar1 == *(byte *)((int)param_2 + uVar11)) {
            if (uVar8 == uVar10) goto LAB_01bedd34;
            uVar8 = uVar8 + 1;
            uVar11 = uVar9;
          }
          else {
            uVar10 = 1;
            if (bVar1 < *(byte *)((int)param_2 + uVar11)) {
              uVar10 = uVar11 - uVar12;
LAB_01bedd34:
              uVar8 = 1;
            }
            else {
              uVar8 = 1;
              uVar11 = uVar9 + 1;
              uVar12 = uVar9;
            }
          }
        }
        pcVar3 = (char *)(uVar18 + 1);
        if ((char *)(uVar18 + 1) < (char *)(uVar12 + 1)) {
          uVar18 = uVar12;
          local_454 = uVar10;
          pcVar3 = (char *)(uVar12 + 1);
        }
        iVar5 = FUN_01bed842(param_2,(byte *)((int)param_2 + local_454));
        if (iVar5 == 0) {
          local_44c = (char *)(uVar19 - local_454);
        }
        else {
          local_454 = (uVar19 - 1) - uVar18;
          if (local_454 < uVar18) {
            local_454 = uVar18;
          }
          local_454 = local_454 + 1;
          local_44c = (char *)0x0;
        }
        pcVar20 = (char *)0x0;
        puVar21 = puVar7;
LAB_01beddcc:
        do {
          while( true ) {
            while( true ) {
              puVar6 = puVar21;
              if ((uint)((int)puVar21 - (int)puVar7) < uVar19) {
                puVar6 = (uint *)FUN_01bed7c2(puVar21,0);
                if (puVar6 == (uint *)0x0) {
                  puVar6 = (uint *)((int)puVar21 + (uVar19 | 0x3f));
                }
                else if ((uint)((int)puVar6 - (int)puVar7) < uVar19) {
                  return (uint *)0x0;
                }
              }
              bVar1 = *(byte *)((int)((int)puVar7 + uVar19) + -1);
              puVar21 = puVar6;
              if ((1 << (bVar1 & 0x1f) & auStack_448[bVar1 >> 5]) != 0) break;
              pcVar20 = (char *)0x0;
              puVar7 = (uint *)((int)puVar7 + uVar19);
            }
            pcVar13 = (char *)(uVar19 - auStack_428[bVar1]);
            if (pcVar13 == (char *)0x0) break;
            if (pcVar20 < pcVar13) {
              pcVar20 = pcVar13;
            }
            puVar7 = (uint *)((int)puVar7 + (int)pcVar20);
            pcVar20 = (char *)0x0;
          }
          pcVar13 = pcVar3;
          if (pcVar3 < pcVar20) {
            pcVar13 = pcVar20;
          }
          pbVar17 = (byte *)(pcVar13 + -1 + (int)puVar7);
          pbVar4 = (byte *)((int)param_2 + (int)(pcVar13 + -1));
          while( true ) {
            pbVar14 = pbVar4;
            pbVar4 = pbVar14 + 1;
            bVar1 = *pbVar4;
            if (bVar1 == 0) break;
            pbVar17 = pbVar17 + 1;
            if (*pbVar17 != bVar1) goto code_r0x01bede28;
          }
          pcVar13 = pcVar3 + (int)param_2;
          pcVar15 = pcVar3 + -1 + (int)puVar7;
          do {
            if (pcVar15 + (1 - (int)puVar7) <= pcVar20) {
              return puVar7;
            }
            cVar2 = *pcVar15;
            pcVar13 = pcVar13 + -1;
            pcVar15 = pcVar15 + -1;
          } while (*pcVar13 == cVar2);
          puVar7 = (uint *)((int)puVar7 + local_454);
          pcVar20 = local_44c;
        } while( true );
      }
      uVar19 = *param_2;
      pbVar4 = (byte *)((int)puVar7 + 3);
      uVar11 = *puVar7;
      uVar11 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
      while (*pbVar4 != 0) {
        if ((uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
            uVar19 >> 0x18) == uVar11) {
          return (uint *)(pbVar4 + -3);
        }
        pbVar4 = pbVar4 + 1;
        uVar11 = (uint)*pbVar4 | uVar11 << 8;
      }
    }
  }
  return (uint *)0x0;
code_r0x01bede28:
  puVar7 = (uint *)((int)puVar7 + (int)(pbVar14 + ((1 - (int)param_2) - uVar18)));
  pcVar20 = (char *)0x0;
  goto LAB_01beddcc;
}

