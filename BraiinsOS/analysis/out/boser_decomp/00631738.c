// FUN_00631738 @ 00631738 size=544 calls_out=7 calls_in=4
// strings: 

undefined4 * FUN_00631738(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong local_270;
  uint *local_268;
  undefined1 uStack_264;
  undefined2 local_263;
  undefined1 local_261;
  undefined4 **local_260;
  code *local_25c;
  undefined *local_258;
  uint *local_248;
  int local_244;
  undefined4 local_238;
  undefined1 auStack_234 [388];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint *local_a0;
  int local_9c;
  undefined1 auStack_80 [92];
  
  uVar12 = FUN_019ef7f4(param_2);
  iVar9 = (int)(uVar12 >> 0x20);
  puVar8 = (undefined4 *)((uint)&local_260 | 0x10);
  iVar5 = 0x218;
  if ((uVar12 & 1) != 0) {
    iVar5 = 0x148;
  }
  uVar11 = *(undefined4 *)(iVar9 + iVar5);
  do {
    do {
      iVar5 = DAT_01d50474;
      uVar4 = DAT_01d50470;
      uVar6 = DAT_01d50470 + 1;
      iVar7 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar6;
    DAT_01d50474 = iVar7;
  } while (bVar2 && bVar3);
  iVar7 = 0x200;
  if ((uVar12 & 1) != 0) {
    iVar7 = 0x138;
  }
  iVar9 = iVar9 + iVar7;
  puVar10 = *(uint **)(iVar9 + 8);
  local_270 = uVar12;
  if (puVar10 == (uint *)0x0) {
LAB_00631810:
    FUN_01bed4e2((uint)auStack_80 | 4,param_1,0x54);
    local_238 = 0;
    FUN_01bed4e2(auStack_234,auStack_80,0x58);
    local_258 = &DAT_01c1a774;
    *puVar8 = 0;
    local_260 = (undefined4 **)0xcc;
    puVar8[1] = 0;
    puVar8[4] = uVar4;
    puVar8[5] = iVar5;
    local_25c = (code *)0x0;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_268 = (undefined4 *)0x0;
    local_248 = puVar10;
    local_244 = iVar9;
    local_a0 = puVar10;
    local_9c = iVar9;
    iVar9 = FUN_01be5878(&local_268,0x20,0x1e0);
    puVar10 = local_268;
    if ((iVar9 != 0) || (local_268 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x1e0);
    }
    FUN_01bed4e2(local_268,&local_260,0x1e0);
    FUN_019f02d4(&local_260,uVar11,puVar10,1,uVar12);
    if (((uint)local_260 & 0xfe) != 4) {
      uStack_264 = SUB41(local_25c,0);
      local_261 = (undefined1)((uint)local_25c >> 0x18);
      local_268 = (uint *)local_260;
      local_263 = (undefined2)((uint)local_25c >> 8);
      local_25c = FUN_019a7d7c;
      local_260 = &local_268;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_260,param_2);
    }
    FUN_00668d74(&local_270);
    return puVar10;
  }
  do {
    uVar6 = *puVar10;
    bVar2 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar2);
  *puVar10 = uVar6 + 1;
  if (-1 < (int)uVar6) {
    iVar9 = *(int *)(iVar9 + 0xc);
    do {
      uVar6 = *puVar10;
      bVar2 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar2);
    *puVar10 = uVar6 + 1;
    if (uVar6 < 0x80000000) goto LAB_00631810;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x63180c);
  (*pcVar1)();
}

