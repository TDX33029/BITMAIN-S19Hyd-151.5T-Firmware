// FUN_0128b87c @ 0128b87c size=1268 calls_out=4 calls_in=2
// strings: remaining data after parsing TZ string | remaining data after parsing TZ string | DST start and end rules must be provided | DST start and end rules must be provided | invalid DST start or end time

void FUN_0128b87c(uint *param_1,char *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char *local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined1 local_50 [16];
  uint local_40;
  char *local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  
  local_6c = 0;
  local_74 = param_2;
  local_70 = param_3;
  FUN_0128bd7c(&local_40,&local_74);
  pcVar8 = local_3c;
  uVar10 = local_40;
  if (local_38 == 0x3b9aca10) {
    FUN_0128bea0(&local_40,&local_74);
    uVar12 = local_40;
    if (local_38 != 0x3b9aca10) {
      *(undefined1 *)((int)param_1 + 0x2d) = 3;
      *param_1 = local_40;
LAB_0128b964:
      param_1[1] = (uint)local_3c;
      param_1[2] = local_38;
      param_1[3] = local_34;
      return;
    }
    if (local_70 == 0) {
      FUN_01288988(&local_40,-local_40,0,uVar10,pcVar8);
      if (local_40 == 0) {
        puVar5 = (uint *)((uint)&local_40 | 4);
        puVar7 = &local_68;
        local_38 = *puVar5;
        uVar10 = puVar5[1];
        uVar12 = puVar5[2];
        uVar14 = puVar5[3];
        uVar4 = 2;
      }
      else {
        puVar7 = (uint *)((uint)&local_68 | 4);
        uVar4 = 3;
        uVar10 = local_34;
        uVar12 = local_30;
        uVar14 = local_2c;
      }
      *puVar7 = local_38;
      puVar7[1] = uVar10;
      puVar7[2] = uVar12;
      puVar7[3] = uVar14;
      uVar10 = puVar7[1];
      uVar12 = puVar7[2];
      uVar14 = puVar7[3];
      *param_1 = *puVar7;
      param_1[1] = uVar10;
      param_1[2] = uVar12;
      param_1[3] = uVar14;
      *(undefined1 *)((int)param_1 + 0x2d) = uVar4;
      return;
    }
    FUN_0128bd7c(&local_40,&local_74);
    pcVar3 = local_3c;
    uVar14 = local_40;
    if (local_38 == 0x3b9aca10) {
      if (local_70 == 0) {
LAB_0128bb0c:
        *(undefined1 *)((int)param_1 + 0x2d) = 3;
        *param_1 = (uint)"DST start and end rules must be provided";
        param_1[1] = 0x28;
        param_1[2] = 0x3b9aca0e;
        return;
      }
      if (*local_74 == ',') {
        uVar13 = uVar12 - 0xe10;
      }
      else {
        FUN_0128bea0(&local_40,&local_74);
        if (local_38 != 0x3b9aca10) {
          *(undefined1 *)((int)param_1 + 0x2d) = 3;
          *param_1 = local_40;
          goto LAB_0128b964;
        }
        uVar13 = local_40;
        if (local_70 == 0) goto LAB_0128bb0c;
      }
      local_70 = local_70 + -1;
      local_6c = local_6c + 1;
      if (*local_74 == ',') {
        local_74 = local_74 + 1;
        FUN_0128bf70(&local_40,&local_74,param_4);
        pcVar2 = local_3c;
        uVar1 = local_40;
        if (local_38 != 0x3b9aca10) {
          *(undefined1 *)((int)param_1 + 0x2d) = 3;
          *param_1 = local_40;
          param_1[1] = (uint)local_3c;
          goto LAB_0128b944;
        }
        if (local_70 == 0) {
          uVar6 = 0x2501;
        }
        else {
          local_70 = local_70 + -1;
          local_6c = local_6c + 1;
          uVar6 = 0x1501;
          if (*local_74 == ',') {
            local_74 = local_74 + 1;
            FUN_0128bf70(&local_40,&local_74,param_4);
            uVar6 = local_40;
            if (local_38 == 0x3b9aca10) {
              if (local_70 != 0) {
                *(undefined1 *)((int)param_1 + 0x2d) = 3;
                *param_1 = (uint)"remaining data after parsing TZ string";
                param_1[1] = 0x26;
                param_1[2] = 0x3b9aca05;
                return;
              }
              FUN_01288988(&local_40,-uVar12,0,uVar10,pcVar8);
              if (local_40 == 1) {
                puVar7 = (uint *)((uint)&local_68 | 4);
                *puVar7 = local_38;
                puVar7[1] = local_34;
                puVar7[2] = local_30;
                puVar7[3] = local_2c;
                uVar10 = puVar7[1];
                uVar12 = puVar7[2];
                uVar14 = puVar7[3];
                *param_1 = *puVar7;
                param_1[1] = uVar10;
                param_1[2] = uVar12;
                param_1[3] = uVar14;
              }
              else {
                puVar7 = (uint *)((uint)&local_40 | 4);
                local_68 = *puVar7;
                uStack_64 = puVar7[1];
                uStack_60 = puVar7[2];
                uStack_5c = puVar7[3];
                FUN_01288988(&local_40,-uVar13,1,uVar14,pcVar3);
                if (local_40 == 1) {
                  puVar7 = (uint *)((uint)local_50 | 4);
                  *puVar7 = local_38;
                  puVar7[1] = local_34;
                  *(undefined1 *)(puVar7 + 2) = (undefined1)local_30;
                  uVar10 = puVar7[1];
                  *param_1 = *puVar7;
                  param_1[1] = uVar10;
                  uVar10 = puVar7[2];
                  param_1[3] = local_2c;
                  *(undefined2 *)((int)param_1 + 10) = local_30._2_2_;
                  *(char *)((int)param_1 + 9) = local_30._1_1_;
                  *(char *)(param_1 + 2) = (char)uVar10;
                }
                else {
                  puVar7 = (uint *)((uint)&local_40 | 4);
                  uVar12 = *puVar7;
                  uVar14 = puVar7[1];
                  uVar13 = puVar7[2];
                  uVar10 = puVar7[3];
                  pcVar8 = local_3c;
                  if ((int)local_3c < 0) {
                    pcVar8 = (char *)-(int)local_3c;
                  }
                  pcVar3 = pcVar2;
                  if ((int)pcVar2 < 0) {
                    pcVar3 = (char *)-(int)pcVar2;
                  }
                  pcVar9 = (char *)0x1d;
                  pcVar11 = "invalid DST start or end time";
                  uVar15 = 0x3b9aca0c;
                  if ((pcVar3 < (char *)0x93a80) && (pcVar8 < (char *)0x93a80)) {
                    if (local_30._1_1_ != '\x02') {
                      param_1[4] = local_68;
                      param_1[5] = uStack_64;
                      param_1[6] = uStack_60;
                      param_1[7] = uStack_5c;
                      param_1[8] = uVar12;
                      param_1[9] = uVar14;
                      param_1[10] = uVar13;
                      *param_1 = (uint)pcVar2;
                      param_1[1] = (uint)local_3c;
                      *(undefined2 *)((int)param_1 + 0x2e) = local_30._2_2_;
                      *(char *)((int)param_1 + 0x2d) = local_30._1_1_;
                      param_1[2] = uVar1;
                      param_1[3] = uVar6;
                      *(char *)(param_1 + 0xb) = (char)uVar10;
                      return;
                    }
                    pcVar9 = local_3c;
                    pcVar11 = pcVar2;
                    uVar15 = uVar1;
                  }
                  *param_1 = (uint)pcVar11;
                  param_1[1] = (uint)pcVar9;
                  param_1[2] = uVar15;
                  param_1[3] = uVar6;
                }
              }
              *(undefined1 *)((int)param_1 + 0x2d) = 3;
              return;
            }
            *(undefined1 *)((int)param_1 + 0x2d) = 3;
            *param_1 = local_40;
            param_1[1] = (uint)local_3c;
            goto LAB_0128b944;
          }
        }
        *(undefined1 *)((int)param_1 + 0x2d) = 3;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2d) = 3;
        uVar6 = 0x1501;
      }
      *param_1 = uVar6;
      param_1[1] = 0;
      param_1[2] = 0x3b9aca06;
      return;
    }
    *(undefined1 *)((int)param_1 + 0x2d) = 3;
    *param_1 = local_40;
    param_1[1] = (uint)local_3c;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x2d) = 3;
    *param_1 = local_40;
    param_1[1] = (uint)local_3c;
  }
LAB_0128b944:
  param_1[2] = local_38;
  param_1[3] = local_34;
  return;
}

