// FUN_01b3e9a0 @ 01b3e9a0 size=248 calls_out=6 calls_in=2
// strings: 

void FUN_01b3e9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 local_ac;
  undefined4 auStack_a8 [18];
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  uVar4 = FUN_01b3e854(param_1,auStack_60,&local_ac,0x42,param_3);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  bVar3 = (int)uVar4 != 0;
  if (bVar3) {
    puVar1 = (undefined4 *)FUN_01b3d100(param_1);
    FUN_01bed93e(auStack_a8,0,0x48);
    FUN_01b2b99c(auStack_a8,puVar1[1] + 1,auStack_60,local_ac);
    FUN_01b30a00(param_2,auStack_a8,auStack_a8[puVar1[1]],*puVar1,puVar1[1]);
    uVar2 = extraout_r1;
  }
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar3,uVar2,local_1c ^ DAT_01d53560,0);
  }
  return;
}

