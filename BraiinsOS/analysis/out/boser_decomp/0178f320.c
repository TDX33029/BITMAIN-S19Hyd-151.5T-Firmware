// FUN_0178f320 @ 0178f320 size=604 calls_out=7 calls_in=1
// strings: filled overflow | filled must not become larger than initialized

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0178f320(uint *param_1,int param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_34 [4];
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  
  bVar1 = *(byte *)(param_2 + 0x248);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  default:
    uVar5 = param_4[1];
    uVar2 = param_4[2];
    break;
  case 1:
  case 3:
    *(undefined1 *)param_1 = 4;
    return;
  }
  do {
    if ((bVar1 & 1) != 0) break;
    uVar3 = *(uint *)(param_2 + 0x44);
    bVar6 = uVar3 != 0;
    if (!bVar6) {
      uVar3 = (uint)*(byte *)(param_2 + 0xb2);
    }
    if ((bVar6 || (uVar3 & 1) != 0) ||
       ((*(char *)(param_2 + 0xae) == '\0' && (*(int *)(param_2 + 0x74) != 0)))) break;
    FUN_0177fd14(&local_2c,param_2 + 0x118,param_2,param_3);
    if ((local_2c & 0xff) != 4) {
      if ((local_2c & 0xff) != 5) {
        uVar5 = uVar2;
        uVar3 = local_2c;
        uVar4 = local_28;
        goto LAB_0178f528;
      }
      break;
    }
  } while (local_28 != 0);
  local_2c = param_2 + 0x30;
  uVar4 = param_4[3];
  local_28 = CONCAT31(CONCAT21(local_28._2_2_,*(undefined1 *)(param_2 + 0xb3)),
                      *(byte *)(param_2 + 0xb2) & *(int *)(param_2 + 0x104) == 0);
  if (uVar4 < uVar5) {
    FUN_01bed93e(*param_4 + uVar4,0,uVar5 - uVar4);
    param_4[3] = uVar5;
    uVar4 = uVar5;
  }
  if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,uVar5,uVar5,&DAT_01d1a400);
  }
  FUN_018bf638(local_34,&local_2c,*param_4 + uVar2,uVar5 - uVar2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_34[0]) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = local_30 + uVar2;
  if (CARRY4(local_30,uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("filled overflow",0xf,&DAT_01d1a750);
  }
  if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d1a750);
  }
  param_4[2] = uVar5;
  uVar3 = 4;
LAB_0178f528:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3 & 0xff) {
  case 0:
    uVar2 = FUN_016f6c0c(uVar4);
    uVar2 = uVar2 & 0xff;
    break;
  case 1:
    uVar2 = uVar3 >> 8;
    break;
  default:
    uVar2 = (uint)*(byte *)(uVar4 + 8);
    break;
  case 4:
    if ((uVar5 == uVar2) || ((bVar1 & 1) != 0)) {
      *(byte *)(param_2 + 0x248) = *(byte *)(param_2 + 0x248) | 1;
    }
    *(undefined1 *)param_1 = 4;
    return;
  case 5:
    goto switchD_0178f534_caseD_5;
  }
  if ((uVar2 & 0xff) == 6) {
    *(byte *)(param_2 + 0x248) = *(byte *)(param_2 + 0x248) | 1;
    *param_1 = uVar3;
    param_1[1] = uVar4;
  }
  else {
switchD_0178f534_caseD_5:
    *param_1 = uVar3;
    param_1[1] = uVar4;
  }
  return;
}

