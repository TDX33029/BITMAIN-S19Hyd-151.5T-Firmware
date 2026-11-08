// FUN_00d43b78 @ 00d43b78 size=816 calls_out=9 calls_in=1
// strings: Hashes | KiloHashes | MegaHashes | GigaHashes | TeraHashesTunerError

void FUN_00d43b78(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 unaff_r10;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined uStack_21;
  
  iVar7 = *(int *)(param_2 + 0x20);
  iVar9 = *(int *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  if (iVar7 == 10) {
    iVar3 = thunk_FUN_016dd50a(uVar6,"KiloHashes",10);
    bVar2 = false;
    if (iVar3 == 0) {
      unaff_r10 = 1;
    }
    else {
      iVar3 = thunk_FUN_016dd50a(uVar6,"MegaHashes",10);
      if (iVar3 == 0) {
        unaff_r10 = 2;
      }
      else {
        iVar3 = thunk_FUN_016dd50a(uVar6,"GigaHashes",10);
        if (iVar3 == 0) {
          unaff_r10 = 3;
        }
        else {
          iVar3 = thunk_FUN_016dd50a(uVar6,"TeraHashesTunerError",10);
          if (iVar3 != 0) goto LAB_00d43bc0;
          unaff_r10 = 4;
        }
      }
    }
  }
  else if ((iVar7 == 6) && (iVar3 = thunk_FUN_016dd50a(uVar6,"Hashes",6), iVar3 == 0)) {
    unaff_r10 = 0;
    bVar2 = false;
  }
  else {
LAB_00d43bc0:
    iVar7 = FUN_00c498dc(uVar6,iVar7,&DAT_018776bc,5);
    bVar2 = true;
  }
  if (iVar9 != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  cVar1 = *param_2;
  if (bVar2) {
    if (cVar1 != '\x06') {
      FUN_00d4fc54(param_2);
    }
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = iVar7;
    return;
  }
  puVar8 = (undefined8 *)(param_1 + 2);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  iVar7 = *(int *)(param_2 + 0x14);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(unaff_r10) {
  case 0:
    if (cVar1 == '\x02') {
      if (*(int *)(param_2 + 8) == 0) {
LAB_00d43c74:
        *(undefined4 *)puVar8 = uVar6;
        param_1[3] = iVar7;
        param_1[4] = 0;
        param_1[5] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      local_30 = uVar6;
      iStack_2c = iVar7;
      if (*(int *)(param_2 + 8) == 1) {
        if (iVar7 < 0) {
          local_38 = CONCAT31(local_38._1_3_,2);
          uVar6 = FUN_0157cd6c(&local_38,&uStack_21,&DAT_01873dd8);
          goto LAB_00d43ddc;
        }
        goto LAB_00d43c74;
      }
      puVar4 = &uStack_21;
      puVar5 = &DAT_01873dd8;
      local_38 = CONCAT31(local_38._1_3_,3);
    }
    else {
      if (cVar1 != '\x06') {
        uVar6 = FUN_00f36124(param_2,&uStack_21,&DAT_01873dd8);
        FUN_00c01f94(param_2);
        goto LAB_00d43ddc;
      }
      local_38 = CONCAT31(local_38._1_3_,0xd);
      puVar4 = &DAT_01878148;
      puVar5 = &DAT_018ab990;
    }
    uVar6 = FUN_0157cc00(&local_38,puVar4,puVar5);
    goto LAB_00d43ddc;
  case 1:
    FUN_00d66e60(&local_38,param_2);
    if (local_38 == 0) {
      *puVar8 = CONCAT44(iStack_2c,local_30);
      *param_1 = 1;
      param_1[1] = 0;
      return;
    }
    break;
  case 2:
    FUN_00d66e60(&local_38,param_2);
    if (local_38 == 0) {
      *puVar8 = CONCAT44(iStack_2c,local_30);
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    break;
  case 3:
    FUN_00d66e60(&local_38,param_2);
    if (local_38 == 0) {
      *puVar8 = CONCAT44(iStack_2c,local_30);
      *param_1 = 3;
      param_1[1] = 0;
      return;
    }
    break;
  case 4:
    FUN_00d66e60(&local_38,param_2);
    if (local_38 == 0) {
      *puVar8 = CONCAT44(iStack_2c,local_30);
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
  }
  uVar6 = local_34;
LAB_00d43ddc:
  *(undefined4 *)puVar8 = uVar6;
  *param_1 = 5;
  param_1[1] = 0;
  return;
}

