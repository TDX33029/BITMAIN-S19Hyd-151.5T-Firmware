// FUN_0199ef60 @ 0199ef60 size=272 calls_out=3 calls_in=3
// strings: 

void FUN_0199ef60(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint local_30;
  undefined1 *local_2c;
  code *local_28;
  
  local_30 = param_3;
  if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d27c1c);
  }
  param_2 = param_2 - param_3;
  if (3 < param_2) {
    param_2 = 4;
  }
  FUN_012fbd94(&local_2c,param_1 + param_3,param_2);
  pcVar1 = (code *)local_2c;
  if (local_2c == (undefined1 *)0x1) {
    pcVar1 = local_28;
  }
  if (local_2c != (undefined1 *)0x1 || pcVar1 != (code *)0x0) {
    return;
  }
  uVar2 = param_3;
  if (3 < param_3) {
    uVar2 = 4;
  }
  if (1 < param_3) {
    uVar3 = 2;
    do {
      if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(param_3 - uVar3,param_3,param_3,&DAT_01d27c1c);
      }
      FUN_012fbd94(&local_2c,param_1 + (param_3 - uVar3),uVar3);
      if (local_2c == (undefined1 *)0x0) {
        return;
      }
    } while ((uVar3 < uVar2) && (uVar3 = uVar3 + (uVar3 < uVar2), uVar3 <= uVar2));
  }
  local_28 = FUN_012fd02c;
  local_2c = (undefined1 *)&local_30;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_00581264,&local_2c,&DAT_01d27c1c);
}

