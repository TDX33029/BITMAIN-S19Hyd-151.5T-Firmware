// FUN_0127bdc0 @ 0127bdc0 size=1096 calls_out=18 calls_in=1
// strings: period_sPool MaxUTF-16LE | period_sPool MaxUTF-16LE | period_sPool MaxUTF-16LE

void FUN_0127bdc0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  char *local_68;
  int local_5c;
  char *local_58;
  char *local_50;
  undefined1 local_4c;
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  code *local_3c;
  undefined *local_38;
  code *local_34;
  undefined *local_30;
  code *local_2c;
  undefined1 uStack_25;
  
  uVar9 = *(uint *)(param_2 + 0x10);
  uVar10 = *(uint *)(param_2 + 0x14);
  if (uVar10 < uVar9) {
    do {
      uVar11 = *(byte *)(*(int *)(param_2 + 0xc) + uVar10) - 9;
      if ((0x17 < uVar11) || ((1 << (uVar11 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar10) != 0x6e) goto LAB_0127be28;
        *(uint *)(param_2 + 0x14) = uVar10 + 1;
        iVar3 = FUN_012c6b8c(param_2,"ull",3);
        if (iVar3 == 0) {
          uVar6 = 0;
        }
        else {
          param_1[1] = iVar3;
          uVar6 = 2;
        }
        goto LAB_0127c154;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar10;
    } while (uVar9 != uVar10);
  }
  else {
LAB_0127be28:
    if (uVar10 < uVar9) {
      do {
        uVar11 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar10);
        if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar11 == 0x5b) {
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar10 + 1;
              bVar12 = true;
              local_44 = CONCAT31(local_44._1_3_,1);
              local_48 = param_2;
              FUN_01278c94(&local_40,&local_48);
              local_68 = (char *)local_3c;
              if (local_40 != (char **)0x2) {
                if (((uint)local_40 & 1) == 0) {
                  local_68 = (char *)FUN_014dee0c(0,&DAT_01c257e8,&DAT_01d064b8);
                  bVar12 = true;
                }
                else {
                  bVar12 = false;
                }
              }
              param_2[0x1c] = param_2[0x1c] + '\x01';
              pcVar5 = (char *)FUN_014d9568(param_2);
              if (!bVar12) goto LAB_0127c0a0;
              bVar12 = pcVar5 != (char *)0x0;
              pcVar5 = local_68;
              if (bVar12) {
                FUN_01278260();
              }
              goto LAB_0127c134;
            }
          }
          else {
            if (uVar11 != 0x7b) {
              pcVar5 = (char *)FUN_012c7788(param_2,&uStack_25,&DAT_01c25850);
              goto LAB_0127c134;
            }
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar10 + 1;
              local_4c = 1;
              bVar12 = true;
              bVar2 = false;
              local_50 = param_2;
              goto LAB_0127bed0;
            }
          }
          local_40 = (char **)0x18;
          goto LAB_0127be64;
        }
        uVar10 = uVar10 + 1;
        *(uint *)(param_2 + 0x14) = uVar10;
      } while (uVar9 != uVar10);
    }
  }
  local_40 = (char **)0x5;
LAB_0127be64:
  local_68 = (char *)FUN_012c6b30(param_2,&local_40);
  goto LAB_0127c148;
LAB_0127bed0:
  FUN_01278730(&local_40,&local_50);
  if ((char)local_40 == '\x01') {
    pcVar7 = local_3c;
LAB_0127c05c:
    local_68 = (char *)pcVar7;
    bVar12 = true;
    goto LAB_0127c080;
  }
  if (local_40._1_1_ != '\x01') {
    if (!bVar2) {
      puVar8 = &DAT_0057cd64;
LAB_0127c170:
      local_3c = (code *)&LAB_018a13b8;
      local_44 = 8;
      local_40 = &local_48;
      local_48 = "period_sPool MaxUTF-16LE";
      pcVar7 = (code *)FUN_019676ac(puVar8,&local_40);
      goto LAB_0127c05c;
    }
    bVar12 = false;
    goto LAB_0127c080;
  }
  iVar3 = *(int *)(local_50 + 0x14);
  local_50[8] = '\0';
  local_50[9] = '\0';
  local_50[10] = '\0';
  local_50[0xb] = '\0';
  *(int *)(local_50 + 0x14) = iVar3 + 1;
  FUN_01968828(&local_40,local_50 + 0xc);
  pcVar7 = local_3c;
  if (local_40 == (char **)0x2) goto LAB_0127c05c;
  if ((local_38 == (undefined *)0x8) &&
     (iVar3 = thunk_FUN_01bed842(local_3c,"period_sPool MaxUTF-16LE",8), iVar3 == 0)) {
    if (bVar2) {
      puVar8 = &DAT_005ab34f;
      goto LAB_0127c170;
    }
    uVar13 = FUN_01278b74(local_50);
    local_68 = (char *)(uVar13 >> 0x20);
    if ((uVar13 & 1) != 0) {
      bVar12 = true;
      goto LAB_0127c080;
    }
    bVar2 = true;
    goto LAB_0127bed0;
  }
  pcVar5 = local_50;
  pcVar4 = (char *)FUN_0167459c(local_50);
  if ((pcVar4 != (char *)0x0) || (pcVar4 = (char *)FUN_012c6c4c(pcVar5), pcVar4 != (char *)0x0))
  goto LAB_0127c050;
  goto LAB_0127bed0;
LAB_0127c050:
  local_68 = pcVar4;
LAB_0127c080:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  pcVar5 = (char *)FUN_012c7b64(param_2);
  if (bVar12) {
    bVar12 = pcVar5 != (char *)0x0;
    pcVar5 = local_68;
    if (bVar12) {
      FUN_01278260();
    }
  }
  else {
LAB_0127c0a0:
    if (pcVar5 == (char *)0x0) {
      if ((char *)0x93954 < local_68 + -300) {
        local_40 = &local_48;
        local_30 = &DAT_005bf0bc;
        local_2c = FUN_012fd02c;
        local_34 = FUN_012fd02c;
        local_3c = FUN_012fd02c;
        local_38 = &DAT_0056f094;
        local_48 = local_68;
        FUN_00664898(&local_5c,&DAT_00589d2c,&local_40);
        if (local_5c != -0x80000000) {
          local_68 = (char *)FUN_0127dffc(&local_5c);
          goto LAB_0127c148;
        }
        local_68 = local_58;
      }
      uVar6 = 1;
      goto LAB_0127c150;
    }
  }
LAB_0127c134:
  local_68 = (char *)FUN_0127dee8(pcVar5,param_2);
LAB_0127c148:
  uVar6 = 2;
LAB_0127c150:
  param_1[1] = local_68;
LAB_0127c154:
  *param_1 = uVar6;
  return;
}

