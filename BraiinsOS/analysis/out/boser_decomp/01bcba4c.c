// FUN_01bcba4c @ 01bcba4c size=1000 calls_out=13 calls_in=1
// strings: 

undefined8 FUN_01bcba4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_254 [40];
  undefined1 auStack_22c [40];
  undefined1 auStack_204 [40];
  undefined1 auStack_1dc [40];
  uint local_1b4;
  uint local_1b0;
  int local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  undefined1 auStack_18c [40];
  undefined1 auStack_164 [40];
  undefined1 auStack_13c [40];
  undefined1 auStack_114 [40];
  undefined1 auStack_ec [40];
  undefined1 auStack_c4 [40];
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined1 auStack_74 [40];
  byte abStack_4c [32];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bc9860(abStack_4c,param_2,&PTR_01d3b2b0,0);
  FUN_01bc98b4(auStack_254,param_3);
  FUN_01bc9984(auStack_22c);
  FUN_01bc99bc(auStack_204);
  FUN_01bc7bb8(auStack_1dc,auStack_254);
  FUN_01bc9984(&local_1b4);
  uVar11 = 0xfe;
  uVar10 = 0;
  do {
    uVar12 = (int)(uint)abStack_4c[(int)uVar11 >> 3] >> (uVar11 & 7) & 1;
    FUN_01bc8bd8(auStack_22c,auStack_1dc,uVar10 ^ uVar12);
    FUN_01bc8bd8(auStack_204,&local_1b4,uVar10 ^ uVar12);
    FUN_01bc895c(auStack_c4,auStack_1dc,&local_1b4);
    FUN_01bc895c(&local_9c,auStack_22c,auStack_204);
    FUN_01bc88a0(auStack_13c,auStack_22c,auStack_204);
    FUN_01bc88a0(auStack_114,auStack_1dc,&local_1b4);
    FUN_01bc7bec(&local_1b4,auStack_c4,auStack_13c);
    FUN_01bc7bec(auStack_204,auStack_114,&local_9c);
    FUN_01bc829c(auStack_18c,&local_9c);
    FUN_01bc829c(auStack_164,auStack_13c);
    FUN_01bc88a0(auStack_ec,&local_1b4,auStack_204);
    FUN_01bc895c(auStack_114,&local_1b4,auStack_204);
    FUN_01bc7bec(auStack_22c,auStack_164,auStack_18c);
    FUN_01bc895c(&local_9c,auStack_164,auStack_18c);
    FUN_01bc829c(auStack_204,auStack_114);
    uVar1 = (ulonglong)local_98 * 0x1db42 + ((ulonglong)local_9c * 0x1db42 >> 0x1a);
    uVar2 = (ulonglong)local_94 * 0x1db42 + (uVar1 >> 0x19);
    uVar3 = (ulonglong)local_90 * 0x1db42 + (uVar2 >> 0x1a);
    uVar4 = (ulonglong)local_8c * 0x1db42 + (uVar3 >> 0x19);
    uVar5 = (ulonglong)local_88 * 0x1db42 + (uVar4 >> 0x1a);
    uVar6 = (ulonglong)local_84 * 0x1db42 + (uVar5 >> 0x19);
    uVar7 = (ulonglong)local_80 * 0x1db42 + (uVar6 >> 0x1a);
    uVar8 = (ulonglong)local_7c * 0x1db42 + (uVar7 >> 0x19);
    local_194 = (uint)uVar8 & 0x3ffffff;
    lVar9 = (ulonglong)local_78 * 0x1db42 + (uVar8 >> 0x1a);
    uVar10 = (uint)lVar9;
    local_190 = uVar10 & 0x1ffffff;
    local_1b4 = (uVar10 >> 0x19 | (int)((ulonglong)lVar9 >> 0x20) << 7) * 0x13 +
                ((uint)((ulonglong)local_9c * 0x1db42) & 0x3ffffff);
    uVar10 = ((uint)uVar1 & 0x1ffffff) + (local_1b4 >> 0x1a);
    local_1b4 = local_1b4 & 0x3ffffff;
    local_1b0 = uVar10 & 0x1ffffff;
    local_1a8 = (uint)uVar3 & 0x1ffffff;
    local_1ac = ((uint)uVar2 & 0x3ffffff) + (uVar10 >> 0x19);
    local_1a4 = (uint)uVar4 & 0x3ffffff;
    local_1a0 = (uint)uVar5 & 0x1ffffff;
    local_19c = (uint)uVar6 & 0x3ffffff;
    local_198 = (uint)uVar7 & 0x1ffffff;
    FUN_01bc829c(auStack_1dc,auStack_ec);
    FUN_01bc88a0(auStack_c4,auStack_18c,&local_1b4);
    FUN_01bc7bec(&local_1b4,auStack_254,auStack_204);
    FUN_01bc7bec(auStack_204,&local_9c,auStack_c4);
    bVar13 = uVar11 != 0;
    uVar11 = uVar11 - 1;
    uVar10 = uVar12;
  } while (bVar13);
  FUN_01bc8bd8(auStack_22c,auStack_1dc,uVar12);
  FUN_01bc8bd8(auStack_204,&local_1b4,uVar12);
  FUN_01bc7bb8(auStack_74,auStack_204);
  FUN_01bc8c84(auStack_204,auStack_74);
  FUN_01bc7bec(auStack_22c,auStack_22c,auStack_204);
  FUN_01bc94a0(param_1,auStack_22c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

