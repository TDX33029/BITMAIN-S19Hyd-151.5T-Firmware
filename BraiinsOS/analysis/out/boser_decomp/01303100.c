// FUN_01303100 @ 01303100 size=100 calls_out=1 calls_in=4
// strings: attempted to finish a map with a partial entry

void FUN_01303100(int *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((char)param_1[1] == '\0') {
    if (*(char *)((int)param_1 + 6) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("attempted to finish a map with a partial entry",0x5d,&DAT_01ce4610);
    }
    uVar1 = (**(code **)(((undefined4 *)*param_1)[1] + 0xc))(*(undefined4 *)*param_1,"}",1);
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

