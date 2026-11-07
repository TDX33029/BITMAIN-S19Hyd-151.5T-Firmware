// FUN_018919a0 @ 018919a0 size=508 calls_out=7 calls_in=0
// strings: assertion failed: key.len() <= digest_alg.block_len() / 2 | assertion failed: rand.len() >= dest.len()

int FUN_018919a0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_220 [128];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  undefined4 local_150;
  int local_144;
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [220];
  
  puVar4 = (undefined4 *)*param_1;
  puVar5 = (undefined4 *)*puVar4;
  FUN_01bed93e(auStack_220,0,0x80);
  local_1a0 = *puVar5;
  uStack_19c = puVar5[1];
  uStack_198 = puVar5[2];
  uStack_194 = puVar5[3];
  uStack_190 = puVar5[4];
  local_18c = puVar5[5];
  uStack_188 = puVar5[6];
  uStack_184 = puVar5[7];
  uStack_180 = puVar5[8];
  uStack_17c = puVar5[9];
  local_178 = puVar5[10];
  uStack_174 = puVar5[0xb];
  uStack_170 = puVar5[0xc];
  uStack_16c = puVar5[0xd];
  uStack_168 = puVar5[0xe];
  uStack_164 = puVar5[0xf];
  local_160 = 0;
  local_150 = 0;
  uVar3 = puVar5[0x12];
  local_15c = 0;
  local_158 = puVar5;
  if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar3,0x40,&DAT_01d2571c);
  }
  FUN_018900dc(auStack_220,puVar4 + 1,uVar3);
  uVar2 = puVar5[0x14];
  if (uVar2 >> 1 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: key.len() <= digest_alg.block_len() / 2",0x39,&DAT_01d21674);
  }
  FUN_01bed93e(auStack_100,0,0x80);
  uVar2 = uVar2 - uVar3;
  if (0x80 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x80,&DAT_01d21684);
  }
  if (uVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: rand.len() >= dest.len()",0x2a,&DAT_01d21694);
  }
  iVar1 = (**(code **)(param_1[3] + 0x14))(param_1[2],auStack_100,uVar2);
  if (iVar1 == 0) {
    FUN_018900dc(auStack_220,auStack_100,uVar2);
    uVar3 = *(uint *)(*(int *)param_1[1] + 0x48);
    if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar3,0x40,&DAT_01d2571c);
    }
    FUN_018900dc(auStack_220,(int *)param_1[1] + 1);
    FUN_01bed4e2(auStack_100,auStack_220,0xd8);
    FUN_0189039c(&local_144,auStack_100);
    uVar3 = *(uint *)(local_144 + 0x48);
    if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar3,0x40,&DAT_01d2571c);
    }
    if (param_3 != uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_013070f0(param_3,uVar3,&DAT_01d216a4);
    }
    FUN_01bed4e2(param_2,auStack_140,param_3);
  }
  return iVar1;
}

