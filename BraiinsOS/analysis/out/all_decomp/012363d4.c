// FUN_012363d4 @ 012363d4 size=148 calls_out=0 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012363d4(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*param_3 != '\x03') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  piVar3 = (int *)*param_2;
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + 1;
  if (iVar2 < 0) {
    software_udf(0xfdee,0x1236440);
    return;
  }
  *param_1 = 0x80000000;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = piVar3;
  param_1[5] = uStack_14;
  param_1[6] = uStack_10;
  return;
}

