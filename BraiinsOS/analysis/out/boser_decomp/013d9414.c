// FUN_013d9414 @ 013d9414 size=56 calls_out=1 calls_in=2
// strings: 

ulonglong FUN_013d9414(short *param_1)

{
  ushort uVar1;
  
  if (*param_1 == 1) {
    return *(ulonglong *)(param_1 + 4);
  }
  uVar1 = param_1[1];
  if (0x18 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x18,&DAT_01cf2da0);
  }
  return (ulonglong)CONCAT24(uVar1,param_1 + 2);
}

