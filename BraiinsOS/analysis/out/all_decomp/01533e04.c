// FUN_01533e04 @ 01533e04 size=184 calls_out=3 calls_in=4
// strings: 

void FUN_01533e04(uint *param_1,int param_2)

{
  uint local_20;
  uint local_1c;
  int local_18;
  
  local_20 = param_2 + 5;
  if ((int)local_20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_20);
  }
  if (local_20 == 0) {
    local_1c = 1;
    local_20 = 0;
  }
  else {
    local_1c = thunk_FUN_016d4a50(local_20);
    if (local_1c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_20);
    }
    local_18 = 0;
    if (4 < local_20) goto LAB_01533e8c;
  }
  local_18 = 0;
  FUN_0154e5f8(&local_20,0,5,1,1);
LAB_01533e8c:
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18 + 5;
  *(undefined4 *)(local_1c + local_18) = 0;
  *(undefined1 *)((undefined4 *)(local_1c + local_18) + 1) = 0;
  return;
}

