// FUN_01b62484 @ 01b62484 size=272 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01b62484(int param_1,undefined4 param_2,int param_3)

{
  undefined1 extraout_r2;
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 auStack_140 [32];
  undefined2 local_120;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined2 local_60;
  int local_24;
  
  iVar1 = 0;
  local_24 = DAT_01d53560;
  puVar2 = auStack_140;
  do {
    iVar1 = iVar1 + 1;
    FUN_01b269d8(puVar2,param_2,0x20);
    puVar2 = puVar2 + 0x40;
  } while (iVar1 != 4);
  bVar3 = param_3 != 0;
  local_120 = 0;
  local_df = extraout_r2;
  if (bVar3) {
    local_df = 1;
  }
  local_e0 = !bVar3;
  if (!bVar3) {
    local_df = 0;
  }
  local_60 = 0x101;
  local_a0 = local_df;
  local_9f = local_e0;
  FUN_01b62268(param_1,param_1 + 0x200,param_1 + 0x400,param_1 + 0x600,auStack_140);
  FUN_01b6b174(auStack_140,0x100);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

