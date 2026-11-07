// FUN_00f0b314 @ 00f0b314 size=360 calls_out=4 calls_in=1
// strings: a UUID string | internal error: entered unreachable code

void FUN_00f0b314(char *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined1 auStack_b0 [128];
  undefined8 in_stack_ffffffd0;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar8 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    iVar6 = *piVar8;
    pcVar5 = ",";
    do {
      uVar7 = *(uint *)(iVar6 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar6,pcVar5,uVar3);
      if (uVar7 == 0x7fffffff) goto LAB_00f0b44c;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
  }
  iVar6 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(auStack_b0 + 0x80,iVar6,&DAT_0056a218,0x10);
  if ((char)in_stack_ffffffd0 == '\x04') {
    uVar4 = 1;
    iVar6 = *piVar8;
    pcVar5 = ":";
    while( true ) {
      uVar7 = *(uint *)(iVar6 + 4);
      uVar3 = uVar7 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar6,pcVar5,uVar3);
      if (uVar7 == 0x7fffffff) break;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
      if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00f0bdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&LAB_00f0bdf8 + *(int *)(&LAB_00f0bdf8 + *param_2 * 4)))();
        return;
      }
    }
LAB_00f0b44c:
    uVar1 = 2;
    puVar2 = &DAT_01d2e7b8;
  }
  else {
    uVar1 = (undefined4)in_stack_ffffffd0;
    puVar2 = (undefined4 *)((ulonglong)in_stack_ffffffd0 >> 0x20);
  }
  FUN_01966f50(uVar1,puVar2);
  return;
}

