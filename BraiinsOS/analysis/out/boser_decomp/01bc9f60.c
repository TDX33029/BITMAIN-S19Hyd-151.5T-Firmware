// FUN_01bc9f60 @ 01bc9f60 size=604 calls_out=13 calls_in=2
// strings: 

undefined8 FUN_01bc9f60(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_8ec [40];
  undefined4 local_8c4 [10];
  undefined1 auStack_89c [40];
  undefined1 auStack_874 [160];
  undefined1 auStack_7d4 [160];
  undefined1 auStack_734 [1800];
  int local_2c;
  
  iVar7 = 0;
  puVar5 = &DAT_00563dc8;
  local_2c = DAT_01d53560;
  puVar4 = auStack_734;
  do {
    FUN_01bc8a44(auStack_874,puVar5);
    iVar7 = iVar7 + 1;
    FUN_01bc8a44(auStack_7d4,puVar5 + 0x20);
    FUN_01bc88a0(puVar4,auStack_7d4,auStack_874);
    FUN_01bc895c(puVar4 + 0x28,auStack_7d4,auStack_874);
    puVar1 = puVar4 + 0x50;
    FUN_01bc7bec(puVar1,auStack_874,auStack_7d4);
    puVar5 = puVar5 + 0x40;
    puVar4 = puVar4 + 0x78;
    FUN_01bc7bec(puVar1,puVar1,&DAT_00564188);
  } while (iVar7 != 0xf);
  uVar6 = 0x3f;
  FUN_01bc99bc(param_1);
  FUN_01bc9984(param_1 + 0x28);
  FUN_01bc9984(param_1 + 0x50);
  FUN_01bc99bc(param_1 + 0x78);
  do {
    uVar8 = 0;
    uVar2 = 0;
    do {
      iVar7 = uVar2 * 8;
      uVar3 = uVar2 & 0xff;
      uVar2 = uVar2 + 1;
      uVar8 = (uint)(char)((byte)uVar8 |
                          (byte)(((int)(uint)*(byte *)(param_2 + (uVar6 >> 3) + iVar7) >>
                                  (uVar6 & 7) & 1U) << uVar3));
    } while (uVar2 != 4);
    uVar2 = 1;
    FUN_01bc9968(local_8ec);
    FUN_01bc9968(local_8c4);
    local_8c4[0] = 1;
    FUN_01bc99bc(auStack_89c);
    puVar4 = auStack_734;
    do {
      uVar3 = uVar8 ^ uVar2;
      uVar2 = uVar2 + 1;
      uVar3 = (uVar3 - 1 & ~uVar3) >> 0x1f;
      FUN_01bc8c38(local_8ec,puVar4);
      FUN_01bc8c38(local_8c4,puVar4 + 0x28,uVar3);
      puVar1 = puVar4 + 0x50;
      puVar4 = puVar4 + 0x78;
      FUN_01bc8c38(auStack_89c,puVar1,uVar3);
    } while (uVar2 != 0x10);
    FUN_01bc8f18(auStack_874,param_1);
    FUN_01bc925c(auStack_7d4,param_1,auStack_874);
    FUN_01bc8f7c(param_1,auStack_7d4);
    FUN_01bc9120(auStack_7d4,param_1,local_8ec);
    FUN_01bc8f7c(param_1,auStack_7d4);
    bVar9 = uVar6 != 0;
    uVar6 = uVar6 - 1;
  } while (bVar9);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

