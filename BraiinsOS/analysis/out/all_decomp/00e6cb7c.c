// FUN_00e6cb7c @ 00e6cb7c size=2012 calls_out=5 calls_in=1
// strings: 

int FUN_00e6cb7c(char *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 local_4c;
  
  if (*param_1 != '\0') {
    local_4c = 10;
    iVar3 = FUN_0157c50c(&local_4c,0,0);
    return iVar3;
  }
  iVar3 = FUN_00e5b230(param_1,param_2,0x15);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar14 = *(undefined4 **)(param_1 + 4);
  piVar8 = (int *)*puVar14;
  iVar3 = piVar8[2];
  if ((uint)(*piVar8 - iVar3) < 2) {
    FUN_00edff4c(piVar8,iVar3,2,1,1);
    iVar3 = piVar8[2];
  }
  piVar8[2] = iVar3 + 2;
  iVar5 = *param_3;
  *(undefined2 *)(piVar8[1] + iVar3) = 0x203a;
  if (iVar5 == -0x80000000) {
    piVar8 = (int *)*puVar14;
    iVar3 = piVar8[2];
    if ((uint)(*piVar8 - iVar3) < 4) {
      FUN_00edff4c(piVar8,iVar3,4,1,1);
      iVar3 = piVar8[2];
    }
    *(undefined4 *)(piVar8[1] + iVar3) = 0x6c6c756e;
    iVar3 = iVar3 + 4;
    goto LAB_00e6d164;
  }
  piVar8 = (int *)*puVar14;
  *(undefined1 *)(puVar14 + 4) = 0;
  iVar5 = puVar14[3];
  pbVar11 = (byte *)param_3[1];
  iVar9 = param_3[2];
  iVar6 = iVar5 + 1;
  iVar4 = piVar8[2];
  iVar3 = *piVar8;
  puVar14[3] = iVar6;
  if (iVar3 == iVar4) {
    FUN_00edff4c(piVar8,iVar4,1,1,1);
    iVar4 = piVar8[2];
  }
  *(undefined1 *)(piVar8[1] + iVar4) = 0x5b;
  iVar4 = iVar4 + 1;
  piVar8[2] = iVar4;
  if (iVar9 == 0) {
    iVar3 = *piVar8;
    puVar14[3] = iVar5;
    if (iVar3 == iVar4) {
      FUN_00edff4c(piVar8,iVar4,1,1,1);
      iVar3 = piVar8[2];
      iVar4 = iVar3;
    }
    else {
      iVar3 = piVar8[2];
    }
    iVar3 = iVar3 + 1;
    *(undefined1 *)(piVar8[1] + iVar4) = 0x5d;
    goto LAB_00e6d164;
  }
  uVar16 = puVar14[1];
  uVar17 = puVar14[2];
  if (iVar6 == 0) {
    bVar10 = *pbVar11;
    uVar13 = (uint)bVar10;
    if (*piVar8 == iVar4) {
      FUN_00edff4c(piVar8,iVar4,1,1,1);
      iVar4 = piVar8[2];
    }
    iVar3 = iVar4 + 1;
    *(undefined1 *)(piVar8[1] + iVar4) = 10;
    piVar8[2] = iVar3;
    if (uVar13 < 100) {
      if (uVar13 < 10) {
        uVar13 = 2;
        goto LAB_00e6cf64;
      }
      local_4c._0_3_ = CONCAT21(*(undefined2 *)(&DAT_0040f4ca + uVar13 * 2),(undefined1)local_4c);
      uVar13 = 1;
    }
    else {
      uVar15 = (uint)((short)(ushort)bVar10 * 0x29) >> 0xc;
      bVar10 = (byte)uVar15;
      local_4c._0_3_ =
           CONCAT21(*(undefined2 *)(&DAT_0040f4ca + ((short)uVar15 * -100 + uVar13 & 0xff) * 2),
                    (undefined1)local_4c);
      uVar13 = 0;
LAB_00e6cf64:
      *(byte *)((int)&local_4c + uVar13) = bVar10 | 0x30;
    }
    uVar15 = uVar13 ^ 3;
    if ((uint)(*piVar8 - iVar3) < uVar15) {
      FUN_00edff4c(piVar8,iVar3,uVar15,1,1);
      iVar3 = piVar8[2];
    }
    FUN_016dd1aa(piVar8[1] + iVar3,(int)&local_4c + uVar13,uVar15);
    iVar4 = iVar3 + uVar15;
    iVar9 = iVar9 + -1;
    piVar8[2] = iVar4;
    *(undefined1 *)(puVar14 + 4) = 1;
    if (iVar9 == 0) {
      iVar3 = *piVar8;
      puVar14[3] = iVar5;
      if (iVar3 == iVar4) {
        FUN_00edff4c(piVar8,iVar4,1,1,1);
        iVar3 = piVar8[2];
        iVar4 = iVar3;
      }
      else {
        iVar3 = piVar8[2];
      }
      iVar3 = iVar3 + 1;
      *(undefined1 *)(piVar8[1] + iVar4) = 10;
      piVar8[2] = iVar3;
      goto LAB_00e6d1a8;
    }
    do {
      pbVar11 = pbVar11 + 1;
      bVar10 = *pbVar11;
      uVar13 = (uint)bVar10;
      if ((uint)(*piVar8 - iVar4) < 2) {
        FUN_00edff4c(piVar8,iVar4,2,1,1);
        iVar3 = piVar8[2];
        iVar4 = iVar3;
      }
      else {
        iVar3 = piVar8[2];
      }
      iVar3 = iVar3 + 2;
      piVar8[2] = iVar3;
      *(undefined2 *)(piVar8[1] + iVar4) = 0xa2c;
      if (uVar13 < 100) {
        if (uVar13 < 10) {
          uVar15 = 2;
          goto LAB_00e6d058;
        }
        uVar15 = 1;
        local_4c._0_3_ = CONCAT21(*(undefined2 *)(&DAT_0040f4ca + uVar13 * 2),(undefined1)local_4c);
      }
      else {
        uVar15 = 0;
        uVar1 = (uint)((short)(ushort)bVar10 * 0x29) >> 0xc;
        bVar10 = (byte)uVar1;
        local_4c._0_3_ =
             CONCAT21(*(undefined2 *)(&DAT_0040f4ca + ((short)uVar1 * -100 + uVar13 & 0xff) * 2),
                      (undefined1)local_4c);
LAB_00e6d058:
        *(byte *)((int)&local_4c + uVar15) = bVar10 | 0x30;
      }
      uVar13 = uVar15 ^ 3;
      if ((uint)(*piVar8 - iVar3) < uVar13) {
        FUN_00edff4c(piVar8,iVar3,uVar13,1,1);
        iVar3 = piVar8[2];
      }
      FUN_016dd1aa(piVar8[1] + iVar3,(int)&local_4c + uVar15,uVar13);
      iVar4 = iVar3 + uVar13;
      iVar9 = iVar9 + -1;
      piVar8[2] = iVar4;
      *(undefined1 *)(puVar14 + 4) = 1;
    } while (iVar9 != 0);
  }
  else {
    bVar2 = true;
    pbVar12 = pbVar11;
    do {
      pbVar7 = pbVar12 + 1;
      bVar10 = *pbVar12;
      uVar13 = (uint)bVar10;
      if (bVar2) {
        if (*piVar8 == iVar4) {
          FUN_00edff4c(piVar8,iVar4,1,1,1);
          iVar3 = piVar8[2];
          iVar4 = iVar3;
        }
        else {
          iVar3 = piVar8[2];
        }
        iVar3 = iVar3 + 1;
        *(undefined1 *)(piVar8[1] + iVar4) = 10;
      }
      else {
        if ((uint)(*piVar8 - iVar4) < 2) {
          FUN_00edff4c(piVar8,iVar4,2,1,1);
          iVar3 = piVar8[2];
          iVar4 = iVar3;
        }
        else {
          iVar3 = piVar8[2];
        }
        iVar3 = iVar3 + 2;
        *(undefined2 *)(piVar8[1] + iVar4) = 0xa2c;
      }
      piVar8[2] = iVar3;
      iVar4 = iVar6;
      do {
        if ((uint)(*piVar8 - iVar3) < uVar17) {
          FUN_00edff4c(piVar8,iVar3,uVar17,1,1);
          iVar3 = piVar8[2];
        }
        FUN_016dd1aa(piVar8[1] + iVar3,uVar16,uVar17);
        iVar3 = iVar3 + uVar17;
        iVar4 = iVar4 + -1;
        piVar8[2] = iVar3;
      } while (iVar4 != 0);
      if (uVar13 < 100) {
        uVar15 = 2;
        if (uVar13 < 10) goto LAB_00e6cdb8;
        uVar15 = 1;
        local_4c._0_3_ = CONCAT21(*(undefined2 *)(&DAT_0040f4ca + uVar13 * 2),(undefined1)local_4c);
      }
      else {
        uVar15 = 0;
        uVar1 = (uint)((short)(ushort)bVar10 * 0x29) >> 0xc;
        bVar10 = (byte)uVar1;
        local_4c._0_3_ =
             CONCAT21(*(undefined2 *)(&DAT_0040f4ca + ((short)uVar1 * -100 + uVar13 & 0xff) * 2),
                      (undefined1)local_4c);
LAB_00e6cdb8:
        *(byte *)((int)&local_4c + uVar15) = bVar10 | 0x30;
      }
      uVar13 = uVar15 ^ 3;
      if ((uint)(*piVar8 - iVar3) < uVar13) {
        FUN_00edff4c(piVar8,iVar3,uVar13,1,1);
        iVar3 = piVar8[2];
      }
      FUN_016dd1aa(piVar8[1] + iVar3,(int)&local_4c + uVar15,uVar13);
      iVar4 = iVar3 + uVar13;
      piVar8[2] = iVar4;
      *(undefined1 *)(puVar14 + 4) = 1;
      bVar2 = false;
      pbVar12 = pbVar7;
    } while (pbVar7 != pbVar11 + iVar9);
  }
  iVar3 = *piVar8;
  puVar14[3] = iVar5;
  if (iVar3 == iVar4) {
    FUN_00edff4c(piVar8,iVar4,1,1,1);
    iVar3 = piVar8[2];
    iVar4 = iVar3;
  }
  else {
    iVar3 = piVar8[2];
  }
  iVar3 = iVar3 + 1;
  *(undefined1 *)(piVar8[1] + iVar4) = 10;
  piVar8[2] = iVar3;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
LAB_00e6d1a8:
    if ((uint)(*piVar8 - iVar3) < uVar17) {
      FUN_00edff4c(piVar8,iVar3,uVar17,1,1);
      iVar3 = piVar8[2];
    }
    FUN_016dd1aa(piVar8[1] + iVar3,uVar16,uVar17);
    iVar3 = iVar3 + uVar17;
    piVar8[2] = iVar3;
  }
  if (*piVar8 == iVar3) {
    FUN_00edff4c(piVar8,iVar3,1,1,1);
    iVar3 = piVar8[2];
  }
  *(undefined1 *)(piVar8[1] + iVar3) = 0x5d;
  iVar3 = iVar3 + 1;
LAB_00e6d164:
  piVar8[2] = iVar3;
  *(undefined1 *)(puVar14 + 4) = 1;
  return 0;
}

