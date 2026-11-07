// FUN_017544e0 @ 017544e0 size=1076 calls_out=7 calls_in=2
// strings: aws_lc_0_39_0_Keccak1600_Absorb_once_x4 | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | r <= SHA3_MAX_BLOCKSIZE

undefined8
FUN_017544e0(int param_1,undefined1 *param_2,byte *param_3,byte *param_4,byte *param_5,
            undefined1 *param_6,undefined1 *param_7,int param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte local_2ec;
  undefined1 auStack_2d0 [7];
  undefined1 auStack_2c9 [160];
  byte abStack_229 [168];
  byte abStack_181 [168];
  byte abStack_d9 [173];
  int local_2c;
  int local_20;
  
  local_2ec = (byte)param_8;
  if ((undefined1 *)0xa8 < param_7) {
    local_20 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("r <= SHA3_MAX_BLOCKSIZE","/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0x1cd,
                 "aws_lc_0_39_0_Keccak1600_Absorb_once_x4");
  }
  local_2c = DAT_018ddaf8;
  uVar1 = (uint)auStack_2c9 >> 4;
  if (param_7 <= param_6) {
    puVar3 = param_2;
    do {
      puVar5 = puVar3 + (int)param_7;
      FUN_01703d30(param_1,puVar3,param_7);
      FUN_01703d30(param_1 + 200,param_3,param_7);
      FUN_01703d30(param_1 + 400,param_4,param_7);
      FUN_01703d30(param_1 + 600,param_5,param_7);
      FUN_01753e90(param_1);
      FUN_01753e90(param_1 + 200);
      FUN_01753e90(param_1 + 400);
      FUN_01753e90(param_1 + 600);
      param_3 = param_3 + (int)param_7;
      param_4 = param_4 + (int)param_7;
      param_5 = param_5 + (int)param_7;
      puVar3 = puVar5;
    } while (param_7 <= param_2 + ((int)param_6 - (int)puVar5));
    param_6 = param_2 + ((int)param_6 - (int)puVar5);
    param_2 = puVar5;
  }
  FUN_016dd606(auStack_2d0,0,0x2a0);
  if (param_6 == (undefined1 *)0x0) {
LAB_01754358:
    puVar3 = param_7 + -1;
    if (puVar3 == param_6) {
      local_2ec = ~((byte)~(byte)((uint)(param_8 << 0x19) >> 0x18) >> 1);
    }
    else {
      puVar3[uVar1 * 0x10] = puVar3[uVar1 * 0x10] | 0x80;
      abStack_229[(int)param_7] = abStack_229[(int)param_7] | 0x80;
      abStack_181[(int)param_7] = abStack_181[(int)param_7] | 0x80;
      abStack_d9[(int)param_7] = abStack_d9[(int)param_7] | 0x80;
    }
    param_6[uVar1 * 0x10] = local_2ec | param_6[uVar1 * 0x10];
    abStack_229[(int)(param_6 + 1)] = local_2ec | abStack_229[(int)(param_6 + 1)];
    abStack_181[(int)(param_6 + 1)] = local_2ec | abStack_181[(int)(param_6 + 1)];
    abStack_d9[(int)(param_6 + 1)] = local_2ec | abStack_d9[(int)(param_6 + 1)];
    FUN_01703d30(param_1,auStack_2d0,param_7);
    FUN_01703d30(param_1 + 200,abStack_229 + 1,param_7);
    FUN_01703d30(param_1 + 400,abStack_181 + 1,param_7);
    FUN_01703d30(param_1 + 600,abStack_d9 + 1,param_7);
    FUN_0177aaa0(auStack_2d0,0x2a0);
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
  if ((((param_2 <= auStack_2d0) || (auStack_2d0 + (int)param_6 <= param_2)) &&
      ((auStack_2d0 <= param_2 || (param_2 + (int)param_6 <= auStack_2d0)))) &&
     (param_6 < (undefined1 *)0x2a1)) {
    pbVar4 = abStack_229 + 1;
    FUN_016dd1aa(auStack_2d0,param_2,param_6);
    if (((param_3 <= pbVar4) || (pbVar4 + (int)param_6 <= param_3)) &&
       (((pbVar4 <= param_3 || (param_3 + (int)param_6 <= pbVar4)) &&
        (param_6 < (undefined1 *)0x1f9)))) {
      FUN_016dd1aa(pbVar4,param_3,param_6);
      pbVar4 = abStack_181 + 1;
      if ((((param_4 <= pbVar4) || (pbVar4 + (int)param_6 <= param_4)) &&
          ((pbVar4 <= param_4 || (param_4 + (int)param_6 <= pbVar4)))) &&
         (param_6 < (undefined1 *)0x151)) {
        FUN_016dd1aa(pbVar4,param_4,param_6);
        pbVar4 = abStack_d9 + 1;
        if (((param_5 <= pbVar4) || (pbVar4 + (int)param_6 <= param_5)) &&
           (((pbVar4 <= param_5 || (param_5 + (int)param_6 <= pbVar4)) &&
            (param_6 < (undefined1 *)0xa9)))) {
          FUN_016dd1aa(pbVar4,param_5,param_6);
          goto LAB_01754358;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x175447c);
  (*pcVar2)();
}

