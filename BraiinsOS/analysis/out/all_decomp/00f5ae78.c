// FUN_00f5ae78 @ 00f5ae78 size=1384 calls_out=16 calls_in=1
// strings: window_duration_min | window_duration_min

/* WARNING: Removing unreachable block (ram,0x00f5b370) */
/* WARNING: Removing unreachable block (ram,0x00f5b31c) */
/* WARNING: Removing unreachable block (ram,0x00f5b32c) */
/* WARNING: Removing unreachable block (ram,0x00f5b330) */
/* WARNING: Removing unreachable block (ram,0x00f5b338) */
/* WARNING: Removing unreachable block (ram,0x00f5b33c) */

void FUN_00f5ae78(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 extraout_r1;
  uint uVar8;
  undefined1 extraout_r2;
  uint uVar9;
  uint uVar10;
  char cVar11;
  ulonglong uVar12;
  undefined1 local_54;
  undefined1 local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  char *local_44;
  undefined1 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  int local_2c;
  undefined1 uStack_25;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 0x14);
  if (uVar8 < uVar2) {
    do {
      uVar10 = *(byte *)(*(int *)(param_2 + 0xc) + uVar8) - 9;
      if ((0x17 < uVar10) || ((1 << (uVar10 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar8) != 0x6e) goto LAB_00f5aee0;
        uVar9 = uVar8 + 1;
        *(uint *)(param_2 + 0x14) = uVar9;
        uVar10 = uVar2;
        if (uVar2 < uVar9) {
          uVar10 = uVar9;
        }
        if (uVar9 < uVar2) {
          iVar5 = *(int *)(param_2 + 0xc);
          cVar11 = *(char *)(iVar5 + uVar9);
          uVar2 = uVar8 + 2;
          *(uint *)(param_2 + 0x14) = uVar2;
          if ((cVar11 == 'u') && (uVar2 != uVar10)) {
            cVar11 = *(char *)(iVar5 + uVar2);
            uVar2 = uVar8 + 3;
            *(uint *)(param_2 + 0x14) = uVar2;
            if ((cVar11 == 'l') &&
               ((uVar2 != uVar10 &&
                (cVar11 = *(char *)(iVar5 + uVar2), *(uint *)(param_2 + 0x14) = uVar8 + 4,
                cVar11 == 'l')))) {
              *(undefined1 *)(param_1 + 3) = 2;
              return;
            }
          }
        }
        uVar3 = FUN_00f4c908(param_2,&local_34);
        goto LAB_00f5b52c;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
    } while (uVar2 != uVar8);
  }
  else {
LAB_00f5aee0:
    if (uVar8 < uVar2) {
      do {
        uVar10 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar8);
        if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar10 == 0x5b) {
            cVar11 = param_2[0x1c];
            param_2[0x1c] = cVar11 + -1;
            if ((char)(cVar11 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar8 + 1;
              local_38 = CONCAT31(local_38._1_3_,1);
              local_3c = param_2;
              FUN_00f4df24(&local_34,&local_3c);
              puVar7 = (undefined4 *)0x52;
              if ((char)local_34 == '\x01') {
LAB_00f5b208:
                puVar6 = local_30;
LAB_00f5b20c:
                cVar11 = '\x02';
              }
              else {
                if (local_34._1_1_ != '\x01') {
                  puVar6 = (undefined4 *)FUN_00f2c2f0(0,&DAT_0187f220,&DAT_018ab990);
                  goto LAB_00f5b20c;
                }
                uVar12 = FUN_00f4e104(local_3c);
                puVar6 = (undefined4 *)(uVar12 >> 0x20);
                cVar11 = '\x02';
                if ((uVar12 & 1) == 0) {
                  FUN_00f4df24(&local_34,&local_3c);
                  if ((char)local_34 != '\x01') {
                    local_48 = (undefined4 *)0xa;
                    if (local_34._1_1_ == '\x01') {
                      uVar12 = FUN_00f4e104(local_3c);
                      local_48 = (undefined4 *)(uVar12 >> 0x20);
                      if ((uVar12 & 1) != 0) {
                        puVar6 = local_48;
                        goto LAB_00f5b3e0;
                      }
                    }
                    FUN_00f4df24(&local_34,&local_3c);
                    if ((char)local_34 != '\x01') {
                      puVar7 = (undefined4 *)0x64;
                      if (local_34._1_1_ == '\x01') {
                        uVar12 = FUN_00f4e104(local_3c);
                        puVar7 = (undefined4 *)(uVar12 >> 0x20);
                        if ((uVar12 & 1) != 0) {
                          puVar6 = puVar7;
                          goto LAB_00f5b3e0;
                        }
                      }
                      FUN_00f4df24(&local_34,&local_3c);
                      if ((char)local_34 != '\x01') {
                        puVar4 = (undefined4 *)((uint)local_34 >> 8 & 0xff);
                        if (puVar4 == (undefined4 *)0x1) {
                          FUN_00f54894(&local_34,local_3c);
                          if ((char)local_34 == '\x01') goto LAB_00f5b208;
                          local_50 = (undefined1)((uint)local_34 >> 0x10);
                          local_54 = (undefined1)((uint)local_34 >> 0x18);
                          puVar4 = local_30;
                          cVar11 = local_34._1_1_;
                        }
                        else {
                          cVar11 = '\x02';
                          local_54 = extraout_r2;
                          local_50 = extraout_r1;
                        }
                        if (cVar11 == '\x02') {
                          local_54 = 1;
                          puVar4 = (undefined4 *)0x1010101;
                          local_50 = 1;
                          cVar11 = '\x01';
                        }
                        local_4c = puVar4;
                        goto LAB_00f5b3e0;
                      }
                    }
                  }
                  puVar6 = local_30;
                }
              }
LAB_00f5b3e0:
              param_2[0x1c] = param_2[0x1c] + '\x01';
              puVar4 = (undefined4 *)FUN_00f4cc54(param_2);
              if (cVar11 != '\x02') {
                if (puVar4 == (undefined4 *)0x0) {
                  *(undefined4 **)((int)param_1 + 0xf) = local_4c;
                  *(undefined1 *)((int)param_1 + 0xe) = local_54;
                  *(undefined1 *)((int)param_1 + 0xd) = local_50;
                  *(char *)(param_1 + 3) = cVar11;
                  *param_1 = puVar6;
                  param_1[1] = local_48;
                  param_1[2] = puVar7;
                  return;
                }
                goto LAB_00f5b524;
              }
              if (puVar4 == (undefined4 *)0x0) goto LAB_00f5b520;
              FUN_005c3974();
              puVar7 = puVar4;
              goto LAB_00f5b518;
            }
          }
          else {
            if (uVar10 != 0x7b) {
              puVar4 = (undefined4 *)FUN_00f4db6c(param_2,&uStack_25,&DAT_0187f2f8);
              goto LAB_00f5b524;
            }
            cVar11 = param_2[0x1c];
            param_2[0x1c] = cVar11 + -1;
            if ((char)(cVar11 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar8 + 1;
              local_40 = 1;
              local_44 = param_2;
              goto LAB_00f5afbc;
            }
          }
          local_34 = (char **)0x18;
          goto LAB_00f5af1c;
        }
        uVar8 = uVar8 + 1;
        *(uint *)(param_2 + 0x14) = uVar8;
      } while (uVar2 != uVar8);
    }
  }
  local_34 = (char **)0x5;
LAB_00f5af1c:
  uVar3 = FUN_01143ab8(param_2,&local_34);
  goto LAB_00f5b52c;
  while( true ) {
    iVar5 = *(int *)(local_44 + 0x14);
    local_44[8] = '\0';
    local_44[9] = '\0';
    local_44[10] = '\0';
    local_44[0xb] = '\0';
    *(int *)(local_44 + 0x14) = iVar5 + 1;
    FUN_0157e5fc(&local_34,local_44 + 0xc,local_44);
    puVar4 = local_30;
    if (local_34 == (char **)&SUB_00000002) goto LAB_00f5b4a4;
    uVar2 = local_2c - 9U >> 1;
    if ((uVar2 | (local_2c - 9U) * -0x80000000) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00f5b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00f5b034 + *(int *)(&DAT_00f5b034 + uVar2 * 4)))();
      return;
    }
    puVar4 = (undefined4 *)FUN_00f4e360(pcVar1);
    if (puVar4 != (undefined4 *)0x0) break;
LAB_00f5afbc:
    FUN_00f4d74c(&local_34,&local_44);
    pcVar1 = local_44;
    if ((char)local_34 == '\x01') {
      puVar4 = local_30;
      goto LAB_00f5b4a4;
    }
    if (local_34._1_1_ != '\x01') {
      local_38 = 0x13;
      local_30 = &DAT_0157d360;
      local_34 = &local_3c;
      local_3c = "window_duration_min";
      puVar4 = (undefined4 *)FUN_00f56780(&DAT_0057a25d,&local_34);
      break;
    }
  }
LAB_00f5b4a4:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  puVar7 = (undefined4 *)FUN_00f4cfec(param_2);
  if (puVar7 != (undefined4 *)0x0) {
    FUN_005c3974(puVar7);
    puVar6 = puVar4;
LAB_00f5b518:
    thunk_FUN_016d3fb4(puVar7);
LAB_00f5b520:
    puVar4 = puVar6;
  }
LAB_00f5b524:
  uVar3 = FUN_011257e4(puVar4,param_2);
LAB_00f5b52c:
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 3) = 3;
  return;
}

