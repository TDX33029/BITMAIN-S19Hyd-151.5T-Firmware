// FUN_008ab36c @ 008ab36c size=408 calls_out=6 calls_in=0
// strings: 

void FUN_008ab36c(char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  undefined2 local_4c;
  char local_4a;
  char local_48;
  undefined2 local_47;
  char local_45;
  int local_44;
  double local_40;
  int local_38;
  undefined4 local_34;
  undefined2 local_2c;
  char local_2a;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x178)) {
  case 0:
    iVar1 = *(int *)(*(int *)(param_2 + 0x174) + 0x6c);
    *(undefined1 *)(param_2 + 0x16e) = 0;
    *(undefined1 *)(param_2 + 0x16c) = 0x37;
    *(undefined4 *)(param_2 + 0x160) = 0xb;
    *(int *)(param_2 + 0x168) = iVar1 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863884);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863884);
  }
  FUN_008ab938(&local_48,param_2);
  if (local_48 == '\x05') {
    *param_1 = '\x05';
    *(undefined1 *)(param_2 + 0x178) = 3;
    return;
  }
  local_2a = local_45;
  local_2c = local_47;
  if (*(char *)(param_2 + 0x16e) == '\x03') {
    FUN_008ab588(param_2);
  }
  if (local_48 == '\x04') {
    uVar2 = (uint)((ulonglong)local_40 >> 0x20);
    iVar1 = SUB84(local_40,0);
    if (uVar2 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(2,4,uVar2,&DAT_01863d5c);
    }
    if (uVar2 < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(4,6,uVar2,&DAT_01863d5c);
    }
    dVar3 = (double)VectorUnsignedToFloat
                              ((*(ushort *)(iVar1 + 2) & 0xff) << 8 |
                               (uint)(*(ushort *)(iVar1 + 2) >> 8),(byte)(in_fpscr >> 0x16) & 3);
    dVar4 = (double)VectorUnsignedToFloat
                              ((*(ushort *)(iVar1 + 4) & 0xff) << 8 |
                               (uint)(*(ushort *)(iVar1 + 4) >> 8),(byte)(in_fpscr >> 0x16) & 3);
    dVar4 = (dVar3 * 19.0) / dVar4;
    if (local_44 != 0) {
      thunk_FUN_016d3fb4(iVar1);
    }
  }
  else {
    local_4a = local_2a;
    local_4c = local_2c;
    iVar1 = local_38;
    dVar4 = local_40;
  }
  param_1[3] = local_4a;
  *(int *)(param_1 + 0x10) = iVar1;
  *param_1 = local_48;
  *(undefined2 *)(param_1 + 1) = local_4c;
  *(double *)(param_1 + 8) = dVar4;
  *(int *)(param_1 + 4) = local_44;
  *(undefined4 *)(param_1 + 0x14) = local_34;
  *(undefined1 *)(param_2 + 0x178) = 1;
  return;
}

