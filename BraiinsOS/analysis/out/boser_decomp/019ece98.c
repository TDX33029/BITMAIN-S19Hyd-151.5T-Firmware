// FUN_019ece98 @ 019ece98 size=384 calls_out=6 calls_in=23
// strings: 

void FUN_019ece98(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_r5;
  int unaff_r6;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = thunk_FUN_01bee35a(param_1,0x20);
  iVar5 = (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20);
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_019ecef0;
    FUN_019a2bcc(iVar5,&LAB_019efb68);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  piVar1 = (int *)(uint)*(byte *)(iVar5 + 0x32);
  bVar6 = piVar1 != (int *)0x2;
  if (bVar6) {
    piVar1 = *(int **)(iVar5 + 0x20);
  }
  if (!bVar6 || piVar1 == (int *)0x0) {
LAB_019ecef0:
                    /* WARNING: Could not recover jumptable at 0x019ecefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[2])(param_2);
    return;
  }
  if (*piVar1 == 1) {
    if (0x7ffffffe < (uint)piVar1[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d29770);
    }
    if (piVar1[3] == 0) goto LAB_019ecef0;
  }
  piVar2 = piVar1 + 4;
  if (*piVar2 != 0) {
    uVar3 = FUN_01306fc8(&DAT_01d29b08);
    (**(code **)(unaff_r6 + 0xc))(unaff_r5);
    *piVar2 = *piVar2 + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c(uVar3);
  }
  iVar5 = piVar1[6];
  bVar6 = piVar1[7] == 0;
  *piVar2 = -1;
  if (!bVar6) {
    iVar5 = iVar5 + piVar1[7] * 8;
    bVar6 = iVar5 == 8;
  }
  if (!bVar6) {
    puVar4 = *(undefined4 **)(iVar5 + -4);
    bVar6 = puVar4 == param_2;
    if (bVar6) {
      puVar4 = *(undefined4 **)(iVar5 + -8);
      iVar5 = 0;
    }
    if (bVar6 && puVar4 == param_1) goto LAB_019f9a38;
  }
  uVar7 = (*(code *)*param_1)(param_2);
  iVar5 = piVar1[7];
  if (iVar5 == piVar1[5]) {
    FUN_012671ec(piVar1 + 5);
  }
  *(undefined8 *)(piVar1[6] + iVar5 * 8) = uVar7;
  piVar1[7] = iVar5 + 1;
  iVar5 = *piVar2 + 1;
LAB_019f9a38:
  *piVar2 = iVar5;
  return;
}

