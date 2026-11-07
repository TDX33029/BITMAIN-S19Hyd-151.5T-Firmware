// FUN_006e15a4 @ 006e15a4 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_006e15a4(int param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  code *pcStack_c;
  
  puStack_10 = (undefined1 *)&local_20;
  local_20 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    uStack_1c = *(undefined4 *)(param_1 + 0x28);
    puStack_18 = &uStack_1c;
    pcStack_c = FUN_012fd02c;
    pcStack_14 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005b9bf5,&puStack_18,&DAT_01c05e1c);
  }
  return;
}

