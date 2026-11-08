// FUN_00719744 @ 00719744 size=900 calls_out=0 calls_in=1
// strings: 

void FUN_00719744(undefined4 *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 uStack_29;
  
  if (param_3 == 0) {
    param_1[8] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_2;
    param_1[3] = 0;
    param_1[4] = param_2;
    param_1[6] = param_2;
    param_1[5] = 0;
    param_1[7] = 0;
    FUN_01bed93e(param_1 + 9,0,0x12);
    return;
  }
  if (param_3 < 4) {
LAB_0071975c:
    param_1[4] = param_2;
    *(undefined2 *)((int)param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    param_1[3] = param_2;
    param_1[5] = 0;
  }
  else {
    uVar6 = 2;
    puVar13 = param_2 + 1;
    uVar7 = *param_2;
    if (uVar7 != 2) {
      uVar6 = 5;
      if ((uVar7 & 0xffff) != 5) {
        *(undefined1 *)(param_1 + 2) = 0x11;
        *(undefined1 *)param_1 = 10;
        param_1[4] = uVar7 & 0xffff;
        param_1[5] = 0;
        return;
      }
    }
    uVar8 = param_3 & 0xfffffffc;
    if (uVar8 != 4) {
      if (uVar8 == 8) {
        param_2 = param_2 + 2;
      }
      else {
        if (uVar8 != 0xc) {
          uVar8 = param_2[3];
          puVar13 = param_2 + 4;
          uVar15 = param_2[1];
          param_3 = param_3 - 0x10;
          uVar9 = param_2[2];
          if (uVar8 == 0) {
            uVar2 = 0;
            local_3c = 0;
            puVar10 = puVar13;
LAB_007198f4:
            local_34 = 0;
            local_38 = 0;
            if (8 < uVar15) {
              *(undefined1 *)param_1 = 10;
              uVar1 = 0x4a;
LAB_00719920:
              *(undefined1 *)(param_1 + 2) = uVar1;
              return;
            }
            puVar11 = (uint *)((int)puVar10 + local_3c);
            uVar5 = param_3 - local_3c;
            uVar3 = uVar5;
            if (uVar15 != 0) {
              uVar3 = param_3 - (local_3c + uVar15 * 4);
              uVar1 = 0x4d;
              puVar12 = puVar11;
              puVar14 = &local_38;
              uVar17 = uVar15;
              do {
                if (uVar5 < 4) {
                  *(undefined2 *)((int)param_1 + 9) = 0;
                  *(undefined1 *)((int)param_1 + 0xb) = 0;
                  param_1[3] = puVar12;
                  goto LAB_00719a60;
                }
                puVar11 = puVar12 + 1;
                uVar16 = *puVar12 - 1;
                if (uVar7 == 2) {
                  puVar4 = &UNK_00570fe0;
                  if (7 < uVar16) {
                    uVar1 = 0x4e;
                    goto LAB_00719a78;
                  }
                }
                else if ((7 < uVar16) ||
                        (puVar4 = &UNK_00570890, (0xfdU >> (uVar16 & 0xff) & 1) == 0)) {
LAB_00719a78:
                  param_1[3] = *puVar12;
                  *(undefined1 *)(param_1 + 2) = uVar1;
                  goto LAB_00719840;
                }
                uVar5 = uVar5 - 4;
                uVar17 = uVar17 - 1;
                *(undefined *)puVar14 = puVar4[uVar16];
                puVar12 = puVar11;
                puVar14 = (undefined4 *)((int)puVar14 + 1);
              } while (uVar17 != 0);
            }
            uVar5 = (uint)((ulonglong)uVar15 * (ulonglong)uVar9);
            uVar7 = (uint)((ulonglong)uVar15 * (ulonglong)uVar9 >> 0x20);
            if (uVar7 == 0 && (0x3fffffff < uVar5) <= uVar7) {
              if (uVar5 << 2 <= uVar3) {
                uVar7 = uVar5 * 4;
                puVar12 = puVar11 + uVar5;
                if (uVar7 <= uVar3 + uVar5 * -4) {
                  *param_1 = local_38;
                  param_1[1] = local_34;
                  param_1[2] = puVar13;
                  *(undefined2 *)(param_1 + 0xd) = uVar6;
                  param_1[3] = uVar2;
                  param_1[8] = puVar12;
                  param_1[9] = uVar7;
                  param_1[10] = uVar15;
                  param_1[4] = puVar10;
                  param_1[0xb] = uVar9;
                  param_1[0xc] = uVar8;
                  param_1[5] = local_3c;
                  param_1[6] = puVar11;
                  param_1[7] = uVar7;
                  return;
                }
                param_1[3] = puVar12;
                param_1[4] = puVar12;
                goto LAB_00719834;
              }
LAB_00719a24:
              param_1[3] = puVar11;
              puVar12 = puVar11;
LAB_00719a60:
              param_1[4] = puVar12;
              goto LAB_00719834;
            }
          }
          else {
            if ((uVar8 <= uVar9) || ((uVar8 & uVar8 - 1) != 0)) {
              *(undefined1 *)param_1 = 10;
              uVar1 = 0x4b;
              goto LAB_00719920;
            }
            if (uVar8 < 0x20000000) {
              uVar2 = uVar8 * 8;
              if (param_3 < uVar2) {
                param_1[3] = puVar13;
                param_1[4] = puVar13;
                goto LAB_00719834;
              }
              param_3 = param_3 + uVar8 * -8;
              puVar11 = puVar13 + uVar8 * 2;
              if (uVar8 << 2 <= param_3) {
                local_3c = uVar8 << 2;
                puVar10 = puVar11;
                goto LAB_007198f4;
              }
              goto LAB_00719a24;
            }
          }
          uVar1 = 0x38;
          goto LAB_0071983c;
        }
        param_2 = param_2 + 3;
      }
      goto LAB_0071975c;
    }
    param_1[4] = puVar13;
    uStack_29 = (undefined1)((uint)((int)puVar13 * 0x1000000) >> 0x18);
    *(undefined2 *)((int)param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    param_1[3] = CONCAT13((char)((uint)puVar13 >> 0x18),
                          CONCAT21((short)((uint)puVar13 >> 8),uStack_29));
LAB_00719834:
    param_1[5] = 0;
  }
  uVar1 = 0x13;
LAB_0071983c:
  *(undefined1 *)(param_1 + 2) = uVar1;
LAB_00719840:
  *(undefined1 *)param_1 = 10;
  return;
}

