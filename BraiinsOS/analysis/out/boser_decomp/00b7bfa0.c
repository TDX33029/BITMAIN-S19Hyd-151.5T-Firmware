// FUN_00b7bfa0 @ 00b7bfa0 size=140 calls_out=5 calls_in=0
// strings: 

char FUN_00b7bfa0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 uVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    iVar2 = FUN_00b91c3c(*(int *)(*param_1 + 8) + 8);
    puVar3 = &DAT_01c13e1c;
    param_1[1] = iVar2;
    param_1[2] = (int)&DAT_01c13e1c;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13680);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13680);
  case '\x03':
    iVar2 = param_1[1];
    puVar3 = (undefined *)param_1[2];
  }
  cVar1 = (**(code **)(puVar3 + 0xc))(iVar2,param_2);
  uVar4 = 3;
  if (cVar1 != '\x03') {
    uVar4 = 1;
    FUN_01139b38(param_1[1],param_1[2]);
  }
  *(undefined1 *)(param_1 + 3) = uVar4;
  return cVar1;
}

