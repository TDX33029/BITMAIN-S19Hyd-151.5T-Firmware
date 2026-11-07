// FUN_01ae75f4 @ 01ae75f4 size=4272 calls_out=7 calls_in=5
// strings: 

void FUN_01ae75f4(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 uVar13;
  byte *pbVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  char local_120;
  uint *local_108;
  byte *local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  undefined4 local_f4;
  byte *local_90;
  undefined4 local_8c;
  uint *local_88;
  uint *local_84;
  byte *local_80;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  byte *local_70;
  uint local_6c;
  byte *local_68;
  uint local_64;
  byte *local_60;
  uint local_5c;
  byte *local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  
  uVar13 = 0;
  if (param_3 == 0) goto switchD_01ae79d8_default;
  if ((~*param_2 & 0x1f) == 0 || param_3 == 1) goto switchD_01ae79d8_default;
  local_8c = (uint *)(uint)param_2[1];
  if ((char)param_2[1] < '\0') {
    switch(local_8c) {
    case (uint *)0x81:
      if ((param_3 < 3) || ((uint)(int)(char)param_2[2] < 0x80000000))
      goto switchD_01ae79d8_default;
      local_8c = (uint *)(uint)param_2[2];
      uVar7 = 3;
      goto LAB_01ae7650;
    case (uint *)0x82:
      if ((param_3 < 4) || (param_2[2] == 0)) goto switchD_01ae79d8_default;
      local_8c = (uint *)(uint)CONCAT11(param_2[2],param_2[3]);
      uVar7 = 4;
      break;
    case (uint *)0x83:
      if ((param_3 < 5) || (param_2[2] == 0)) goto switchD_01ae79d8_default;
      local_8c = (uint *)((uint)param_2[3] << 8 | (uint)param_2[2] << 0x10 | (uint)param_2[4]);
      uVar7 = 5;
      break;
    case (uint *)0x84:
      if ((((param_3 < 3) || (param_3 == 3)) ||
          ((param_3 < 6 && ((0x37U >> (param_3 & 0xff) & 1) != 0)))) || (param_2[2] == 0))
      goto switchD_01ae79d8_default;
      uVar7 = 6;
      local_8c = (uint *)((uint)param_2[3] << 0x10 | (uint)param_2[2] << 0x18 |
                          (uint)param_2[4] << 8 | (uint)param_2[5]);
      break;
    default:
      goto switchD_01ae79d8_default;
    }
    if ((uint *)0xfffe < local_8c) goto switchD_01ae79d8_default;
  }
  else {
    uVar7 = 2;
  }
LAB_01ae7650:
  uVar12 = (int)local_8c + uVar7;
  if (((uVar12 < uVar7) || (param_3 < uVar12)) || (*param_2 != 0x30)) goto switchD_01ae79d8_default;
  param_2 = param_2 + uVar7;
  if (local_8c == (uint *)0x0) goto switchD_01ae79d8_default;
  if ((~*param_2 & 0x1f) == 0 || local_8c == (uint *)0x1) goto switchD_01ae79d8_default;
  uVar7 = (uint)param_2[1];
  if ((char)param_2[1] < '\0') {
    switch(uVar7) {
    case 0x81:
      if ((local_8c < (uint *)0x3) || ((uint)(int)(char)param_2[2] < 0x80000000))
      goto switchD_01ae79d8_default;
      uVar7 = (uint)param_2[2];
      puVar11 = (uint *)0x3;
      goto LAB_01ae76a8;
    case 0x82:
      if ((local_8c < (uint *)0x4) || (param_2[2] == 0)) goto switchD_01ae79d8_default;
      puVar11 = (uint *)0x4;
      uVar7 = (uint)CONCAT11(param_2[2],param_2[3]);
      break;
    case 0x83:
      if ((local_8c < (uint *)0x5) || (param_2[2] == 0)) goto switchD_01ae79d8_default;
      puVar11 = (uint *)0x5;
      uVar7 = (uint)param_2[3] << 8 | (uint)param_2[2] << 0x10 | (uint)param_2[4];
      break;
    case 0x84:
      if ((((local_8c < (uint *)0x3) || (local_8c == (uint *)0x3)) ||
          ((local_8c < (uint *)0x6 && ((0x37U >> ((uint)local_8c & 0xff) & 1) != 0)))) ||
         (param_2[2] == 0)) goto switchD_01ae79d8_default;
      puVar11 = (uint *)0x6;
      uVar7 = (uint)param_2[3] << 0x10 | (uint)param_2[2] << 0x18 | (uint)param_2[4] << 8 |
              (uint)param_2[5];
      break;
    default:
      goto switchD_01ae79d8_default;
    }
    if (0xfffe < uVar7) goto switchD_01ae79d8_default;
  }
  else {
    puVar11 = (uint *)0x2;
  }
LAB_01ae76a8:
  puVar8 = (uint *)(uVar7 + (int)puVar11);
  if ((((puVar8 < puVar11) || (local_8c < puVar8)) || (*param_2 != 0x30)) || (local_8c <= puVar8))
  goto switchD_01ae79d8_default;
  if ((~param_2[(int)puVar8] & 0x1f) == 0) goto switchD_01ae79d8_default;
  if (local_8c <= (uint *)((int)puVar8 + 1U)) goto switchD_01ae79d8_default;
  local_108 = (uint *)((int)puVar8 + 2);
  uVar16 = (uint)param_2[(int)((int)puVar8 + 1U)];
  if ((char)param_2[(int)((int)puVar8 + 1U)] < '\0') {
    puVar15 = &switchD_01ae79d8::switchdataD_01ae79dc;
    switch(uVar16) {
    case 0x81:
      if ((local_8c <= local_108) || ((uint)(int)(char)param_2[(int)local_108] < 0x80000000))
      goto switchD_01ae79d8_default;
      uVar16 = (uint)param_2[(int)local_108];
      local_108 = (uint *)((int)puVar8 + 3);
      goto LAB_01ae770c;
    case 0x82:
      if (((local_8c <= local_108) || (local_8c <= (uint *)((int)puVar8 + 3U))) ||
         (param_2[(int)local_108] == 0)) goto switchD_01ae79d8_default;
      uVar16 = (uint)CONCAT11(param_2[(int)local_108],param_2[(int)((int)puVar8 + 3U)]);
      local_108 = puVar8 + 1;
      break;
    case 0x83:
      if (local_8c <= local_108) goto switchD_01ae79d8_default;
      if (((local_8c <= (uint *)((int)puVar8 + 3U)) || (local_8c <= puVar8 + 1)) ||
         (param_2[(int)local_108] == 0)) goto switchD_01ae79d8_default;
      uVar16 = (uint)param_2[(int)((int)puVar8 + 3U)] << 8 | (uint)param_2[(int)local_108] << 0x10 |
               (uint)param_2[(int)(puVar8 + 1)];
      local_108 = (uint *)((int)puVar8 + 5);
      break;
    case 0x84:
      if (local_108 < local_8c) {
        puVar15 = (uint *)((int)puVar8 + 3);
      }
      if (local_108 >= local_8c || local_8c <= puVar15) goto switchD_01ae79d8_default;
      if (((local_8c <= puVar8 + 1) || (local_8c <= (uint *)((int)puVar8 + 5U))) ||
         (param_2[(int)local_108] == 0)) goto switchD_01ae79d8_default;
      uVar16 = (uint)param_2[(int)puVar15] << 0x10 | (uint)param_2[(int)local_108] << 0x18 |
               (uint)param_2[(int)(puVar8 + 1)] << 8 | (uint)param_2[(int)((int)puVar8 + 5U)];
      local_108 = (uint *)((int)puVar8 + 6);
      break;
    default:
      goto switchD_01ae79d8_default;
    }
    if (0xfffe < uVar16) goto switchD_01ae79d8_default;
  }
LAB_01ae770c:
  local_88 = (uint *)((int)local_108 + uVar16);
  if (((CARRY4((uint)local_108,uVar16)) || (local_8c < local_88)) || (param_2[(int)puVar8] != 0x30))
  {
switchD_01ae79d8_default:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = uVar13;
    return;
  }
  local_90 = param_2;
  FUN_01aea258(&local_f8,&local_90);
  if (local_f8 == 0) {
    uVar13 = (undefined1)local_f4;
    goto switchD_01ae79d8_default;
  }
  uVar13 = 0;
  if (local_88 != local_8c || uVar12 != param_3) goto switchD_01ae79d8_default;
  cVar2 = '\x1c';
  local_104 = param_2 + (int)puVar11;
  if (uVar7 == 0) goto switchD_01ae7f28_default;
  uVar12 = ~(uint)*local_104;
  bVar17 = (uVar12 & 0x1f) != 0;
  if (bVar17) {
    uVar12 = uVar7;
  }
  if (!bVar17 || uVar12 == 1) goto switchD_01ae7f28_default;
  local_8c = (uint *)(uint)local_104[1];
  if ((char)local_104[1] < '\0') {
    switch(local_8c) {
    case (uint *)0x81:
      if ((uVar7 < 3) || ((uint)(int)(char)local_104[2] < 0x80000000))
      goto switchD_01ae7f28_default;
      local_8c = (uint *)(uint)local_104[2];
      uVar12 = 3;
      goto LAB_01ae7b6c;
    case (uint *)0x82:
      if ((uVar7 < 4) || (local_104[2] == 0)) goto switchD_01ae7f28_default;
      local_8c = (uint *)(uint)CONCAT11(local_104[2],local_104[3]);
      uVar12 = 4;
      break;
    case (uint *)0x83:
      if (((uVar7 < 3) || (uVar7 < 5)) || (local_104[2] == 0)) goto switchD_01ae7f28_default;
      local_8c = (uint *)((uint)local_104[3] << 8 | (uint)local_104[2] << 0x10 | (uint)local_104[4])
      ;
      uVar12 = 5;
      break;
    case (uint *)0x84:
      if (((uVar7 < 3) || (uVar7 == 3)) ||
         (((uVar7 < 6 && ((0x37U >> (uVar7 & 0xff) & 1) != 0)) || (local_104[2] == 0))))
      goto switchD_01ae7f28_default;
      uVar12 = 6;
      local_8c = (uint *)((uint)local_104[3] << 0x10 | (uint)local_104[2] << 0x18 |
                          (uint)local_104[4] << 8 | (uint)local_104[5]);
      break;
    default:
      goto switchD_01ae7f28_default;
    }
    if (0xfffe < local_8c) goto switchD_01ae7f28_default;
  }
  else {
    uVar12 = 2;
  }
LAB_01ae7b6c:
  local_fc = (int)local_8c + uVar12;
  if (((CARRY4((uint)local_8c,uVar12)) || (uVar7 < local_fc)) || (*local_104 != 0xa0))
  goto switchD_01ae7f28_default;
  local_90 = local_104 + uVar12;
  cVar2 = '\0';
  local_88 = (uint *)0x0;
  local_100 = uVar7;
  uVar18 = FUN_01899080(&local_90);
  if ((((char *)uVar18 == (char *)0x0) || ((int)((ulonglong)uVar18 >> 0x20) != 1)) ||
     ((cVar2 = '\x1c', *(char *)uVar18 != '\x02' || (cVar2 = '\x1c', local_88 != local_8c))))
  goto switchD_01ae7f28_default;
  FUN_01ae7424(&local_90,&local_104);
  uVar12 = (uint)local_8c;
  pbVar14 = local_90;
  uVar7 = local_100;
  pbVar1 = local_104;
  if (local_90 == (byte *)0x0) {
LAB_01ae8050:
    cVar2 = (char)local_8c;
  }
  else {
    if (((local_fc < local_100) && (pbVar4 = local_104 + local_fc, (~*pbVar4 & 0x1f) != 0)) &&
       (local_fc + 1 < local_100)) {
      local_120 = (char)local_8c;
      uVar5 = local_fc + 2;
      uVar9 = (uint)local_104[local_fc + 1];
      if ((char)local_104[local_fc + 1] < '\0') {
        switch(uVar9) {
        case 0x81:
          if ((uVar5 < local_100) && (0x7fffffff < (uint)(int)(char)local_104[uVar5])) {
            uVar9 = (uint)local_104[uVar5];
            uVar5 = local_fc + 3;
            goto LAB_01ae7c58;
          }
          break;
        case 0x82:
          if (((uVar5 < local_100) && (local_fc + 3 < local_100)) && (local_104[uVar5] != 0)) {
            uVar9 = (uint)CONCAT11(local_104[uVar5],local_104[local_fc + 3]);
            uVar5 = local_fc + 4;
LAB_01ae81bc:
            if (uVar9 < 0xffff) goto LAB_01ae7c58;
          }
          break;
        case 0x83:
          if (((uVar5 < local_100) && (local_fc + 3 < local_100)) &&
             ((local_fc + 4 < local_100 && (local_104[uVar5] != 0)))) {
            uVar9 = (uint)local_104[local_fc + 3] << 8 | (uint)local_104[uVar5] << 0x10 |
                    (uint)local_104[local_fc + 4];
            uVar5 = local_fc + 5;
            goto LAB_01ae81bc;
          }
          break;
        case 0x84:
          if (uVar5 < local_100) {
            uVar10 = local_fc + 3;
            if ((((uVar10 < local_100) && (local_fc + 4 < local_100)) && (local_fc + 5 < local_100))
               && (local_104[uVar5] != 0)) {
              uVar9 = (uint)local_104[uVar10] << 0x10 | (uint)local_104[uVar5] << 0x18 |
                      (uint)local_104[local_fc + 4] << 8 | (uint)local_104[local_fc + 5];
              uVar5 = local_fc + 6;
              local_fc = uVar10;
              goto LAB_01ae81bc;
            }
          }
        }
      }
      else {
LAB_01ae7c58:
        uVar10 = uVar9 + uVar5;
        if (((uVar5 <= uVar10) && (uVar10 <= local_100)) && (*pbVar4 == 0x30)) {
          cVar2 = '\x1a';
          if (uVar9 != uVar16) goto switchD_01ae7f28_default;
          pbVar4 = param_2 + (int)local_108;
          iVar3 = thunk_FUN_01bed842(local_104 + uVar5,pbVar4,uVar16);
          if (iVar3 != 0) goto switchD_01ae7f28_default;
          if (((uVar10 < uVar7) && ((~pbVar1[uVar10] & 0x1f) != 0)) && (uVar10 + 1 < uVar7)) {
            local_124 = (uint)pbVar1[uVar10 + 1];
            local_128 = uVar10 + 2;
            if ((char)pbVar1[uVar10 + 1] < '\0') {
              switch(local_124) {
              case 0x81:
                if ((local_128 < uVar7) && (0x7fffffff < (uint)(int)(char)pbVar1[local_128])) {
                  local_124 = (uint)pbVar1[local_128];
                  local_128 = uVar10 + 3;
                  goto LAB_01ae7d04;
                }
                break;
              case 0x82:
                if (((local_128 < uVar7) && (uVar10 + 3 < uVar7)) && (pbVar1[local_128] != 0)) {
                  local_124 = (uint)CONCAT11(pbVar1[local_128],pbVar1[uVar10 + 3]);
                  local_128 = uVar10 + 4;
LAB_01ae8370:
                  if (local_124 < 0xffff) goto LAB_01ae7d04;
                }
                break;
              case 0x83:
                if ((local_128 < uVar7) && (uVar10 + 3 < uVar7)) {
                  if ((uVar10 + 4 < uVar7) && (pbVar1[local_128] != 0)) {
                    local_124 = (uint)pbVar1[uVar10 + 3] << 8 | (uint)pbVar1[local_128] << 0x10 |
                                (uint)pbVar1[uVar10 + 4];
                    local_128 = uVar10 + 5;
                    goto LAB_01ae8370;
                  }
                }
                break;
              case 0x84:
                if (((local_128 < uVar7) && (uVar10 + 3 < uVar7)) && (uVar10 + 4 < uVar7)) {
                  if ((uVar10 + 5 < uVar7) && (pbVar1[local_128] != 0)) {
                    local_124 = (uint)pbVar1[uVar10 + 3] << 0x10 | (uint)pbVar1[local_128] << 0x18 |
                                (uint)pbVar1[uVar10 + 4] << 8 | (uint)pbVar1[uVar10 + 5];
                    local_128 = uVar10 + 6;
                    goto LAB_01ae8370;
                  }
                }
              }
            }
            else {
LAB_01ae7d04:
              uVar5 = local_124 + local_128;
              if (((!CARRY4(local_124,local_128)) && (uVar5 <= uVar7)) &&
                 ((pbVar1[uVar10] == 0x30 &&
                  (((uVar5 < uVar7 && ((~pbVar1[uVar5] & 0x1f) != 0)) && (uVar5 + 1 < uVar7)))))) {
                uVar9 = uVar5 + 2;
                local_12c = (uint)pbVar1[uVar5 + 1];
                if ((char)pbVar1[uVar5 + 1] < '\0') {
                  switch(local_12c) {
                  case 0x81:
                    if ((uVar9 < uVar7) && (0x7fffffff < (uint)(int)(char)pbVar1[uVar9])) {
                      local_12c = (uint)pbVar1[uVar9];
                      uVar9 = uVar5 + 3;
                      goto LAB_01ae7d78;
                    }
                    break;
                  case 0x82:
                    if (((uVar9 < uVar7) && (uVar5 + 3 < uVar7)) &&
                       (pbVar6 = pbVar1 + uVar9, *pbVar6 != 0)) {
                      uVar9 = uVar5 + 4;
                      local_12c = (uint)CONCAT11(*pbVar6,pbVar1[uVar5 + 3]);
LAB_01ae84f4:
                      if (local_12c < 0xffff) goto LAB_01ae7d78;
                    }
                    break;
                  case 0x83:
                    if ((((uVar9 < uVar7) && (uVar5 + 3 < uVar7)) && (uVar5 + 4 < uVar7)) &&
                       (pbVar6 = pbVar1 + uVar9, *pbVar6 != 0)) {
                      uVar9 = uVar5 + 5;
                      local_12c = (uint)pbVar1[uVar5 + 3] << 8 | (uint)*pbVar6 << 0x10 |
                                  (uint)pbVar1[uVar5 + 4];
                      goto LAB_01ae84f4;
                    }
                    break;
                  case 0x84:
                    if (((uVar9 < uVar7) && (uVar5 + 3 < uVar7)) && (uVar5 + 4 < uVar7)) {
                      pbVar6 = pbVar1 + uVar9;
                      if ((uVar5 + 5 < uVar7) && (*pbVar6 != 0)) {
                        uVar9 = uVar5 + 6;
                        local_12c = (uint)pbVar1[uVar5 + 3] << 0x10 | (uint)*pbVar6 << 0x18 |
                                    (uint)pbVar1[uVar5 + 4] << 8 | (uint)pbVar1[uVar5 + 5];
                        goto LAB_01ae84f4;
                      }
                    }
                  }
                }
                else {
LAB_01ae7d78:
                  uVar10 = local_12c + uVar9;
                  if (((((!CARRY4(local_12c,uVar9)) && (uVar10 <= uVar7)) && (pbVar1[uVar5] == 0x30)
                       ) && ((uVar10 < uVar7 && ((~pbVar1[uVar10] & 0x1f) != 0)))) &&
                     (uVar10 + 1 < uVar7)) {
                    local_130 = uVar10 + 2;
                    uVar5 = (uint)pbVar1[uVar10 + 1];
                    if ((char)pbVar1[uVar10 + 1] < '\0') {
                      switch(uVar5) {
                      case 0x81:
                        if ((local_130 < uVar7) &&
                           (pbVar6 = pbVar1 + local_130, 0x7fffffff < (uint)(int)(char)*pbVar6)) {
                          local_130 = uVar10 + 3;
                          uVar5 = (uint)*pbVar6;
                          goto LAB_01ae7de8;
                        }
                        break;
                      case 0x82:
                        if (((local_130 < uVar7) && (uVar10 + 3 < uVar7)) &&
                           (pbVar6 = pbVar1 + local_130, *pbVar6 != 0)) {
                          local_130 = uVar10 + 4;
                          uVar5 = (uint)CONCAT11(*pbVar6,pbVar1[uVar10 + 3]);
LAB_01ae869c:
                          if (uVar5 < 0xffff) goto LAB_01ae7de8;
                        }
                        break;
                      case 0x83:
                        if ((((local_130 < uVar7) && (uVar10 + 3 < uVar7)) && (uVar10 + 4 < uVar7))
                           && (pbVar6 = pbVar1 + local_130, *pbVar6 != 0)) {
                          local_130 = uVar10 + 5;
                          uVar5 = (uint)pbVar1[uVar10 + 3] << 8 | (uint)*pbVar6 << 0x10 |
                                  (uint)pbVar1[uVar10 + 4];
                          goto LAB_01ae869c;
                        }
                        break;
                      case 0x84:
                        if (((local_130 < uVar7) && (uVar10 + 3 < uVar7)) &&
                           ((uVar10 + 4 < uVar7 &&
                            ((uVar10 + 5 < uVar7 && (pbVar6 = pbVar1 + local_130, *pbVar6 != 0))))))
                        {
                          local_130 = uVar10 + 6;
                          uVar5 = (uint)pbVar1[uVar10 + 3] << 0x10 | (uint)*pbVar6 << 0x18 |
                                  (uint)pbVar1[uVar10 + 4] << 8 | (uint)pbVar1[uVar10 + 5];
                          goto LAB_01ae869c;
                        }
                      }
                    }
                    else {
LAB_01ae7de8:
                      local_fc = uVar5 + local_130;
                      if ((!CARRY4(uVar5,local_130)) && (local_fc <= uVar7)) {
                        cVar2 = '\0';
                        if (pbVar1[uVar10] != 0x30) goto switchD_01ae7f28_default;
                        FUN_01ae98ac(&local_90,&local_104);
                        if (local_90 != (byte *)0x0) {
                          local_58 = local_90;
                          local_64 = local_12c;
                          local_6c = local_124;
                          local_60 = pbVar1 + local_130;
                          local_70 = pbVar1 + local_128;
                          local_68 = pbVar1 + uVar9;
                          local_2c = 0;
                          local_34 = 0;
                          local_3c = 0;
                          local_44 = 0;
                          local_4c = 0;
                          local_54 = (uint)local_8c;
                          local_74 = local_f4;
                          local_78 = local_f8;
                          local_90 = pbVar14;
                          local_8c = (uint *)uVar12;
                          local_88 = (uint *)param_2;
                          local_84 = puVar8;
                          local_80 = pbVar4;
                          local_7c = uVar16;
                          local_5c = uVar5;
                          local_50 = param_4;
                          if (local_fc == local_100) {
                            FUN_01bed4e2(&local_f8,(int)&local_8c + 1,0x67);
                            FUN_01bed4e2(&local_90,&local_f8,0x67);
LAB_01ae7ef4:
                            FUN_01bed4e2((int)param_1 + 5,&local_90,0x67);
                            *(char *)(param_1 + 1) = local_120;
                            *param_1 = pbVar14;
                            return;
                          }
                          cVar2 = FUN_01aea444(&local_104,&local_90);
                          pbVar14 = local_90;
                          if (cVar2 == '&') {
                            cVar2 = (char)local_8c;
                            FUN_01bed4e2(&local_f8,(int)&local_8c + 1,0x67);
                            uVar12 = local_fc;
                            uVar7 = local_100;
                            if (pbVar14 != (byte *)0x0) {
                              FUN_01bed4e2(&local_90,&local_f8,0x67);
                              local_120 = cVar2;
                              if (uVar12 != uVar7) {
                                *param_1 = 0;
                                *(undefined1 *)(param_1 + 1) = 0;
                                return;
                              }
                              goto LAB_01ae7ef4;
                            }
                          }
                          goto switchD_01ae7f28_default;
                        }
                        goto LAB_01ae8050;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    cVar2 = '\0';
  }
switchD_01ae7f28_default:
  *(char *)(param_1 + 1) = cVar2;
  *param_1 = 0;
  return;
}

