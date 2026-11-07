// FUN_0127c278 @ 0127c278 size=1188 calls_out=18 calls_in=1
// strings: events | events | events

void FUN_0127c278(undefined1 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar10;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  uint local_50;
  uint local_4c;
  uint local_48;
  char *local_44;
  undefined1 local_40;
  undefined4 local_3c;
  char *local_38;
  int local_34;
  char *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  uVar11 = *(uint *)(param_2 + 0x10);
  uVar12 = *(uint *)(param_2 + 0x14);
  if (uVar12 < uVar11) {
    do {
      uVar13 = *(byte *)(*(int *)(param_2 + 0xc) + uVar12) - 9;
      if ((0x17 < uVar13) || ((1 << (uVar13 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar12) != 0x6e) goto LAB_0127c2e0;
        *(uint *)(param_2 + 0x14) = uVar12 + 1;
        iVar5 = FUN_012c6b8c(param_2,"ull",3);
        if (iVar5 != 0) goto LAB_0127c6b0;
        bVar3 = 2;
        goto LAB_0127c690;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
    } while (uVar11 != uVar12);
  }
  else {
LAB_0127c2e0:
    if (uVar12 < uVar11) {
      do {
        uVar13 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar12);
        if ((0x17 < uVar13 - 9) || ((1 << (uVar13 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar13 == 0x5b) {
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar12 + 1;
              uVar14 = 0;
              bVar2 = true;
              local_2c = CONCAT31(local_2c._1_3_,1);
              local_30 = param_2;
              FUN_014db6fc(&local_3c,&local_30);
              if ((char)local_3c == '\x01') {
                pcVar6 = local_38;
              }
              else {
                if (local_3c._1_1_ == '\x01') {
                  FUN_0127e8cc(&local_3c,local_30);
                  if ((char)local_3c != '\x01') {
                    pcVar6 = (char *)((uint)local_3c >> 8 & 0xff);
                    FUN_01278b9c(&local_3c,&local_30);
                    if ((char)local_3c == '\0') {
                      uVar11 = (uint)local_3c >> 8 & 0xff;
                      if (uVar11 == 2) {
                        uVar11 = 1;
                      }
                      bVar2 = false;
                      uVar14 = (ushort)((uVar11 << 0x10) >> 8) | (ushort)pcVar6;
                      goto LAB_0127c5dc;
                    }
                  }
                  pcVar6 = local_38;
                }
                else {
                  pcVar6 = (char *)FUN_014dee0c(0,&DAT_01c257c8,&DAT_01d064b8);
                }
                uVar14 = 0;
                bVar2 = true;
              }
LAB_0127c5dc:
              param_2[0x1c] = param_2[0x1c] + '\x01';
              pcVar8 = (char *)FUN_014d9568(param_2);
              goto LAB_0127c674;
            }
          }
          else {
            if (uVar13 != 0x7b) {
              pcVar6 = (char *)FUN_012c7788(param_2,&uStack_25,&DAT_01c258b0);
              goto LAB_0127c6a8;
            }
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar12 + 1;
              local_40 = 1;
              uVar14 = 0;
              bVar2 = true;
              local_48 = 2;
              local_50 = 2;
              local_4c = 2;
              pcVar6 = (char *)0x72;
              local_44 = param_2;
              goto LAB_0127c388;
            }
          }
          local_3c = (char **)0x18;
          goto LAB_0127c31c;
        }
        uVar12 = uVar12 + 1;
        *(uint *)(param_2 + 0x14) = uVar12;
      } while (uVar11 != uVar12);
    }
  }
  local_3c = (char **)0x5;
LAB_0127c31c:
  iVar5 = FUN_012c6b30(param_2,&local_3c);
  goto LAB_0127c6b0;
LAB_0127c388:
  FUN_01278730(&local_3c,&local_44);
  if ((char)local_3c == '\x01') goto LAB_0127c658;
  if (local_3c._1_1_ != '\x01') {
    if (local_4c == 2) {
      puVar9 = &DAT_0057cd64;
LAB_0127c624:
      local_2c = 5;
      local_30 = &DAT_0053148a;
LAB_0127c634:
      local_38 = &LAB_018a13b8;
      local_3c = &local_30;
      pcVar6 = (char *)FUN_019676ac(puVar9,&local_3c);
LAB_0127c65c:
      uVar14 = 0;
      bVar2 = true;
    }
    else {
      uVar10 = (ushort)local_4c | 0x100;
      uVar14 = uVar10;
      if ((local_48 & 1) == 0) {
        uVar14 = (ushort)local_4c;
      }
      if (local_48 == 2) {
        uVar14 = uVar10;
      }
      bVar2 = false;
    }
    goto LAB_0127c660;
  }
  iVar5 = *(int *)(local_44 + 0x14);
  local_44[8] = '\0';
  local_44[9] = '\0';
  local_44[10] = '\0';
  local_44[0xb] = '\0';
  *(int *)(local_44 + 0x14) = iVar5 + 1;
  FUN_01968828(&local_3c,local_44 + 0xc);
  pcVar6 = local_38;
  if (local_3c == (char **)0x2) goto LAB_0127c65c;
  if (local_34 == 6) {
    iVar5 = thunk_FUN_01bed842(local_38,"events",6);
    if (iVar5 == 0) {
      if (local_48 != 2) {
        local_2c = 6;
        puVar9 = &DAT_005ab34f;
        local_30 = "events";
        goto LAB_0127c634;
      }
      FUN_01278b38(&local_3c,local_44);
      if ((char)local_3c == '\0') {
        local_48 = (uint)local_3c >> 8 & 0xff;
        goto LAB_0127c388;
      }
LAB_0127c658:
      pcVar6 = local_38;
      goto LAB_0127c65c;
    }
  }
  else if (local_34 == 5) {
    iVar5 = thunk_FUN_01bed842(local_38,&DAT_0053148a,5);
    pcVar8 = local_44;
    if (iVar5 == 0) {
      if (local_50 != 2) {
        puVar9 = &DAT_005ab34f;
        goto LAB_0127c624;
      }
      pcVar6 = (char *)FUN_0167459c(local_44);
      if (pcVar6 != (char *)0x0) {
        local_38 = pcVar6;
        goto LAB_0127c658;
      }
      FUN_0127e8cc(&local_3c,pcVar8);
      if ((char)local_3c == '\0') {
        local_50 = (uint)local_3c >> 8 & 0xff;
        pcVar6 = pcVar8;
        local_4c = local_50;
        goto LAB_0127c388;
      }
      goto LAB_0127c658;
    }
  }
  pcVar8 = local_44;
  pcVar7 = (char *)FUN_0167459c(local_44);
  if ((pcVar7 != (char *)0x0) || (pcVar7 = (char *)FUN_012c6c4c(pcVar8), pcVar7 != (char *)0x0))
  goto LAB_0127c58c;
  goto LAB_0127c388;
LAB_0127c58c:
  pcVar6 = pcVar7;
LAB_0127c660:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  pcVar8 = (char *)FUN_012c7b64(param_2);
LAB_0127c674:
  if (bVar2) {
    if (pcVar8 != (char *)0x0) {
      FUN_01278260();
    }
  }
  else {
    pcVar6 = pcVar8;
    if (pcVar8 == (char *)0x0) {
      param_1[2] = (byte)(uVar14 >> 8) & 1;
      bVar3 = (byte)uVar14 & 1;
LAB_0127c690:
      param_1[1] = bVar3;
      uVar4 = 0;
      goto LAB_0127c6b8;
    }
  }
LAB_0127c6a8:
  iVar5 = FUN_0127dee8(pcVar6,param_2);
LAB_0127c6b0:
  *(int *)(param_1 + 4) = iVar5;
  uVar4 = 1;
LAB_0127c6b8:
  *param_1 = uVar4;
  return;
}

