// FUN_01416e88 @ 01416e88 size=992 calls_out=3 calls_in=2
// strings: 

void FUN_01416e88(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,uint *param_4,
                 int param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char cVar2;
  uint *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  
  local_48 = param_6;
  uStack_44 = param_7;
  local_3c = (uint *)((int)param_4 + param_5);
  if (param_5 != 0) {
    do {
      puVar7 = (uint *)((int)param_4 + 1);
      cVar1 = (char)*param_4;
      if (cVar1 != '\n') {
        if (cVar1 != '\r') {
          if ((uint)((int)local_3c - (int)param_4) < 8) {
            if ((param_4 < local_3c) &&
               ((uVar6 = 6, cVar1 != 'H' ||
                (((uint *)((int)param_4 + 1) < local_3c &&
                 ((*(char *)((int)param_4 + 1) != 'T' ||
                  (((uint *)((int)param_4 + 2) < local_3c &&
                   ((*(char *)((int)param_4 + 2) != 'T' ||
                    (((uint *)((int)param_4 + 3) < local_3c &&
                     ((*(char *)((int)param_4 + 3) != 'P' ||
                      ((param_4 + 1 < local_3c &&
                       (((char)param_4[1] != '/' ||
                        (((uint *)((int)param_4 + 5) < local_3c &&
                         ((*(char *)((int)param_4 + 5) != '1' ||
                          (((uint *)((int)param_4 + 6) < local_3c &&
                           (*(char *)((int)param_4 + 6) != '.'))))))))))))))))))))))))))
            goto LAB_014170c0;
          }
          else {
            uVar8 = param_4[1];
            uVar9 = *param_4 ^ 0x50545448;
            uVar4 = 6;
            if (uVar9 == 0 && uVar8 == 0x312e312f) {
              uVar4 = 1;
            }
            uVar6 = 0;
            if (uVar9 != 0 || uVar8 != 0x302e312f) {
              uVar6 = uVar4;
            }
            if (uVar9 != 0 || (uVar8 | 0x1000000) != 0x312e312f) goto LAB_014170c0;
            *(undefined1 *)((int)param_3 + 0x15) = uVar6;
            uVar5 = 1;
            *(undefined1 *)(param_3 + 10) = 1;
            if (local_3c <= param_4 + 2) goto LAB_014170d8;
            local_38 = (uint *)((int)param_4 + 9);
            if ((char)param_4[2] != ' ') {
              uVar4 = 6;
              goto LAB_014170d0;
            }
            cVar1 = *(char *)((int)param_2 + 3);
            if (cVar1 == '\0') goto LAB_0141709c;
            if (local_38 < local_3c) {
              if (*(char *)local_38 != ' ') goto LAB_0141709c;
              puVar7 = (uint *)((int)param_4 + 10);
              goto LAB_0141707c;
            }
          }
          break;
        }
        if (local_3c <= (uint *)((int)param_4 + 1)) break;
        if (*(char *)((int)param_4 + 1) != '\n') {
          local_34._1_1_ = 2;
          *param_1 = 2;
          goto LAB_01416fcc;
        }
        puVar7 = (uint *)((int)param_4 + 2);
      }
      param_4 = puVar7;
    } while (puVar7 < local_3c);
  }
LAB_01416f00:
  uVar5 = 1;
  goto LAB_01416f04;
  while (puVar7 = (uint *)((int)local_38 + 1), (char)*local_38 == ' ') {
LAB_0141707c:
    local_38 = puVar7;
    if (local_38 == local_3c) goto LAB_01416f00;
  }
LAB_0141709c:
  local_40 = local_38;
  uVar8 = FUN_01416cc4(&local_40);
  uVar9 = uVar8 & 0xffff;
  bVar10 = uVar9 != 2;
  if (bVar10) {
    uVar9 = uVar8 & 0x3000000;
  }
  uVar6 = (undefined1)((uVar8 & 0xff0000) >> 0x10);
  if (!bVar10) {
LAB_014170c0:
    uVar5 = 2;
    *(undefined1 *)(param_1 + 1) = uVar6;
    goto LAB_01416f04;
  }
  if ((uVar8 & 1) != 0) goto LAB_01416f00;
  param_3[1] = (ushort)(uVar9 >> 0x10) | (ushort)((uVar8 & 0xff0000) >> 0x10);
  uVar5 = 1;
  *param_3 = 1;
  if (local_3c <= local_38) goto LAB_014170d8;
  puVar7 = (uint *)((int)local_38 + 1);
  cVar2 = (char)*local_38;
  if (cVar2 == '\n') {
LAB_014171b0:
    local_38 = puVar7;
    *(undefined4 *)(param_3 + 6) = 1;
    *(undefined4 *)(param_3 + 8) = 0;
    local_40 = local_38;
  }
  else {
    if (cVar2 == '\r') {
      uVar5 = 1;
      if (local_3c <= puVar7) {
LAB_014170d8:
        *param_1 = uVar5;
        return;
      }
      puVar7 = (uint *)((int)local_38 + 2);
      if (*(char *)((int)local_38 + 1) != '\n') {
        uVar4 = 3;
LAB_014170d0:
        uVar5 = 2;
        *(undefined1 *)(param_1 + 1) = uVar4;
        goto LAB_014170d8;
      }
      goto LAB_014171b0;
    }
    if (cVar2 != ' ') {
      *param_1 = 2;
      local_34._1_1_ = 3;
      goto LAB_01416fcc;
    }
    if (cVar1 != '\0') {
      if (local_3c <= puVar7) goto LAB_01416f00;
      if (*(char *)puVar7 == ' ') {
        puVar3 = (uint *)((int)local_38 + 2);
        do {
          puVar7 = puVar3;
          if (puVar7 == local_3c) goto LAB_01416f00;
          puVar3 = (uint *)((int)puVar7 + 1);
        } while ((char)*puVar7 == ' ');
      }
    }
    local_38 = puVar7;
    local_40 = local_38;
    FUN_01416d84(&local_34,&local_40);
    if ((char)local_34 != '\0') {
      *param_1 = 2;
LAB_01416fcc:
      *(undefined1 *)(param_1 + 1) = local_34._1_1_;
      return;
    }
    if (local_30 == 0) goto LAB_01416f00;
    *(int *)(param_3 + 6) = local_30;
    *(undefined4 *)(param_3 + 8) = local_2c;
  }
  puVar3 = local_38;
  puVar7 = local_3c;
  local_26 = param_2[2];
  local_28 = *param_2;
  FUN_01416510(&local_34,&local_48,&local_40,&local_28);
  if (local_34 == 2) {
    *(undefined1 *)(param_1 + 1) = (undefined1)local_30;
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
    if ((local_34 & 1) == 0) {
      *(undefined4 *)(param_3 + 2) = local_48;
      *(undefined4 *)(param_3 + 4) = uStack_44;
      *param_1 = 0;
      param_1[1] = (char *)((int)puVar3 + local_30 + (param_5 - (int)puVar7));
      return;
    }
  }
LAB_01416f04:
  *param_1 = uVar5;
  return;
}

