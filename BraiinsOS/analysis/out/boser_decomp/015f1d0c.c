// FUN_015f1d0c @ 015f1d0c size=1052 calls_out=6 calls_in=1
// strings: mdns_sd::service_info | mdns_sd::service_info | mdns_sd::service_info | mdns_sd::service_info

void FUN_015f1d0c(undefined4 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  uint local_84;
  int local_7c;
  undefined1 local_6d;
  char local_6c;
  byte bStack_6b;
  byte bStack_6a;
  undefined1 uStack_69;
  code *pcStack_68;
  undefined4 *local_64;
  undefined1 *local_60;
  undefined1 local_59;
  char *local_58;
  code *local_54;
  char *local_50;
  code *local_4c;
  undefined1 *local_48;
  code *local_44;
  undefined1 *local_40;
  code *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  iVar9 = param_1[0x22];
  iVar7 = param_1[0x23] * 0x14;
  do {
    iVar8 = iVar7;
    if (iVar8 == 0) break;
    iVar3 = FUN_015d0104(iVar9,param_2);
    iVar9 = iVar9 + 0x14;
    iVar7 = iVar8 + -0x14;
  } while (iVar3 == 0);
  cVar1 = *(char *)(param_2 + 0x14);
  local_6d = iVar8 != 0;
  bVar15 = cVar1 != '\x02';
  if (bVar15) {
    FUN_01bed4e2(&bStack_6b,param_2 + 0x25,0x10);
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x1a);
    bStack_6b = (byte)uVar4;
    bStack_6a = (byte)((uint)uVar4 >> 8);
    uStack_69 = (undefined1)((uint)uVar4 >> 0x10);
    pcStack_68._0_1_ = (undefined1)((uint)uVar4 >> 0x18);
  }
  bVar10 = true;
  if (*(char *)(param_1 + 0x26) == '\x01') {
    if (bVar15) {
      uVar5 = (CONCAT11(bStack_6a,bStack_6b) & 0xc0ff) - 0x80fe;
    }
    else {
      uVar5 = bStack_6b ^ 0xa9 | bStack_6a ^ 0xfe;
    }
    bVar10 = uVar5 == 0;
  }
  local_6c = bVar15;
  local_59 = bVar10;
  if (3 < DAT_01d51b00) {
    local_40 = &local_6d;
    local_48 = &local_59;
    local_3c = FUN_012fbb44;
    local_44 = FUN_012fbb44;
    local_2c = 0x15;
    local_34 = 0x15;
    local_4c = FUN_01309a48;
    local_54 = FUN_01309a48;
    local_28 = &DAT_01cfdb10;
    local_30 = "mdns_sd::service_info";
    local_38 = "mdns_sd::service_info";
    local_58 = &local_6c;
    local_50 = &local_6c;
    FUN_015fb650(&DAT_005a2764,&local_58,4,&local_38);
  }
  if ((iVar8 != 0 & bVar10) != 1) {
    if (4 < DAT_01d51b00) {
      if (cVar1 != '\x02') {
        FUN_01bed4e2((int)&local_38 + 1,param_2 + 0x25,0x10);
      }
      else {
        local_38 = (char *)(*(int *)(param_2 + 0x1a) << 8);
        local_34._0_1_ = (undefined1)((uint)*(int *)(param_2 + 0x1a) >> 0x18);
      }
      local_38 = (char *)CONCAT31(local_38._1_3_,cVar1 != '\x02');
      local_64 = param_1 + 0x18;
      local_48 = &DAT_01cfdb00;
      local_4c = (code *)0x15;
      local_54 = (code *)0x15;
      pcStack_68 = FUN_01309a48;
      local_60 = &LAB_00632348;
      local_6c = (char)&local_38;
      bStack_6b = (byte)((uint)&local_38 >> 8);
      bStack_6a = (byte)((uint)&local_38 >> 0x10);
      uStack_69 = (undefined1)((uint)&local_38 >> 0x18);
      local_50 = "mdns_sd::service_info";
      local_58 = "mdns_sd::service_info";
      FUN_015fb650(&DAT_005aae8f,&local_6c,5,&local_58);
    }
    return;
  }
  if (cVar1 != '\x02') {
    FUN_01bed4e2((uint)&local_58 | 1,param_2 + 0x25,0x10);
  }
  else {
    local_58 = (char *)(*(int *)(param_2 + 0x1a) << 8);
    local_54._0_1_ = (undefined1)((uint)*(int *)(param_2 + 0x1a) >> 0x18);
  }
  local_58 = (char *)CONCAT31(local_58._1_3_,cVar1 != '\x02');
  uVar5 = FUN_015f77ac(param_1[4],param_1[5],param_1[6],param_1[7],&local_58);
  if (param_1[2] == 0) {
    FUN_015d7a1c(param_1,param_1 + 4);
  }
  puVar13 = (uint *)*param_1;
  uVar14 = param_1[1];
  bVar15 = false;
  local_7c = 0;
  uVar12 = uVar5;
  do {
    uVar12 = uVar14 & uVar12;
    uVar11 = *(uint *)((int)puVar13 + uVar12);
    uVar6 = uVar11 ^ (uVar5 >> 0x19) * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      iVar7 = FUN_015fb920(&local_58,
                           (int)puVar13 +
                           (uVar12 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >>
                                     3) & uVar14) * -0x11 + -0x11);
      uVar6 = uVar6 - 1 & uVar6;
      if (iVar7 != 0) {
        return;
      }
    }
    uVar6 = uVar11 & 0x80808080;
    if (bVar15) {
LAB_015f1fd8:
      if ((uVar6 & uVar11 << 1) != 0) {
        uVar12 = (uint)*(char *)((int)puVar13 + local_84);
        if (-1 < (int)uVar12) {
          uVar12 = *puVar13 & 0x80808080;
          uVar6 = LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                          (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
          uVar12 = (uint)*(byte *)((int)puVar13 + (uVar6 >> 3));
          local_84 = uVar6 >> 3;
        }
        iVar7 = param_1[2];
        iVar9 = param_1[3];
        bVar2 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)puVar13 + local_84) = bVar2;
        param_1[2] = iVar7 - (uVar12 & 1);
        param_1[3] = iVar9 + 1;
        *(byte *)((int)puVar13 + (uVar14 & local_84 - 4) + 4) = bVar2;
        FUN_01bed4e2((int)puVar13 + local_84 * -0x11 + -0x11,&local_58,0x11);
        return;
      }
      bVar15 = true;
    }
    else {
      if (uVar6 != 0) {
        local_84 = uVar12 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar14;
        goto LAB_015f1fd8;
      }
      bVar15 = false;
    }
    local_7c = local_7c + 4;
    uVar12 = local_7c + uVar12;
  } while( true );
}

