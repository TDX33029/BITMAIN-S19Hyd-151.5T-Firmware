// FUN_0189620c @ 0189620c size=344 calls_out=7 calls_in=2
// strings: 

undefined4
FUN_0189620c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_1d8 [48];
  undefined1 auStack_1a8 [48];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [144];
  int local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  FUN_01890d78(&local_b8,param_2,param_6,param_7);
  if (local_b8 == 1) {
    uVar1 = 1;
  }
  else {
    FUN_01bed4e2(auStack_1d8,&local_b4,0x60);
    if (0x30 < *(uint *)(*param_5 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,*(uint *)(*param_5 + 0x10),0x30,&DAT_01d2136c);
    }
    uVar1 = *param_1;
    FUN_01896374(&local_b8,uVar1,param_5 + 1);
    if (local_b8 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,auStack_148,&DAT_01d2186c,&DAT_01d218cc);
    }
    local_178 = local_b4;
    uStack_174 = uStack_b0;
    uStack_170 = uStack_ac;
    uStack_16c = uStack_a8;
    uStack_168 = uStack_a4;
    uStack_164 = uStack_a0;
    local_160 = local_9c;
    uStack_15c = uStack_98;
    uStack_158 = uStack_94;
    uStack_154 = uStack_90;
    uStack_150 = uStack_8c;
    uStack_14c = uStack_88;
    FUN_01bed93e(&local_b8,0,0x90);
    (*(code *)param_1[3])(&local_b8,&local_178,auStack_1d8,auStack_1a8);
    FUN_01bed4e2(auStack_148,&local_b8,0x90);
    uVar1 = FUN_01896424(uVar1,param_1[1],param_3,param_4,0);
  }
  return uVar1;
}

