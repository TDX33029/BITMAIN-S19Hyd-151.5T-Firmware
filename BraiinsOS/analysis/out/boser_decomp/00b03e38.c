// FUN_00b03e38 @ 00b03e38 size=616 calls_out=10 calls_in=0
// strings: mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs

void FUN_00b03e38(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  char local_68 [28];
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint *local_3c;
  uint uStack_38;
  uint uStack_34;
  
  uVar8 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar5 = (uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_019ae6ac(&local_40);
    *puVar5 = local_40;
    puVar5[1] = (uint)local_3c;
    puVar5[2] = uStack_38;
    puVar5[3] = uStack_34;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  local_78 = *puVar5;
  uStack_74 = puVar5[1];
  uStack_70 = puVar5[2];
  uStack_6c = puVar5[3];
  *puVar5 = local_78 + 1;
  puVar5[1] = uStack_74 + (0xfffffffe < local_78);
  local_88 = &DAT_0056d238;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  iVar6 = *param_2;
  puVar5 = (uint *)(iVar6 + 8);
  uVar3 = *(uint *)(iVar6 + 8);
  if (uVar3 < 0x3ffffffe) {
    if (*puVar5 != uVar3) {
      ClearExclusiveLocal();
      goto LAB_00b03ed8;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar5);
    if (!bVar2) goto LAB_00b03ed8;
    *puVar5 = uVar3 + 1;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00b03ed8:
    FUN_0197a5c8(puVar5);
  }
  if (*(char *)(iVar6 + 0x10) != '\0') {
    local_40 = iVar6 + 0x14;
    local_3c = puVar5;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0056c7a8,0x20,&local_40,&DAT_01c10be8,&DAT_01c10a98);
  }
  cVar1 = *(char *)(iVar6 + 0x20);
  if (cVar1 != '\x02') {
    iVar4 = thunk_FUN_01be5118(0x10);
    if (iVar4 == 0) {
      uVar7 = 0x10;
      goto LAB_00b0408c;
    }
    FUN_01bed4e2(iVar4,&DAT_00569338,0x10);
    local_44 = 0x10;
    local_4c = 0x10;
    local_40._0_2_ = CONCAT11(cVar1,1);
    local_48 = iVar4;
    FUN_01274ad8(local_68,&local_88,&local_4c,&local_40);
    if (local_68[0] != '\x06') {
      FUN_00e0febc(local_68);
    }
  }
  cVar1 = *(char *)(iVar6 + 0x21);
  if (cVar1 != '\x02') {
    iVar6 = thunk_FUN_01be5118(0xc);
    if (iVar6 == 0) {
      uVar7 = 0xc;
LAB_00b0408c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar7);
    }
    FUN_01bed4e2(iVar6,
                 "mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs"
                 ,0xc);
    local_44 = 0xc;
    local_4c = 0xc;
    local_40._0_2_ = CONCAT11(cVar1,1);
    local_48 = iVar6;
    FUN_01274ad8(local_68,&local_88,&local_4c,&local_40);
    if (local_68[0] != '\x06') {
      FUN_00e0febc(local_68);
    }
  }
  *param_1 = local_88;
  param_1[1] = uStack_84;
  param_1[2] = uStack_80;
  param_1[3] = uStack_7c;
  param_1[4] = local_78;
  param_1[5] = uStack_74;
  param_1[6] = uStack_70;
  param_1[7] = uStack_6c;
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar5;
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = uVar3 - 1;
  if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar5);
  }
  return;
}

