// FUN_01010d08 @ 01010d08 size=828 calls_out=7 calls_in=1
// strings: File is not character device | /sys/bus/gpio | /sys/bus/gpio | Character device is not a GPIO

void FUN_01010d08(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  char *local_f0;
  code *local_ec;
  undefined4 *local_e8;
  code *local_e4;
  uint local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  char *local_80;
  char *local_7c;
  char *local_78;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  
  FUN_015f4cb8(&local_f0);
  puVar9 = (undefined4 *)((uint)&local_f0 | 4);
  if (local_f0 == (char *)0x1) {
    uVar13 = puVar9[1];
    *param_1 = *puVar9;
    param_1[1] = uVar13;
    return;
  }
  if ((local_d8 & 0xf000) != 0x2000) {
    FUN_015e79d4(param_1,0x14,"File is not character device",0x1c);
    return;
  }
  uVar10 = puVar9[9];
  local_5c = 0;
  local_3c = 0;
  local_e4 = FUN_00fac4cc;
  local_40 = uVar10 >> 0xc & 0xffffff00 | puVar9[10] << 0x14 | uVar10 & 0xff;
  local_e8 = &local_40;
  local_f0 = (char *)&local_60;
  local_ec = FUN_00fac4cc;
  local_60 = uVar10 >> 8 & 0xfff | puVar9[10] & 0xfffff000;
  FUN_00600d2c(&local_fc,&DAT_0058570b,&local_f0);
  FUN_015f4610(&local_80,local_f8,local_f4);
  if (local_fc != 0) {
    thunk_FUN_016d3fb4(local_f8);
  }
  pcVar3 = local_78;
  pcVar2 = local_7c;
  pcVar1 = local_80;
  if (local_80 == &DAT_80000000) {
    *param_1 = local_7c;
    param_1[1] = local_78;
    return;
  }
  bVar16 = false;
  if (((local_78 != (char *)0x0) && (bVar16 = *local_7c == '/', local_78 == &DAT_0000000d)) &&
     (iVar11 = thunk_FUN_016dd50a(local_7c,"/sys/bus/gpio",0xd), iVar11 == 0)) {
LAB_0101103c:
    if (pcVar1 != (char *)0x0) {
      thunk_FUN_016d3fb4(pcVar2);
    }
    *(undefined1 *)param_1 = 4;
    return;
  }
  local_64 = 0x201;
  local_d4 = 0x201;
  local_80 = pcVar2;
  local_78 = (char *)CONCAT31(local_78._1_3_,6);
  local_7c = pcVar3;
  local_d2 = 1;
  local_e8 = (undefined4 *)CONCAT31(local_e8._1_3_,6);
  local_ec = (code *)0xd;
  local_f0 = "/sys/bus/gpio";
  local_62 = bVar16;
LAB_01010eb8:
  do {
    while( true ) {
      FUN_015c7164(&local_60,&local_80);
      iVar6 = local_50;
      uVar5 = local_54;
      iVar11 = local_58;
      uVar13 = local_5c;
      uVar10 = local_60 & 0xff;
      if (uVar10 == 10) {
        FUN_015c7164(&local_40,&local_f0);
        if ((char)local_40 == '\n') goto LAB_0101103c;
        goto LAB_01010fec;
      }
      cVar4 = local_60._1_1_;
      FUN_015c7164(&local_40,&local_f0);
      iVar8 = local_30;
      uVar7 = local_34;
      uVar14 = local_40 & 0xff;
      if (uVar14 == 10) goto LAB_01010fec;
      iVar15 = uVar10 - 5;
      iVar12 = uVar14 - 5;
      if (uVar10 < 5 || iVar15 == 0) {
        iVar15 = 0;
      }
      if (uVar14 < 6) {
        iVar12 = 0;
      }
      if (iVar15 != iVar12) goto LAB_01010fec;
      if (iVar15 == 4) break;
      if ((iVar15 == 0) && (uVar14 < 6)) {
        if (uVar10 != uVar14) goto LAB_01010fec;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar10) {
        default:
          goto LAB_01010f74;
        case 1:
        case 4:
          if ((iVar11 == local_38) &&
             (iVar11 = thunk_FUN_016dd50a(uVar13,local_3c,iVar11), iVar11 == 0 && iVar6 == iVar8)) {
            iVar11 = thunk_FUN_016dd50a(uVar5,uVar7,iVar6);
            goto joined_r0x01010fd4;
          }
          goto LAB_01010fec;
        case 2:
        case 5:
          goto switchD_01010f54_caseD_2;
        }
      }
    }
LAB_01010f74:
    if (iVar11 != local_38) break;
    iVar11 = thunk_FUN_016dd50a(uVar13,local_3c,iVar11);
joined_r0x01010fd4:
  } while (iVar11 == 0);
  goto LAB_01010fec;
switchD_01010f54_caseD_2:
  if (cVar4 != local_40._1_1_) {
LAB_01010fec:
    if (pcVar1 != (char *)0x0) {
      thunk_FUN_016d3fb4(pcVar2);
    }
    FUN_015e79d4(param_1,0x14,"Character device is not a GPIO",0x1e);
    return;
  }
  goto LAB_01010eb8;
}

