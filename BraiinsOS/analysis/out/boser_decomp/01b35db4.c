// FUN_01b35db4 @ 01b35db4 size=264 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01b35db4(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  uint local_68;
  uint local_64 [16];
  int local_24;
  
  local_24 = DAT_01d53560;
  bVar4 = param_3 == 0x11;
  if (param_3 < 0x12) {
    bVar4 = *(uint *)(param_4 + 0x18) == param_3;
  }
  if (!bVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  FUN_01b26974(&local_68,*(undefined4 *)(param_4 + 0x14),param_3 << 2);
  if (local_68 < 2) {
    puVar2 = &local_68;
    for (uVar3 = 1; uVar3 < param_3; uVar3 = uVar3 + 1) {
      puVar2 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = uVar1 - 1;
      if (uVar1 != 0) break;
    }
  }
  local_68 = local_68 - 2;
  FUN_01b35980(param_1,param_2,param_3,&local_68,param_3,param_4);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

