// FUN_00741240 @ 00741240 size=280 calls_out=5 calls_in=2
// strings: 

void FUN_00741240(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  undefined4 *local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  undefined4 local_44;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 0:
    *(undefined1 *)(param_2 + 0xc) = 0;
    param_2[1] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c07ef8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c07ef8);
  }
  FUN_0073a0c4(&local_60,param_2 + 1,*param_3);
  if (local_60 == -0x7ffffffe) {
    *param_1 = -0x7ffffffe;
    uVar2 = 3;
  }
  else {
    local_38 = local_58;
    iStack_34 = iStack_54;
    iStack_30 = iStack_50;
    iStack_2c = iStack_4c;
    cVar1 = *(char *)(param_2 + 0xc);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_2 + 0xb);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_00b71be0(param_2 + 6);
    }
    if (local_60 == -0x7fffffff) {
      (**(code **)*local_5c)(local_5c);
    }
    else {
      if (local_48 != -0x80000000) {
        FUN_019bb7e0(local_48,local_44);
      }
      local_70 = local_38;
      iStack_6c = iStack_34;
      iStack_68 = iStack_30;
      iStack_64 = iStack_2c;
    }
    *param_1 = local_60;
    param_1[1] = (int)local_5c;
    param_1[2] = local_70;
    param_1[3] = iStack_6c;
    param_1[4] = iStack_68;
    param_1[5] = iStack_64;
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0xd) = uVar2;
  return;
}

