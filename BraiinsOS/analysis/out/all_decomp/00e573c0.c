// FUN_00e573c0 @ 00e573c0 size=200 calls_out=3 calls_in=1
// strings: 

int FUN_00e573c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    iVar1 = ((int *)*param_1)[1];
    uVar6 = (**(code **)(iVar1 + 100))
                      (*(int *)*param_1 + (*(int *)(iVar1 + 8) - 1U & 0xfffffff8) + 8);
    *(undefined8 *)(param_1 + 1) = uVar6;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a9c4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a9c4);
  case '\x03':
    uVar6 = *(undefined8 *)(param_1 + 1);
  }
  iVar1 = (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0xc))((int)uVar6,param_2);
  uVar4 = 3;
  if (iVar1 == 0) {
    iVar3 = param_1[1];
    puVar5 = (undefined4 *)param_1[2];
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar3);
    }
    uVar4 = 1;
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  *(undefined1 *)(param_1 + 3) = uVar4;
  return iVar1;
}

