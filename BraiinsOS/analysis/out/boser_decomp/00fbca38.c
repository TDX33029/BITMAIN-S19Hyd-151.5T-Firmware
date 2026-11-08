// FUN_00fbca38 @ 00fbca38 size=268 calls_out=4 calls_in=3
// strings: 

void FUN_00fbca38(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  uint local_20;
  uint local_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 0:
    param_2[5] = *param_2;
    param_2[6] = param_2[1];
    param_2[7] = param_2[2];
    param_2[8] = param_2[3];
    param_2[9] = param_2[4];
    param_2[10] = *param_2;
    param_2[0xb] = param_2[7];
    param_2[0xc] = param_2[8];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f94c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f94c);
  }
  FUN_014b3814(&local_20,param_2 + 10);
  if ((char)local_20 == '\x05') {
    *(undefined1 *)param_1 = 5;
    uVar1 = 3;
  }
  else {
    if ((local_20 & 0xff) == 4) {
      FUN_018900dc(param_2[5] + 0x40,param_2[7],param_2[8]);
      lVar2 = (**(code **)(param_2[6] + 0x10))(param_2 + 9,param_2[7],param_2[8]);
    }
    else {
      (**(code **)(param_2[6] + 0x10))(param_2 + 9,param_2[7],param_2[8]);
      lVar2 = CONCAT44(local_1c >> 8,local_20 >> 8 | local_1c << 0x18);
    }
    uVar1 = 1;
    *param_1 = local_20 & 0xff | (uint)(lVar2 << 8);
    param_1[1] = (uint)((ulonglong)lVar2 >> 0x18);
  }
  *(undefined1 *)(param_2 + 0xd) = uVar1;
  return;
}

