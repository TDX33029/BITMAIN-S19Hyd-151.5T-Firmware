// FUN_00a65c48 @ 00a65c48 size=388 calls_out=8 calls_in=3
// strings: 

void FUN_00a65c48(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined1 uVar6;
  uint unaff_r8;
  int local_38;
  int iStack_34;
  uint *local_30;
  undefined4 local_2c;
  
  puVar5 = param_2 + 2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 7)) {
  case 0:
    param_2[1] = *param_2;
    FUN_01bed93e(puVar5,0,0x11);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29fe0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29fe0);
  }
  uVar3 = FUN_019ec670(param_3);
  if ((uVar3 & 0xff) == 2) {
    uVar3 = 0;
  }
  else {
    if ((uVar3 & 1) != 0) {
      uVar6 = 3;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_00a65db8;
    }
    unaff_r8 = (uVar3 & 0xffffff) >> 0x10;
    uVar3 = (uVar3 & 0xffffff) >> 8;
  }
  FUN_009cd274(&local_38,param_2[1],puVar5,param_3);
  if (local_38 == 3 && iStack_34 == 0) {
    puVar5 = (uint *)local_30[5];
    if (puVar5 == (uint *)0x0) {
      uVar4 = 0;
    }
    else {
      do {
        uVar3 = *puVar5;
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = uVar3 + 1;
      uVar4 = 2;
      if (0x7fffffff < uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xa65d34);
        (*pcVar1)();
      }
    }
    local_2c = FUN_009d50b4();
LAB_00a65d80:
    *param_1 = uVar4;
    param_1[1] = 0;
    bVar2 = false;
    uVar3 = 0;
    param_1[2] = puVar5;
    param_1[3] = local_2c;
  }
  else {
    if (local_38 != 0) {
      if (local_38 == 1) {
        uVar4 = 0;
        local_2c = 1;
      }
      else {
        uVar4 = 1;
        puVar5 = local_30;
      }
      goto LAB_00a65d80;
    }
    *param_1 = 3;
    param_1[1] = 0;
    bVar2 = true;
  }
  FUN_019edbc4(uVar3,unaff_r8);
  uVar6 = 3;
  if (!bVar2) {
    uVar6 = 1;
    FUN_009cdcac(param_2 + 1);
  }
LAB_00a65db8:
  *(undefined1 *)(param_2 + 7) = uVar6;
  return;
}

