// FUN_00655dd0 @ 00655dd0 size=960 calls_out=8 calls_in=2
// strings: 

void FUN_00655dd0(uint *param_1,byte *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_3 == 0) {
    *(undefined1 *)((int)param_1 + 0x17d) = 0;
    return;
  }
  if (*(char *)((int)param_1 + 0x17d) == '\0') {
    return;
  }
  param_1[0x4e] = param_1[0x4e] + 1;
  if (param_1[0x5d] < 4) {
    bVar6 = *param_2;
    FUN_00656150(param_1 + 0x5a,bVar6);
    if (*(char *)((int)param_1 + 0x17a) == '\x01') {
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      else if ((byte)(bVar6 + 0x9f) < 0x1a) {
        bVar6 = bVar6 & 0x5f;
      }
      FUN_00656150(param_1 + 0x5a,bVar6);
    }
  }
  if (*(char *)((int)param_1 + 0x137) == '\x01') {
    uVar3 = param_1[0x4c];
    bVar17 = 2 < uVar3;
    bVar16 = uVar3 == 3;
    if (uVar3 < 4) {
      bVar17 = 0xfe < param_3;
      bVar16 = param_3 == 0xff;
      uVar3 = param_3;
    }
    if (!bVar17 || bVar16) {
      puVar9 = param_1 + 4;
      uVar14 = 0;
      cVar1 = *(char *)((int)param_1 + 0x136);
      uVar5 = (uint)*param_2;
      bVar6 = (&DAT_004d0188)[uVar5];
      pbVar12 = param_2;
LAB_00655f94:
      uVar15 = uVar14;
      if (uVar14 < 0x101) {
        uVar15 = 0x100;
      }
      bVar16 = false;
      pbVar11 = pbVar12;
      do {
        if (uVar15 == uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c036fc);
        }
        pbVar12 = pbVar11 + 1;
        bVar2 = *pbVar11;
        uVar13 = (uint)bVar2;
        bVar4 = *(byte *)((int)puVar9 + uVar13);
        if ((uint)*(byte *)((int)puVar9 + uVar13) < (uVar14 & 0xff)) {
          bVar4 = (byte)uVar14;
        }
        *(byte *)((int)puVar9 + uVar13) = bVar4;
        if (cVar1 != '\0') {
          if ((uVar13 - 0x41 & 0xff) < 0x1a) {
            uVar10 = uVar13 | 0x20;
          }
          else {
            uVar10 = uVar13;
            if ((uVar13 - 0x61 & 0xff) < 0x1a) {
              uVar10 = uVar13 & 0x5f;
            }
          }
          bVar4 = *(byte *)((int)puVar9 + uVar10);
          if ((uint)*(byte *)((int)puVar9 + uVar10) < (uVar14 & 0xff)) {
            bVar4 = (byte)uVar14;
          }
          *(byte *)((int)puVar9 + uVar10) = bVar4;
        }
        uVar14 = uVar14 + 1;
        if (!bVar16) {
          puVar7 = (uint *)((int)param_1 + (bVar2 >> 3 & 0xfffffff0) + 0x110);
          local_48[0] = *puVar7;
          local_48[1] = puVar7[1];
          local_2c = 0;
          local_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_48[3] = puVar7[3];
          local_48[2] = puVar7[2];
          if ((local_48[(uVar13 & 0x7f) >> 5] >> (uVar13 & 0x1f) & 1) == 0) goto LAB_00656094;
        }
        bVar16 = true;
        pbVar11 = pbVar12;
        if (pbVar12 == param_2 + uVar3) goto LAB_00655ea4;
      } while( true );
    }
    *(undefined1 *)((int)param_1 + 0x137) = 0;
  }
LAB_00655ea4:
  uVar3 = param_1[3];
  param_1[3] = uVar3 + 1;
  if (uVar3 == 0) {
    uVar3 = FUN_01298504(param_3,1);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    FUN_01bed4e2(uVar3,param_2,param_3);
    if (*param_1 != 0x80000000) {
      FUN_0134bd64(*param_1,param_1[1]);
    }
    *param_1 = param_3;
    param_1[1] = uVar3;
    param_1[2] = param_3;
  }
  else {
    if (*param_1 != 0x80000000) {
      FUN_0134bd64(*param_1,param_1[1]);
    }
    *param_1 = 0x80000000;
  }
  if ((param_1[0x4f] == 0x80000000) || (*(char *)((int)param_1 + 0x165) != '\0')) {
    return;
  }
  if (param_1[0x51] < 0x80) {
    FUN_0065f4a8(param_1 + 0x4f,param_2,param_3);
    return;
  }
  *(undefined1 *)((int)param_1 + 0x165) = 1;
  uVar3 = param_1[0x51];
  *(undefined1 *)(param_1 + 0x57) = 0;
  puVar8 = (undefined4 *)(param_1[0x50] + 4);
  param_1[0x51] = 0;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_0134bd64(puVar8[-1],*puVar8);
    puVar8 = puVar8 + 3;
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0xffffffff;
  return;
LAB_00656094:
  if ((byte)(&DAT_004d0188)[uVar13] < bVar6) {
    uVar5 = uVar13;
    bVar6 = (&DAT_004d0188)[uVar13];
  }
  if (pbVar12 == param_2 + uVar3) goto code_r0x006560c0;
  goto LAB_00655f94;
code_r0x006560c0:
  FUN_006561c0(puVar9,uVar5);
  if (*(char *)((int)param_1 + 0x136) == '\x01') {
    if ((uVar5 - 0x41 & 0xff) < 0x1a) {
      uVar5 = uVar5 | 0x20;
    }
    else if ((uVar5 - 0x61 & 0xff) < 0x1a) {
      uVar5 = uVar5 & 0x5f;
    }
    FUN_006561c0(puVar9,uVar5);
  }
  goto LAB_00655ea4;
}

