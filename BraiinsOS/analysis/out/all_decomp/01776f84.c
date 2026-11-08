// FUN_01776f84 @ 01776f84 size=1280 calls_out=7 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/curve25519/curve25519.c | SigE | d255 | 19 n | o Ed | 2551

void FUN_01776f84(int param_1,undefined4 param_2,int param_3,uint *param_4,undefined4 param_5,
                 undefined1 *param_6,uint param_7)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  uint *extraout_r1;
  uint *extraout_r1_00;
  undefined1 uVar4;
  undefined8 uVar5;
  uint auStack_1b8 [2];
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint *puStack_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint *local_17c;
  uint local_178;
  uint local_174;
  uint auStack_170 [8];
  char local_150 [4];
  char acStack_14c [4];
  char acStack_148 [4];
  char acStack_144 [4];
  char local_140 [4];
  char acStack_13c [4];
  char acStack_138 [4];
  char acStack_134 [4];
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 auStack_12e [258];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_3 != 0x40 && param_1 == 2) {
    FUN_016e9cd0(0xe,0,0xe,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0x1e5);
    puVar3 = extraout_r1;
    goto LAB_01777218;
  }
  if ((&local_1b0 < param_4 && param_4 < &local_190) ||
     ((puVar3 = param_4 + 8, param_4 < &local_1b0 && (&local_1b0 < puVar3)))) goto LAB_01777260;
  local_1b0 = *param_4;
  uStack_1ac = param_4[1];
  uStack_1a8 = param_4[2];
  uStack_1a4 = param_4[3];
  uStack_194 = param_4[7];
  uStack_198 = param_4[6];
  local_1a0 = param_4[4];
  uStack_19c = param_4[5];
  if ((puVar3 < auStack_170 && &local_190 < puVar3) ||
     ((puVar3 < &local_190 && (&local_190 < param_4 + 0x10)))) goto LAB_01777260;
  local_190 = param_4[8];
  puStack_18c = (uint *)param_4[9];
  local_188 = param_4[10];
  local_184 = param_4[0xb];
  local_180 = param_4[0xc];
  local_17c = (uint *)param_4[0xd];
  local_178 = param_4[0xe];
  local_174 = param_4[0xf];
  puVar3 = local_17c;
  if (*(byte *)((int)param_4 + 0x3f) < 0x20) {
    if ((&local_178 < &local_1b0 && auStack_1b8 < &local_178) ||
       ((&local_178 < auStack_1b8 && (auStack_1b8 < auStack_170)))) goto LAB_01777260;
    puVar3 = &local_178;
    if (local_174 < 0x10000000 || 0x10000000 - local_174 < (uint)(local_178 == 0)) {
      if (local_174 != 0x10000000 || local_178 != 0) goto LAB_017772a0;
      if ((&local_180 < &local_1b0 && auStack_1b8 < &local_180) ||
         ((&local_180 < auStack_1b8 && (auStack_1b8 < &local_178)))) goto LAB_01777260;
      puVar3 = (uint *)(local_180 | (uint)local_17c);
      if ((uint *)(local_180 | (uint)local_17c) == (uint *)0x0) {
        if ((auStack_1b8 < &local_188 && &local_188 < &local_1b0) ||
           ((&local_188 < auStack_1b8 && (auStack_1b8 < &local_180)))) goto LAB_01777260;
        puVar3 = (uint *)0x14def9de;
        if (local_184 < 0x14def9df && (uint)(0xa2f79cd6 < local_188) <= local_184 + 0xeb210622) {
          if (local_184 == 0x14def9de && local_188 == 0xa2f79cd6) {
            if ((auStack_1b8 < &local_190 && &local_190 < &local_1b0) ||
               ((&local_190 < auStack_1b8 && (auStack_1b8 < &local_188)))) goto LAB_01777260;
            puVar3 = puStack_18c;
            if (((uint *)0x58126319 < puStack_18c &&
                 (uint)(local_190 < 0x5cf5d3ee) <= 0x5812631aU - (int)puStack_18c) ||
               (puStack_18c == (uint *)0x5812631a && local_190 == 0x5cf5d3ed)) goto LAB_01777218;
          }
LAB_017772a0:
          FUN_016dd606(local_150,0,0x121);
          if (param_1 == 1) {
            if (param_7 != 0) {
              uVar4 = 0;
              goto LAB_01777340;
            }
            goto LAB_01777458;
          }
          if (param_1 == 2) {
            uVar4 = 1;
LAB_01777340:
            if ((&UNK_0044c3f5 <= &local_130 &&
                 local_150 <= "\x01SigEd25519 no Ed25519 collisions\x02") ||
               (local_150 <= "s\x02" && "igEd25519 no Ed25519 collisions\x02" <= local_150)) {
LAB_01777260:
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0,0x1777260);
              (*pcVar1)();
            }
            local_150[0] = 'S';
            local_150[1] = 'i';
            local_150[2] = 'g';
            local_150[3] = 'E';
            acStack_14c[0] = 'd';
            acStack_14c[1] = '2';
            acStack_14c[2] = '5';
            acStack_14c[3] = '5';
            acStack_148[0] = '1';
            acStack_148[1] = '9';
            acStack_148[2] = ' ';
            acStack_148[3] = 'n';
            acStack_144[0] = 'o';
            acStack_144[1] = ' ';
            acStack_144[2] = 'E';
            acStack_144[3] = 'd';
            local_140[0] = '2';
            local_140[1] = '5';
            local_140[2] = '5';
            local_140[3] = '1';
            acStack_13c[0] = '9';
            acStack_13c[1] = ' ';
            acStack_13c[2] = 'c';
            acStack_13c[3] = 'o';
            acStack_138[0] = 'l';
            acStack_138[1] = 'l';
            acStack_138[2] = 'i';
            acStack_138[3] = 's';
            acStack_134[0] = 'i';
            acStack_134[1] = 'o';
            acStack_134[2] = 'n';
            acStack_134[3] = 's';
            local_12f = (undefined1)param_7;
            local_130 = uVar4;
            if (param_7 != 0) {
              if (param_6 == (undefined1 *)0x0) {
                FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0xdc);
              }
              else if (param_7 < 0x100) {
                if (((auStack_12e < param_6) && (param_6 < auStack_12e + param_7)) ||
                   ((param_6 < auStack_12e && (auStack_12e < param_6 + param_7))))
                goto LAB_01777260;
                FUN_016dd1aa(auStack_12e,param_6,param_7);
                goto LAB_01777428;
              }
LAB_01777458:
              FUN_016e9cd0(0xe,0,0xe,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0x20f);
              puVar3 = extraout_r1_00;
              goto LAB_01777218;
            }
LAB_01777428:
            param_7 = param_7 + 0x22;
          }
          else {
            if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2c24();
            }
            if (param_7 != 0) goto LAB_01777458;
          }
          uVar5 = FUN_01776698(auStack_170,param_5,&local_1b0,&local_190,param_2,param_3,local_150,
                               param_7);
          puVar3 = (uint *)((ulonglong)uVar5 >> 0x20);
          if ((int)uVar5 == 1) {
            uVar5 = FUN_0177b0d8(auStack_170,&local_1b0,0x20);
            puVar3 = (uint *)((ulonglong)uVar5 >> 0x20);
            bVar2 = (int)uVar5 == 0;
            goto LAB_0177721c;
          }
        }
      }
    }
  }
LAB_01777218:
  bVar2 = false;
LAB_0177721c:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar2,puVar3,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

