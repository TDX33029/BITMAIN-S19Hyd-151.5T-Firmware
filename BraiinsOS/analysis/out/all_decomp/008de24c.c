// FUN_008de24c @ 008de24c size=340 calls_out=4 calls_in=1
// strings: 

void FUN_008de24c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined1 *local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 0:
    if ((undefined1 *)param_2[2] != &DAT_3b9aca00) {
      FUN_01651a54(&local_50,&DAT_018651dc,*param_2,param_2[1],(undefined1 *)param_2[2],
                   &DAT_018651dc);
      goto LAB_008de36c;
    }
    puVar2 = param_2 + 4;
    FUN_01651a54(puVar2,&DAT_018651cc,0xffffffff,0,0,&DAT_018651cc);
    *(undefined1 *)(param_2 + 0xc) = 0;
    param_2[0xb] = puVar2;
    param_2[10] = puVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018651ec);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018651ec);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xc)) {
    case 0:
      puVar2 = (undefined4 *)param_2[10];
      param_2[0xb] = puVar2;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879154);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879154);
    case 3:
      puVar2 = (undefined4 *)param_2[0xb];
    }
  }
  FUN_016510c8(auStack_38,puVar2,param_3);
  uVar1 = 1;
  if (local_30 == &DAT_3b9aca00) {
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar1;
  if (local_30 == &DAT_3b9aca00) {
    param_1[2] = &DAT_3b9aca00;
    *(undefined1 *)(param_2 + 0xd) = 3;
    return;
  }
  local_50 = param_2[4];
  uStack_4c = param_2[5];
  uStack_48 = param_2[6];
  uStack_44 = param_2[7];
  uStack_40 = param_2[8];
  local_3c = param_2[9];
LAB_008de36c:
  local_3c = CONCAT31(local_3c._1_3_,2);
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = local_3c;
  *(undefined1 *)(param_2 + 0xd) = 1;
  return;
}

