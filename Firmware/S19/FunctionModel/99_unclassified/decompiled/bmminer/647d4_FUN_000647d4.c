// FUN_000647d4 @ 000647d4  size=232  callers=0
// program: bmminer


void FUN_000647d4(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    FUN_000658a8(2,"src/thread.c",0x14,"a_thread is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/thread.c",0x1d,"--thread[%p][%p][%p][%p,%p,%p,%p,%p]--",param_1,
               *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c));
  FUN_0005f7e8(*(undefined4 *)(param_1 + 4),param_2);
  FUN_0005ebb0(*(undefined4 *)(param_1 + 8),param_2);
  FUN_00065fb4(*(undefined4 *)(param_1 + 0xc),param_2);
  FUN_00065fb4(*(undefined4 *)(param_1 + 0x10),param_2);
  FUN_00065fb4(*(undefined4 *)(param_1 + 0x14),param_2);
  FUN_00065fb4(*(undefined4 *)(param_1 + 0x18),param_2);
  FUN_00065fb4(*(undefined4 *)(param_1 + 0x1c),param_2);
  return;
}

