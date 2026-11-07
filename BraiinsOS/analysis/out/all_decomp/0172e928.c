// FUN_0172e928 @ 0172e928 size=240 calls_out=6 calls_in=2
// strings: 

void FUN_0172e928(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  
  local_1c = DAT_018ddaf8;
  uVar4 = FUN_0172e7d0(param_1,auStack_60,&local_ac,0x42,param_3);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  bVar3 = (int)uVar4 != 0;
  if (bVar3) {
    puVar1 = (undefined4 *)FUN_0172c608(param_1);
    FUN_016dd606(auStack_a8,0,0x48);
    FUN_01714f80(auStack_a8,puVar1[1] + 1,auStack_60,local_ac);
    FUN_0171ab40(param_2,auStack_a8,auStack_a8[puVar1[1]],*puVar1,puVar1[1]);
    uVar2 = extraout_r1;
  }
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar3,uVar2,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

