// FUN_01824df8 @ 01824df8 size=2356 calls_out=19 calls_in=0
// strings: tls handshake eof

void FUN_01824df8(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined *puVar10;
  int local_14e4;
  undefined1 auStack_11d0 [712];
  int local_f08;
  int iStack_f04;
  undefined *puStack_f00;
  uint uStack_efc;
  int local_ef8;
  int local_ef4;
  undefined *puStack_ef0;
  uint uStack_eec;
  int local_ee8;
  int local_ee4;
  undefined *local_ee0;
  uint local_edc;
  undefined1 auStack_bf8 [736];
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined1 local_638 [784];
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  undefined *puStack_318;
  uint local_314;
  uint local_310;
  int local_30c;
  int local_308;
  undefined *local_304;
  uint local_300;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x20]) {
  case '\0':
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    iVar7 = *(int *)(param_2 + 0x18);
    param_2[0x21] = '\x01';
    param_2[0x22] = '\x01';
    *(undefined4 *)(param_2 + 0x24) = uVar6;
    *(int *)(param_2 + 0x28) = iVar7;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1e0bc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1e0bc);
  case '\x03':
    uVar6 = *(undefined4 *)(param_2 + 0x24);
    iVar7 = *(int *)(param_2 + 0x28);
    break;
  case '\x04':
    iVar7 = *(int *)(param_2 + 0x28);
    goto LAB_01824eb0;
  }
  (**(code **)(iVar7 + 0xc))(&local_310,uVar6,param_3);
  iVar5 = local_308;
  iVar7 = local_30c;
  uVar9 = local_310 & 0xffff;
  if (uVar9 == 4) {
    *param_1 = 4;
    cVar3 = '\x03';
  }
  else {
    FUN_018244e0(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28));
    if (uVar9 == 3) {
      if (iVar7 != 2) {
        piVar4 = *(int **)(param_2 + 0x1c);
        param_2[0x22] = '\0';
        param_2[0x21] = '\0';
        *(int **)(param_2 + 0x24) = piVar4;
        local_918 = *(undefined4 *)param_2;
        uStack_914 = *(undefined4 *)(param_2 + 4);
        uStack_910 = *(undefined4 *)(param_2 + 8);
        uStack_90c = *(undefined4 *)(param_2 + 0xc);
        uStack_908 = *(undefined4 *)(param_2 + 0x10);
        piVar8 = (int *)((uint)&local_ee8 | 4);
        local_edc = local_300;
        local_ee0 = local_304;
        local_ee4 = iVar5;
        local_ee8 = iVar7;
        do {
          iVar5 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar5 + 1;
        if (iVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x18258bc);
          (*pcVar1)();
        }
        FUN_018ff358(&local_310,piVar4,&local_918);
        if (local_310 == 2) {
          local_320 = local_ee8;
          local_31c = local_ee4;
          puStack_318 = local_ee0;
          local_314 = local_edc;
          FUN_0187ab4c(&local_328,0x28,&local_308);
          iVar7 = 4;
          local_ef8 = local_ee8;
          local_ef4 = local_ee4;
          puStack_ef0 = local_ee0;
          uStack_eec = local_edc;
          local_14e4 = local_328;
          iVar5 = local_324;
        }
        else {
          local_14e4 = local_30c;
          local_314 = local_310;
          FUN_01bed4e2(local_638,&local_304,0x2c4);
          local_ef8 = *piVar8;
          local_ef4 = piVar8[1];
          puStack_ef0 = (undefined *)piVar8[2];
          uStack_eec = local_314;
          iVar5 = local_308;
          local_320 = local_ef8;
          local_31c = local_ef4;
          puStack_318 = puStack_ef0;
        }
        local_f08 = local_ef8;
        iStack_f04 = local_ef4;
        puStack_f00 = puStack_ef0;
        uStack_efc = uStack_eec;
        FUN_01bed4e2(auStack_11d0,local_638,0x2c4);
        *(int *)(param_2 + 0x28) = iVar7;
        *(int *)(param_2 + 0x2c) = local_f08;
        *(int *)(param_2 + 0x30) = iStack_f04;
        *(undefined **)(param_2 + 0x34) = puStack_f00;
        *(uint *)(param_2 + 0x38) = uStack_efc;
        *(int *)(param_2 + 0x3c) = local_14e4;
        *(int *)(param_2 + 0x40) = iVar5;
        FUN_01bed4e2(param_2 + 0x44,auStack_11d0,0x2c4);
        param_2[0x308] = '\0';
LAB_01824eb0:
        iVar5 = iVar7 + -1;
        param_2[0x28] = '\x02';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        if (iVar7 == 0) {
          iVar5 = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x01824ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_01824ee8 + (&DAT_01824ee8)[iVar5]))(param_2 + 0x44);
        return;
      }
      puVar10 = local_304;
    }
    else {
      iVar5 = FUN_0183a5e4(&local_310);
      puVar10 = &DAT_01d1e658;
    }
    if (param_2[0x22] != '\0') {
      piVar4 = *(int **)(param_2 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018fa168(*(undefined4 *)(param_2 + 0x1c));
      }
    }
    if (((param_2[0x21] != '\0') && (*param_2 == '\0')) && (*(int *)(param_2 + 4) != -0x80000000)) {
      FUN_019bb7e0(*(int *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    }
    *param_1 = 3;
    param_1[1] = iVar5;
    param_1[2] = puVar10;
    FUN_01bed4e2(param_1 + 3,auStack_bf8,0x2dc);
    cVar3 = '\x01';
  }
  param_2[0x20] = cVar3;
  return;
}

