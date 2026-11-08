// FUN_01aedd8c @ 01aedd8c size=856 calls_out=3 calls_in=2
// strings: 

void FUN_01aedd8c(undefined4 *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint unaff_r11;
  undefined4 uVar16;
  uint uVar17;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar13 = param_2[2];
  uVar8 = param_2[1];
  uVar16 = 1;
  iVar10 = 0x10;
  uVar14 = 0;
  iVar7 = 0xc;
  uVar17 = 0x80000000;
  iVar11 = 8;
  if (uVar8 <= uVar13) goto LAB_01aee07c;
  iVar15 = *param_2;
  uVar12 = uVar13 + 1;
  param_2[2] = uVar12;
  unaff_r11 = (uint)*(byte *)(iVar15 + uVar13);
  if ((~unaff_r11 & 0x1f) == 0) goto LAB_01aee074;
  if (uVar8 <= uVar12) goto LAB_01aee074;
  bVar1 = *(byte *)(iVar15 + uVar12);
  uVar12 = (uint)bVar1;
  local_4c = uVar13 + 2;
  param_2[2] = local_4c;
  if (-1 < (char)bVar1) {
LAB_01aede10:
    uVar14 = 0;
    if (uVar12 < param_3) {
      uVar9 = uVar12 + local_4c;
      if ((CARRY4(uVar12,local_4c)) || (uVar8 < uVar9)) {
        unaff_r11 = uVar12;
      }
      else {
        param_2[2] = uVar9;
        if (unaff_r11 == 0x30) {
          if (uVar9 < uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d30538);
          }
          FUN_01af347c(&local_48,param_2,0x30);
          uVar17 = local_40;
          uVar16 = local_44;
          if (local_48 == 0x8000002d) {
            FUN_01af3980(&local_48,param_2);
            uVar14 = local_44;
            unaff_r11 = local_40;
            if (local_48 == 0x8000002d) {
              param_1[1] = iVar15 + local_4c;
              iVar11 = 0x18;
              param_1[2] = uVar12;
              iVar7 = 0x1c;
              param_1[5] = uVar16;
              iVar10 = 0x20;
              uVar16 = 0;
              param_1[3] = (byte *)(iVar15 + uVar13);
              param_1[4] = uVar9 - uVar13;
              goto LAB_01aee07c;
            }
            param_1[5] = local_3c;
            param_1[6] = uStack_38;
            param_1[7] = uStack_34;
            param_1[8] = uStack_30;
            param_1[9] = uStack_2c;
            uVar17 = local_48;
          }
          else {
            param_1[5] = local_3c;
            param_1[6] = uStack_38;
            param_1[7] = uStack_34;
            param_1[8] = uStack_30;
            param_1[9] = uStack_2c;
            uVar14 = local_44;
            unaff_r11 = local_40;
            uVar17 = local_48;
          }
        }
      }
    }
    goto LAB_01aee074;
  }
  switch(uVar12) {
  case 0x81:
    if (local_4c < uVar8) {
      bVar1 = *(byte *)(iVar15 + local_4c);
      uVar12 = (uint)bVar1;
      local_4c = uVar13 + 3;
      param_2[2] = local_4c;
      if ((char)bVar1 < '\0') goto LAB_01aede10;
    }
  default:
    iVar7 = 0xc;
    iVar11 = 8;
    uVar14 = 0;
    goto LAB_01aee07c;
  case 0x82:
    uVar14 = 0;
    if (local_4c < uVar8) {
      cVar5 = *(char *)(iVar15 + local_4c);
      uVar12 = uVar13 + 3;
      param_2[2] = uVar12;
      if (uVar8 <= uVar12) goto LAB_01aee094;
      uVar6 = *(undefined1 *)(iVar15 + uVar12);
      local_4c = uVar13 + 4;
      param_2[2] = local_4c;
      if (cVar5 != '\0') {
        uVar12 = (uint)CONCAT11(cVar5,uVar6);
        goto LAB_01aede10;
      }
    }
    break;
  case 0x83:
    uVar14 = 0;
    if (local_4c < uVar8) {
      bVar1 = *(byte *)(iVar15 + local_4c);
      uVar12 = uVar13 + 3;
      param_2[2] = uVar12;
      if (uVar12 < uVar8) {
        bVar2 = *(byte *)(iVar15 + uVar12);
        uVar12 = uVar13 + 4;
        param_2[2] = uVar12;
        if (uVar12 < uVar8) {
          bVar3 = *(byte *)(iVar15 + uVar12);
          local_4c = uVar13 + 5;
          param_2[2] = local_4c;
          if (bVar1 != 0) {
            uVar12 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3;
            goto LAB_01aede10;
          }
          break;
        }
      }
LAB_01aee094:
      uVar14 = 0;
    }
    break;
  case 0x84:
    uVar14 = 0;
    if (local_4c < uVar8) {
      bVar1 = *(byte *)(iVar15 + local_4c);
      uVar12 = uVar13 + 3;
      param_2[2] = uVar12;
      if (uVar12 < uVar8) {
        bVar2 = *(byte *)(iVar15 + uVar12);
        uVar12 = uVar13 + 4;
        param_2[2] = uVar12;
        if (uVar12 < uVar8) {
          bVar3 = *(byte *)(iVar15 + uVar12);
          uVar12 = uVar13 + 5;
          param_2[2] = uVar12;
          if (uVar12 < uVar8) {
            bVar4 = *(byte *)(iVar15 + uVar12);
            local_4c = uVar13 + 6;
            param_2[2] = local_4c;
            if (bVar1 != 0) {
              uVar12 = (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8 | (uint)bVar4;
              goto LAB_01aede10;
            }
          }
          break;
        }
      }
      goto LAB_01aee094;
    }
  }
LAB_01aee074:
  uVar16 = 1;
  iVar10 = 0x10;
  iVar7 = 0xc;
  iVar11 = 8;
LAB_01aee07c:
  *(uint *)((int)param_1 + iVar11) = uVar17;
  *(undefined4 *)((int)param_1 + iVar7) = uVar14;
  *(uint *)((int)param_1 + iVar10) = unaff_r11;
  *param_1 = uVar16;
  return;
}

