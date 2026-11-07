// FUN_0132d5a8 @ 0132d5a8 size=864 calls_out=0 calls_in=28
// strings: 

/* WARNING: Removing unreachable block (ram,0x0132d7c0) */

void FUN_0132d5a8(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint unaff_r5;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint local_70;
  uint local_60;
  uint local_58;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar18 = 0;
  uVar19 = 0;
  uVar4 = param_2[2];
  local_60 = param_2[4];
  local_70 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  local_58 = param_2[9];
  uVar7 = param_2[0xc];
  uVar8 = param_2[0xd];
  uVar14 = param_2[10];
  uVar21 = param_2[8];
  uVar20 = param_2[0xb];
  uVar10 = param_2[0xe];
  uVar11 = param_2[0xf];
  uVar13 = 0;
  while( true ) {
    if (uVar13 + 7 == 0x4d) {
      *(undefined1 *)(param_1 + 2) = 4;
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
    if (uVar10 == uVar11) break;
LAB_0132d648:
    pcVar9 = (char *)(uVar21 + uVar10);
    uVar15 = uVar13 & 0x3f;
    uVar10 = uVar10 + 1;
    cVar1 = *pcVar9;
    unaff_r5 = uVar15 - 0x20;
    param_2[0xe] = uVar10;
    uVar16 = (int)cVar1 & 0x7f;
    uVar12 = uVar16 >> (0x20 - uVar15 & 0xff);
    if (-1 < (int)unaff_r5) {
      uVar12 = uVar16 << (unaff_r5 & 0xff);
    }
    uVar16 = uVar16 << uVar15;
    if (-1 < (int)unaff_r5) {
      uVar16 = 0;
    }
    uVar19 = uVar12 | uVar19;
    uVar18 = uVar16 | uVar18;
    uVar13 = uVar13 + 7;
    if (-1 < cVar1) {
      param_1[2] = uVar18;
      param_1[3] = uVar19;
      *param_1 = 0;
      return;
    }
  }
  if (uVar7 == uVar14 + uVar11 && uVar8 == uVar20 + CARRY4(uVar14,uVar11)) {
    uVar12 = 0;
  }
  else {
    uVar11 = 0;
    uVar17 = 1;
    bVar22 = CARRY4(uVar14,local_58);
    uVar14 = uVar14 + local_58;
    param_2[8] = 1;
    uVar20 = uVar20 + bVar22;
    param_2[0xe] = 0;
    param_2[10] = uVar14;
    param_2[0xb] = uVar20;
    param_2[0xf] = 0;
    param_2[9] = 0;
    if (uVar2 != 0) goto LAB_0132d8d8;
    if (uVar3 == 0) {
      uVar11 = param_2[3];
      (**(code **)(uVar11 + 0x30))(uVar4);
      (**(code **)(uVar11 + 0x2c))(&local_4c,uVar4);
      unaff_r5 = local_44;
      uVar11 = local_48;
      if (local_4c != 0) {
LAB_0132d8d0:
        uVar2 = uVar11 >> 8;
        uVar17 = 0;
        goto LAB_0132d8d8;
      }
    }
    else {
      uVar11 = param_2[3] + local_58;
      if (local_60 < param_2[3] + local_58) {
        uVar11 = local_60;
      }
      param_2[3] = uVar11;
      if (local_60 <= uVar11) {
        local_34 = local_70;
        local_38 = 0;
        local_40 = uVar3;
        local_3c = uVar4;
        (**(code **)(uVar6 + 0x24))(&local_30,uVar5,&local_40);
        param_2[3] = 0;
        param_2[4] = local_38;
        local_70 = local_34;
        param_2[5] = local_34;
        if ((char)local_30 != '\x04') {
          unaff_r5 = local_2c;
          uVar11 = local_30;
          goto LAB_0132d8d0;
        }
        uVar11 = 0;
        local_60 = local_38;
      }
      local_44 = local_60 - uVar11;
      local_48 = uVar3 + uVar11;
      local_4c = 0;
    }
    uVar21 = uVar20 + CARRY4(uVar14,local_44);
    bVar22 = uVar14 + local_44 <= uVar7;
    param_2[8] = local_48;
    uVar10 = 0;
    uVar11 = local_44;
    if (uVar8 <= uVar21 && (uint)bVar22 <= uVar8 - uVar21) {
      uVar11 = uVar7 - uVar14;
    }
    param_2[9] = local_44;
    param_2[0xf] = uVar11;
    uVar12 = uVar8 - (uVar21 + !bVar22);
    unaff_r5 = local_44;
    uVar21 = local_48;
    local_58 = local_44;
    if (uVar11 != 0) goto LAB_0132d648;
  }
  uVar2 = uVar12;
  uVar11 = 0;
  uVar17 = 1;
LAB_0132d8d8:
  *(short *)((int)param_1 + 9) = (short)uVar2;
  *(char *)((int)param_1 + 0xb) = (char)(uVar2 >> 0x10);
  *(char *)(param_1 + 2) = (char)uVar11;
  param_1[1] = uVar17;
  param_1[3] = unaff_r5;
  *param_1 = 1;
  return;
}

