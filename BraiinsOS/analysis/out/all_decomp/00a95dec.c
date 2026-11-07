// FUN_00a95dec @ 00a95dec size=484 calls_out=11 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00a95dec(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_148 [96];
  undefined4 *local_e8;
  int *local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 *local_88;
  int *local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  
  uVar3 = FUN_00aa4b64(&local_e8);
  uVar11 = thunk_FUN_016de0ee(uVar3,0x2c0);
  puVar6 = (uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
  if ((char)puVar6[4] == '\0') {
    FUN_015f62e4(&local_88);
    *puVar6 = (uint)local_88;
    puVar6[1] = (uint)local_84;
    puVar6[2] = local_80;
    puVar6[3] = local_7c;
    *(undefined1 *)(puVar6 + 4) = 1;
  }
  uVar7 = *puVar6;
  uVar8 = puVar6[1];
  uVar9 = puVar6[2];
  uVar10 = puVar6[3];
  *puVar6 = uVar7 + 1;
  puVar6[1] = uVar8 + (0xfffffffe < uVar7);
  FUN_016dd1aa(&local_88,&local_e8,0x60);
  FUN_012b56f4(&local_e8);
  local_84 = (int *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_88 = &DAT_005674cc;
  local_78 = uVar7;
  uStack_74 = uVar8;
  uStack_70 = uVar9;
  uStack_6c = uVar10;
  FUN_016dd1aa(auStack_148,&local_88,0x60);
  FUN_00a629d8(&local_e8,auStack_148,4,0);
  FUN_0074c178(auStack_148);
  if (local_e8 != (undefined4 *)0x5) {
    local_7c = local_dc;
    local_88 = local_e8;
    local_84 = local_e4;
    local_80 = uStack_e0;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034e0b8,0x2d,&local_88,&DAT_0186dee4);
  }
  do {
    iVar4 = *local_e4;
    bVar2 = (bool)hasExclusiveAccess(local_e4);
  } while (!bVar2);
  *local_e4 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa95fd4);
    (*pcVar1)();
  }
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar5 = local_e4;
  FUN_012c72ac(&local_e8,param_1,puVar5,&DAT_0186dd8c);
  if (local_e8 != (undefined4 *)0x5) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034e068,0x26,&local_88,&DAT_0186dee4);
  }
  return local_e4;
}

