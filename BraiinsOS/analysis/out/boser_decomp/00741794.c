// FUN_00741794 @ 00741794 size=276 calls_out=6 calls_in=2
// strings: 

void FUN_00741794(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  int local_2c;
  int local_28;
  int local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 0:
    *(undefined1 *)(param_2 + 0xc) = 0;
    param_2[1] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c07ff8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c07ff8);
  }
  FUN_0073a0c4(&local_44,param_2 + 1,*param_3);
  if (local_44 == -0x7ffffffe) {
    *param_1 = -0x7fffffff;
    uVar2 = 3;
    goto LAB_00741888;
  }
  cVar1 = *(char *)(param_2 + 0xc);
  bVar3 = cVar1 == '\x03';
  if (bVar3) {
    cVar1 = *(char *)(param_2 + 0xb);
  }
  if (bVar3 && cVar1 == '\x03') {
    FUN_00b71be0(param_2 + 6);
  }
  if (local_44 == -0x80000000) {
LAB_0074185c:
    if (local_2c == -0x80000000) goto LAB_00741864;
    local_50 = local_2c;
    iStack_4c = local_28;
    local_48 = local_24;
  }
  else {
    if (local_44 != -0x7fffffff) {
      FUN_0134c054(local_44,local_40,1,4);
      goto LAB_0074185c;
    }
    (**(code **)*local_40)(local_40);
LAB_00741864:
    FUN_007a8074(&local_50);
  }
  uVar2 = 1;
  *param_1 = local_50;
  param_1[1] = iStack_4c;
  param_1[2] = local_48;
LAB_00741888:
  *(undefined1 *)(param_2 + 0xd) = uVar2;
  return;
}

