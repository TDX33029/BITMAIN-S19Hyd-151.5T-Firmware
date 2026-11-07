// FUN_00093ee0 @ 00093ee0  size=336  callers=0
// program: bmminer


void FUN_00093ee0(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/thread.c",0x14,"a_thread is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/thread.c",0x1d,"--thread[%p][%p][%p][%p,%p,%p,%p,%p]--",param_1,
                 *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
    FUN_0008c264(*(undefined4 *)(param_1 + 4),param_2);
    FUN_0008b0d0(*(undefined4 *)(param_1 + 8),param_2);
    FUN_00096468(*(undefined4 *)(param_1 + 0xc),param_2);
    FUN_00096468(*(undefined4 *)(param_1 + 0x10),param_2);
    FUN_00096468(*(undefined4 *)(param_1 + 0x14),param_2);
    FUN_00096468(*(undefined4 *)(param_1 + 0x18),param_2);
    FUN_00096468(*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  return;
}

