// FUN_0072b090 @ 0072b090 size=476 calls_out=6 calls_in=1
// strings: 

void FUN_0072b090(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *local_1c;
  
  piVar7 = (int *)(param_1 + 8);
  iVar6 = *piVar7;
  pcVar5 = (char *)(iVar6 + 8);
  if (*pcVar5 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
    if (!bVar2) goto LAB_0072b23c;
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0072b23c:
    FUN_01280da8(pcVar5);
  }
  FUN_0128236c(pcVar5);
  if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_0072b1e8;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int **)(iVar6 + 0x14) != piVar7) goto LAB_0072b25c;
    iVar3 = *(int *)(param_1 + 0x10);
    *(int *)(iVar6 + 0x14) = iVar3;
    if (iVar3 == 0) goto LAB_0072b128;
LAB_0072b100:
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10);
    *(int *)(*(int *)(param_1 + 0xc) + 8) = iVar3;
    if (iVar3 != 0) goto LAB_0072b100;
LAB_0072b128:
    if (*(int **)(iVar6 + 0x18) != piVar7) {
LAB_0072b25c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018833c8);
    }
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  piVar4 = *(int **)(iVar6 + 0xc);
  local_1c = piVar7;
  if (piVar4 == piVar7) {
    FUN_010557ec((int *)(iVar6 + 0xc),&local_1c,&DAT_018ac72c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x72b268);
    (*pcVar1)();
  }
  iVar3 = *(int *)(iVar6 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int **)(param_1 + 0x10) = piVar4;
  if (piVar4 != (int *)0x0) {
    piVar4[1] = (int)piVar7;
  }
  *(int **)(iVar6 + 0xc) = piVar7;
  if (iVar3 == 0) {
    *(int **)(iVar6 + 0x10) = piVar7;
  }
  iVar3 = *(int *)(iVar6 + 0x1c);
  uVar8 = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(iVar6 + 0x1c) = 0;
  if (iVar3 != 0) {
    FUN_01282570(pcVar5);
    if (*pcVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar5);
        if (bVar2) {
          *pcVar5 = '\0';
          goto LAB_0072b1d4;
        }
      } while (*pcVar5 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar5);
LAB_0072b1d4:
                    /* WARNING: Could not recover jumptable at 0x0072b1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 4))(uVar8);
    return;
  }
LAB_0072b1e8:
  FUN_01282570(pcVar5);
  if (*pcVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar2) {
        *pcVar5 = '\0';
        return;
      }
    } while (*pcVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar5);
  return;
}

