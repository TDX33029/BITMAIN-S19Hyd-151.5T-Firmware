// FUN_017780a0 @ 017780a0 size=820 calls_out=9 calls_in=2
// strings: SigE | d255 | 19 n | o Ed | 2551 | 9 co

void FUN_017780a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined1 *param_6,uint param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar3;
  undefined4 extraout_r1_01;
  int iVar4;
  undefined1 uVar5;
  byte local_1d0 [31];
  byte local_1b1;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [64];
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
  if (param_4 == 0x40 || param_1 != 2) {
    FUN_01777c64(param_5,0x20,local_1d0);
    local_1b1 = local_1b1 & 0x3f | 0x40;
    local_1d0[0] = local_1d0[0] & 0xf8;
    FUN_016dd606(local_150,0,0x121);
    if (param_1 == 1) {
      if (param_7 != 0) {
        uVar5 = 0;
        goto LAB_01778240;
      }
      goto LAB_01778398;
    }
    if (param_1 == 2) {
      uVar5 = 1;
LAB_01778240:
      if ((&UNK_0044c3f5 <= &local_130 && local_150 <= "\x01SigEd25519 no Ed25519 collisions\x02")
         || (local_150 <= "s\x02" && "igEd25519 no Ed25519 collisions\x02" <= local_150)) {
LAB_017783cc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x17783cc);
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
      local_130 = uVar5;
      if (param_7 != 0) {
        if (param_6 == (undefined1 *)0x0) {
          FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0xdc);
        }
        else if (param_7 < 0x100) {
          if (((auStack_12e < param_6) && (param_6 < auStack_12e + param_7)) ||
             ((param_6 < auStack_12e && (auStack_12e < param_6 + param_7)))) goto LAB_017783cc;
          FUN_016dd1aa(auStack_12e,param_6,param_7);
          goto LAB_01778310;
        }
LAB_01778398:
        FUN_016e9cd0(0xe,0,0xe,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0x10c);
        FUN_0177aaa0(local_1d0,0x40);
        uVar3 = extraout_r1_01;
        goto LAB_01778370;
      }
LAB_01778310:
      iVar4 = param_7 + 0x22;
      FUN_01773c38(auStack_190,local_150,iVar4,auStack_1b0,0x20,param_3,param_4,0,0);
    }
    else {
      if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c24();
      }
      if (param_7 != 0) goto LAB_01778398;
      FUN_01773c38(auStack_190,auStack_1b0,0x20,param_3,param_4,0,0,0,0);
      iVar4 = 0;
    }
    FUN_01773d50(param_2,auStack_190,local_1d0,param_5 + 0x20,param_3,param_4,local_150,iVar4);
    FUN_0177aaa0(local_1d0,0x40);
    FUN_0177aaa0(auStack_190,0x40);
    uVar2 = 1;
    uVar3 = extraout_r1;
  }
  else {
    FUN_016e9cd0(0xe,0,0xe,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0xf3);
    uVar3 = extraout_r1_00;
LAB_01778370:
    uVar2 = 0;
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

