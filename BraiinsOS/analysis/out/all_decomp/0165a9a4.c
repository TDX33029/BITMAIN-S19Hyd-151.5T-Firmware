// FUN_0165a9a4 @ 0165a9a4 size=420 calls_out=7 calls_in=3
// strings: 

void FUN_0165a9a4(uint *param_1,char *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  int local_30;
  
  if (*param_2 == '\0') {
    bVar8 = (bool)hasExclusiveAccess(param_2);
    if (!bVar8) goto LAB_0165ab40;
    *param_2 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165ab40:
    FUN_01280da8(param_2);
  }
  FUN_0128236c(param_2);
  puVar3 = *(undefined1 **)(param_2 + 0x10);
  puVar2 = *(undefined1 **)(param_2 + 0x20);
  uVar5 = *(uint *)(param_2 + 8);
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar1 = uVar6;
  if (puVar2 != &DAT_3b9aca00) {
    uVar7 = *(undefined4 *)(param_2 + 0x18);
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    FUN_015f3b0c(&local_40,1);
    local_60 = local_40;
    uStack_5c = uStack_3c;
    uStack_58 = local_38;
    local_50 = uVar7;
    local_4c = uVar4;
    local_48 = puVar2;
    FUN_015f3c24(&local_40,&local_60,&local_50);
    if ((local_40 & 1) != 0) {
      local_34 = 0;
      local_38 = 0;
    }
    bVar8 = CARRY4(uVar5,local_38);
    uVar5 = uVar5 + local_38;
    uVar1 = uVar6 + local_34 + (uint)bVar8;
    if ((int)local_34 < 0 != (int)((uVar6 ^ uVar1) & ~(uVar6 ^ local_34)) < 0) {
LAB_0165aab4:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    if ((local_40 & 1) == 0) {
      puVar3 = puVar3 + local_30;
    }
    if (&DAT_3b9aca00 <= puVar3) {
      bVar8 = 0xfffffffe < uVar5;
      uVar5 = uVar5 + 1;
      uVar6 = uVar1 + bVar8;
      if ((int)((uVar1 ^ uVar6) & ~uVar1) < 0) goto LAB_0165aab4;
      puVar3 = puVar3 + -1000000000;
      uVar1 = uVar6;
    }
  }
  *param_1 = uVar5;
  param_1[1] = uVar1;
  param_1[2] = (uint)puVar3;
  FUN_01282570(param_2);
  if (*param_2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar8 = (bool)hasExclusiveAccess(param_2);
      if (bVar8) {
        *param_2 = '\0';
        return;
      }
    } while (*param_2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(param_2);
  return;
}

