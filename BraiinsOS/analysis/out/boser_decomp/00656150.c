// FUN_00656150 @ 00656150 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_00656150(int param_1,uint param_2)

{
  byte bVar1;
  
  param_2 = param_2 & 0xff;
  if (*(uint *)(param_1 + 8) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,*(uint *)(param_1 + 8),&DAT_01c03768);
  }
  if (*(char *)(*(int *)(param_1 + 4) + param_2) == '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    bVar1 = (&DAT_004d0188)[param_2];
    *(undefined1 *)(*(int *)(param_1 + 4) + param_2) = 1;
    *(ushort *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + (ushort)bVar1;
    return;
  }
  return;
}

