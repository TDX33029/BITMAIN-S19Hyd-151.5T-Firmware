// FUN_00ebc228 @ 00ebc228 size=484 calls_out=4 calls_in=4
// strings: a UUID string | internal error: entered unreachable code

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_00ebc228(char *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar8 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar6 = 1;
    iVar5 = *piVar8;
    pcVar4 = ",";
    do {
      uVar7 = *(uint *)(iVar5 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_01284394(iVar5,pcVar4,uVar3);
      if (uVar7 == 0x7fffffff) goto LAB_00ebc3dc;
      pcVar4 = pcVar4 + uVar3;
      uVar6 = uVar6 - uVar3;
    } while (uVar6 != 0);
  }
  iVar5 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar5,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar5 = *piVar8;
    pcVar4 = ":";
    do {
      uVar7 = *(uint *)(iVar5 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_01284394(iVar5,pcVar4,uVar3);
      if (uVar7 == 0x7fffffff) goto LAB_00ebc3dc;
      pcVar4 = pcVar4 + uVar3;
      uVar6 = uVar6 - uVar3;
    } while (uVar6 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*param_4) {
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      uVar6 = 4;
      iVar5 = *piVar8;
      puVar2 = &DAT_0056d030;
    }
    while( true ) {
      uVar7 = *(uint *)(iVar5 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_01284394(iVar5,puVar2,uVar3);
      if (uVar7 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar3;
      uVar6 = uVar6 - uVar3;
      if (uVar6 == 0) {
        return 0;
      }
    }
LAB_00ebc3dc:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

