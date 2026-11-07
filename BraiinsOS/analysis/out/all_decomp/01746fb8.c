// FUN_01746fb8 @ 01746fb8 size=476 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_01746fb8(int param_1)

{
  code *pcVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [4];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  if (in_stack_00000008 == 0xc) {
    puVar2 = (undefined1 *)(in_stack_00000004 + 4);
    if ((puVar2 < auStack_28 && auStack_30 < puVar2) ||
       ((puVar2 < auStack_30 && (auStack_30 < (undefined1 *)(in_stack_00000004 + 0xcU))))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1747190);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(in_stack_00000004 + 4);
    uVar3 = *(uint *)(in_stack_00000004 + 8);
    uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            uVar4 >> 0x18;
    uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
            uVar3 >> 0x18;
    if (*(char *)(param_1 + 0x228) == '\0') {
      uVar3 = uVar3 ^ *(uint *)(param_1 + 0x220);
      uVar4 = uVar4 ^ *(uint *)(param_1 + 0x224);
      if (uVar4 != 0xffffffff || uVar3 != 0xffffffff) goto LAB_017470d8;
    }
    else {
      *(uint *)(param_1 + 0x220) = uVar3;
      uVar3 = 0;
      *(uint *)(param_1 + 0x224) = uVar4;
      uVar4 = 0;
      *(undefined1 *)(param_1 + 0x228) = 0;
LAB_017470d8:
      if (*(uint *)(param_1 + 0x21c) < uVar4 ||
          uVar4 - *(uint *)(param_1 + 0x21c) < (uint)(*(uint *)(param_1 + 0x218) <= uVar3)) {
        *(uint *)(param_1 + 0x218) = uVar3 + 1;
        *(uint *)(param_1 + 0x21c) = uVar4 + (0xfffffffe < uVar3);
        lVar5 = FUN_01746aa4();
        goto LAB_0174702c;
      }
    }
    in_stack_00000000 = 0x5ef;
    FUN_016e9cd0(0x1e,0,0x7d,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x5ef);
    uVar3 = extraout_r1_00;
  }
  else {
    in_stack_00000000 = 0x5dc;
    FUN_016e9cd0(0x1e,0,0x79,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x5dc);
    uVar3 = extraout_r1;
  }
  lVar5 = (ulonglong)uVar3 << 0x20;
LAB_0174702c:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),local_24 ^ DAT_018ddaf8,0,
                 in_stack_00000000);
  }
  return;
}

