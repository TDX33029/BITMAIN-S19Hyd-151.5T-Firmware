// FUN_00909378 @ 00909378 size=2288 calls_out=18 calls_in=1
// strings: 

void FUN_00909378(undefined4 *param_1,undefined *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined **unaff_r8;
  undefined4 *puVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined4 *unaff_s24;
  undefined8 unaff_d13;
  undefined **local_98;
  undefined **local_94;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 uStack_64;
  undefined *local_60;
  undefined4 local_5c;
  
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar11 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar12 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar11);
      if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar12 == 0x5b) {
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar11 + 1;
            local_5c = CONCAT31(local_5c._1_3_,1);
            local_60 = param_2;
            FUN_005e5d80(&local_70,&local_60);
            if ((char)local_70 == '\x01') goto LAB_009098b0;
            if (local_70._1_1_ == '\x01') {
              FUN_008fab2c(&local_70,local_60);
              if (local_70 == (undefined **)&DAT_00000001) {
LAB_009098b0:
                local_68 = local_6c;
                goto LAB_009098b4;
              }
              unaff_d8 = CONCAT44(uStack_64,local_68);
              FUN_005e5d80(&local_70,&local_60);
              if ((char)local_70 == '\x01') goto LAB_009098b0;
              if (local_70._1_1_ != '\x01') {
                uVar6 = 1;
                goto LAB_00909980;
              }
              FUN_008fab2c(&local_70,local_60);
              if (local_70 == (undefined **)&DAT_00000001) goto LAB_009098b0;
              unaff_d9 = CONCAT44(uStack_64,local_68);
              FUN_005e5d80(&local_70,&local_60);
              if ((char)local_70 == '\x01') goto LAB_009098b0;
              if (local_70._1_1_ != '\x01') {
                uVar6 = 2;
                goto LAB_00909980;
              }
              FUN_008fab2c(&local_70,local_60);
              if (local_70 == (undefined **)&DAT_00000001) goto LAB_009098b0;
              unaff_d10 = CONCAT44(uStack_64,local_68);
              FUN_005e5d80(&local_70,&local_60);
              if ((char)local_70 == '\x01') goto LAB_009098b0;
              if (local_70._1_1_ != '\x01') {
                uVar6 = 3;
                goto LAB_00909980;
              }
              FUN_008fab2c(&local_70,local_60);
              if (local_70 == (undefined **)&DAT_00000001) goto LAB_009098b0;
              unaff_d11 = CONCAT44(uStack_64,local_68);
              FUN_005e5d80(&local_70,&local_60);
              if ((char)local_70 == '\x01') goto LAB_009098b0;
              if (local_70._1_1_ != '\x01') {
                uVar6 = 4;
                goto LAB_00909980;
              }
              FUN_00943ad8(&local_70,local_60);
              puVar13 = local_6c;
              local_94 = local_70;
              if (local_70 == (undefined **)&SUB_00000002 && local_6c == (undefined4 *)0x0) {
                goto LAB_009098b4;
              }
              FUN_005e5d80(&local_70,&local_60);
              if ((char)local_70 == '\x01') goto LAB_009098b0;
              if (local_70._1_1_ != '\x01') {
                uVar6 = 5;
                goto LAB_00909980;
              }
              FUN_00944944(&local_70,local_60);
              unaff_r8 = local_70;
              if (local_70 == (undefined **)&SUB_00000002) goto LAB_009098b0;
              local_78 = CONCAT44(uStack_64,local_68);
              unaff_s24 = local_6c;
            }
            else {
              uVar6 = 0;
LAB_00909980:
              local_68 = (undefined4 *)FUN_00f2c2f0(uVar6,&DAT_01867410,&DAT_018ab990);
LAB_009098b4:
              puVar13 = (undefined4 *)0x0;
              local_94 = (undefined **)&SUB_00000002;
              local_78 = CONCAT44(local_78._4_4_,local_68);
            }
            local_80._0_4_ = (int)local_78;
            local_80._4_4_ = local_78._4_4_;
            param_2[0x24] = param_2[0x24] + '\x01';
            iVar10 = FUN_008fad50(param_2);
            iVar7 = (int)local_80;
            if (local_94 != (undefined **)&SUB_00000002 || puVar13 != (undefined4 *)0x0)
            goto LAB_00909a60;
            if (iVar10 == 0) goto LAB_00909abc;
            FUN_005c3974(iVar10);
            goto LAB_00909ab0;
          }
        }
        else {
          if (uVar12 != 0x7b) {
            local_80._0_4_ = FUN_005b8238(param_2,&local_70,&DAT_01867508);
            goto LAB_00909abc;
          }
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar11 + 1;
            unaff_r8 = (undefined **)&local_70;
            local_78 = CONCAT35(local_78._5_3_,0x100000000);
            local_98 = (undefined **)&SUB_00000002;
            puVar13 = (undefined4 *)0x0;
            local_94 = (undefined **)&SUB_00000002;
            bVar2 = false;
            local_78 = CONCAT44(local_78._4_4_,param_2);
            bVar5 = false;
            bVar4 = false;
            bVar3 = false;
            goto LAB_00909450;
          }
        }
        local_70 = (undefined **)0x18;
        goto LAB_009093d8;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar11;
    } while (*(uint *)(param_2 + 0x10) != uVar11);
  }
  local_70 = (undefined **)0x5;
LAB_009093d8:
  uVar6 = FUN_008f9984(param_2,&local_70);
  goto LAB_00909ac4;
LAB_00909450:
LAB_00909454:
  FUN_008fa450(unaff_r8,&local_78);
  puVar8 = local_6c;
  if ((char)local_70 == '\x01') goto LAB_00909a30;
  if (local_70._1_1_ != '\x01') {
    if (!bVar2) {
      puVar9 = &DAT_0057a25d;
      goto LAB_00909998;
    }
    if (!bVar3) {
      puVar9 = &DAT_0057a25d;
LAB_009099bc:
      local_5c = 10;
      local_60 = &DAT_00359437;
      goto LAB_00909a14;
    }
    if (!bVar4) {
      puVar9 = &DAT_0057a25d;
      goto LAB_009099e0;
    }
    if (!bVar5) {
      puVar9 = &DAT_0057a25d;
      goto LAB_00909a04;
    }
    unaff_r8 = (undefined **)0x0;
    if (local_98 != (undefined **)&SUB_00000002) {
      unaff_r8 = local_98;
    }
    local_80 = unaff_d13;
    if (local_94 == (undefined **)&SUB_00000002 && puVar13 == (undefined4 *)0x0) {
      local_94 = (undefined **)0x0;
      puVar13 = (undefined4 *)0x0;
    }
    goto LAB_00909a38;
  }
  iVar10 = (int)local_78;
  *(undefined4 *)((int)local_78 + 8) = 0;
  *(int *)((int)local_78 + 0x14) = *(int *)((int)local_78 + 0x14) + 1;
  FUN_0157e384(unaff_r8,(int)local_78 + 0xc,(int)local_78);
  puVar8 = local_6c;
  if (local_70 == (undefined **)&SUB_00000002) goto LAB_00909a30;
  switch(local_68) {
  case (undefined4 *)0xa:
    iVar7 = thunk_FUN_016dd50a(local_6c,&DAT_00359437,10);
    if (iVar7 == 0) {
      if (bVar3) {
        puVar9 = &DAT_00582dbd;
        goto LAB_009099bc;
      }
      puVar8 = (undefined4 *)FUN_01114eb4(iVar10);
      if ((puVar8 != (undefined4 *)0x0) ||
         (FUN_008fab2c(unaff_r8,iVar10), puVar8 = local_6c, local_70 == (undefined **)&DAT_00000001)
         ) goto LAB_00909a30;
      unaff_d9 = CONCAT44(uStack_64,local_68);
      bVar3 = true;
      goto LAB_00909454;
    }
    break;
  case (undefined4 *)0xb:
    iVar7 = thunk_FUN_016dd50a(local_6c,&DAT_0035945a,0xb);
    if (iVar7 == 0) {
      if (local_94 != (undefined **)&SUB_00000002 || puVar13 != (undefined4 *)0x0) {
        local_5c = 0xb;
        puVar9 = &DAT_00582dbd;
        local_60 = &DAT_0035945a;
        goto LAB_00909a14;
      }
      puVar8 = (undefined4 *)FUN_01114eb4(iVar10);
      if (puVar8 != (undefined4 *)0x0) goto LAB_00909a30;
      FUN_00943ad8(unaff_r8,iVar10);
      local_94 = local_70;
      puVar8 = local_68;
      if (local_70 == (undefined **)&SUB_00000002 && local_6c == (undefined4 *)0x0)
      goto LAB_00909a30;
      unaff_d13 = CONCAT44(uStack_64,local_68);
      puVar13 = local_6c;
      goto LAB_00909454;
    }
    break;
  case (undefined4 *)0xd:
    iVar7 = thunk_FUN_016dd50a(local_6c,&DAT_0035942a,0xd);
    if (iVar7 == 0) goto LAB_00909730;
    break;
  case (undefined4 *)0x10:
    iVar7 = thunk_FUN_016dd50a(local_6c,&DAT_00564970,0x10);
    if (iVar7 == 0) {
      if (bVar4) {
        puVar9 = &DAT_00582dbd;
LAB_009099e0:
        local_5c = 0x10;
        local_60 = &DAT_00564970;
        goto LAB_00909a14;
      }
      puVar8 = (undefined4 *)FUN_01114eb4(iVar10);
      if ((puVar8 != (undefined4 *)0x0) ||
         (FUN_008fab2c(unaff_r8,iVar10), puVar8 = local_6c, local_70 == (undefined **)&DAT_00000001)
         ) goto LAB_00909a30;
      unaff_d10 = CONCAT44(uStack_64,local_68);
      bVar4 = true;
      goto LAB_00909454;
    }
    break;
  case (undefined4 *)0x19:
    iVar7 = thunk_FUN_016dd50a(local_6c,&DAT_00359441,0x19);
    if (iVar7 == 0) {
      if (!bVar5) {
        puVar8 = (undefined4 *)FUN_01114eb4(iVar10);
        if ((puVar8 == (undefined4 *)0x0) &&
           (FUN_008fab2c(unaff_r8,iVar10), puVar8 = local_6c,
           local_70 != (undefined **)&DAT_00000001)) goto code_r0x009096e0;
        goto LAB_00909a30;
      }
      puVar9 = &DAT_00582dbd;
LAB_00909a04:
      local_5c = 0x19;
      local_60 = &DAT_00359441;
      goto LAB_00909a14;
    }
    iVar7 = thunk_FUN_016dd50a(puVar8,&DAT_00359465,0x19);
    if (iVar7 != 0) break;
    if (local_98 != (undefined **)&SUB_00000002) {
      local_5c = 0x19;
      puVar9 = &DAT_00582dbd;
      local_60 = &DAT_00359465;
      goto LAB_00909a14;
    }
    puVar8 = (undefined4 *)FUN_01114eb4(iVar10);
    if (puVar8 != (undefined4 *)0x0) goto LAB_00909a30;
    FUN_00944944(unaff_r8,iVar10);
    local_98 = local_70;
    puVar8 = local_6c;
    if (local_70 == (undefined **)&SUB_00000002) goto LAB_00909a30;
    unaff_s24 = local_6c;
    goto LAB_00909454;
  }
  puVar8 = (undefined4 *)FUN_01114eb4(iVar10);
  if ((puVar8 != (undefined4 *)0x0) ||
     (puVar8 = (undefined4 *)FUN_008f9ac0(iVar10), puVar8 != (undefined4 *)0x0)) goto LAB_00909a30;
  goto LAB_00909454;
code_r0x009096e0:
  unaff_d11 = CONCAT44(uStack_64,local_68);
  bVar5 = true;
  goto LAB_00909454;
LAB_00909730:
  if (!bVar2) {
    puVar8 = (undefined4 *)FUN_01114eb4(iVar10);
    if ((puVar8 != (undefined4 *)0x0) ||
       (FUN_008fab2c(unaff_r8,iVar10), puVar8 = local_6c, local_70 == (undefined **)&DAT_00000001))
    goto LAB_00909a30;
    unaff_d8 = CONCAT44(uStack_64,local_68);
    bVar2 = true;
    goto LAB_00909450;
  }
  puVar9 = &DAT_00582dbd;
LAB_00909998:
  local_5c = 0xd;
  local_60 = &DAT_0035942a;
LAB_00909a14:
  local_6c = &DAT_0157d360;
  local_70 = &local_60;
  puVar8 = (undefined4 *)FUN_00f56780(puVar9,&local_70);
LAB_00909a30:
  local_80 = CONCAT44(local_80._4_4_,puVar8);
  puVar13 = (undefined4 *)0x0;
  local_94 = (undefined **)&SUB_00000002;
LAB_00909a38:
  param_2[0x24] = param_2[0x24] + '\x01';
  iVar10 = FUN_008fb5ec(param_2);
  iVar7 = (int)local_80;
  if (local_94 == (undefined **)&SUB_00000002 && puVar13 == (undefined4 *)0x0) {
    if (iVar10 != 0) {
      FUN_005c3974(iVar10);
LAB_00909ab0:
      thunk_FUN_016d3fb4(iVar10);
    }
  }
  else {
LAB_00909a60:
    local_80._0_4_ = iVar10;
    if ((int)local_80 == 0) {
      param_1[5] = unaff_s24;
      *param_1 = local_94;
      param_1[1] = puVar13;
      *(undefined8 *)(param_1 + 6) = unaff_d8;
      *(undefined8 *)(param_1 + 8) = unaff_d9;
      *(undefined8 *)(param_1 + 10) = unaff_d10;
      *(undefined8 *)(param_1 + 0xc) = unaff_d11;
      param_1[2] = iVar7;
      param_1[3] = local_80._4_4_;
      param_1[4] = unaff_r8;
      return;
    }
  }
LAB_00909abc:
  uVar6 = FUN_00e959bc((int)local_80,param_2);
LAB_00909ac4:
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = uVar6;
  return;
}

