// FUN_017db950 @ 017db950 size=64 calls_out=1 calls_in=1
// strings: 

ulonglong FUN_017db950(int param_1,uint param_2)

{
  int local_14 [2];
  undefined2 local_c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  FUN_0140d434(local_14,*(undefined4 *)(param_1 + 0xc));
  return (ulonglong)CONCAT24(local_c,(uint)(local_14[0] != 0));
}

