// FUN_010893ec @ 010893ec size=256 calls_out=2 calls_in=1
// strings: 

void FUN_010893ec(int param_1,uint param_2,char *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 *puVar6;
  undefined4 unaff_r5;
  uint uVar7;
  bool bVar8;
  
  if (*param_3 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01883d40);
  }
  if ((param_3[1] & 1U) == 0) {
    return;
  }
  uVar5 = (uint)(byte)param_3[2];
  if (param_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,param_2,&DAT_01883d20);
  }
  piVar1 = (int *)(param_1 + uVar5 * 8);
  uVar7 = (uint)(byte)param_3[3];
  uVar5 = piVar1[1];
  if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar7,uVar5,&DAT_01883d20);
  }
  puVar2 = (undefined4 *)(*piVar1 + uVar7 * 0x18);
  pcVar3 = (char *)*puVar2;
  bVar8 = pcVar3 == &DAT_00000001;
  if (bVar8) {
    pcVar3 = (char *)puVar2[1];
  }
  if (bVar8 && pcVar3 == param_3) {
    unaff_r5 = *(undefined4 *)(pcVar3 + 0xc);
    unaff_r4 = 1;
  }
  puVar4 = *(undefined4 **)(param_3 + 0x10);
  if (bVar8 && pcVar3 == param_3) {
    *puVar2 = unaff_r4;
    puVar2[1] = unaff_r5;
  }
  puVar6 = *(undefined4 **)(param_3 + 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  puVar4[3] = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = puVar2;
  }
  puVar6[4] = *(undefined4 *)(param_3 + 0x10);
  puVar2[2] = puVar2[2] + -1;
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
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01883d30);
  }
  param_3[1] = '\0';
  return;
}

