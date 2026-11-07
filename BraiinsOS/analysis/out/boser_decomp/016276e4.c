// FUN_016276e4 @ 016276e4 size=148 calls_out=1 calls_in=2
// strings: 

void FUN_016276e4(undefined4 *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_10;
  undefined2 local_c;
  
  if (param_3 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,2,param_3,&DAT_01d061c8);
  }
  if (param_3 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(2,8,param_3,&DAT_01d061c8);
  }
  uVar1 = *param_2;
  iVar2 = 0;
  local_c = 0;
  local_10 = 0;
  do {
    *(undefined1 *)((int)&local_10 + iVar2) = *(undefined1 *)((int)param_2 + iVar2 + 2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  *(undefined4 *)((int)param_1 + 6) = local_10;
  *(ushort *)(param_1 + 1) = uVar1 << 8 | uVar1 >> 8;
  *(undefined2 *)((int)param_1 + 10) = local_c;
  *param_1 = 0x80000000;
  return;
}

