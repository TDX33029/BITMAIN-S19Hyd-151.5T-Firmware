// FUN_007b0660 @ 007b0660 size=308 calls_out=3 calls_in=2
// strings: ZipWriter was already closed | Unsupported compression level | Unsupported compression level | AES encryption is enabled through FileOptions::with_aes_encryption | Unsupported compression | AES encryption is enabled through FileOptions::with_aes_encryption

void FUN_007b0660(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,short param_5,
                 short param_6,uint param_7,int param_8,int param_9,int param_10)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_3 == 2 && param_4 == 0) {
    FUN_019a18a8(param_1 + 1,0xb,"ZipWriter was already closed",0x1c);
    *param_1 = 0x80000001;
    return;
  }
  if (param_5 == 0) {
    if (param_7 == 0 && param_8 == 0) {
      param_1[1] = 1;
      *param_1 = 0x80000007;
      param_1[2] = &DAT_01c09d24;
      return;
    }
  }
  else {
    if (param_5 != 1) {
      *param_1 = 0x80000003;
      if (param_6 == 99) {
        uVar3 = 0x42;
        pcVar1 = "AES encryption is enabled through FileOptions::with_aes_encryption";
      }
      else {
        uVar3 = 0x17;
        pcVar1 = "Unsupported compression";
      }
      param_1[1] = pcVar1;
      param_1[2] = uVar3;
      return;
    }
    if ((param_7 & 1) == 0) {
      param_9 = 6;
      param_10 = 0;
    }
    if ((param_10 == 0) && (param_9 - 1U < 9)) {
      pcVar1 = (char *)thunk_FUN_01be5118(4);
      if ((int *)pcVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,4);
      }
      uVar3 = 0x80000007;
      *(int *)pcVar1 = param_9;
      puVar2 = &DAT_01c09d34;
      goto LAB_007b071c;
    }
  }
  puVar2 = (undefined *)0x1d;
  uVar3 = 0x80000003;
  pcVar1 = "Unsupported compression level";
LAB_007b071c:
  *param_1 = uVar3;
  param_1[1] = pcVar1;
  param_1[2] = puVar2;
  return;
}

