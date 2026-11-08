// FUN_019140c8 @ 019140c8 size=320 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_019140c8(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  undefined1 auStack_160 [96];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 auStack_90 [96];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar5 = param_1[0x31];
  FUN_01bed4e2(auStack_90,param_1 + 0x10,0x60);
  uVar3 = param_1[0x32];
  uVar1 = *(undefined1 *)(param_1 + 0x42);
  FUN_018eb5a8(&local_30,param_1 + 0x3f);
  uVar2 = *(undefined1 *)((int)param_1 + 0x109);
  local_dc = uVar5;
  FUN_01bed4e2(auStack_160,param_1 + 0x10,0x60);
  local_100 = param_1[0x28];
  uStack_fc = param_1[0x29];
  uStack_f8 = param_1[0x2a];
  uStack_f4 = param_1[0x2b];
  local_f0 = param_1[0x2c];
  uStack_ec = param_1[0x2d];
  uStack_e8 = param_1[0x2e];
  uStack_e4 = param_1[0x2f];
  uStack_e0 = param_1[0x30];
  local_d4 = param_1[0x33];
  uStack_d0 = param_1[0x34];
  uStack_cc = param_1[0x35];
  uStack_c8 = param_1[0x36];
  uStack_c4 = param_1[0x37];
  local_1a0 = *param_1;
  uStack_19c = param_1[1];
  uStack_198 = param_1[2];
  uStack_194 = param_1[3];
  uStack_190 = param_1[4];
  local_18c = param_1[5];
  uStack_188 = param_1[6];
  uStack_184 = param_1[7];
  uStack_180 = param_1[8];
  uStack_17c = param_1[9];
  local_178 = param_1[10];
  uStack_174 = param_1[0xb];
  uStack_170 = param_1[0xc];
  uStack_16c = param_1[0xd];
  uStack_168 = param_1[0xe];
  uStack_164 = param_1[0xf];
  local_c0 = param_1[0x38];
  uStack_bc = param_1[0x39];
  uStack_b8 = param_1[0x3a];
  local_b4 = param_1[0x3b];
  uStack_b0 = param_1[0x3c];
  uStack_ac = param_1[0x3d];
  uStack_a8 = param_1[0x3e];
  local_a4 = local_30;
  uStack_a0 = uStack_2c;
  uStack_9c = uStack_28;
  local_d8 = uVar3;
  local_98 = uVar1;
  local_97 = uVar2;
  iVar4 = thunk_FUN_01be5118(0x110);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x110);
  }
  FUN_01bed4e2(iVar4,&local_1a0,0x110);
  thunk_FUN_01be4678(param_1);
  return CONCAT44(&PTR_FUN_01d25264,iVar4);
}

