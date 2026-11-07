// FUN_01b3fcec @ 01b3fcec size=428 calls_out=6 calls_in=0
// strings: 

void FUN_01b3fcec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_18e0 [2236];
  undefined4 local_1024;
  int local_2c;
  
  uVar5 = 1;
  local_2c = DAT_01d53560;
  local_1024 = param_1;
  iVar2 = FUN_01b3d290();
  FUN_01bed4e2(auStack_18e0,param_3,0xcc);
  do {
    uVar1 = 1 << (uVar5 & 0xff);
    puVar4 = auStack_18e0 + (uVar1 - 1) * 0xcc;
    FUN_01b3ee18(param_1,puVar4,auStack_18e0 + ((uVar1 >> 1) - 1) * 0xcc);
    for (uVar6 = 1; uVar6 < (iVar2 + 4U) / 5; uVar6 = uVar6 + 1) {
      FUN_01b3ee18(param_1,puVar4,puVar4);
    }
    uVar6 = 1;
    puVar3 = auStack_18e0;
    do {
      uVar6 = uVar6 + 1;
      FUN_01b3f8c0(param_1,puVar3 + (0xcc << (uVar5 & 0xff)),puVar4);
      puVar3 = puVar3 + 0xcc;
    } while (uVar6 < uVar1);
    uVar5 = uVar5 + 1;
  } while (uVar5 != 5);
  FUN_01b3d3e8(param_1,param_2,auStack_18e0,0x1f);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

