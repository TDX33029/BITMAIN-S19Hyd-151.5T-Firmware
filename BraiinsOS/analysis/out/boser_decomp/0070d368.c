// FUN_0070d368 @ 0070d368 size=304 calls_out=5 calls_in=1
// strings: Invalid route: nested routes cannot contain wildcards (*) | assertion failed: path.starts_with('/')

undefined8 FUN_0070d368(int param_1,char *param_2,undefined4 param_3)

{
  short *psVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  if (*param_2 != '/') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: path.starts_with(\'/\')",0x27,&DAT_01c1d1bc);
  }
  local_24 = 1;
  local_30 = 1;
  local_2c = 0;
  local_34 = 0x2f;
  local_3c = 0;
  local_48._0_4_ = 0x2f;
  local_48._4_4_ = param_2;
  local_40 = param_3;
  local_38 = param_3;
  local_28 = param_3;
  do {
    do {
      uVar3 = FUN_01a5c3e4(&local_48);
      iVar2 = (int)(uVar3 >> 0x20);
      psVar1 = (short *)uVar3;
      if (psVar1 == (short *)0x0) {
        if ((param_1 != 0) && (local_48 = FUN_0070d2cc(param_2,param_3), (int)local_48 != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_48,&DAT_01c06f1c,&DAT_01c1d1bc);
        }
        return CONCAT44(param_3,param_2);
      }
    } while ((uVar3 < 0x200000000) || (*psVar1 != 0x2a7b));
  } while ((*(char *)((int)psVar1 + iVar2 + -1) != '}') ||
          (*(short *)((int)psVar1 + iVar2 + -2) == 0x7d7d));
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Invalid route: nested routes cannot contain wildcards (*)",0x73,&DAT_01c1d1bc);
}

