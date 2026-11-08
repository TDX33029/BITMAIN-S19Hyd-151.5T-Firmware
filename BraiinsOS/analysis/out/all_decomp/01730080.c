// FUN_01730080 @ 01730080 size=508 calls_out=6 calls_in=0
// strings: 

void FUN_01730080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint local_18e4;
  undefined1 auStack_18e0 [2236];
  undefined4 local_1024;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_1024 = param_1;
  iVar2 = FUN_0172c69c();
  uVar3 = iVar2 + 4;
  FUN_016dd1aa(auStack_18e0,param_3,0xcc,uVar3 * -0x33333333);
  local_18e4 = 1;
  do {
    uVar1 = 1 << (local_18e4 & 0xff);
    puVar4 = auStack_18e0 + (uVar1 - 1) * 0xcc;
    FUN_0172ed94(param_1,puVar4,auStack_18e0 + ((uVar1 >> 1) - 1) * 0xcc);
    if (9 < uVar3) {
      uVar5 = 1;
      do {
        uVar5 = uVar5 + 1;
        FUN_0172ed94(param_1,puVar4,puVar4);
      } while (uVar5 < uVar3 / 5);
    }
    uVar5 = 1;
    puVar6 = auStack_18e0;
    do {
      uVar5 = uVar5 + 1;
      FUN_0172fc4c(param_1,puVar6 + (0xcc << (local_18e4 & 0xff)),puVar4,puVar6);
      puVar6 = puVar6 + 0xcc;
    } while (uVar5 < uVar1);
    local_18e4 = local_18e4 + 1;
  } while (local_18e4 != 5);
  FUN_0172c7fc(param_1,param_2,auStack_18e0,0x1f);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return;
}

