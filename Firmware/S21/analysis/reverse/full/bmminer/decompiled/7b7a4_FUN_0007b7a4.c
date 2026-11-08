// FUN_0007b7a4 @ 0007b7a4  size=312  callers=2
// program: bmminer


void FUN_0007b7a4(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 0xffffffff) && (param_2 != 0xfffffffe)) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    if (param_2 == 10) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      iVar1 = FUN_0007e428(param_2 & 0xff);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      }
    }
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("stream->buffer_pos > 0","load.c",0xee,"stream_unget");
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (param_2 != *(byte *)(param_1 + *(int *)(param_1 + 0x10) + 8)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("stream->buffer[stream->buffer_pos] == c","load.c",0xf0,"stream_unget");
    }
  }
  return;
}

