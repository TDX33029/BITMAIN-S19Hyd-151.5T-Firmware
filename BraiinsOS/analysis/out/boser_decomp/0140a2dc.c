// FUN_0140a2dc @ 0140a2dc size=272 calls_out=2 calls_in=3
// strings: internal error: entered unreachable code | internal error: entered unreachable code

void FUN_0140a2dc(int param_1,uint param_2,char *param_3)

{
  uint3 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  
  if (*param_3 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3bd4);
  }
  uVar1 = *(uint3 *)(param_3 + 1);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar9 = (uVar1 & 0xffff) >> 8;
  if (param_2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,param_2,&DAT_01cf3bc4);
  }
  piVar2 = (int *)(param_1 + uVar9 * 8);
  uVar9 = (uint)(uVar1 >> 0x10);
  uVar4 = piVar2[1];
  if (uVar4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,uVar4,&DAT_01cf3bc4);
  }
  puVar3 = (undefined4 *)(*piVar2 + uVar9 * 0x18);
  pcVar5 = (char *)*puVar3;
  bVar10 = pcVar5 == &DAT_00000001;
  if (bVar10) {
    pcVar5 = (char *)puVar3[1];
  }
  if (bVar10 && pcVar5 == param_3) {
    uVar6 = *(undefined4 *)(pcVar5 + 0xc);
    *puVar3 = 1;
    puVar3[1] = uVar6;
  }
  puVar8 = *(undefined4 **)(param_3 + 0xc);
  puVar7 = *(undefined4 **)(param_3 + 0x10);
  if (*(undefined4 **)(param_3 + 0x10) == (undefined4 *)0x0) {
    puVar7 = puVar3;
  }
  puVar7[3] = puVar8;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = puVar3;
  }
  puVar8[4] = *(undefined4 *)(param_3 + 0x10);
  puVar3[2] = puVar3[2] + -1;
  param_3[0xc] = '\0';
  param_3[0xd] = '\0';
  param_3[0xe] = '\0';
  param_3[0xf] = '\0';
  param_3[0x10] = '\0';
  param_3[0x11] = '\0';
  param_3[0x12] = '\0';
  param_3[0x13] = '\0';
  if (*param_3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3ba4);
  }
  param_3[1] = '\0';
  return;
}

